// Protocol Buffers - Google's data interchange format
// Copyright 2023 Google Inc.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd
//
#include "google/protobuf/port.h"

#include <cstdio>
#include <cstdlib>
#include <map>
#include <utility>

#include "absl/strings/str_format.h"
#include "absl/strings/str_split.h"
#include <string_view>

// Must be included last
#include "google/protobuf/port_def.inc"

namespace google {
namespace protobuf {
namespace internal {

// protobuf_assumption_failed() is declared and used in port_def.inc to assert
// PROTOBUF_ASSUME conditions in debug mode. This function avoids having
// port_def.inc depend on assert.h or other headers, minimizing the compilation
// footprint.
void protobuf_assumption_failed(const char* pred, const char* file, int line) {
  fprintf(stderr, "%s: %d: Assumption failed: '%s'\n", file, line, pred);
  abort();
}

static void PrintAllCounters();
static auto& CounterMap() {
  using Map = std::map<std::string_view,
                       std::map<std::string_view, const RealDebugCounter*>>;
  static auto* counter_map = new Map{};
  static bool dummy = std::atexit(PrintAllCounters);
  (void)dummy;
  return *counter_map;
}

static void PrintAllCounters() {
  auto& counters = CounterMap();
  if (counters.empty()) return;
  absl::FPrintF(stderr, "Protobuf debug counters:\n");
  for (auto& category : counters) {
    // Example output:
    //
    //   Category  :
    //     Value 1 : 1234 (12.34%)
    //     Value 2 : 2345 (23.45%)
    //     Total   : 3579
    absl::FPrintF(stderr, "  %-12s:\n", category.first);
    size_t total = 0;
    for (auto& count : category.second) {
      total += count.second->value();
    }
    for (auto& count : category.second) {
      size_t value = count.second->value();
      absl::FPrintF(stderr, "    %-10s: %10zu", count.first, value);
      if (total != 0 && category.second.size() > 1) {
        absl::FPrintF(
            stderr, " (%5.2f%%)",
            100. * static_cast<double>(value) / static_cast<double>(total));
      }
      absl::FPrintF(stderr, "\n");
    }
    if (total != 0 && category.second.size() > 1) {
      absl::FPrintF(stderr, "    %-10s: %10zu\n", "Total", total);
    }
  }
}

void RealDebugCounter::Register(std::string_view name) {
  std::pair<std::string_view, std::string_view> parts =
      absl::StrSplit(name, '.');
  CounterMap()[parts.first][parts.second] = this;
}

}  // namespace internal
}  // namespace protobuf
}  // namespace google

#include "google/protobuf/port_undef.inc"
