/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/descriptor.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "google/protobuf/descriptor.upb.h"


static const upb_msglayout *const google_protobuf_FileDescriptorSet_submsgs[1] = {
  &google_protobuf_FileDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_FileDescriptorSet__fields[1] = {
  {1, offsetof(google_protobuf_FileDescriptorSet, file), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_FileDescriptorSet_msginit = {
  &google_protobuf_FileDescriptorSet_submsgs[0],
  &google_protobuf_FileDescriptorSet__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_FileDescriptorSet), 1, 0, false, true
};

static const upb_msglayout *const google_protobuf_FileDescriptorProto_submsgs[6] = {
  &google_protobuf_DescriptorProto_msginit,
  &google_protobuf_EnumDescriptorProto_msginit,
  &google_protobuf_FieldDescriptorProto_msginit,
  &google_protobuf_FileOptions_msginit,
  &google_protobuf_ServiceDescriptorProto_msginit,
  &google_protobuf_SourceCodeInfo_msginit,
};

static const upb_msglayout_field google_protobuf_FileDescriptorProto__fields[12] = {
  {1, offsetof(google_protobuf_FileDescriptorProto, name), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_FileDescriptorProto, package), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {3, offsetof(google_protobuf_FileDescriptorProto, dependency), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 3},
  {4, offsetof(google_protobuf_FileDescriptorProto, message_type), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
  {5, offsetof(google_protobuf_FileDescriptorProto, enum_type), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 1, 11, 3},
  {6, offsetof(google_protobuf_FileDescriptorProto, service), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 4, 11, 3},
  {7, offsetof(google_protobuf_FileDescriptorProto, extension), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 2, 11, 3},
  {8, offsetof(google_protobuf_FileDescriptorProto, options), 3, UPB_NOT_IN_ONEOF, 3, 11, 1},
  {9, offsetof(google_protobuf_FileDescriptorProto, source_code_info), 4, UPB_NOT_IN_ONEOF, 5, 11, 1},
  {10, offsetof(google_protobuf_FileDescriptorProto, public_dependency), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 3},
  {11, offsetof(google_protobuf_FileDescriptorProto, weak_dependency), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 3},
  {12, offsetof(google_protobuf_FileDescriptorProto, syntax), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
};

const upb_msglayout google_protobuf_FileDescriptorProto_msginit = {
  &google_protobuf_FileDescriptorProto_submsgs[0],
  &google_protobuf_FileDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_FileDescriptorProto), 12, 0, false, true
};

static const upb_msglayout *const google_protobuf_DescriptorProto_submsgs[8] = {
  &google_protobuf_DescriptorProto_msginit,
  &google_protobuf_DescriptorProto_ExtensionRange_msginit,
  &google_protobuf_DescriptorProto_ReservedRange_msginit,
  &google_protobuf_EnumDescriptorProto_msginit,
  &google_protobuf_FieldDescriptorProto_msginit,
  &google_protobuf_MessageOptions_msginit,
  &google_protobuf_OneofDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_DescriptorProto__fields[10] = {
  {1, offsetof(google_protobuf_DescriptorProto, name), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_DescriptorProto, field), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 4, 11, 3},
  {3, offsetof(google_protobuf_DescriptorProto, nested_type), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
  {4, offsetof(google_protobuf_DescriptorProto, enum_type), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 3, 11, 3},
  {5, offsetof(google_protobuf_DescriptorProto, extension_range), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 1, 11, 3},
  {6, offsetof(google_protobuf_DescriptorProto, extension), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 4, 11, 3},
  {7, offsetof(google_protobuf_DescriptorProto, options), 1, UPB_NOT_IN_ONEOF, 5, 11, 1},
  {8, offsetof(google_protobuf_DescriptorProto, oneof_decl), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 6, 11, 3},
  {9, offsetof(google_protobuf_DescriptorProto, reserved_range), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 2, 11, 3},
  {10, offsetof(google_protobuf_DescriptorProto, reserved_name), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 3},
};

const upb_msglayout google_protobuf_DescriptorProto_msginit = {
  &google_protobuf_DescriptorProto_submsgs[0],
  &google_protobuf_DescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_DescriptorProto), 10, 0, false, true
};

static const upb_msglayout *const google_protobuf_DescriptorProto_ExtensionRange_submsgs[1] = {
  &google_protobuf_ExtensionRangeOptions_msginit,
};

static const upb_msglayout_field google_protobuf_DescriptorProto_ExtensionRange__fields[3] = {
  {1, offsetof(google_protobuf_DescriptorProto_ExtensionRange, start), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {2, offsetof(google_protobuf_DescriptorProto_ExtensionRange, end), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {3, offsetof(google_protobuf_DescriptorProto_ExtensionRange, options), 2, UPB_NOT_IN_ONEOF, 0, 11, 1},
};

const upb_msglayout google_protobuf_DescriptorProto_ExtensionRange_msginit = {
  &google_protobuf_DescriptorProto_ExtensionRange_submsgs[0],
  &google_protobuf_DescriptorProto_ExtensionRange__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_DescriptorProto_ExtensionRange), 3, 0, false, true
};

static const upb_msglayout_field google_protobuf_DescriptorProto_ReservedRange__fields[2] = {
  {1, offsetof(google_protobuf_DescriptorProto_ReservedRange, start), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {2, offsetof(google_protobuf_DescriptorProto_ReservedRange, end), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
};

const upb_msglayout google_protobuf_DescriptorProto_ReservedRange_msginit = {
  NULL,
  &google_protobuf_DescriptorProto_ReservedRange__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_DescriptorProto_ReservedRange), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_ExtensionRangeOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_ExtensionRangeOptions__fields[1] = {
  {999, offsetof(google_protobuf_ExtensionRangeOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_ExtensionRangeOptions_msginit = {
  &google_protobuf_ExtensionRangeOptions_submsgs[0],
  &google_protobuf_ExtensionRangeOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_ExtensionRangeOptions), 1, 0, false, true
};

static const upb_msglayout *const google_protobuf_FieldDescriptorProto_submsgs[1] = {
  &google_protobuf_FieldOptions_msginit,
};

static const upb_msglayout_field google_protobuf_FieldDescriptorProto__fields[10] = {
  {1, offsetof(google_protobuf_FieldDescriptorProto, name), 4, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_FieldDescriptorProto, extendee), 5, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {3, offsetof(google_protobuf_FieldDescriptorProto, number), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {4, offsetof(google_protobuf_FieldDescriptorProto, label), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {5, offsetof(google_protobuf_FieldDescriptorProto, type), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {6, offsetof(google_protobuf_FieldDescriptorProto, type_name), 6, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {7, offsetof(google_protobuf_FieldDescriptorProto, default_value), 7, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {8, offsetof(google_protobuf_FieldDescriptorProto, options), 9, UPB_NOT_IN_ONEOF, 0, 11, 1},
  {9, offsetof(google_protobuf_FieldDescriptorProto, oneof_index), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {10, offsetof(google_protobuf_FieldDescriptorProto, json_name), 8, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
};

const upb_msglayout google_protobuf_FieldDescriptorProto_msginit = {
  &google_protobuf_FieldDescriptorProto_submsgs[0],
  &google_protobuf_FieldDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_FieldDescriptorProto), 10, 0, false, true
};

static const upb_msglayout *const google_protobuf_OneofDescriptorProto_submsgs[1] = {
  &google_protobuf_OneofOptions_msginit,
};

static const upb_msglayout_field google_protobuf_OneofDescriptorProto__fields[2] = {
  {1, offsetof(google_protobuf_OneofDescriptorProto, name), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_OneofDescriptorProto, options), 1, UPB_NOT_IN_ONEOF, 0, 11, 1},
};

const upb_msglayout google_protobuf_OneofDescriptorProto_msginit = {
  &google_protobuf_OneofDescriptorProto_submsgs[0],
  &google_protobuf_OneofDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_OneofDescriptorProto), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_EnumDescriptorProto_submsgs[3] = {
  &google_protobuf_EnumDescriptorProto_EnumReservedRange_msginit,
  &google_protobuf_EnumOptions_msginit,
  &google_protobuf_EnumValueDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_EnumDescriptorProto__fields[5] = {
  {1, offsetof(google_protobuf_EnumDescriptorProto, name), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_EnumDescriptorProto, value), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 2, 11, 3},
  {3, offsetof(google_protobuf_EnumDescriptorProto, options), 1, UPB_NOT_IN_ONEOF, 1, 11, 1},
  {4, offsetof(google_protobuf_EnumDescriptorProto, reserved_range), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
  {5, offsetof(google_protobuf_EnumDescriptorProto, reserved_name), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 3},
};

const upb_msglayout google_protobuf_EnumDescriptorProto_msginit = {
  &google_protobuf_EnumDescriptorProto_submsgs[0],
  &google_protobuf_EnumDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_EnumDescriptorProto), 5, 0, false, true
};

static const upb_msglayout_field google_protobuf_EnumDescriptorProto_EnumReservedRange__fields[2] = {
  {1, offsetof(google_protobuf_EnumDescriptorProto_EnumReservedRange, start), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {2, offsetof(google_protobuf_EnumDescriptorProto_EnumReservedRange, end), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
};

const upb_msglayout google_protobuf_EnumDescriptorProto_EnumReservedRange_msginit = {
  NULL,
  &google_protobuf_EnumDescriptorProto_EnumReservedRange__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_EnumDescriptorProto_EnumReservedRange), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_EnumValueDescriptorProto_submsgs[1] = {
  &google_protobuf_EnumValueOptions_msginit,
};

static const upb_msglayout_field google_protobuf_EnumValueDescriptorProto__fields[3] = {
  {1, offsetof(google_protobuf_EnumValueDescriptorProto, name), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_EnumValueDescriptorProto, number), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {3, offsetof(google_protobuf_EnumValueDescriptorProto, options), 2, UPB_NOT_IN_ONEOF, 0, 11, 1},
};

const upb_msglayout google_protobuf_EnumValueDescriptorProto_msginit = {
  &google_protobuf_EnumValueDescriptorProto_submsgs[0],
  &google_protobuf_EnumValueDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_EnumValueDescriptorProto), 3, 0, false, true
};

static const upb_msglayout *const google_protobuf_ServiceDescriptorProto_submsgs[2] = {
  &google_protobuf_MethodDescriptorProto_msginit,
  &google_protobuf_ServiceOptions_msginit,
};

static const upb_msglayout_field google_protobuf_ServiceDescriptorProto__fields[3] = {
  {1, offsetof(google_protobuf_ServiceDescriptorProto, name), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_ServiceDescriptorProto, method), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
  {3, offsetof(google_protobuf_ServiceDescriptorProto, options), 1, UPB_NOT_IN_ONEOF, 1, 11, 1},
};

const upb_msglayout google_protobuf_ServiceDescriptorProto_msginit = {
  &google_protobuf_ServiceDescriptorProto_submsgs[0],
  &google_protobuf_ServiceDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_ServiceDescriptorProto), 3, 0, false, true
};

static const upb_msglayout *const google_protobuf_MethodDescriptorProto_submsgs[1] = {
  &google_protobuf_MethodOptions_msginit,
};

static const upb_msglayout_field google_protobuf_MethodDescriptorProto__fields[6] = {
  {1, offsetof(google_protobuf_MethodDescriptorProto, name), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {2, offsetof(google_protobuf_MethodDescriptorProto, input_type), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {3, offsetof(google_protobuf_MethodDescriptorProto, output_type), 4, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {4, offsetof(google_protobuf_MethodDescriptorProto, options), 5, UPB_NOT_IN_ONEOF, 0, 11, 1},
  {5, offsetof(google_protobuf_MethodDescriptorProto, client_streaming), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {6, offsetof(google_protobuf_MethodDescriptorProto, server_streaming), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
};

const upb_msglayout google_protobuf_MethodDescriptorProto_msginit = {
  &google_protobuf_MethodDescriptorProto_submsgs[0],
  &google_protobuf_MethodDescriptorProto__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_MethodDescriptorProto), 6, 0, false, true
};

static const upb_msglayout *const google_protobuf_FileOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_FileOptions__fields[19] = {
  {1, offsetof(google_protobuf_FileOptions, java_package), 10, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {8, offsetof(google_protobuf_FileOptions, java_outer_classname), 11, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {9, offsetof(google_protobuf_FileOptions, optimize_for), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {10, offsetof(google_protobuf_FileOptions, java_multiple_files), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {11, offsetof(google_protobuf_FileOptions, go_package), 12, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {16, offsetof(google_protobuf_FileOptions, cc_generic_services), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {17, offsetof(google_protobuf_FileOptions, java_generic_services), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {18, offsetof(google_protobuf_FileOptions, py_generic_services), 4, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {20, offsetof(google_protobuf_FileOptions, java_generate_equals_and_hash), 5, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {23, offsetof(google_protobuf_FileOptions, deprecated), 6, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {27, offsetof(google_protobuf_FileOptions, java_string_check_utf8), 7, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {31, offsetof(google_protobuf_FileOptions, cc_enable_arenas), 8, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {36, offsetof(google_protobuf_FileOptions, objc_class_prefix), 13, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {37, offsetof(google_protobuf_FileOptions, csharp_namespace), 14, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {39, offsetof(google_protobuf_FileOptions, swift_prefix), 15, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {40, offsetof(google_protobuf_FileOptions, php_class_prefix), 16, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {41, offsetof(google_protobuf_FileOptions, php_namespace), 17, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {42, offsetof(google_protobuf_FileOptions, php_generic_services), 9, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_FileOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_FileOptions_msginit = {
  &google_protobuf_FileOptions_submsgs[0],
  &google_protobuf_FileOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_FileOptions), 19, 0, false, true
};

static const upb_msglayout *const google_protobuf_MessageOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_MessageOptions__fields[5] = {
  {1, offsetof(google_protobuf_MessageOptions, message_set_wire_format), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {2, offsetof(google_protobuf_MessageOptions, no_standard_descriptor_accessor), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {3, offsetof(google_protobuf_MessageOptions, deprecated), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {7, offsetof(google_protobuf_MessageOptions, map_entry), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_MessageOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_MessageOptions_msginit = {
  &google_protobuf_MessageOptions_submsgs[0],
  &google_protobuf_MessageOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_MessageOptions), 5, 0, false, true
};

static const upb_msglayout *const google_protobuf_FieldOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_FieldOptions__fields[7] = {
  {1, offsetof(google_protobuf_FieldOptions, ctype), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {2, offsetof(google_protobuf_FieldOptions, packed), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {3, offsetof(google_protobuf_FieldOptions, deprecated), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {5, offsetof(google_protobuf_FieldOptions, lazy), 4, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {6, offsetof(google_protobuf_FieldOptions, jstype), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {10, offsetof(google_protobuf_FieldOptions, weak), 5, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_FieldOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_FieldOptions_msginit = {
  &google_protobuf_FieldOptions_submsgs[0],
  &google_protobuf_FieldOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_FieldOptions), 7, 0, false, true
};

static const upb_msglayout *const google_protobuf_OneofOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_OneofOptions__fields[1] = {
  {999, offsetof(google_protobuf_OneofOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_OneofOptions_msginit = {
  &google_protobuf_OneofOptions_submsgs[0],
  &google_protobuf_OneofOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_OneofOptions), 1, 0, false, true
};

static const upb_msglayout *const google_protobuf_EnumOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_EnumOptions__fields[3] = {
  {2, offsetof(google_protobuf_EnumOptions, allow_alias), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {3, offsetof(google_protobuf_EnumOptions, deprecated), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_EnumOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_EnumOptions_msginit = {
  &google_protobuf_EnumOptions_submsgs[0],
  &google_protobuf_EnumOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_EnumOptions), 3, 0, false, true
};

static const upb_msglayout *const google_protobuf_EnumValueOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_EnumValueOptions__fields[2] = {
  {1, offsetof(google_protobuf_EnumValueOptions, deprecated), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_EnumValueOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_EnumValueOptions_msginit = {
  &google_protobuf_EnumValueOptions_submsgs[0],
  &google_protobuf_EnumValueOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_EnumValueOptions), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_ServiceOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_ServiceOptions__fields[2] = {
  {33, offsetof(google_protobuf_ServiceOptions, deprecated), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {999, offsetof(google_protobuf_ServiceOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_ServiceOptions_msginit = {
  &google_protobuf_ServiceOptions_submsgs[0],
  &google_protobuf_ServiceOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_ServiceOptions), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_MethodOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_MethodOptions__fields[3] = {
  {33, offsetof(google_protobuf_MethodOptions, deprecated), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 1},
  {34, offsetof(google_protobuf_MethodOptions, idempotency_level), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 14, 1},
  {999, offsetof(google_protobuf_MethodOptions, uninterpreted_option), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_MethodOptions_msginit = {
  &google_protobuf_MethodOptions_submsgs[0],
  &google_protobuf_MethodOptions__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_MethodOptions), 3, 0, false, true
};

static const upb_msglayout *const google_protobuf_UninterpretedOption_submsgs[1] = {
  &google_protobuf_UninterpretedOption_NamePart_msginit,
};

static const upb_msglayout_field google_protobuf_UninterpretedOption__fields[7] = {
  {2, offsetof(google_protobuf_UninterpretedOption, name), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
  {3, offsetof(google_protobuf_UninterpretedOption, identifier_value), 3, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {4, offsetof(google_protobuf_UninterpretedOption, positive_int_value), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 4, 1},
  {5, offsetof(google_protobuf_UninterpretedOption, negative_int_value), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 3, 1},
  {6, offsetof(google_protobuf_UninterpretedOption, double_value), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 1, 1},
  {7, offsetof(google_protobuf_UninterpretedOption, string_value), 4, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 12, 1},
  {8, offsetof(google_protobuf_UninterpretedOption, aggregate_value), 5, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
};

const upb_msglayout google_protobuf_UninterpretedOption_msginit = {
  &google_protobuf_UninterpretedOption_submsgs[0],
  &google_protobuf_UninterpretedOption__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_UninterpretedOption), 7, 0, false, true
};

static const upb_msglayout_field google_protobuf_UninterpretedOption_NamePart__fields[2] = {
  {1, offsetof(google_protobuf_UninterpretedOption_NamePart, name_part), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 2},
  {2, offsetof(google_protobuf_UninterpretedOption_NamePart, is_extension), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 8, 2},
};

const upb_msglayout google_protobuf_UninterpretedOption_NamePart_msginit = {
  NULL,
  &google_protobuf_UninterpretedOption_NamePart__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_UninterpretedOption_NamePart), 2, 0, false, true
};

static const upb_msglayout *const google_protobuf_SourceCodeInfo_submsgs[1] = {
  &google_protobuf_SourceCodeInfo_Location_msginit,
};

static const upb_msglayout_field google_protobuf_SourceCodeInfo__fields[1] = {
  {1, offsetof(google_protobuf_SourceCodeInfo, location), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_SourceCodeInfo_msginit = {
  &google_protobuf_SourceCodeInfo_submsgs[0],
  &google_protobuf_SourceCodeInfo__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_SourceCodeInfo), 1, 0, false, true
};

static const upb_msglayout_field google_protobuf_SourceCodeInfo_Location__fields[5] = {
  {1, offsetof(google_protobuf_SourceCodeInfo_Location, path), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 3},
  {2, offsetof(google_protobuf_SourceCodeInfo_Location, span), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 3},
  {3, offsetof(google_protobuf_SourceCodeInfo_Location, leading_comments), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {4, offsetof(google_protobuf_SourceCodeInfo_Location, trailing_comments), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {6, offsetof(google_protobuf_SourceCodeInfo_Location, leading_detached_comments), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 3},
};

const upb_msglayout google_protobuf_SourceCodeInfo_Location_msginit = {
  NULL,
  &google_protobuf_SourceCodeInfo_Location__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_SourceCodeInfo_Location), 5, 0, false, true
};

static const upb_msglayout *const google_protobuf_GeneratedCodeInfo_submsgs[1] = {
  &google_protobuf_GeneratedCodeInfo_Annotation_msginit,
};

static const upb_msglayout_field google_protobuf_GeneratedCodeInfo__fields[1] = {
  {1, offsetof(google_protobuf_GeneratedCodeInfo, annotation), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, 0, 11, 3},
};

const upb_msglayout google_protobuf_GeneratedCodeInfo_msginit = {
  &google_protobuf_GeneratedCodeInfo_submsgs[0],
  &google_protobuf_GeneratedCodeInfo__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_GeneratedCodeInfo), 1, 0, false, true
};

static const upb_msglayout_field google_protobuf_GeneratedCodeInfo_Annotation__fields[4] = {
  {1, offsetof(google_protobuf_GeneratedCodeInfo_Annotation, path), UPB_NO_HASBIT, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 3},
  {2, offsetof(google_protobuf_GeneratedCodeInfo_Annotation, source_file), 2, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 9, 1},
  {3, offsetof(google_protobuf_GeneratedCodeInfo_Annotation, begin), 0, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
  {4, offsetof(google_protobuf_GeneratedCodeInfo_Annotation, end), 1, UPB_NOT_IN_ONEOF, UPB_NO_SUBMSG, 5, 1},
};

const upb_msglayout google_protobuf_GeneratedCodeInfo_Annotation_msginit = {
  NULL,
  &google_protobuf_GeneratedCodeInfo_Annotation__fields[0],
  NULL,
  NULL, /* TODO. default_msg */
  UPB_ALIGNED_SIZEOF(google_protobuf_GeneratedCodeInfo_Annotation), 4, 0, false, true
};

