/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_atomic_double,
  OCLT_atomic_float,
  OCLT_atomic_int,
  OCLT_atomic_intptr_t,
  OCLT_atomic_long,
  OCLT_atomic_ptrdiff_t,
  OCLT_atomic_size_t,
  OCLT_atomic_uint,
  OCLT_atomic_uintptr_t,
  OCLT_atomic_ulong,
  OCLT_bool,
  OCLT_char,
  OCLT_clk_event_t,
  OCLT_double,
  OCLT_event_t,
  OCLT_float,
  OCLT_half,
  OCLT_image1d_t,
  OCLT_image1d_array_t,
  OCLT_image1d_buffer_t,
  OCLT_image2d_t,
  OCLT_image2d_array_t,
  OCLT_image2d_array_depth_t,
  OCLT_image2d_array_msaa_t,
  OCLT_image2d_array_msaa_depth_t,
  OCLT_image2d_depth_t,
  OCLT_image2d_msaa_t,
  OCLT_image2d_msaa_depth_t,
  OCLT_image3d_t,
  OCLT_int,
  OCLT_intptr_t,
  OCLT_long,
  OCLT_ptrdiff_t,
  OCLT_queue_t,
  OCLT_reserve_id_t,
  OCLT_sampler_t,
  OCLT_short,
  OCLT_size_t,
  OCLT_uchar,
  OCLT_uint,
  OCLT_uintptr_t,
  OCLT_ulong,
  OCLT_ushort,
  OCLT_void,
  OCLT_AGenTypeN,
  OCLT_AGenTypeNNoScalar,
  OCLT_AI2UGenTypeN,
  OCLT_AIGenType1,
  OCLT_AIGenTypeN,
  OCLT_AIGenTypeNNoScalar,
  OCLT_FGenTypeN,
  OCLT_GenTypeCharVecAndScalar,
  OCLT_GenTypeCharVecNoScalar,
  OCLT_GenTypeDoubleVec1234,
  OCLT_GenTypeDoubleVecAndScalar,
  OCLT_GenTypeDoubleVecNoScalar,
  OCLT_GenTypeFloatVec1234,
  OCLT_GenTypeFloatVecAndScalar,
  OCLT_GenTypeFloatVecNoScalar,
  OCLT_GenTypeHalfVec1234,
  OCLT_GenTypeHalfVecAndScalar,
  OCLT_GenTypeHalfVecNoScalar,
  OCLT_GenTypeIntVecAndScalar,
  OCLT_GenTypeIntVecNoScalar,
  OCLT_GenTypeLongVecAndScalar,
  OCLT_GenTypeLongVecNoScalar,
  OCLT_GenTypeShortVecAndScalar,
  OCLT_GenTypeShortVecNoScalar,
  OCLT_GenTypeUCharVecAndScalar,
  OCLT_GenTypeUCharVecNoScalar,
  OCLT_GenTypeUIntVecAndScalar,
  OCLT_GenTypeUIntVecNoScalar,
  OCLT_GenTypeULongVecAndScalar,
  OCLT_GenTypeULongVecNoScalar,
  OCLT_GenTypeUShortVecAndScalar,
  OCLT_GenTypeUShortVecNoScalar,
  OCLT_IntLongFloatGenType1,
  OCLT_SGenTypeN,
  OCLT_UGenTypeN,
  OCLT_TLAllVec2,
  OCLT_TLAllUnsignedVec2,
  OCLT_TLAllVec4,
  OCLT_TLAllVec8,
  OCLT_TLAllVec16,
  OCLT_TLAllUnsignedVec4,
  OCLT_TLAllUnsignedVec8,
  OCLT_TLAllUnsignedVec16,
};

// Image access qualifier.
enum OpenCLAccessQual : unsigned char {
  OCLAQ_None,
  OCLAQ_ReadOnly,
  OCLAQ_WriteOnly,
  OCLAQ_ReadWrite
};

// Represents a return type or argument type.
struct OpenCLTypeStruct {
  // A type (e.g. float, int, ...).
  const OpenCLTypeID ID;
  // Vector size (if applicable; 0 for scalars and generic types).
  const unsigned VectorWidth;
  // 0 if the type is not a pointer.
  const bool IsPointer : 1;
  // 0 if the type is not const.
  const bool IsConst : 1;
  // 0 if the type is not volatile.
  const bool IsVolatile : 1;
  // Access qualifier.
  const OpenCLAccessQual AccessQualifier;
  // Address space of the pointer (if applicable).
  const LangAS AS;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinStruct {
  // Index of the signature in the OpenCLTypeStruct table.
  const unsigned SigTableIndex;
  // Entries between index SigTableIndex and (SigTableIndex + NumTypes - 1) in
  // the SignatureTable represent the complete signature.  The first type at
  // index SigTableIndex is the return type.
  const unsigned NumTypes;
  // Function attribute __attribute__((pure))
  const bool IsPure : 1;
  // Function attribute __attribute__((const))
  const bool IsConst : 1;
  // Function attribute __attribute__((convergent))
  const bool IsConv : 1;
  // OpenCL extension(s) required for this overload.
  const unsigned short Extension;
  // First OpenCL version in which this overload was introduced (e.g. CL20).
  const unsigned short MinVersion;
  // First OpenCL version in which this overload was removed (e.g. CL20).
  const unsigned short MaxVersion;
};

static const char *FunctionExtensionTable[] = {
  // 0: ArmIntegerDotProductAccumulateInt16
  "cl_arm_integer_dot_product_accumulate_int16",
  // 1: ArmIntegerDotProductAccumulateInt8
  "cl_arm_integer_dot_product_accumulate_int8",
  // 2: ArmIntegerDotProductAccumulateSaturateInt8
  "cl_arm_integer_dot_product_accumulate_saturate_int8",
  // 3: ArmIntegerDotProductInt8
  "cl_arm_integer_dot_product_int8",
  // 4: FuncExtKhrGlMsaaSharing
  "cl_khr_gl_msaa_sharing",
  // 5: FuncExtKhrGlobalInt32BaseAtomics
  "cl_khr_global_int32_base_atomics",
  // 6: FuncExtKhrGlobalInt32ExtendedAtomics
  "cl_khr_global_int32_extended_atomics",
  // 7: FuncExtKhrInt64BaseAtomics
  "cl_khr_int64_base_atomics",
  // 8: FuncExtKhrInt64ExtendedAtomics
  "cl_khr_int64_extended_atomics",
  // 9: FuncExtKhrLocalInt32BaseAtomics
  "cl_khr_local_int32_base_atomics",
  // 10: FuncExtKhrLocalInt32ExtendedAtomics
  "cl_khr_local_int32_extended_atomics",
  // 11: FuncExtKhrMipmapImage
  "cl_khr_mipmap_image",
  // 12: FuncExtKhrMipmapImageWrites
  "cl_khr_mipmap_image_writes",
  // 13: FuncExtKhrMipmapWritesAndWrite3d
  "cl_khr_mipmap_image_writes cl_khr_3d_image_writes",
  // 14: FuncExtKhrSubgroups
  "cl_khr_subgroups",
  // 15: FuncExtNone
  "",
};

static const OpenCLTypeStruct TypeTable[] = {
  // 0
  {OCLT_AGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 1
  {OCLT_AGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 2
  {OCLT_AI2UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 3
  {OCLT_AIGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 4
  {OCLT_AIGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 5
  {OCLT_AIGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 6
  {OCLT_atomic_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 7
  {OCLT_atomic_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 8
  {OCLT_atomic_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 9
  {OCLT_atomic_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 10
  {OCLT_atomic_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 11
  {OCLT_atomic_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 12
  {OCLT_atomic_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 13
  {OCLT_atomic_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 14
  {OCLT_atomic_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 15
  {OCLT_atomic_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 16
  {OCLT_bool, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 17
  {OCLT_char, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 18
  {OCLT_clk_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 19
  {OCLT_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 20
  {OCLT_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 21
  {OCLT_FGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 22
  {OCLT_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 23
  {OCLT_GenTypeCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 24
  {OCLT_GenTypeCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 25
  {OCLT_GenTypeDoubleVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 26
  {OCLT_GenTypeDoubleVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 27
  {OCLT_GenTypeDoubleVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 28
  {OCLT_GenTypeFloatVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 29
  {OCLT_GenTypeFloatVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 30
  {OCLT_GenTypeFloatVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 31
  {OCLT_GenTypeHalfVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 32
  {OCLT_GenTypeHalfVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 33
  {OCLT_GenTypeHalfVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 34
  {OCLT_GenTypeIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 35
  {OCLT_GenTypeIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 36
  {OCLT_GenTypeLongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 37
  {OCLT_GenTypeLongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 38
  {OCLT_GenTypeShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 39
  {OCLT_GenTypeShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 40
  {OCLT_GenTypeUCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 41
  {OCLT_GenTypeUCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 42
  {OCLT_GenTypeUIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 43
  {OCLT_GenTypeUIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 44
  {OCLT_GenTypeULongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 45
  {OCLT_GenTypeULongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 46
  {OCLT_GenTypeUShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 47
  {OCLT_GenTypeUShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 48
  {OCLT_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 49
  {OCLT_image1d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 50
  {OCLT_image1d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 51
  {OCLT_image1d_buffer_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 52
  {OCLT_image2d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 53
  {OCLT_image2d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 54
  {OCLT_image2d_array_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 55
  {OCLT_image2d_array_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 56
  {OCLT_image2d_array_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 57
  {OCLT_image2d_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 58
  {OCLT_image2d_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 59
  {OCLT_image2d_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 60
  {OCLT_image3d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 61
  {OCLT_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 62
  {OCLT_IntLongFloatGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 63
  {OCLT_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 64
  {OCLT_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 65
  {OCLT_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 66
  {OCLT_queue_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 67
  {OCLT_reserve_id_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 68
  {OCLT_SGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 69
  {OCLT_sampler_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 70
  {OCLT_short, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 71
  {OCLT_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 72
  {OCLT_uchar, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 73
  {OCLT_UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 74
  {OCLT_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 75
  {OCLT_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 76
  {OCLT_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 77
  {OCLT_ushort, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 78
  {OCLT_void, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 79
  {OCLT_double, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 80
  {OCLT_half, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 81
  {OCLT_half, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 82
  {OCLT_half, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 83
  {OCLT_half, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 84
  {OCLT_half, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 85
  {OCLT_char, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 86
  {OCLT_char, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 87
  {OCLT_char, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 88
  {OCLT_char, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 89
  {OCLT_char, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 90
  {OCLT_uchar, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 91
  {OCLT_uchar, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 92
  {OCLT_uchar, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 93
  {OCLT_uchar, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 94
  {OCLT_uchar, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 95
  {OCLT_short, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 96
  {OCLT_short, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 97
  {OCLT_short, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 98
  {OCLT_short, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 99
  {OCLT_short, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 100
  {OCLT_ushort, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 101
  {OCLT_ushort, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 102
  {OCLT_ushort, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 103
  {OCLT_ushort, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 104
  {OCLT_ushort, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 105
  {OCLT_int, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 106
  {OCLT_int, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 107
  {OCLT_int, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 108
  {OCLT_int, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 109
  {OCLT_int, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 110
  {OCLT_uint, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 111
  {OCLT_uint, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 112
  {OCLT_uint, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 113
  {OCLT_uint, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 114
  {OCLT_uint, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 115
  {OCLT_long, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 116
  {OCLT_long, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 117
  {OCLT_long, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 118
  {OCLT_long, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 119
  {OCLT_long, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 120
  {OCLT_ulong, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 121
  {OCLT_ulong, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 122
  {OCLT_ulong, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 123
  {OCLT_ulong, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 124
  {OCLT_ulong, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 125
  {OCLT_float, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 126
  {OCLT_float, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 127
  {OCLT_float, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 128
  {OCLT_float, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 129
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 130
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 131
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 132
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 133
  {OCLT_float, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 134
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 135
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 136
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 137
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 138
  {OCLT_char, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 139
  {OCLT_uchar, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 140
  {OCLT_short, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 141
  {OCLT_ushort, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 142
  {OCLT_int, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 143
  {OCLT_uint, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 144
  {OCLT_long, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 145
  {OCLT_ulong, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 146
  {OCLT_float, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 147
  {OCLT_double, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 148
  {OCLT_half, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 149
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 150
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 151
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 152
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 153
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 154
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 155
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 156
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 157
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 158
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 159
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 160
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 161
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 162
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 163
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 164
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 165
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 166
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 167
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 168
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 169
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 170
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 171
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 172
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 173
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 174
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 175
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 176
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 177
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 178
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 179
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 180
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 181
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 182
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 183
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 184
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 185
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 186
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 187
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 188
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 189
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 190
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 191
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 192
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 193
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 194
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 195
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 196
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 197
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 198
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 199
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 200
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 201
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 202
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 203
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 204
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 205
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 206
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 207
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 208
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 209
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 210
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 211
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 212
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 213
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 214
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 215
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 216
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 217
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 218
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 219
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 220
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 221
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 222
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 223
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 224
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 225
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 226
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 227
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 228
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 229
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 230
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 231
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 232
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 233
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 234
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 235
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 236
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 237
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 238
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 239
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 240
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 241
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 242
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 243
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 244
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 245
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 246
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 247
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 248
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 249
  {OCLT_AGenTypeN, 0, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 250
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 251
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 252
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 253
  {OCLT_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 254
  {OCLT_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 255
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 256
  {OCLT_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 257
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 258
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 259
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 260
  {OCLT_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 261
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 262
  {OCLT_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 263
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 264
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 265
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 266
  {OCLT_atomic_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 267
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 268
  {OCLT_atomic_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 269
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 270
  {OCLT_atomic_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 271
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 272
  {OCLT_atomic_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 273
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 274
  {OCLT_atomic_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 275
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 276
  {OCLT_atomic_double, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 277
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 278
  {OCLT_atomic_intptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 279
  {OCLT_atomic_intptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 280
  {OCLT_atomic_uintptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 281
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 282
  {OCLT_TLAllVec2, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 283
  {OCLT_TLAllUnsignedVec2, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 284
  {OCLT_TLAllVec4, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 285
  {OCLT_TLAllVec8, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 286
  {OCLT_TLAllVec16, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 287
  {OCLT_TLAllUnsignedVec4, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 288
  {OCLT_TLAllUnsignedVec8, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 289
  {OCLT_TLAllUnsignedVec16, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 290
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 291
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 292
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 293
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 294
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 295
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 296
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 297
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 298
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 299
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 300
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 301
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 302
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 303
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 304
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 305
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 306
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 307
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 308
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 309
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 310
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 311
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 312
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 313
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 314
  {OCLT_clk_event_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 315
  {OCLT_clk_event_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 316
  {OCLT_clk_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 317
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 318
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 319
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 320
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 321
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 322
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 323
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 324
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 325
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 326
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 327
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 328
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 329
  {OCLT_double, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 330
  {OCLT_double, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 331
  {OCLT_double, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 332
  {OCLT_double, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
};

static const unsigned short SignatureTable[] = {
  // 0
  80, 105, 
  // 2
  81, 106, 
  // 4
  82, 107, 
  // 6
  83, 108, 
  // 8
  84, 109, 
  // 10
  48, 61, 
  // 12
  133, 79, 
  // 14
  48, 74, 
  // 16
  80, 110, 
  // 18
  81, 111, 
  // 20
  82, 112, 
  // 22
  83, 113, 
  // 24
  84, 114, 
  // 26
  22, 19, 
  // 28
  125, 329, 
  // 30
  126, 330, 
  // 32
  48, 64, 
  // 34
  80, 115, 
  // 36
  81, 116, 
  // 38
  82, 117, 
  // 40
  83, 118, 
  // 42
  84, 119, 
  // 44
  127, 331, 
  // 46
  128, 332, 
  // 48
  48, 76, 
  // 50
  80, 120, 
  // 52
  81, 121, 
  // 54
  82, 122, 
  // 56
  83, 123, 
  // 58
  84, 124, 
  // 60
  17, 22, 
  // 62
  85, 125, 
  // 64
  86, 126, 
  // 66
  87, 127, 
  // 68
  88, 128, 
  // 70
  89, 133, 
  // 72
  17, 19, 
  // 74
  85, 329, 
  // 76
  86, 330, 
  // 78
  87, 331, 
  // 80
  88, 332, 
  // 82
  89, 79, 
  // 84
  17, 48, 
  // 86
  85, 80, 
  // 88
  86, 81, 
  // 90
  87, 82, 
  // 92
  88, 83, 
  // 94
  89, 84, 
  // 96
  22, 48, 
  // 98
  125, 80, 
  // 100
  17, 17, 
  // 102
  85, 85, 
  // 104
  86, 86, 
  // 106
  87, 87, 
  // 108
  88, 88, 
  // 110
  89, 89, 
  // 112
  126, 81, 
  // 114
  127, 82, 
  // 116
  128, 83, 
  // 118
  17, 72, 
  // 120
  85, 90, 
  // 122
  86, 91, 
  // 124
  87, 92, 
  // 126
  88, 93, 
  // 128
  89, 94, 
  // 130
  133, 84, 
  // 132
  17, 70, 
  // 134
  85, 95, 
  // 136
  86, 96, 
  // 138
  87, 97, 
  // 140
  88, 98, 
  // 142
  89, 99, 
  // 144
  17, 77, 
  // 146
  85, 100, 
  // 148
  86, 101, 
  // 150
  87, 102, 
  // 152
  88, 103, 
  // 154
  89, 104, 
  // 156
  17, 61, 
  // 158
  85, 105, 
  // 160
  86, 106, 
  // 162
  87, 107, 
  // 164
  88, 108, 
  // 166
  89, 109, 
  // 168
  17, 74, 
  // 170
  85, 110, 
  // 172
  86, 111, 
  // 174
  87, 112, 
  // 176
  88, 113, 
  // 178
  89, 114, 
  // 180
  22, 17, 
  // 182
  125, 85, 
  // 184
  17, 64, 
  // 186
  85, 115, 
  // 188
  86, 116, 
  // 190
  87, 117, 
  // 192
  88, 118, 
  // 194
  89, 119, 
  // 196
  126, 86, 
  // 198
  127, 87, 
  // 200
  128, 88, 
  // 202
  17, 76, 
  // 204
  85, 120, 
  // 206
  86, 121, 
  // 208
  87, 122, 
  // 210
  88, 123, 
  // 212
  89, 124, 
  // 214
  133, 89, 
  // 216
  72, 22, 
  // 218
  90, 125, 
  // 220
  91, 126, 
  // 222
  92, 127, 
  // 224
  93, 128, 
  // 226
  94, 133, 
  // 228
  72, 19, 
  // 230
  90, 329, 
  // 232
  91, 330, 
  // 234
  92, 331, 
  // 236
  93, 332, 
  // 238
  94, 79, 
  // 240
  72, 48, 
  // 242
  90, 80, 
  // 244
  91, 81, 
  // 246
  92, 82, 
  // 248
  93, 83, 
  // 250
  94, 84, 
  // 252
  72, 17, 
  // 254
  90, 85, 
  // 256
  91, 86, 
  // 258
  92, 87, 
  // 260
  93, 88, 
  // 262
  94, 89, 
  // 264
  22, 72, 
  // 266
  125, 90, 
  // 268
  126, 91, 
  // 270
  72, 72, 
  // 272
  90, 90, 
  // 274
  91, 91, 
  // 276
  92, 92, 
  // 278
  93, 93, 
  // 280
  94, 94, 
  // 282
  127, 92, 
  // 284
  128, 93, 
  // 286
  133, 94, 
  // 288
  72, 70, 
  // 290
  90, 95, 
  // 292
  91, 96, 
  // 294
  92, 97, 
  // 296
  93, 98, 
  // 298
  94, 99, 
  // 300
  72, 77, 
  // 302
  90, 100, 
  // 304
  91, 101, 
  // 306
  92, 102, 
  // 308
  93, 103, 
  // 310
  94, 104, 
  // 312
  72, 61, 
  // 314
  90, 105, 
  // 316
  91, 106, 
  // 318
  92, 107, 
  // 320
  93, 108, 
  // 322
  94, 109, 
  // 324
  72, 74, 
  // 326
  90, 110, 
  // 328
  91, 111, 
  // 330
  92, 112, 
  // 332
  93, 113, 
  // 334
  94, 114, 
  // 336
  72, 64, 
  // 338
  90, 115, 
  // 340
  91, 116, 
  // 342
  92, 117, 
  // 344
  93, 118, 
  // 346
  94, 119, 
  // 348
  22, 70, 
  // 350
  125, 95, 
  // 352
  126, 96, 
  // 354
  72, 76, 
  // 356
  90, 120, 
  // 358
  91, 121, 
  // 360
  92, 122, 
  // 362
  93, 123, 
  // 364
  94, 124, 
  // 366
  127, 97, 
  // 368
  128, 98, 
  // 370
  133, 99, 
  // 372
  70, 22, 
  // 374
  95, 125, 
  // 376
  96, 126, 
  // 378
  97, 127, 
  // 380
  98, 128, 
  // 382
  99, 133, 
  // 384
  70, 19, 
  // 386
  95, 329, 
  // 388
  96, 330, 
  // 390
  97, 331, 
  // 392
  98, 332, 
  // 394
  99, 79, 
  // 396
  70, 48, 
  // 398
  95, 80, 
  // 400
  96, 81, 
  // 402
  97, 82, 
  // 404
  98, 83, 
  // 406
  99, 84, 
  // 408
  70, 17, 
  // 410
  95, 85, 
  // 412
  96, 86, 
  // 414
  97, 87, 
  // 416
  98, 88, 
  // 418
  99, 89, 
  // 420
  22, 77, 
  // 422
  70, 72, 
  // 424
  95, 90, 
  // 426
  96, 91, 
  // 428
  97, 92, 
  // 430
  98, 93, 
  // 432
  99, 94, 
  // 434
  125, 100, 
  // 436
  126, 101, 
  // 438
  127, 102, 
  // 440
  70, 70, 
  // 442
  95, 95, 
  // 444
  96, 96, 
  // 446
  97, 97, 
  // 448
  98, 98, 
  // 450
  99, 99, 
  // 452
  128, 103, 
  // 454
  133, 104, 
  // 456
  70, 77, 
  // 458
  95, 100, 
  // 460
  96, 101, 
  // 462
  97, 102, 
  // 464
  98, 103, 
  // 466
  99, 104, 
  // 468
  70, 61, 
  // 470
  95, 105, 
  // 472
  96, 106, 
  // 474
  97, 107, 
  // 476
  98, 108, 
  // 478
  99, 109, 
  // 480
  70, 74, 
  // 482
  95, 110, 
  // 484
  96, 111, 
  // 486
  97, 112, 
  // 488
  98, 113, 
  // 490
  99, 114, 
  // 492
  70, 64, 
  // 494
  95, 115, 
  // 496
  96, 116, 
  // 498
  97, 117, 
  // 500
  98, 118, 
  // 502
  99, 119, 
  // 504
  22, 61, 
  // 506
  70, 76, 
  // 508
  95, 120, 
  // 510
  96, 121, 
  // 512
  97, 122, 
  // 514
  98, 123, 
  // 516
  99, 124, 
  // 518
  125, 105, 
  // 520
  126, 106, 
  // 522
  127, 107, 
  // 524
  77, 22, 
  // 526
  100, 125, 
  // 528
  101, 126, 
  // 530
  102, 127, 
  // 532
  103, 128, 
  // 534
  104, 133, 
  // 536
  128, 108, 
  // 538
  133, 109, 
  // 540
  77, 19, 
  // 542
  100, 329, 
  // 544
  101, 330, 
  // 546
  102, 331, 
  // 548
  103, 332, 
  // 550
  104, 79, 
  // 552
  77, 48, 
  // 554
  100, 80, 
  // 556
  101, 81, 
  // 558
  102, 82, 
  // 560
  103, 83, 
  // 562
  104, 84, 
  // 564
  77, 17, 
  // 566
  100, 85, 
  // 568
  101, 86, 
  // 570
  102, 87, 
  // 572
  103, 88, 
  // 574
  104, 89, 
  // 576
  77, 72, 
  // 578
  100, 90, 
  // 580
  101, 91, 
  // 582
  102, 92, 
  // 584
  103, 93, 
  // 586
  104, 94, 
  // 588
  22, 74, 
  // 590
  125, 110, 
  // 592
  77, 70, 
  // 594
  100, 95, 
  // 596
  101, 96, 
  // 598
  102, 97, 
  // 600
  103, 98, 
  // 602
  104, 99, 
  // 604
  126, 111, 
  // 606
  127, 112, 
  // 608
  128, 113, 
  // 610
  77, 77, 
  // 612
  100, 100, 
  // 614
  101, 101, 
  // 616
  102, 102, 
  // 618
  103, 103, 
  // 620
  104, 104, 
  // 622
  133, 114, 
  // 624
  77, 61, 
  // 626
  100, 105, 
  // 628
  101, 106, 
  // 630
  102, 107, 
  // 632
  103, 108, 
  // 634
  104, 109, 
  // 636
  77, 74, 
  // 638
  100, 110, 
  // 640
  101, 111, 
  // 642
  102, 112, 
  // 644
  103, 113, 
  // 646
  104, 114, 
  // 648
  77, 64, 
  // 650
  100, 115, 
  // 652
  101, 116, 
  // 654
  102, 117, 
  // 656
  103, 118, 
  // 658
  104, 119, 
  // 660
  77, 76, 
  // 662
  100, 120, 
  // 664
  101, 121, 
  // 666
  102, 122, 
  // 668
  103, 123, 
  // 670
  104, 124, 
  // 672
  22, 64, 
  // 674
  125, 115, 
  // 676
  61, 22, 
  // 678
  105, 125, 
  // 680
  106, 126, 
  // 682
  107, 127, 
  // 684
  108, 128, 
  // 686
  109, 133, 
  // 688
  126, 116, 
  // 690
  127, 117, 
  // 692
  128, 118, 
  // 694
  61, 19, 
  // 696
  105, 329, 
  // 698
  106, 330, 
  // 700
  107, 331, 
  // 702
  108, 332, 
  // 704
  109, 79, 
  // 706
  133, 119, 
  // 708
  61, 48, 
  // 710
  105, 80, 
  // 712
  106, 81, 
  // 714
  107, 82, 
  // 716
  108, 83, 
  // 718
  109, 84, 
  // 720
  61, 17, 
  // 722
  105, 85, 
  // 724
  106, 86, 
  // 726
  107, 87, 
  // 728
  108, 88, 
  // 730
  109, 89, 
  // 732
  61, 72, 
  // 734
  105, 90, 
  // 736
  106, 91, 
  // 738
  107, 92, 
  // 740
  108, 93, 
  // 742
  109, 94, 
  // 744
  61, 70, 
  // 746
  105, 95, 
  // 748
  106, 96, 
  // 750
  107, 97, 
  // 752
  108, 98, 
  // 754
  109, 99, 
  // 756
  22, 76, 
  // 758
  125, 120, 
  // 760
  126, 121, 
  // 762
  61, 77, 
  // 764
  105, 100, 
  // 766
  106, 101, 
  // 768
  107, 102, 
  // 770
  108, 103, 
  // 772
  109, 104, 
  // 774
  127, 122, 
  // 776
  128, 123, 
  // 778
  133, 124, 
  // 780
  61, 61, 
  // 782
  105, 105, 
  // 784
  106, 106, 
  // 786
  107, 107, 
  // 788
  108, 108, 
  // 790
  109, 109, 
  // 792
  61, 74, 
  // 794
  105, 110, 
  // 796
  106, 111, 
  // 798
  107, 112, 
  // 800
  108, 113, 
  // 802
  109, 114, 
  // 804
  61, 64, 
  // 806
  105, 115, 
  // 808
  106, 116, 
  // 810
  107, 117, 
  // 812
  108, 118, 
  // 814
  109, 119, 
  // 816
  61, 76, 
  // 818
  105, 120, 
  // 820
  106, 121, 
  // 822
  107, 122, 
  // 824
  108, 123, 
  // 826
  109, 124, 
  // 828
  74, 22, 
  // 830
  110, 125, 
  // 832
  111, 126, 
  // 834
  112, 127, 
  // 836
  113, 128, 
  // 838
  114, 133, 
  // 840
  19, 22, 
  // 842
  329, 125, 
  // 844
  330, 126, 
  // 846
  331, 127, 
  // 848
  332, 128, 
  // 850
  79, 133, 
  // 852
  74, 19, 
  // 854
  110, 329, 
  // 856
  111, 330, 
  // 858
  112, 331, 
  // 860
  113, 332, 
  // 862
  114, 79, 
  // 864
  74, 48, 
  // 866
  110, 80, 
  // 868
  111, 81, 
  // 870
  112, 82, 
  // 872
  113, 83, 
  // 874
  114, 84, 
  // 876
  74, 17, 
  // 878
  110, 85, 
  // 880
  111, 86, 
  // 882
  112, 87, 
  // 884
  113, 88, 
  // 886
  114, 89, 
  // 888
  74, 72, 
  // 890
  110, 90, 
  // 892
  111, 91, 
  // 894
  112, 92, 
  // 896
  113, 93, 
  // 898
  114, 94, 
  // 900
  74, 70, 
  // 902
  110, 95, 
  // 904
  111, 96, 
  // 906
  112, 97, 
  // 908
  113, 98, 
  // 910
  114, 99, 
  // 912
  19, 19, 
  // 914
  329, 329, 
  // 916
  330, 330, 
  // 918
  331, 331, 
  // 920
  332, 332, 
  // 922
  79, 79, 
  // 924
  74, 77, 
  // 926
  110, 100, 
  // 928
  111, 101, 
  // 930
  112, 102, 
  // 932
  113, 103, 
  // 934
  114, 104, 
  // 936
  74, 61, 
  // 938
  110, 105, 
  // 940
  111, 106, 
  // 942
  112, 107, 
  // 944
  113, 108, 
  // 946
  114, 109, 
  // 948
  74, 74, 
  // 950
  110, 110, 
  // 952
  111, 111, 
  // 954
  112, 112, 
  // 956
  113, 113, 
  // 958
  114, 114, 
  // 960
  74, 64, 
  // 962
  110, 115, 
  // 964
  111, 116, 
  // 966
  112, 117, 
  // 968
  113, 118, 
  // 970
  114, 119, 
  // 972
  74, 76, 
  // 974
  110, 120, 
  // 976
  111, 121, 
  // 978
  112, 122, 
  // 980
  113, 123, 
  // 982
  114, 124, 
  // 984
  19, 48, 
  // 986
  329, 80, 
  // 988
  330, 81, 
  // 990
  331, 82, 
  // 992
  332, 83, 
  // 994
  79, 84, 
  // 996
  64, 22, 
  // 998
  115, 125, 
  // 1000
  116, 126, 
  // 1002
  117, 127, 
  // 1004
  118, 128, 
  // 1006
  119, 133, 
  // 1008
  64, 19, 
  // 1010
  115, 329, 
  // 1012
  116, 330, 
  // 1014
  117, 331, 
  // 1016
  118, 332, 
  // 1018
  119, 79, 
  // 1020
  64, 48, 
  // 1022
  115, 80, 
  // 1024
  116, 81, 
  // 1026
  117, 82, 
  // 1028
  118, 83, 
  // 1030
  119, 84, 
  // 1032
  64, 17, 
  // 1034
  115, 85, 
  // 1036
  116, 86, 
  // 1038
  117, 87, 
  // 1040
  118, 88, 
  // 1042
  119, 89, 
  // 1044
  64, 72, 
  // 1046
  115, 90, 
  // 1048
  116, 91, 
  // 1050
  117, 92, 
  // 1052
  118, 93, 
  // 1054
  119, 94, 
  // 1056
  19, 17, 
  // 1058
  329, 85, 
  // 1060
  330, 86, 
  // 1062
  331, 87, 
  // 1064
  332, 88, 
  // 1066
  79, 89, 
  // 1068
  64, 70, 
  // 1070
  115, 95, 
  // 1072
  116, 96, 
  // 1074
  117, 97, 
  // 1076
  118, 98, 
  // 1078
  119, 99, 
  // 1080
  64, 77, 
  // 1082
  115, 100, 
  // 1084
  116, 101, 
  // 1086
  117, 102, 
  // 1088
  118, 103, 
  // 1090
  119, 104, 
  // 1092
  64, 61, 
  // 1094
  115, 105, 
  // 1096
  116, 106, 
  // 1098
  117, 107, 
  // 1100
  118, 108, 
  // 1102
  119, 109, 
  // 1104
  64, 74, 
  // 1106
  115, 110, 
  // 1108
  116, 111, 
  // 1110
  117, 112, 
  // 1112
  118, 113, 
  // 1114
  119, 114, 
  // 1116
  22, 22, 
  // 1118
  64, 64, 
  // 1120
  115, 115, 
  // 1122
  116, 116, 
  // 1124
  117, 117, 
  // 1126
  118, 118, 
  // 1128
  119, 119, 
  // 1130
  19, 72, 
  // 1132
  329, 90, 
  // 1134
  330, 91, 
  // 1136
  331, 92, 
  // 1138
  332, 93, 
  // 1140
  79, 94, 
  // 1142
  64, 76, 
  // 1144
  115, 120, 
  // 1146
  116, 121, 
  // 1148
  117, 122, 
  // 1150
  118, 123, 
  // 1152
  119, 124, 
  // 1154
  125, 125, 
  // 1156
  76, 22, 
  // 1158
  120, 125, 
  // 1160
  121, 126, 
  // 1162
  122, 127, 
  // 1164
  123, 128, 
  // 1166
  124, 133, 
  // 1168
  76, 19, 
  // 1170
  120, 329, 
  // 1172
  121, 330, 
  // 1174
  122, 331, 
  // 1176
  123, 332, 
  // 1178
  124, 79, 
  // 1180
  76, 48, 
  // 1182
  120, 80, 
  // 1184
  121, 81, 
  // 1186
  122, 82, 
  // 1188
  123, 83, 
  // 1190
  124, 84, 
  // 1192
  76, 17, 
  // 1194
  120, 85, 
  // 1196
  121, 86, 
  // 1198
  122, 87, 
  // 1200
  123, 88, 
  // 1202
  124, 89, 
  // 1204
  19, 70, 
  // 1206
  329, 95, 
  // 1208
  330, 96, 
  // 1210
  331, 97, 
  // 1212
  332, 98, 
  // 1214
  79, 99, 
  // 1216
  76, 72, 
  // 1218
  120, 90, 
  // 1220
  121, 91, 
  // 1222
  122, 92, 
  // 1224
  123, 93, 
  // 1226
  124, 94, 
  // 1228
  126, 126, 
  // 1230
  76, 70, 
  // 1232
  120, 95, 
  // 1234
  121, 96, 
  // 1236
  122, 97, 
  // 1238
  123, 98, 
  // 1240
  124, 99, 
  // 1242
  76, 77, 
  // 1244
  120, 100, 
  // 1246
  121, 101, 
  // 1248
  122, 102, 
  // 1250
  123, 103, 
  // 1252
  124, 104, 
  // 1254
  76, 61, 
  // 1256
  120, 105, 
  // 1258
  121, 106, 
  // 1260
  122, 107, 
  // 1262
  123, 108, 
  // 1264
  124, 109, 
  // 1266
  127, 127, 
  // 1268
  76, 74, 
  // 1270
  120, 110, 
  // 1272
  121, 111, 
  // 1274
  122, 112, 
  // 1276
  123, 113, 
  // 1278
  124, 114, 
  // 1280
  19, 77, 
  // 1282
  329, 100, 
  // 1284
  330, 101, 
  // 1286
  331, 102, 
  // 1288
  332, 103, 
  // 1290
  79, 104, 
  // 1292
  76, 64, 
  // 1294
  120, 115, 
  // 1296
  121, 116, 
  // 1298
  122, 117, 
  // 1300
  123, 118, 
  // 1302
  124, 119, 
  // 1304
  76, 76, 
  // 1306
  120, 120, 
  // 1308
  121, 121, 
  // 1310
  122, 122, 
  // 1312
  123, 123, 
  // 1314
  124, 124, 
  // 1316
  74, 
  // 1317
  71, 74, 
  // 1319
  71, 
  // 1320
  21, 21, 
  // 1322
  128, 128, 
  // 1324
  29, 42, 
  // 1326
  26, 44, 
  // 1328
  32, 46, 
  // 1330
  21, 21, 21, 
  // 1333
  30, 30, 22, 
  // 1336
  27, 27, 19, 
  // 1339
  33, 33, 48, 
  // 1342
  34, 29, 
  // 1344
  34, 26, 
  // 1346
  34, 32, 
  // 1348
  29, 29, 34, 
  // 1351
  30, 30, 61, 
  // 1354
  26, 26, 34, 
  // 1357
  27, 27, 61, 
  // 1360
  32, 32, 34, 
  // 1363
  33, 33, 61, 
  // 1366
  21, 21, 21, 21, 
  // 1370
  21, 21, 129, 
  // 1373
  29, 29, 130, 
  // 1376
  29, 29, 29, 130, 
  // 1380
  26, 26, 130, 
  // 1383
  32, 32, 130, 
  // 1386
  26, 26, 26, 130, 
  // 1390
  32, 32, 32, 130, 
  // 1394
  21, 21, 131, 
  // 1397
  29, 29, 132, 
  // 1400
  26, 26, 132, 
  // 1403
  32, 32, 132, 
  // 1406
  29, 29, 29, 132, 
  // 1410
  26, 26, 26, 132, 
  // 1414
  32, 32, 32, 132, 
  // 1418
  21, 21, 134, 
  // 1421
  29, 29, 135, 
  // 1424
  26, 26, 135, 
  // 1427
  32, 32, 135, 
  // 1430
  19, 61, 
  // 1432
  29, 29, 29, 135, 
  // 1436
  26, 26, 26, 135, 
  // 1440
  32, 32, 32, 135, 
  // 1444
  21, 21, 136, 
  // 1447
  29, 29, 137, 
  // 1450
  329, 105, 
  // 1452
  26, 26, 137, 
  // 1455
  32, 32, 137, 
  // 1458
  29, 29, 29, 137, 
  // 1462
  26, 26, 26, 137, 
  // 1466
  32, 32, 32, 137, 
  // 1470
  29, 29, 
  // 1472
  330, 106, 
  // 1474
  331, 107, 
  // 1476
  332, 108, 
  // 1478
  29, 29, 29, 
  // 1481
  2, 4, 
  // 1483
  4, 4, 
  // 1485
  79, 109, 
  // 1487
  2, 4, 4, 
  // 1490
  4, 4, 4, 
  // 1493
  5, 5, 3, 
  // 1496
  38, 23, 40, 
  // 1499
  46, 40, 40, 
  // 1502
  34, 38, 46, 
  // 1505
  42, 46, 46, 
  // 1508
  36, 34, 42, 
  // 1511
  44, 42, 42, 
  // 1514
  4, 4, 4, 4, 
  // 1518
  5, 5, 3, 3, 
  // 1522
  34, 34, 34, 34, 
  // 1526
  42, 42, 42, 42, 
  // 1530
  34, 34, 34, 
  // 1533
  42, 42, 42, 
  // 1536
  30, 22, 30, 
  // 1539
  27, 19, 27, 
  // 1542
  33, 48, 33, 
  // 1545
  133, 133, 
  // 1547
  30, 30, 22, 22, 
  // 1551
  27, 27, 19, 19, 
  // 1555
  33, 33, 48, 48, 
  // 1559
  30, 22, 22, 30, 
  // 1563
  27, 19, 19, 27, 
  // 1567
  33, 48, 48, 33, 
  // 1571
  22, 28, 
  // 1573
  19, 25, 
  // 1575
  48, 31, 
  // 1577
  28, 28, 
  // 1579
  25, 25, 
  // 1581
  31, 31, 
  // 1583
  126, 126, 126, 
  // 1586
  330, 330, 330, 
  // 1589
  81, 81, 81, 
  // 1592
  127, 127, 127, 
  // 1595
  331, 331, 331, 
  // 1598
  82, 82, 82, 
  // 1601
  22, 28, 28, 
  // 1604
  19, 25, 25, 
  // 1607
  48, 31, 31, 
  // 1610
  37, 27, 
  // 1612
  39, 33, 
  // 1614
  61, 68, 
  // 1616
  34, 29, 29, 
  // 1619
  61, 19, 19, 
  // 1622
  37, 27, 27, 
  // 1625
  61, 48, 48, 
  // 1628
  39, 33, 33, 
  // 1631
  0, 0, 0, 0, 
  // 1635
  68, 68, 68, 68, 
  // 1639
  68, 68, 68, 73, 
  // 1643
  73, 73, 73, 73, 
  // 1647
  73, 73, 73, 68, 
  // 1651
  29, 29, 29, 34, 
  // 1655
  29, 29, 29, 42, 
  // 1659
  26, 26, 26, 36, 
  // 1663
  26, 26, 26, 44, 
  // 1667
  32, 32, 32, 38, 
  // 1671
  32, 32, 32, 46, 
  // 1675
  85, 71, 149, 
  // 1678
  90, 71, 150, 
  // 1681
  95, 71, 151, 
  // 1684
  100, 71, 152, 
  // 1687
  105, 71, 153, 
  // 1690
  110, 71, 154, 
  // 1693
  115, 71, 155, 
  // 1696
  120, 71, 156, 
  // 1699
  125, 71, 157, 
  // 1702
  329, 71, 158, 
  // 1705
  80, 71, 159, 
  // 1708
  78, 85, 71, 160, 
  // 1712
  78, 90, 71, 161, 
  // 1716
  78, 95, 71, 162, 
  // 1720
  78, 100, 71, 163, 
  // 1724
  78, 105, 71, 164, 
  // 1728
  78, 110, 71, 165, 
  // 1732
  78, 115, 71, 166, 
  // 1736
  78, 120, 71, 167, 
  // 1740
  78, 125, 71, 168, 
  // 1744
  78, 329, 71, 169, 
  // 1748
  78, 80, 71, 170, 
  // 1752
  125, 71, 159, 
  // 1755
  78, 125, 71, 170, 
  // 1759
  78, 329, 71, 170, 
  // 1763
  86, 71, 149, 
  // 1766
  91, 71, 150, 
  // 1769
  96, 71, 151, 
  // 1772
  101, 71, 152, 
  // 1775
  106, 71, 153, 
  // 1778
  111, 71, 154, 
  // 1781
  116, 71, 155, 
  // 1784
  121, 71, 156, 
  // 1787
  126, 71, 157, 
  // 1790
  330, 71, 158, 
  // 1793
  81, 71, 159, 
  // 1796
  78, 86, 71, 160, 
  // 1800
  78, 91, 71, 161, 
  // 1804
  78, 96, 71, 162, 
  // 1808
  78, 101, 71, 163, 
  // 1812
  78, 106, 71, 164, 
  // 1816
  78, 111, 71, 165, 
  // 1820
  78, 116, 71, 166, 
  // 1824
  78, 121, 71, 167, 
  // 1828
  78, 126, 71, 168, 
  // 1832
  78, 330, 71, 169, 
  // 1836
  78, 81, 71, 170, 
  // 1840
  126, 71, 159, 
  // 1843
  78, 126, 71, 170, 
  // 1847
  78, 330, 71, 170, 
  // 1851
  19, 74, 
  // 1853
  87, 71, 149, 
  // 1856
  92, 71, 150, 
  // 1859
  97, 71, 151, 
  // 1862
  102, 71, 152, 
  // 1865
  107, 71, 153, 
  // 1868
  329, 110, 
  // 1870
  112, 71, 154, 
  // 1873
  117, 71, 155, 
  // 1876
  122, 71, 156, 
  // 1879
  127, 71, 157, 
  // 1882
  331, 71, 158, 
  // 1885
  82, 71, 159, 
  // 1888
  78, 87, 71, 160, 
  // 1892
  78, 92, 71, 161, 
  // 1896
  78, 97, 71, 162, 
  // 1900
  78, 102, 71, 163, 
  // 1904
  330, 111, 
  // 1906
  78, 107, 71, 164, 
  // 1910
  78, 112, 71, 165, 
  // 1914
  78, 117, 71, 166, 
  // 1918
  78, 122, 71, 167, 
  // 1922
  78, 127, 71, 168, 
  // 1926
  78, 331, 71, 169, 
  // 1930
  78, 82, 71, 170, 
  // 1934
  127, 71, 159, 
  // 1937
  78, 127, 71, 170, 
  // 1941
  78, 331, 71, 170, 
  // 1945
  331, 112, 
  // 1947
  88, 71, 149, 
  // 1950
  93, 71, 150, 
  // 1953
  332, 113, 
  // 1955
  98, 71, 151, 
  // 1958
  103, 71, 152, 
  // 1961
  108, 71, 153, 
  // 1964
  113, 71, 154, 
  // 1967
  118, 71, 155, 
  // 1970
  123, 71, 156, 
  // 1973
  128, 71, 157, 
  // 1976
  332, 71, 158, 
  // 1979
  83, 71, 159, 
  // 1982
  78, 88, 71, 160, 
  // 1986
  79, 114, 
  // 1988
  78, 93, 71, 161, 
  // 1992
  78, 98, 71, 162, 
  // 1996
  78, 103, 71, 163, 
  // 2000
  78, 108, 71, 164, 
  // 2004
  78, 113, 71, 165, 
  // 2008
  78, 118, 71, 166, 
  // 2012
  78, 123, 71, 167, 
  // 2016
  78, 128, 71, 168, 
  // 2020
  78, 332, 71, 169, 
  // 2024
  78, 83, 71, 170, 
  // 2028
  128, 71, 159, 
  // 2031
  78, 128, 71, 170, 
  // 2035
  78, 332, 71, 170, 
  // 2039
  89, 71, 149, 
  // 2042
  94, 71, 150, 
  // 2045
  99, 71, 151, 
  // 2048
  104, 71, 152, 
  // 2051
  109, 71, 153, 
  // 2054
  114, 71, 154, 
  // 2057
  119, 71, 155, 
  // 2060
  124, 71, 156, 
  // 2063
  133, 71, 157, 
  // 2066
  79, 71, 158, 
  // 2069
  84, 71, 159, 
  // 2072
  78, 89, 71, 160, 
  // 2076
  78, 94, 71, 161, 
  // 2080
  78, 99, 71, 162, 
  // 2084
  78, 104, 71, 163, 
  // 2088
  78, 109, 71, 164, 
  // 2092
  78, 114, 71, 165, 
  // 2096
  78, 119, 71, 166, 
  // 2100
  78, 124, 71, 167, 
  // 2104
  78, 133, 71, 168, 
  // 2108
  78, 79, 71, 169, 
  // 2112
  78, 84, 71, 170, 
  // 2116
  133, 71, 159, 
  // 2119
  78, 133, 71, 170, 
  // 2123
  78, 79, 71, 170, 
  // 2127
  85, 71, 171, 
  // 2130
  90, 71, 172, 
  // 2133
  95, 71, 173, 
  // 2136
  100, 71, 174, 
  // 2139
  105, 71, 175, 
  // 2142
  110, 71, 176, 
  // 2145
  115, 71, 177, 
  // 2148
  120, 71, 178, 
  // 2151
  125, 71, 179, 
  // 2154
  329, 71, 180, 
  // 2157
  80, 71, 181, 
  // 2160
  78, 85, 71, 182, 
  // 2164
  78, 90, 71, 183, 
  // 2168
  78, 95, 71, 184, 
  // 2172
  78, 100, 71, 185, 
  // 2176
  78, 105, 71, 186, 
  // 2180
  78, 110, 71, 187, 
  // 2184
  78, 115, 71, 188, 
  // 2188
  78, 120, 71, 189, 
  // 2192
  78, 125, 71, 190, 
  // 2196
  78, 329, 71, 191, 
  // 2200
  78, 80, 71, 192, 
  // 2204
  125, 71, 181, 
  // 2207
  78, 125, 71, 192, 
  // 2211
  78, 329, 71, 192, 
  // 2215
  86, 71, 171, 
  // 2218
  91, 71, 172, 
  // 2221
  96, 71, 173, 
  // 2224
  101, 71, 174, 
  // 2227
  106, 71, 175, 
  // 2230
  111, 71, 176, 
  // 2233
  116, 71, 177, 
  // 2236
  121, 71, 178, 
  // 2239
  126, 71, 179, 
  // 2242
  330, 71, 180, 
  // 2245
  81, 71, 181, 
  // 2248
  78, 86, 71, 182, 
  // 2252
  78, 91, 71, 183, 
  // 2256
  78, 96, 71, 184, 
  // 2260
  78, 101, 71, 185, 
  // 2264
  78, 106, 71, 186, 
  // 2268
  78, 111, 71, 187, 
  // 2272
  78, 116, 71, 188, 
  // 2276
  78, 121, 71, 189, 
  // 2280
  78, 126, 71, 190, 
  // 2284
  78, 330, 71, 191, 
  // 2288
  78, 81, 71, 192, 
  // 2292
  126, 71, 181, 
  // 2295
  78, 126, 71, 192, 
  // 2299
  78, 330, 71, 192, 
  // 2303
  87, 71, 171, 
  // 2306
  92, 71, 172, 
  // 2309
  97, 71, 173, 
  // 2312
  102, 71, 174, 
  // 2315
  107, 71, 175, 
  // 2318
  112, 71, 176, 
  // 2321
  117, 71, 177, 
  // 2324
  122, 71, 178, 
  // 2327
  127, 71, 179, 
  // 2330
  331, 71, 180, 
  // 2333
  82, 71, 181, 
  // 2336
  78, 87, 71, 182, 
  // 2340
  78, 92, 71, 183, 
  // 2344
  78, 97, 71, 184, 
  // 2348
  78, 102, 71, 185, 
  // 2352
  78, 107, 71, 186, 
  // 2356
  78, 112, 71, 187, 
  // 2360
  78, 117, 71, 188, 
  // 2364
  78, 122, 71, 189, 
  // 2368
  78, 127, 71, 190, 
  // 2372
  78, 331, 71, 191, 
  // 2376
  78, 82, 71, 192, 
  // 2380
  127, 71, 181, 
  // 2383
  78, 127, 71, 192, 
  // 2387
  78, 331, 71, 192, 
  // 2391
  88, 71, 171, 
  // 2394
  93, 71, 172, 
  // 2397
  98, 71, 173, 
  // 2400
  103, 71, 174, 
  // 2403
  108, 71, 175, 
  // 2406
  113, 71, 176, 
  // 2409
  118, 71, 177, 
  // 2412
  123, 71, 178, 
  // 2415
  128, 71, 179, 
  // 2418
  332, 71, 180, 
  // 2421
  83, 71, 181, 
  // 2424
  78, 88, 71, 182, 
  // 2428
  78, 93, 71, 183, 
  // 2432
  78, 98, 71, 184, 
  // 2436
  78, 103, 71, 185, 
  // 2440
  78, 108, 71, 186, 
  // 2444
  78, 113, 71, 187, 
  // 2448
  78, 118, 71, 188, 
  // 2452
  78, 123, 71, 189, 
  // 2456
  78, 128, 71, 190, 
  // 2460
  78, 332, 71, 191, 
  // 2464
  78, 83, 71, 192, 
  // 2468
  128, 71, 181, 
  // 2471
  78, 128, 71, 192, 
  // 2475
  78, 332, 71, 192, 
  // 2479
  89, 71, 171, 
  // 2482
  94, 71, 172, 
  // 2485
  99, 71, 173, 
  // 2488
  104, 71, 174, 
  // 2491
  109, 71, 175, 
  // 2494
  114, 71, 176, 
  // 2497
  119, 71, 177, 
  // 2500
  124, 71, 178, 
  // 2503
  133, 71, 179, 
  // 2506
  79, 71, 180, 
  // 2509
  84, 71, 181, 
  // 2512
  78, 89, 71, 182, 
  // 2516
  78, 94, 71, 183, 
  // 2520
  78, 99, 71, 184, 
  // 2524
  78, 104, 71, 185, 
  // 2528
  78, 109, 71, 186, 
  // 2532
  78, 114, 71, 187, 
  // 2536
  78, 119, 71, 188, 
  // 2540
  78, 124, 71, 189, 
  // 2544
  78, 133, 71, 190, 
  // 2548
  78, 79, 71, 191, 
  // 2552
  78, 84, 71, 192, 
  // 2556
  133, 71, 181, 
  // 2559
  78, 133, 71, 192, 
  // 2563
  78, 79, 71, 192, 
  // 2567
  85, 71, 193, 
  // 2570
  90, 71, 194, 
  // 2573
  95, 71, 195, 
  // 2576
  100, 71, 196, 
  // 2579
  19, 64, 
  // 2581
  105, 71, 197, 
  // 2584
  110, 71, 198, 
  // 2587
  115, 71, 199, 
  // 2590
  120, 71, 200, 
  // 2593
  125, 71, 201, 
  // 2596
  329, 115, 
  // 2598
  329, 71, 202, 
  // 2601
  80, 71, 203, 
  // 2604
  78, 85, 71, 204, 
  // 2608
  78, 90, 71, 205, 
  // 2612
  78, 95, 71, 206, 
  // 2616
  330, 116, 
  // 2618
  78, 100, 71, 207, 
  // 2622
  78, 105, 71, 208, 
  // 2626
  78, 110, 71, 209, 
  // 2630
  78, 115, 71, 210, 
  // 2634
  78, 120, 71, 211, 
  // 2638
  331, 117, 
  // 2640
  78, 125, 71, 212, 
  // 2644
  78, 329, 71, 213, 
  // 2648
  78, 80, 71, 214, 
  // 2652
  125, 71, 203, 
  // 2655
  78, 125, 71, 214, 
  // 2659
  78, 329, 71, 214, 
  // 2663
  332, 118, 
  // 2665
  86, 71, 193, 
  // 2668
  91, 71, 194, 
  // 2671
  96, 71, 195, 
  // 2674
  101, 71, 196, 
  // 2677
  79, 119, 
  // 2679
  106, 71, 197, 
  // 2682
  111, 71, 198, 
  // 2685
  116, 71, 199, 
  // 2688
  121, 71, 200, 
  // 2691
  126, 71, 201, 
  // 2694
  330, 71, 202, 
  // 2697
  81, 71, 203, 
  // 2700
  78, 86, 71, 204, 
  // 2704
  78, 91, 71, 205, 
  // 2708
  78, 96, 71, 206, 
  // 2712
  78, 101, 71, 207, 
  // 2716
  78, 106, 71, 208, 
  // 2720
  78, 111, 71, 209, 
  // 2724
  78, 116, 71, 210, 
  // 2728
  78, 121, 71, 211, 
  // 2732
  78, 126, 71, 212, 
  // 2736
  78, 330, 71, 213, 
  // 2740
  78, 81, 71, 214, 
  // 2744
  126, 71, 203, 
  // 2747
  78, 126, 71, 214, 
  // 2751
  78, 330, 71, 214, 
  // 2755
  87, 71, 193, 
  // 2758
  92, 71, 194, 
  // 2761
  97, 71, 195, 
  // 2764
  102, 71, 196, 
  // 2767
  107, 71, 197, 
  // 2770
  112, 71, 198, 
  // 2773
  117, 71, 199, 
  // 2776
  122, 71, 200, 
  // 2779
  127, 71, 201, 
  // 2782
  331, 71, 202, 
  // 2785
  82, 71, 203, 
  // 2788
  78, 87, 71, 204, 
  // 2792
  78, 92, 71, 205, 
  // 2796
  78, 97, 71, 206, 
  // 2800
  78, 102, 71, 207, 
  // 2804
  78, 107, 71, 208, 
  // 2808
  78, 112, 71, 209, 
  // 2812
  78, 117, 71, 210, 
  // 2816
  78, 122, 71, 211, 
  // 2820
  78, 127, 71, 212, 
  // 2824
  78, 331, 71, 213, 
  // 2828
  78, 82, 71, 214, 
  // 2832
  127, 71, 203, 
  // 2835
  78, 127, 71, 214, 
  // 2839
  78, 331, 71, 214, 
  // 2843
  88, 71, 193, 
  // 2846
  93, 71, 194, 
  // 2849
  98, 71, 195, 
  // 2852
  103, 71, 196, 
  // 2855
  108, 71, 197, 
  // 2858
  113, 71, 198, 
  // 2861
  118, 71, 199, 
  // 2864
  123, 71, 200, 
  // 2867
  128, 71, 201, 
  // 2870
  332, 71, 202, 
  // 2873
  83, 71, 203, 
  // 2876
  78, 88, 71, 204, 
  // 2880
  78, 93, 71, 205, 
  // 2884
  78, 98, 71, 206, 
  // 2888
  78, 103, 71, 207, 
  // 2892
  78, 108, 71, 208, 
  // 2896
  78, 113, 71, 209, 
  // 2900
  78, 118, 71, 210, 
  // 2904
  78, 123, 71, 211, 
  // 2908
  78, 128, 71, 212, 
  // 2912
  78, 332, 71, 213, 
  // 2916
  78, 83, 71, 214, 
  // 2920
  128, 71, 203, 
  // 2923
  78, 128, 71, 214, 
  // 2927
  78, 332, 71, 214, 
  // 2931
  89, 71, 193, 
  // 2934
  94, 71, 194, 
  // 2937
  99, 71, 195, 
  // 2940
  104, 71, 196, 
  // 2943
  109, 71, 197, 
  // 2946
  114, 71, 198, 
  // 2949
  119, 71, 199, 
  // 2952
  124, 71, 200, 
  // 2955
  133, 71, 201, 
  // 2958
  79, 71, 202, 
  // 2961
  84, 71, 203, 
  // 2964
  78, 89, 71, 204, 
  // 2968
  78, 94, 71, 205, 
  // 2972
  78, 99, 71, 206, 
  // 2976
  78, 104, 71, 207, 
  // 2980
  78, 109, 71, 208, 
  // 2984
  78, 114, 71, 209, 
  // 2988
  78, 119, 71, 210, 
  // 2992
  78, 124, 71, 211, 
  // 2996
  78, 133, 71, 212, 
  // 3000
  78, 79, 71, 213, 
  // 3004
  78, 84, 71, 214, 
  // 3008
  133, 71, 203, 
  // 3011
  78, 133, 71, 214, 
  // 3015
  78, 79, 71, 214, 
  // 3019
  85, 71, 215, 
  // 3022
  90, 71, 216, 
  // 3025
  95, 71, 217, 
  // 3028
  100, 71, 218, 
  // 3031
  105, 71, 219, 
  // 3034
  110, 71, 220, 
  // 3037
  115, 71, 221, 
  // 3040
  120, 71, 222, 
  // 3043
  125, 71, 223, 
  // 3046
  329, 71, 224, 
  // 3049
  80, 71, 225, 
  // 3052
  78, 85, 71, 226, 
  // 3056
  78, 90, 71, 227, 
  // 3060
  78, 95, 71, 228, 
  // 3064
  78, 100, 71, 229, 
  // 3068
  78, 105, 71, 230, 
  // 3072
  78, 110, 71, 231, 
  // 3076
  78, 115, 71, 232, 
  // 3080
  78, 120, 71, 233, 
  // 3084
  78, 125, 71, 234, 
  // 3088
  78, 329, 71, 235, 
  // 3092
  78, 80, 71, 236, 
  // 3096
  125, 71, 225, 
  // 3099
  78, 125, 71, 236, 
  // 3103
  78, 329, 71, 236, 
  // 3107
  86, 71, 215, 
  // 3110
  91, 71, 216, 
  // 3113
  96, 71, 217, 
  // 3116
  101, 71, 218, 
  // 3119
  106, 71, 219, 
  // 3122
  111, 71, 220, 
  // 3125
  116, 71, 221, 
  // 3128
  121, 71, 222, 
  // 3131
  126, 71, 223, 
  // 3134
  330, 71, 224, 
  // 3137
  81, 71, 225, 
  // 3140
  78, 86, 71, 226, 
  // 3144
  78, 91, 71, 227, 
  // 3148
  78, 96, 71, 228, 
  // 3152
  78, 101, 71, 229, 
  // 3156
  78, 106, 71, 230, 
  // 3160
  78, 111, 71, 231, 
  // 3164
  78, 116, 71, 232, 
  // 3168
  78, 121, 71, 233, 
  // 3172
  78, 126, 71, 234, 
  // 3176
  78, 330, 71, 235, 
  // 3180
  78, 81, 71, 236, 
  // 3184
  126, 71, 225, 
  // 3187
  78, 126, 71, 236, 
  // 3191
  78, 330, 71, 236, 
  // 3195
  87, 71, 215, 
  // 3198
  92, 71, 216, 
  // 3201
  97, 71, 217, 
  // 3204
  102, 71, 218, 
  // 3207
  107, 71, 219, 
  // 3210
  112, 71, 220, 
  // 3213
  117, 71, 221, 
  // 3216
  122, 71, 222, 
  // 3219
  127, 71, 223, 
  // 3222
  331, 71, 224, 
  // 3225
  82, 71, 225, 
  // 3228
  78, 87, 71, 226, 
  // 3232
  78, 92, 71, 227, 
  // 3236
  78, 97, 71, 228, 
  // 3240
  78, 102, 71, 229, 
  // 3244
  78, 107, 71, 230, 
  // 3248
  78, 112, 71, 231, 
  // 3252
  78, 117, 71, 232, 
  // 3256
  78, 122, 71, 233, 
  // 3260
  78, 127, 71, 234, 
  // 3264
  78, 331, 71, 235, 
  // 3268
  78, 82, 71, 236, 
  // 3272
  127, 71, 225, 
  // 3275
  78, 127, 71, 236, 
  // 3279
  78, 331, 71, 236, 
  // 3283
  88, 71, 215, 
  // 3286
  19, 76, 
  // 3288
  93, 71, 216, 
  // 3291
  98, 71, 217, 
  // 3294
  103, 71, 218, 
  // 3297
  108, 71, 219, 
  // 3300
  113, 71, 220, 
  // 3303
  118, 71, 221, 
  // 3306
  123, 71, 222, 
  // 3309
  128, 71, 223, 
  // 3312
  332, 71, 224, 
  // 3315
  83, 71, 225, 
  // 3318
  329, 120, 
  // 3320
  78, 88, 71, 226, 
  // 3324
  78, 93, 71, 227, 
  // 3328
  78, 98, 71, 228, 
  // 3332
  78, 103, 71, 229, 
  // 3336
  78, 108, 71, 230, 
  // 3340
  78, 113, 71, 231, 
  // 3344
  78, 118, 71, 232, 
  // 3348
  78, 123, 71, 233, 
  // 3352
  78, 128, 71, 234, 
  // 3356
  78, 332, 71, 235, 
  // 3360
  330, 121, 
  // 3362
  78, 83, 71, 236, 
  // 3366
  128, 71, 225, 
  // 3369
  78, 128, 71, 236, 
  // 3373
  78, 332, 71, 236, 
  // 3377
  331, 122, 
  // 3379
  89, 71, 215, 
  // 3382
  94, 71, 216, 
  // 3385
  99, 71, 217, 
  // 3388
  104, 71, 218, 
  // 3391
  109, 71, 219, 
  // 3394
  114, 71, 220, 
  // 3397
  119, 71, 221, 
  // 3400
  124, 71, 222, 
  // 3403
  332, 123, 
  // 3405
  133, 71, 223, 
  // 3408
  79, 71, 224, 
  // 3411
  84, 71, 225, 
  // 3414
  78, 89, 71, 226, 
  // 3418
  78, 94, 71, 227, 
  // 3422
  78, 99, 71, 228, 
  // 3426
  78, 104, 71, 229, 
  // 3430
  78, 109, 71, 230, 
  // 3434
  78, 114, 71, 231, 
  // 3438
  78, 119, 71, 232, 
  // 3442
  79, 124, 
  // 3444
  78, 124, 71, 233, 
  // 3448
  78, 133, 71, 234, 
  // 3452
  78, 79, 71, 235, 
  // 3456
  78, 84, 71, 236, 
  // 3460
  133, 71, 225, 
  // 3463
  78, 133, 71, 236, 
  // 3467
  78, 79, 71, 236, 
  // 3471
  85, 71, 237, 
  // 3474
  90, 71, 238, 
  // 3477
  95, 71, 239, 
  // 3480
  100, 71, 240, 
  // 3483
  105, 71, 241, 
  // 3486
  110, 71, 242, 
  // 3489
  115, 71, 243, 
  // 3492
  120, 71, 244, 
  // 3495
  125, 71, 245, 
  // 3498
  329, 71, 246, 
  // 3501
  80, 71, 247, 
  // 3504
  125, 71, 247, 
  // 3507
  86, 71, 237, 
  // 3510
  91, 71, 238, 
  // 3513
  96, 71, 239, 
  // 3516
  101, 71, 240, 
  // 3519
  106, 71, 241, 
  // 3522
  111, 71, 242, 
  // 3525
  116, 71, 243, 
  // 3528
  121, 71, 244, 
  // 3531
  126, 71, 245, 
  // 3534
  330, 71, 246, 
  // 3537
  81, 71, 247, 
  // 3540
  126, 71, 247, 
  // 3543
  87, 71, 237, 
  // 3546
  92, 71, 238, 
  // 3549
  97, 71, 239, 
  // 3552
  102, 71, 240, 
  // 3555
  107, 71, 241, 
  // 3558
  112, 71, 242, 
  // 3561
  117, 71, 243, 
  // 3564
  122, 71, 244, 
  // 3567
  127, 71, 245, 
  // 3570
  331, 71, 246, 
  // 3573
  82, 71, 247, 
  // 3576
  127, 71, 247, 
  // 3579
  88, 71, 237, 
  // 3582
  93, 71, 238, 
  // 3585
  98, 71, 239, 
  // 3588
  103, 71, 240, 
  // 3591
  108, 71, 241, 
  // 3594
  113, 71, 242, 
  // 3597
  118, 71, 243, 
  // 3600
  123, 71, 244, 
  // 3603
  128, 71, 245, 
  // 3606
  332, 71, 246, 
  // 3609
  83, 71, 247, 
  // 3612
  128, 71, 247, 
  // 3615
  89, 71, 237, 
  // 3618
  94, 71, 238, 
  // 3621
  99, 71, 239, 
  // 3624
  104, 71, 240, 
  // 3627
  109, 71, 241, 
  // 3630
  114, 71, 242, 
  // 3633
  119, 71, 243, 
  // 3636
  124, 71, 244, 
  // 3639
  133, 71, 245, 
  // 3642
  79, 71, 246, 
  // 3645
  84, 71, 247, 
  // 3648
  133, 71, 247, 
  // 3651
  22, 71, 159, 
  // 3654
  78, 22, 71, 170, 
  // 3658
  78, 19, 71, 170, 
  // 3662
  22, 71, 181, 
  // 3665
  78, 22, 71, 192, 
  // 3669
  78, 19, 71, 192, 
  // 3673
  22, 71, 203, 
  // 3676
  78, 22, 71, 214, 
  // 3680
  78, 19, 71, 214, 
  // 3684
  48, 22, 
  // 3686
  80, 125, 
  // 3688
  81, 126, 
  // 3690
  82, 127, 
  // 3692
  83, 128, 
  // 3694
  84, 133, 
  // 3696
  22, 71, 225, 
  // 3699
  78, 22, 71, 236, 
  // 3703
  78, 19, 71, 236, 
  // 3707
  22, 71, 247, 
  // 3710
  20, 248, 250, 71, 20, 
  // 3715
  20, 251, 252, 71, 20, 
  // 3720
  20, 248, 250, 71, 71, 20, 
  // 3726
  20, 251, 252, 71, 71, 20, 
  // 3732
  78, 61, 253, 
  // 3735
  78, 250, 71, 
  // 3738
  61, 255, 61, 
  // 3741
  61, 255, 
  // 3743
  61, 255, 61, 61, 
  // 3747
  74, 257, 74, 
  // 3750
  74, 257, 
  // 3752
  74, 257, 74, 74, 
  // 3756
  61, 258, 61, 
  // 3759
  61, 258, 
  // 3761
  61, 258, 61, 61, 
  // 3765
  74, 259, 74, 
  // 3768
  74, 259, 
  // 3770
  74, 259, 74, 74, 
  // 3774
  64, 261, 64, 
  // 3777
  64, 261, 
  // 3779
  64, 261, 64, 64, 
  // 3783
  76, 263, 76, 
  // 3786
  76, 263, 
  // 3788
  76, 263, 76, 76, 
  // 3792
  64, 264, 64, 
  // 3795
  64, 264, 
  // 3797
  64, 264, 64, 64, 
  // 3801
  76, 265, 76, 
  // 3804
  76, 265, 
  // 3806
  76, 265, 76, 76, 
  // 3810
  48, 19, 
  // 3812
  78, 267, 61, 
  // 3815
  61, 267, 
  // 3817
  80, 329, 
  // 3819
  61, 267, 61, 
  // 3822
  16, 267, 230, 61, 
  // 3826
  78, 269, 74, 
  // 3829
  74, 269, 
  // 3831
  81, 330, 
  // 3833
  74, 269, 74, 
  // 3836
  16, 269, 231, 74, 
  // 3840
  78, 271, 64, 
  // 3843
  64, 271, 
  // 3845
  64, 271, 64, 
  // 3848
  16, 271, 232, 64, 
  // 3852
  82, 331, 
  // 3854
  78, 273, 76, 
  // 3857
  76, 273, 
  // 3859
  76, 273, 76, 
  // 3862
  16, 273, 233, 76, 
  // 3866
  83, 332, 
  // 3868
  78, 275, 22, 
  // 3871
  22, 275, 
  // 3873
  22, 275, 22, 
  // 3876
  16, 275, 234, 22, 
  // 3880
  78, 277, 19, 
  // 3883
  84, 79, 
  // 3885
  19, 277, 
  // 3887
  19, 277, 19, 
  // 3890
  16, 277, 235, 19, 
  // 3894
  63, 279, 65, 
  // 3897
  75, 281, 65, 
  // 3900
  63, 279, 63, 
  // 3903
  75, 281, 75, 
  // 3906
  282, 282, 283, 
  // 3909
  282, 284, 283, 
  // 3912
  282, 285, 283, 
  // 3915
  282, 286, 283, 
  // 3918
  284, 282, 287, 
  // 3921
  284, 284, 287, 
  // 3924
  284, 285, 287, 
  // 3927
  284, 286, 287, 
  // 3930
  285, 282, 288, 
  // 3933
  285, 284, 288, 
  // 3936
  285, 285, 288, 
  // 3939
  285, 286, 288, 
  // 3942
  286, 282, 289, 
  // 3945
  286, 284, 289, 
  // 3948
  286, 285, 289, 
  // 3951
  286, 286, 289, 
  // 3954
  282, 282, 282, 283, 
  // 3958
  282, 284, 284, 283, 
  // 3962
  282, 285, 285, 283, 
  // 3966
  282, 286, 286, 283, 
  // 3970
  284, 282, 282, 287, 
  // 3974
  284, 284, 284, 287, 
  // 3978
  284, 285, 285, 287, 
  // 3982
  284, 286, 286, 287, 
  // 3986
  285, 282, 282, 288, 
  // 3990
  285, 284, 284, 288, 
  // 3994
  285, 285, 285, 288, 
  // 3998
  285, 286, 286, 288, 
  // 4002
  286, 282, 282, 289, 
  // 4006
  286, 284, 284, 289, 
  // 4010
  286, 285, 285, 289, 
  // 4014
  286, 286, 286, 289, 
  // 4018
  127, 290, 69, 61, 
  // 4022
  107, 290, 69, 61, 
  // 4026
  112, 290, 69, 61, 
  // 4030
  127, 290, 69, 22, 
  // 4034
  107, 290, 69, 22, 
  // 4038
  112, 290, 69, 22, 
  // 4042
  127, 291, 69, 105, 
  // 4046
  107, 291, 69, 105, 
  // 4050
  112, 291, 69, 105, 
  // 4054
  127, 291, 69, 125, 
  // 4058
  107, 291, 69, 125, 
  // 4062
  112, 291, 69, 125, 
  // 4066
  127, 292, 69, 105, 
  // 4070
  107, 292, 69, 105, 
  // 4074
  112, 292, 69, 105, 
  // 4078
  127, 292, 69, 125, 
  // 4082
  107, 292, 69, 125, 
  // 4086
  112, 292, 69, 125, 
  // 4090
  127, 293, 69, 107, 
  // 4094
  107, 293, 69, 107, 
  // 4098
  112, 293, 69, 107, 
  // 4102
  127, 293, 69, 127, 
  // 4106
  107, 293, 69, 127, 
  // 4110
  112, 293, 69, 127, 
  // 4114
  127, 294, 69, 107, 
  // 4118
  107, 294, 69, 107, 
  // 4122
  112, 294, 69, 107, 
  // 4126
  127, 294, 69, 127, 
  // 4130
  107, 294, 69, 127, 
  // 4134
  112, 294, 69, 127, 
  // 4138
  22, 295, 69, 105, 
  // 4142
  22, 296, 69, 107, 
  // 4146
  22, 295, 69, 125, 
  // 4150
  22, 296, 69, 127, 
  // 4154
  127, 291, 105, 
  // 4157
  107, 291, 105, 
  // 4160
  112, 291, 105, 
  // 4163
  127, 293, 107, 
  // 4166
  107, 293, 107, 
  // 4169
  112, 293, 107, 
  // 4172
  127, 290, 61, 
  // 4175
  107, 290, 61, 
  // 4178
  112, 290, 61, 
  // 4181
  22, 295, 105, 
  // 4184
  22, 296, 107, 
  // 4187
  127, 292, 105, 
  // 4190
  107, 292, 105, 
  // 4193
  112, 292, 105, 
  // 4196
  127, 294, 107, 
  // 4199
  107, 294, 107, 
  // 4202
  112, 294, 107, 
  // 4205
  127, 297, 61, 
  // 4208
  107, 297, 61, 
  // 4211
  112, 297, 61, 
  // 4214
  127, 298, 105, 
  // 4217
  107, 298, 105, 
  // 4220
  112, 298, 105, 
  // 4223
  127, 299, 105, 
  // 4226
  107, 299, 105, 
  // 4229
  112, 299, 105, 
  // 4232
  127, 300, 107, 
  // 4235
  107, 300, 107, 
  // 4238
  112, 300, 107, 
  // 4241
  127, 301, 107, 
  // 4244
  107, 301, 107, 
  // 4247
  112, 301, 107, 
  // 4250
  127, 302, 61, 
  // 4253
  107, 302, 61, 
  // 4256
  112, 302, 61, 
  // 4259
  127, 303, 61, 
  // 4262
  107, 303, 61, 
  // 4265
  112, 303, 61, 
  // 4268
  22, 304, 105, 
  // 4271
  22, 305, 107, 
  // 4274
  78, 306, 105, 127, 
  // 4278
  78, 306, 105, 107, 
  // 4282
  78, 306, 105, 112, 
  // 4286
  78, 307, 107, 127, 
  // 4290
  78, 307, 107, 107, 
  // 4294
  78, 307, 107, 112, 
  // 4298
  78, 308, 61, 127, 
  // 4302
  78, 308, 61, 107, 
  // 4306
  78, 308, 61, 112, 
  // 4310
  78, 310, 105, 127, 
  // 4314
  78, 310, 105, 107, 
  // 4318
  78, 310, 105, 112, 
  // 4322
  78, 311, 107, 127, 
  // 4326
  78, 311, 107, 107, 
  // 4330
  78, 311, 107, 112, 
  // 4334
  78, 312, 105, 22, 
  // 4338
  78, 313, 107, 22, 
  // 4342
  78, 309, 61, 127, 
  // 4346
  78, 309, 61, 107, 
  // 4350
  78, 309, 61, 112, 
  // 4354
  78, 298, 105, 127, 
  // 4358
  78, 298, 105, 107, 
  // 4362
  78, 298, 105, 112, 
  // 4366
  78, 301, 107, 127, 
  // 4370
  78, 301, 107, 107, 
  // 4374
  78, 301, 107, 112, 
  // 4378
  78, 302, 61, 127, 
  // 4382
  78, 302, 61, 107, 
  // 4386
  78, 302, 61, 112, 
  // 4390
  78, 303, 61, 127, 
  // 4394
  78, 303, 61, 107, 
  // 4398
  78, 303, 61, 112, 
  // 4402
  78, 299, 105, 127, 
  // 4406
  78, 299, 105, 107, 
  // 4410
  78, 299, 105, 112, 
  // 4414
  78, 300, 107, 127, 
  // 4418
  78, 300, 107, 107, 
  // 4422
  48, 48, 
  // 4424
  78, 300, 107, 112, 
  // 4428
  78, 304, 105, 22, 
  // 4432
  78, 305, 107, 22, 
  // 4436
  61, 290, 
  // 4438
  61, 291, 
  // 4440
  61, 293, 
  // 4442
  105, 291, 
  // 4444
  107, 293, 
  // 4446
  71, 292, 
  // 4448
  80, 80, 
  // 4450
  61, 297, 
  // 4452
  81, 81, 
  // 4454
  61, 292, 
  // 4456
  61, 294, 
  // 4458
  61, 295, 
  // 4460
  61, 296, 
  // 4462
  82, 82, 
  // 4464
  105, 294, 
  // 4466
  105, 295, 
  // 4468
  105, 296, 
  // 4470
  71, 294, 
  // 4472
  83, 83, 
  // 4474
  71, 296, 
  // 4476
  61, 308, 
  // 4478
  61, 309, 
  // 4480
  61, 306, 
  // 4482
  84, 84, 
  // 4484
  61, 311, 
  // 4486
  61, 310, 
  // 4488
  61, 307, 
  // 4490
  61, 312, 
  // 4492
  61, 313, 
  // 4494
  105, 306, 
  // 4496
  105, 307, 
  // 4498
  105, 312, 
  // 4500
  105, 313, 
  // 4502
  107, 311, 
  // 4504
  71, 310, 
  // 4506
  71, 307, 
  // 4508
  71, 313, 
  // 4510
  61, 302, 
  // 4512
  61, 303, 
  // 4514
  61, 298, 
  // 4516
  61, 300, 
  // 4518
  61, 299, 
  // 4520
  61, 301, 
  // 4522
  61, 304, 
  // 4524
  61, 305, 
  // 4526
  105, 298, 
  // 4528
  105, 301, 
  // 4530
  105, 304, 
  // 4532
  105, 305, 
  // 4534
  107, 300, 
  // 4536
  71, 299, 
  // 4538
  71, 301, 
  // 4540
  71, 305, 
  // 4542
  82, 291, 69, 105, 
  // 4546
  82, 293, 69, 107, 
  // 4550
  82, 290, 69, 61, 
  // 4554
  82, 292, 69, 105, 
  // 4558
  82, 294, 69, 107, 
  // 4562
  82, 291, 69, 125, 
  // 4566
  82, 292, 69, 125, 
  // 4570
  82, 293, 69, 127, 
  // 4574
  82, 294, 69, 127, 
  // 4578
  82, 290, 69, 22, 
  // 4582
  82, 291, 105, 
  // 4585
  82, 293, 107, 
  // 4588
  82, 290, 61, 
  // 4591
  82, 292, 105, 
  // 4594
  82, 294, 107, 
  // 4597
  82, 297, 61, 
  // 4600
  82, 298, 105, 
  // 4603
  82, 299, 105, 
  // 4606
  82, 300, 107, 
  // 4609
  82, 301, 107, 
  // 4612
  82, 302, 61, 
  // 4615
  82, 303, 61, 
  // 4618
  78, 306, 105, 82, 
  // 4622
  78, 307, 107, 82, 
  // 4626
  78, 308, 61, 82, 
  // 4630
  78, 309, 61, 82, 
  // 4634
  78, 310, 105, 82, 
  // 4638
  78, 311, 107, 82, 
  // 4642
  78, 298, 105, 82, 
  // 4646
  78, 301, 107, 82, 
  // 4650
  78, 302, 61, 82, 
  // 4654
  78, 303, 61, 82, 
  // 4658
  78, 299, 105, 82, 
  // 4662
  78, 300, 107, 82, 
  // 4666
  62, 62, 71, 
  // 4669
  62, 62, 71, 71, 
  // 4673
  62, 62, 71, 71, 71, 
  // 4678
  62, 62, 
  // 4680
  16, 67, 
  // 4682
  61, 66, 74, 315, 316, 
  // 4687
  78, 18, 
  // 4689
  18, 
  // 4690
  16, 18, 
  // 4692
  78, 18, 61, 
  // 4695
  66, 
  // 4696
  127, 291, 69, 125, 22, 
  // 4701
  127, 291, 69, 125, 125, 125, 
  // 4707
  107, 291, 69, 125, 22, 
  // 4712
  107, 291, 69, 125, 125, 125, 
  // 4718
  112, 291, 69, 125, 22, 
  // 4723
  112, 291, 69, 125, 125, 125, 
  // 4729
  22, 295, 69, 125, 22, 
  // 4734
  22, 295, 69, 125, 125, 125, 
  // 4740
  127, 290, 69, 22, 22, 
  // 4745
  127, 290, 69, 22, 22, 22, 
  // 4751
  107, 290, 69, 22, 22, 
  // 4756
  107, 290, 69, 22, 22, 22, 
  // 4762
  112, 290, 69, 22, 22, 
  // 4767
  112, 290, 69, 22, 22, 22, 
  // 4773
  127, 293, 69, 127, 127, 127, 
  // 4779
  127, 293, 69, 127, 22, 
  // 4784
  107, 293, 69, 127, 127, 127, 
  // 4790
  112, 293, 69, 127, 127, 127, 
  // 4796
  127, 292, 69, 125, 22, 
  // 4801
  127, 292, 69, 125, 22, 22, 
  // 4807
  107, 292, 69, 125, 22, 
  // 4812
  107, 292, 69, 125, 22, 22, 
  // 4818
  112, 292, 69, 125, 22, 
  // 4823
  112, 292, 69, 125, 22, 22, 
  // 4829
  127, 294, 69, 127, 22, 
  // 4834
  127, 294, 69, 127, 125, 125, 
  // 4840
  107, 294, 69, 127, 22, 
  // 4845
  107, 294, 69, 127, 125, 125, 
  // 4851
  112, 294, 69, 127, 22, 
  // 4856
  112, 294, 69, 127, 125, 125, 
  // 4862
  112, 296, 69, 127, 22, 
  // 4867
  112, 296, 69, 127, 125, 125, 
  // 4873
  78, 306, 105, 61, 127, 
  // 4878
  78, 306, 105, 61, 107, 
  // 4883
  78, 306, 105, 61, 112, 
  // 4888
  78, 312, 105, 61, 22, 
  // 4893
  78, 308, 61, 61, 127, 
  // 4898
  78, 308, 61, 61, 107, 
  // 4903
  78, 308, 61, 61, 112, 
  // 4908
  78, 310, 105, 61, 127, 
  // 4913
  78, 310, 105, 61, 107, 
  // 4918
  78, 310, 105, 61, 112, 
  // 4923
  78, 307, 107, 61, 127, 
  // 4928
  78, 307, 107, 61, 107, 
  // 4933
  78, 307, 107, 61, 112, 
  // 4938
  78, 313, 107, 61, 22, 
  // 4943
  78, 311, 107, 61, 127, 
  // 4948
  78, 311, 107, 61, 107, 
  // 4953
  78, 311, 107, 61, 112, 
  // 4958
  127, 317, 105, 61, 
  // 4962
  107, 317, 105, 61, 
  // 4966
  112, 317, 105, 61, 
  // 4970
  127, 318, 107, 61, 
  // 4974
  107, 318, 107, 61, 
  // 4978
  112, 318, 107, 61, 
  // 4982
  22, 319, 105, 61, 
  // 4986
  22, 320, 107, 61, 
  // 4990
  127, 321, 105, 61, 
  // 4994
  107, 321, 105, 61, 
  // 4998
  112, 321, 105, 61, 
  // 5002
  127, 322, 107, 61, 
  // 5006
  107, 322, 107, 61, 
  // 5010
  112, 322, 107, 61, 
  // 5014
  22, 323, 105, 61, 
  // 5018
  22, 324, 107, 61, 
  // 5022
  61, 317, 
  // 5024
  105, 317, 
  // 5026
  71, 318, 
  // 5028
  61, 318, 
  // 5030
  105, 318, 
  // 5032
  61, 319, 
  // 5034
  105, 319, 
  // 5036
  61, 320, 
  // 5038
  48, 17, 
  // 5040
  105, 320, 
  // 5042
  71, 320, 
  // 5044
  61, 325, 
  // 5046
  80, 85, 
  // 5048
  105, 325, 
  // 5050
  61, 326, 
  // 5052
  81, 86, 
  // 5054
  105, 326, 
  // 5056
  61, 327, 
  // 5058
  105, 327, 
  // 5060
  82, 87, 
  // 5062
  61, 328, 
  // 5064
  105, 328, 
  // 5066
  71, 326, 
  // 5068
  71, 328, 
  // 5070
  83, 88, 
  // 5072
  61, 321, 
  // 5074
  105, 321, 
  // 5076
  61, 322, 
  // 5078
  84, 89, 
  // 5080
  105, 322, 
  // 5082
  61, 323, 
  // 5084
  105, 323, 
  // 5086
  61, 324, 
  // 5088
  105, 324, 
  // 5090
  71, 322, 
  // 5092
  71, 324, 
  // 5094
  62, 62, 74, 
  // 5097
  74, 92, 92, 
  // 5100
  61, 87, 87, 
  // 5103
  74, 92, 92, 74, 
  // 5107
  61, 87, 87, 61, 
  // 5111
  74, 100, 100, 74, 
  // 5115
  61, 95, 95, 61, 
  // 5119
  48, 72, 
  // 5121
  80, 90, 
  // 5123
  81, 91, 
  // 5125
  82, 92, 
  // 5127
  83, 93, 
  // 5129
  84, 94, 
  // 5131
  48, 70, 
  // 5133
  80, 95, 
  // 5135
  81, 96, 
  // 5137
  82, 97, 
  // 5139
  83, 98, 
  // 5141
  84, 99, 
  // 5143
  48, 77, 
  // 5145
  80, 100, 
  // 5147
  81, 101, 
  // 5149
  82, 102, 
  // 5151
  83, 103, 
  // 5153
  84, 104, 
};

static const OpenCLBuiltinStruct BuiltinTable[] = {
  // 1: convert_half2_rtp, convert_half2_rtz, convert_half2, convert_half2_rte, convert_half2_rtn, 
  { 0, 2, 0, 1, 0, 15, 100, 0 },
  { 16, 2, 0, 1, 0, 15, 100, 0 },
  { 34, 2, 0, 1, 0, 15, 100, 0 },
  { 50, 2, 0, 1, 0, 15, 100, 0 },
  { 3686, 2, 0, 1, 0, 15, 100, 0 },
  { 3817, 2, 0, 1, 0, 15, 100, 0 },
  { 4448, 2, 0, 1, 0, 15, 100, 0 },
  { 5046, 2, 0, 1, 0, 15, 100, 0 },
  { 5121, 2, 0, 1, 0, 15, 100, 0 },
  { 5133, 2, 0, 1, 0, 15, 100, 0 },
  { 5145, 2, 0, 1, 0, 15, 100, 0 },
  // 12: convert_half3_rtp, convert_half3_rtz, convert_half3, convert_half3_rte, convert_half3_rtn, 
  { 2, 2, 0, 1, 0, 15, 100, 0 },
  { 18, 2, 0, 1, 0, 15, 100, 0 },
  { 36, 2, 0, 1, 0, 15, 100, 0 },
  { 52, 2, 0, 1, 0, 15, 100, 0 },
  { 3688, 2, 0, 1, 0, 15, 100, 0 },
  { 3831, 2, 0, 1, 0, 15, 100, 0 },
  { 4452, 2, 0, 1, 0, 15, 100, 0 },
  { 5052, 2, 0, 1, 0, 15, 100, 0 },
  { 5123, 2, 0, 1, 0, 15, 100, 0 },
  { 5135, 2, 0, 1, 0, 15, 100, 0 },
  { 5147, 2, 0, 1, 0, 15, 100, 0 },
  // 23: convert_half4_rtp, convert_half4_rtz, convert_half4, convert_half4_rte, convert_half4_rtn, 
  { 4, 2, 0, 1, 0, 15, 100, 0 },
  { 20, 2, 0, 1, 0, 15, 100, 0 },
  { 38, 2, 0, 1, 0, 15, 100, 0 },
  { 54, 2, 0, 1, 0, 15, 100, 0 },
  { 3690, 2, 0, 1, 0, 15, 100, 0 },
  { 3852, 2, 0, 1, 0, 15, 100, 0 },
  { 4462, 2, 0, 1, 0, 15, 100, 0 },
  { 5060, 2, 0, 1, 0, 15, 100, 0 },
  { 5125, 2, 0, 1, 0, 15, 100, 0 },
  { 5137, 2, 0, 1, 0, 15, 100, 0 },
  { 5149, 2, 0, 1, 0, 15, 100, 0 },
  // 34: convert_half8_rtp, convert_half8_rtz, convert_half8, convert_half8_rte, convert_half8_rtn, 
  { 6, 2, 0, 1, 0, 15, 100, 0 },
  { 22, 2, 0, 1, 0, 15, 100, 0 },
  { 40, 2, 0, 1, 0, 15, 100, 0 },
  { 56, 2, 0, 1, 0, 15, 100, 0 },
  { 3692, 2, 0, 1, 0, 15, 100, 0 },
  { 3866, 2, 0, 1, 0, 15, 100, 0 },
  { 4472, 2, 0, 1, 0, 15, 100, 0 },
  { 5070, 2, 0, 1, 0, 15, 100, 0 },
  { 5127, 2, 0, 1, 0, 15, 100, 0 },
  { 5139, 2, 0, 1, 0, 15, 100, 0 },
  { 5151, 2, 0, 1, 0, 15, 100, 0 },
  // 45: convert_half16_rtp, convert_half16_rtz, convert_half16, convert_half16_rte, convert_half16_rtn, 
  { 8, 2, 0, 1, 0, 15, 100, 0 },
  { 24, 2, 0, 1, 0, 15, 100, 0 },
  { 42, 2, 0, 1, 0, 15, 100, 0 },
  { 58, 2, 0, 1, 0, 15, 100, 0 },
  { 3694, 2, 0, 1, 0, 15, 100, 0 },
  { 3883, 2, 0, 1, 0, 15, 100, 0 },
  { 4482, 2, 0, 1, 0, 15, 100, 0 },
  { 5078, 2, 0, 1, 0, 15, 100, 0 },
  { 5129, 2, 0, 1, 0, 15, 100, 0 },
  { 5141, 2, 0, 1, 0, 15, 100, 0 },
  { 5153, 2, 0, 1, 0, 15, 100, 0 },
  // 56: convert_half_rtz, convert_half, convert_half_rte, convert_half_rtn, convert_half_rtp, 
  { 10, 2, 0, 1, 0, 15, 100, 0 },
  { 14, 2, 0, 1, 0, 15, 100, 0 },
  { 32, 2, 0, 1, 0, 15, 100, 0 },
  { 48, 2, 0, 1, 0, 15, 100, 0 },
  { 3684, 2, 0, 1, 0, 15, 100, 0 },
  { 3810, 2, 0, 1, 0, 15, 100, 0 },
  { 4422, 2, 0, 1, 0, 15, 100, 0 },
  { 5038, 2, 0, 1, 0, 15, 100, 0 },
  { 5119, 2, 0, 1, 0, 15, 100, 0 },
  { 5131, 2, 0, 1, 0, 15, 100, 0 },
  { 5143, 2, 0, 1, 0, 15, 100, 0 },
  // 67: convert_float16, convert_float16_rte, convert_float16_rtn, convert_float16_rtp, convert_float16_rtz, 
  { 12, 2, 0, 1, 0, 15, 100, 0 },
  { 130, 2, 0, 1, 0, 15, 100, 0 },
  { 214, 2, 0, 1, 0, 15, 100, 0 },
  { 286, 2, 0, 1, 0, 15, 100, 0 },
  { 370, 2, 0, 1, 0, 15, 100, 0 },
  { 454, 2, 0, 1, 0, 15, 100, 0 },
  { 538, 2, 0, 1, 0, 15, 100, 0 },
  { 622, 2, 0, 1, 0, 15, 100, 0 },
  { 706, 2, 0, 1, 0, 15, 100, 0 },
  { 778, 2, 0, 1, 0, 15, 100, 0 },
  { 1545, 2, 0, 1, 0, 15, 100, 0 },
  // 78: convert_float_rte, convert_float_rtn, convert_float_rtp, convert_float_rtz, convert_float, 
  { 26, 2, 0, 1, 0, 15, 100, 0 },
  { 96, 2, 0, 1, 0, 15, 100, 0 },
  { 180, 2, 0, 1, 0, 15, 100, 0 },
  { 264, 2, 0, 1, 0, 15, 100, 0 },
  { 348, 2, 0, 1, 0, 15, 100, 0 },
  { 420, 2, 0, 1, 0, 15, 100, 0 },
  { 504, 2, 0, 1, 0, 15, 100, 0 },
  { 588, 2, 0, 1, 0, 15, 100, 0 },
  { 672, 2, 0, 1, 0, 15, 100, 0 },
  { 756, 2, 0, 1, 0, 15, 100, 0 },
  { 1116, 2, 0, 1, 0, 15, 100, 0 },
  // 89: convert_float2_rte, convert_float2_rtn, convert_float2_rtp, convert_float2_rtz, convert_float2, 
  { 28, 2, 0, 1, 0, 15, 100, 0 },
  { 98, 2, 0, 1, 0, 15, 100, 0 },
  { 182, 2, 0, 1, 0, 15, 100, 0 },
  { 266, 2, 0, 1, 0, 15, 100, 0 },
  { 350, 2, 0, 1, 0, 15, 100, 0 },
  { 434, 2, 0, 1, 0, 15, 100, 0 },
  { 518, 2, 0, 1, 0, 15, 100, 0 },
  { 590, 2, 0, 1, 0, 15, 100, 0 },
  { 674, 2, 0, 1, 0, 15, 100, 0 },
  { 758, 2, 0, 1, 0, 15, 100, 0 },
  { 1154, 2, 0, 1, 0, 15, 100, 0 },
  // 100: convert_float3_rte, convert_float3_rtn, convert_float3_rtp, convert_float3_rtz, convert_float3, 
  { 30, 2, 0, 1, 0, 15, 100, 0 },
  { 112, 2, 0, 1, 0, 15, 100, 0 },
  { 196, 2, 0, 1, 0, 15, 100, 0 },
  { 268, 2, 0, 1, 0, 15, 100, 0 },
  { 352, 2, 0, 1, 0, 15, 100, 0 },
  { 436, 2, 0, 1, 0, 15, 100, 0 },
  { 520, 2, 0, 1, 0, 15, 100, 0 },
  { 604, 2, 0, 1, 0, 15, 100, 0 },
  { 688, 2, 0, 1, 0, 15, 100, 0 },
  { 760, 2, 0, 1, 0, 15, 100, 0 },
  { 1228, 2, 0, 1, 0, 15, 100, 0 },
  // 111: convert_float4_rte, convert_float4_rtn, convert_float4_rtp, convert_float4_rtz, convert_float4, 
  { 44, 2, 0, 1, 0, 15, 100, 0 },
  { 114, 2, 0, 1, 0, 15, 100, 0 },
  { 198, 2, 0, 1, 0, 15, 100, 0 },
  { 282, 2, 0, 1, 0, 15, 100, 0 },
  { 366, 2, 0, 1, 0, 15, 100, 0 },
  { 438, 2, 0, 1, 0, 15, 100, 0 },
  { 522, 2, 0, 1, 0, 15, 100, 0 },
  { 606, 2, 0, 1, 0, 15, 100, 0 },
  { 690, 2, 0, 1, 0, 15, 100, 0 },
  { 774, 2, 0, 1, 0, 15, 100, 0 },
  { 1266, 2, 0, 1, 0, 15, 100, 0 },
  // 122: convert_float8_rte, convert_float8_rtn, convert_float8_rtp, convert_float8_rtz, convert_float8, 
  { 46, 2, 0, 1, 0, 15, 100, 0 },
  { 116, 2, 0, 1, 0, 15, 100, 0 },
  { 200, 2, 0, 1, 0, 15, 100, 0 },
  { 284, 2, 0, 1, 0, 15, 100, 0 },
  { 368, 2, 0, 1, 0, 15, 100, 0 },
  { 452, 2, 0, 1, 0, 15, 100, 0 },
  { 536, 2, 0, 1, 0, 15, 100, 0 },
  { 608, 2, 0, 1, 0, 15, 100, 0 },
  { 692, 2, 0, 1, 0, 15, 100, 0 },
  { 776, 2, 0, 1, 0, 15, 100, 0 },
  { 1322, 2, 0, 1, 0, 15, 100, 0 },
  // 133: convert_char, convert_char_rte, convert_char_rtn, convert_char_rtp, convert_char_rtz, convert_char_sat, convert_char_sat_rte, convert_char_sat_rtn, convert_char_sat_rtp, convert_char_sat_rtz, 
  { 60, 2, 0, 1, 0, 15, 100, 0 },
  { 72, 2, 0, 1, 0, 15, 100, 0 },
  { 84, 2, 0, 1, 0, 15, 100, 0 },
  { 100, 2, 0, 1, 0, 15, 100, 0 },
  { 118, 2, 0, 1, 0, 15, 100, 0 },
  { 132, 2, 0, 1, 0, 15, 100, 0 },
  { 144, 2, 0, 1, 0, 15, 100, 0 },
  { 156, 2, 0, 1, 0, 15, 100, 0 },
  { 168, 2, 0, 1, 0, 15, 100, 0 },
  { 184, 2, 0, 1, 0, 15, 100, 0 },
  { 202, 2, 0, 1, 0, 15, 100, 0 },
  // 144: convert_char2, convert_char2_rte, convert_char2_rtn, convert_char2_rtp, convert_char2_rtz, convert_char2_sat, convert_char2_sat_rte, convert_char2_sat_rtn, convert_char2_sat_rtp, convert_char2_sat_rtz, 
  { 62, 2, 0, 1, 0, 15, 100, 0 },
  { 74, 2, 0, 1, 0, 15, 100, 0 },
  { 86, 2, 0, 1, 0, 15, 100, 0 },
  { 102, 2, 0, 1, 0, 15, 100, 0 },
  { 120, 2, 0, 1, 0, 15, 100, 0 },
  { 134, 2, 0, 1, 0, 15, 100, 0 },
  { 146, 2, 0, 1, 0, 15, 100, 0 },
  { 158, 2, 0, 1, 0, 15, 100, 0 },
  { 170, 2, 0, 1, 0, 15, 100, 0 },
  { 186, 2, 0, 1, 0, 15, 100, 0 },
  { 204, 2, 0, 1, 0, 15, 100, 0 },
  // 155: convert_char3, convert_char3_rte, convert_char3_rtn, convert_char3_rtp, convert_char3_rtz, convert_char3_sat, convert_char3_sat_rte, convert_char3_sat_rtn, convert_char3_sat_rtp, convert_char3_sat_rtz, 
  { 64, 2, 0, 1, 0, 15, 100, 0 },
  { 76, 2, 0, 1, 0, 15, 100, 0 },
  { 88, 2, 0, 1, 0, 15, 100, 0 },
  { 104, 2, 0, 1, 0, 15, 100, 0 },
  { 122, 2, 0, 1, 0, 15, 100, 0 },
  { 136, 2, 0, 1, 0, 15, 100, 0 },
  { 148, 2, 0, 1, 0, 15, 100, 0 },
  { 160, 2, 0, 1, 0, 15, 100, 0 },
  { 172, 2, 0, 1, 0, 15, 100, 0 },
  { 188, 2, 0, 1, 0, 15, 100, 0 },
  { 206, 2, 0, 1, 0, 15, 100, 0 },
  // 166: convert_char4, convert_char4_rte, convert_char4_rtn, convert_char4_rtp, convert_char4_rtz, convert_char4_sat, convert_char4_sat_rte, convert_char4_sat_rtn, convert_char4_sat_rtp, convert_char4_sat_rtz, 
  { 66, 2, 0, 1, 0, 15, 100, 0 },
  { 78, 2, 0, 1, 0, 15, 100, 0 },
  { 90, 2, 0, 1, 0, 15, 100, 0 },
  { 106, 2, 0, 1, 0, 15, 100, 0 },
  { 124, 2, 0, 1, 0, 15, 100, 0 },
  { 138, 2, 0, 1, 0, 15, 100, 0 },
  { 150, 2, 0, 1, 0, 15, 100, 0 },
  { 162, 2, 0, 1, 0, 15, 100, 0 },
  { 174, 2, 0, 1, 0, 15, 100, 0 },
  { 190, 2, 0, 1, 0, 15, 100, 0 },
  { 208, 2, 0, 1, 0, 15, 100, 0 },
  // 177: convert_char8, convert_char8_rte, convert_char8_rtn, convert_char8_rtp, convert_char8_rtz, convert_char8_sat, convert_char8_sat_rte, convert_char8_sat_rtn, convert_char8_sat_rtp, convert_char8_sat_rtz, 
  { 68, 2, 0, 1, 0, 15, 100, 0 },
  { 80, 2, 0, 1, 0, 15, 100, 0 },
  { 92, 2, 0, 1, 0, 15, 100, 0 },
  { 108, 2, 0, 1, 0, 15, 100, 0 },
  { 126, 2, 0, 1, 0, 15, 100, 0 },
  { 140, 2, 0, 1, 0, 15, 100, 0 },
  { 152, 2, 0, 1, 0, 15, 100, 0 },
  { 164, 2, 0, 1, 0, 15, 100, 0 },
  { 176, 2, 0, 1, 0, 15, 100, 0 },
  { 192, 2, 0, 1, 0, 15, 100, 0 },
  { 210, 2, 0, 1, 0, 15, 100, 0 },
  // 188: convert_char16, convert_char16_rte, convert_char16_rtn, convert_char16_rtp, convert_char16_rtz, convert_char16_sat, convert_char16_sat_rte, convert_char16_sat_rtn, convert_char16_sat_rtp, convert_char16_sat_rtz, 
  { 70, 2, 0, 1, 0, 15, 100, 0 },
  { 82, 2, 0, 1, 0, 15, 100, 0 },
  { 94, 2, 0, 1, 0, 15, 100, 0 },
  { 110, 2, 0, 1, 0, 15, 100, 0 },
  { 128, 2, 0, 1, 0, 15, 100, 0 },
  { 142, 2, 0, 1, 0, 15, 100, 0 },
  { 154, 2, 0, 1, 0, 15, 100, 0 },
  { 166, 2, 0, 1, 0, 15, 100, 0 },
  { 178, 2, 0, 1, 0, 15, 100, 0 },
  { 194, 2, 0, 1, 0, 15, 100, 0 },
  { 212, 2, 0, 1, 0, 15, 100, 0 },
  // 199: convert_uchar, convert_uchar_rte, convert_uchar_rtn, convert_uchar_rtp, convert_uchar_rtz, convert_uchar_sat, convert_uchar_sat_rte, convert_uchar_sat_rtn, convert_uchar_sat_rtp, convert_uchar_sat_rtz, 
  { 216, 2, 0, 1, 0, 15, 100, 0 },
  { 228, 2, 0, 1, 0, 15, 100, 0 },
  { 240, 2, 0, 1, 0, 15, 100, 0 },
  { 252, 2, 0, 1, 0, 15, 100, 0 },
  { 270, 2, 0, 1, 0, 15, 100, 0 },
  { 288, 2, 0, 1, 0, 15, 100, 0 },
  { 300, 2, 0, 1, 0, 15, 100, 0 },
  { 312, 2, 0, 1, 0, 15, 100, 0 },
  { 324, 2, 0, 1, 0, 15, 100, 0 },
  { 336, 2, 0, 1, 0, 15, 100, 0 },
  { 354, 2, 0, 1, 0, 15, 100, 0 },
  // 210: convert_uchar2, convert_uchar2_rte, convert_uchar2_rtn, convert_uchar2_rtp, convert_uchar2_rtz, convert_uchar2_sat, convert_uchar2_sat_rte, convert_uchar2_sat_rtn, convert_uchar2_sat_rtp, convert_uchar2_sat_rtz, 
  { 218, 2, 0, 1, 0, 15, 100, 0 },
  { 230, 2, 0, 1, 0, 15, 100, 0 },
  { 242, 2, 0, 1, 0, 15, 100, 0 },
  { 254, 2, 0, 1, 0, 15, 100, 0 },
  { 272, 2, 0, 1, 0, 15, 100, 0 },
  { 290, 2, 0, 1, 0, 15, 100, 0 },
  { 302, 2, 0, 1, 0, 15, 100, 0 },
  { 314, 2, 0, 1, 0, 15, 100, 0 },
  { 326, 2, 0, 1, 0, 15, 100, 0 },
  { 338, 2, 0, 1, 0, 15, 100, 0 },
  { 356, 2, 0, 1, 0, 15, 100, 0 },
  // 221: convert_uchar3, convert_uchar3_rte, convert_uchar3_rtn, convert_uchar3_rtp, convert_uchar3_rtz, convert_uchar3_sat, convert_uchar3_sat_rte, convert_uchar3_sat_rtn, convert_uchar3_sat_rtp, convert_uchar3_sat_rtz, 
  { 220, 2, 0, 1, 0, 15, 100, 0 },
  { 232, 2, 0, 1, 0, 15, 100, 0 },
  { 244, 2, 0, 1, 0, 15, 100, 0 },
  { 256, 2, 0, 1, 0, 15, 100, 0 },
  { 274, 2, 0, 1, 0, 15, 100, 0 },
  { 292, 2, 0, 1, 0, 15, 100, 0 },
  { 304, 2, 0, 1, 0, 15, 100, 0 },
  { 316, 2, 0, 1, 0, 15, 100, 0 },
  { 328, 2, 0, 1, 0, 15, 100, 0 },
  { 340, 2, 0, 1, 0, 15, 100, 0 },
  { 358, 2, 0, 1, 0, 15, 100, 0 },
  // 232: convert_uchar4, convert_uchar4_rte, convert_uchar4_rtn, convert_uchar4_rtp, convert_uchar4_rtz, convert_uchar4_sat, convert_uchar4_sat_rte, convert_uchar4_sat_rtn, convert_uchar4_sat_rtp, convert_uchar4_sat_rtz, 
  { 222, 2, 0, 1, 0, 15, 100, 0 },
  { 234, 2, 0, 1, 0, 15, 100, 0 },
  { 246, 2, 0, 1, 0, 15, 100, 0 },
  { 258, 2, 0, 1, 0, 15, 100, 0 },
  { 276, 2, 0, 1, 0, 15, 100, 0 },
  { 294, 2, 0, 1, 0, 15, 100, 0 },
  { 306, 2, 0, 1, 0, 15, 100, 0 },
  { 318, 2, 0, 1, 0, 15, 100, 0 },
  { 330, 2, 0, 1, 0, 15, 100, 0 },
  { 342, 2, 0, 1, 0, 15, 100, 0 },
  { 360, 2, 0, 1, 0, 15, 100, 0 },
  // 243: convert_uchar8, convert_uchar8_rte, convert_uchar8_rtn, convert_uchar8_rtp, convert_uchar8_rtz, convert_uchar8_sat, convert_uchar8_sat_rte, convert_uchar8_sat_rtn, convert_uchar8_sat_rtp, convert_uchar8_sat_rtz, 
  { 224, 2, 0, 1, 0, 15, 100, 0 },
  { 236, 2, 0, 1, 0, 15, 100, 0 },
  { 248, 2, 0, 1, 0, 15, 100, 0 },
  { 260, 2, 0, 1, 0, 15, 100, 0 },
  { 278, 2, 0, 1, 0, 15, 100, 0 },
  { 296, 2, 0, 1, 0, 15, 100, 0 },
  { 308, 2, 0, 1, 0, 15, 100, 0 },
  { 320, 2, 0, 1, 0, 15, 100, 0 },
  { 332, 2, 0, 1, 0, 15, 100, 0 },
  { 344, 2, 0, 1, 0, 15, 100, 0 },
  { 362, 2, 0, 1, 0, 15, 100, 0 },
  // 254: convert_uchar16, convert_uchar16_rte, convert_uchar16_rtn, convert_uchar16_rtp, convert_uchar16_rtz, convert_uchar16_sat, convert_uchar16_sat_rte, convert_uchar16_sat_rtn, convert_uchar16_sat_rtp, convert_uchar16_sat_rtz, 
  { 226, 2, 0, 1, 0, 15, 100, 0 },
  { 238, 2, 0, 1, 0, 15, 100, 0 },
  { 250, 2, 0, 1, 0, 15, 100, 0 },
  { 262, 2, 0, 1, 0, 15, 100, 0 },
  { 280, 2, 0, 1, 0, 15, 100, 0 },
  { 298, 2, 0, 1, 0, 15, 100, 0 },
  { 310, 2, 0, 1, 0, 15, 100, 0 },
  { 322, 2, 0, 1, 0, 15, 100, 0 },
  { 334, 2, 0, 1, 0, 15, 100, 0 },
  { 346, 2, 0, 1, 0, 15, 100, 0 },
  { 364, 2, 0, 1, 0, 15, 100, 0 },
  // 265: convert_short, convert_short_rte, convert_short_rtn, convert_short_rtp, convert_short_rtz, convert_short_sat, convert_short_sat_rte, convert_short_sat_rtn, convert_short_sat_rtp, convert_short_sat_rtz, 
  { 372, 2, 0, 1, 0, 15, 100, 0 },
  { 384, 2, 0, 1, 0, 15, 100, 0 },
  { 396, 2, 0, 1, 0, 15, 100, 0 },
  { 408, 2, 0, 1, 0, 15, 100, 0 },
  { 422, 2, 0, 1, 0, 15, 100, 0 },
  { 440, 2, 0, 1, 0, 15, 100, 0 },
  { 456, 2, 0, 1, 0, 15, 100, 0 },
  { 468, 2, 0, 1, 0, 15, 100, 0 },
  { 480, 2, 0, 1, 0, 15, 100, 0 },
  { 492, 2, 0, 1, 0, 15, 100, 0 },
  { 506, 2, 0, 1, 0, 15, 100, 0 },
  // 276: convert_short2, convert_short2_rte, convert_short2_rtn, convert_short2_rtp, convert_short2_rtz, convert_short2_sat, convert_short2_sat_rte, convert_short2_sat_rtn, convert_short2_sat_rtp, convert_short2_sat_rtz, 
  { 374, 2, 0, 1, 0, 15, 100, 0 },
  { 386, 2, 0, 1, 0, 15, 100, 0 },
  { 398, 2, 0, 1, 0, 15, 100, 0 },
  { 410, 2, 0, 1, 0, 15, 100, 0 },
  { 424, 2, 0, 1, 0, 15, 100, 0 },
  { 442, 2, 0, 1, 0, 15, 100, 0 },
  { 458, 2, 0, 1, 0, 15, 100, 0 },
  { 470, 2, 0, 1, 0, 15, 100, 0 },
  { 482, 2, 0, 1, 0, 15, 100, 0 },
  { 494, 2, 0, 1, 0, 15, 100, 0 },
  { 508, 2, 0, 1, 0, 15, 100, 0 },
  // 287: convert_short3, convert_short3_rte, convert_short3_rtn, convert_short3_rtp, convert_short3_rtz, convert_short3_sat, convert_short3_sat_rte, convert_short3_sat_rtn, convert_short3_sat_rtp, convert_short3_sat_rtz, 
  { 376, 2, 0, 1, 0, 15, 100, 0 },
  { 388, 2, 0, 1, 0, 15, 100, 0 },
  { 400, 2, 0, 1, 0, 15, 100, 0 },
  { 412, 2, 0, 1, 0, 15, 100, 0 },
  { 426, 2, 0, 1, 0, 15, 100, 0 },
  { 444, 2, 0, 1, 0, 15, 100, 0 },
  { 460, 2, 0, 1, 0, 15, 100, 0 },
  { 472, 2, 0, 1, 0, 15, 100, 0 },
  { 484, 2, 0, 1, 0, 15, 100, 0 },
  { 496, 2, 0, 1, 0, 15, 100, 0 },
  { 510, 2, 0, 1, 0, 15, 100, 0 },
  // 298: convert_short4, convert_short4_rte, convert_short4_rtn, convert_short4_rtp, convert_short4_rtz, convert_short4_sat, convert_short4_sat_rte, convert_short4_sat_rtn, convert_short4_sat_rtp, convert_short4_sat_rtz, 
  { 378, 2, 0, 1, 0, 15, 100, 0 },
  { 390, 2, 0, 1, 0, 15, 100, 0 },
  { 402, 2, 0, 1, 0, 15, 100, 0 },
  { 414, 2, 0, 1, 0, 15, 100, 0 },
  { 428, 2, 0, 1, 0, 15, 100, 0 },
  { 446, 2, 0, 1, 0, 15, 100, 0 },
  { 462, 2, 0, 1, 0, 15, 100, 0 },
  { 474, 2, 0, 1, 0, 15, 100, 0 },
  { 486, 2, 0, 1, 0, 15, 100, 0 },
  { 498, 2, 0, 1, 0, 15, 100, 0 },
  { 512, 2, 0, 1, 0, 15, 100, 0 },
  // 309: convert_short8, convert_short8_rte, convert_short8_rtn, convert_short8_rtp, convert_short8_rtz, convert_short8_sat, convert_short8_sat_rte, convert_short8_sat_rtn, convert_short8_sat_rtp, convert_short8_sat_rtz, 
  { 380, 2, 0, 1, 0, 15, 100, 0 },
  { 392, 2, 0, 1, 0, 15, 100, 0 },
  { 404, 2, 0, 1, 0, 15, 100, 0 },
  { 416, 2, 0, 1, 0, 15, 100, 0 },
  { 430, 2, 0, 1, 0, 15, 100, 0 },
  { 448, 2, 0, 1, 0, 15, 100, 0 },
  { 464, 2, 0, 1, 0, 15, 100, 0 },
  { 476, 2, 0, 1, 0, 15, 100, 0 },
  { 488, 2, 0, 1, 0, 15, 100, 0 },
  { 500, 2, 0, 1, 0, 15, 100, 0 },
  { 514, 2, 0, 1, 0, 15, 100, 0 },
  // 320: convert_short16, convert_short16_rte, convert_short16_rtn, convert_short16_rtp, convert_short16_rtz, convert_short16_sat, convert_short16_sat_rte, convert_short16_sat_rtn, convert_short16_sat_rtp, convert_short16_sat_rtz, 
  { 382, 2, 0, 1, 0, 15, 100, 0 },
  { 394, 2, 0, 1, 0, 15, 100, 0 },
  { 406, 2, 0, 1, 0, 15, 100, 0 },
  { 418, 2, 0, 1, 0, 15, 100, 0 },
  { 432, 2, 0, 1, 0, 15, 100, 0 },
  { 450, 2, 0, 1, 0, 15, 100, 0 },
  { 466, 2, 0, 1, 0, 15, 100, 0 },
  { 478, 2, 0, 1, 0, 15, 100, 0 },
  { 490, 2, 0, 1, 0, 15, 100, 0 },
  { 502, 2, 0, 1, 0, 15, 100, 0 },
  { 516, 2, 0, 1, 0, 15, 100, 0 },
  // 331: convert_ushort, convert_ushort_rte, convert_ushort_rtn, convert_ushort_rtp, convert_ushort_rtz, convert_ushort_sat, convert_ushort_sat_rte, convert_ushort_sat_rtn, convert_ushort_sat_rtp, convert_ushort_sat_rtz, 
  { 524, 2, 0, 1, 0, 15, 100, 0 },
  { 540, 2, 0, 1, 0, 15, 100, 0 },
  { 552, 2, 0, 1, 0, 15, 100, 0 },
  { 564, 2, 0, 1, 0, 15, 100, 0 },
  { 576, 2, 0, 1, 0, 15, 100, 0 },
  { 592, 2, 0, 1, 0, 15, 100, 0 },
  { 610, 2, 0, 1, 0, 15, 100, 0 },
  { 624, 2, 0, 1, 0, 15, 100, 0 },
  { 636, 2, 0, 1, 0, 15, 100, 0 },
  { 648, 2, 0, 1, 0, 15, 100, 0 },
  { 660, 2, 0, 1, 0, 15, 100, 0 },
  // 342: convert_ushort2, convert_ushort2_rte, convert_ushort2_rtn, convert_ushort2_rtp, convert_ushort2_rtz, convert_ushort2_sat, convert_ushort2_sat_rte, convert_ushort2_sat_rtn, convert_ushort2_sat_rtp, convert_ushort2_sat_rtz, 
  { 526, 2, 0, 1, 0, 15, 100, 0 },
  { 542, 2, 0, 1, 0, 15, 100, 0 },
  { 554, 2, 0, 1, 0, 15, 100, 0 },
  { 566, 2, 0, 1, 0, 15, 100, 0 },
  { 578, 2, 0, 1, 0, 15, 100, 0 },
  { 594, 2, 0, 1, 0, 15, 100, 0 },
  { 612, 2, 0, 1, 0, 15, 100, 0 },
  { 626, 2, 0, 1, 0, 15, 100, 0 },
  { 638, 2, 0, 1, 0, 15, 100, 0 },
  { 650, 2, 0, 1, 0, 15, 100, 0 },
  { 662, 2, 0, 1, 0, 15, 100, 0 },
  // 353: convert_ushort3, convert_ushort3_rte, convert_ushort3_rtn, convert_ushort3_rtp, convert_ushort3_rtz, convert_ushort3_sat, convert_ushort3_sat_rte, convert_ushort3_sat_rtn, convert_ushort3_sat_rtp, convert_ushort3_sat_rtz, 
  { 528, 2, 0, 1, 0, 15, 100, 0 },
  { 544, 2, 0, 1, 0, 15, 100, 0 },
  { 556, 2, 0, 1, 0, 15, 100, 0 },
  { 568, 2, 0, 1, 0, 15, 100, 0 },
  { 580, 2, 0, 1, 0, 15, 100, 0 },
  { 596, 2, 0, 1, 0, 15, 100, 0 },
  { 614, 2, 0, 1, 0, 15, 100, 0 },
  { 628, 2, 0, 1, 0, 15, 100, 0 },
  { 640, 2, 0, 1, 0, 15, 100, 0 },
  { 652, 2, 0, 1, 0, 15, 100, 0 },
  { 664, 2, 0, 1, 0, 15, 100, 0 },
  // 364: convert_ushort4, convert_ushort4_rte, convert_ushort4_rtn, convert_ushort4_rtp, convert_ushort4_rtz, convert_ushort4_sat, convert_ushort4_sat_rte, convert_ushort4_sat_rtn, convert_ushort4_sat_rtp, convert_ushort4_sat_rtz, 
  { 530, 2, 0, 1, 0, 15, 100, 0 },
  { 546, 2, 0, 1, 0, 15, 100, 0 },
  { 558, 2, 0, 1, 0, 15, 100, 0 },
  { 570, 2, 0, 1, 0, 15, 100, 0 },
  { 582, 2, 0, 1, 0, 15, 100, 0 },
  { 598, 2, 0, 1, 0, 15, 100, 0 },
  { 616, 2, 0, 1, 0, 15, 100, 0 },
  { 630, 2, 0, 1, 0, 15, 100, 0 },
  { 642, 2, 0, 1, 0, 15, 100, 0 },
  { 654, 2, 0, 1, 0, 15, 100, 0 },
  { 666, 2, 0, 1, 0, 15, 100, 0 },
  // 375: convert_ushort8, convert_ushort8_rte, convert_ushort8_rtn, convert_ushort8_rtp, convert_ushort8_rtz, convert_ushort8_sat, convert_ushort8_sat_rte, convert_ushort8_sat_rtn, convert_ushort8_sat_rtp, convert_ushort8_sat_rtz, 
  { 532, 2, 0, 1, 0, 15, 100, 0 },
  { 548, 2, 0, 1, 0, 15, 100, 0 },
  { 560, 2, 0, 1, 0, 15, 100, 0 },
  { 572, 2, 0, 1, 0, 15, 100, 0 },
  { 584, 2, 0, 1, 0, 15, 100, 0 },
  { 600, 2, 0, 1, 0, 15, 100, 0 },
  { 618, 2, 0, 1, 0, 15, 100, 0 },
  { 632, 2, 0, 1, 0, 15, 100, 0 },
  { 644, 2, 0, 1, 0, 15, 100, 0 },
  { 656, 2, 0, 1, 0, 15, 100, 0 },
  { 668, 2, 0, 1, 0, 15, 100, 0 },
  // 386: convert_ushort16, convert_ushort16_rte, convert_ushort16_rtn, convert_ushort16_rtp, convert_ushort16_rtz, convert_ushort16_sat, convert_ushort16_sat_rte, convert_ushort16_sat_rtn, convert_ushort16_sat_rtp, convert_ushort16_sat_rtz, 
  { 534, 2, 0, 1, 0, 15, 100, 0 },
  { 550, 2, 0, 1, 0, 15, 100, 0 },
  { 562, 2, 0, 1, 0, 15, 100, 0 },
  { 574, 2, 0, 1, 0, 15, 100, 0 },
  { 586, 2, 0, 1, 0, 15, 100, 0 },
  { 602, 2, 0, 1, 0, 15, 100, 0 },
  { 620, 2, 0, 1, 0, 15, 100, 0 },
  { 634, 2, 0, 1, 0, 15, 100, 0 },
  { 646, 2, 0, 1, 0, 15, 100, 0 },
  { 658, 2, 0, 1, 0, 15, 100, 0 },
  { 670, 2, 0, 1, 0, 15, 100, 0 },
  // 397: convert_int, convert_int_rte, convert_int_rtn, convert_int_rtp, convert_int_rtz, convert_int_sat, convert_int_sat_rte, convert_int_sat_rtn, convert_int_sat_rtp, convert_int_sat_rtz, 
  { 676, 2, 0, 1, 0, 15, 100, 0 },
  { 694, 2, 0, 1, 0, 15, 100, 0 },
  { 708, 2, 0, 1, 0, 15, 100, 0 },
  { 720, 2, 0, 1, 0, 15, 100, 0 },
  { 732, 2, 0, 1, 0, 15, 100, 0 },
  { 744, 2, 0, 1, 0, 15, 100, 0 },
  { 762, 2, 0, 1, 0, 15, 100, 0 },
  { 780, 2, 0, 1, 0, 15, 100, 0 },
  { 792, 2, 0, 1, 0, 15, 100, 0 },
  { 804, 2, 0, 1, 0, 15, 100, 0 },
  { 816, 2, 0, 1, 0, 15, 100, 0 },
  // 408: convert_int2, convert_int2_rte, convert_int2_rtn, convert_int2_rtp, convert_int2_rtz, convert_int2_sat, convert_int2_sat_rte, convert_int2_sat_rtn, convert_int2_sat_rtp, convert_int2_sat_rtz, 
  { 678, 2, 0, 1, 0, 15, 100, 0 },
  { 696, 2, 0, 1, 0, 15, 100, 0 },
  { 710, 2, 0, 1, 0, 15, 100, 0 },
  { 722, 2, 0, 1, 0, 15, 100, 0 },
  { 734, 2, 0, 1, 0, 15, 100, 0 },
  { 746, 2, 0, 1, 0, 15, 100, 0 },
  { 764, 2, 0, 1, 0, 15, 100, 0 },
  { 782, 2, 0, 1, 0, 15, 100, 0 },
  { 794, 2, 0, 1, 0, 15, 100, 0 },
  { 806, 2, 0, 1, 0, 15, 100, 0 },
  { 818, 2, 0, 1, 0, 15, 100, 0 },
  // 419: convert_int3, convert_int3_rte, convert_int3_rtn, convert_int3_rtp, convert_int3_rtz, convert_int3_sat, convert_int3_sat_rte, convert_int3_sat_rtn, convert_int3_sat_rtp, convert_int3_sat_rtz, 
  { 680, 2, 0, 1, 0, 15, 100, 0 },
  { 698, 2, 0, 1, 0, 15, 100, 0 },
  { 712, 2, 0, 1, 0, 15, 100, 0 },
  { 724, 2, 0, 1, 0, 15, 100, 0 },
  { 736, 2, 0, 1, 0, 15, 100, 0 },
  { 748, 2, 0, 1, 0, 15, 100, 0 },
  { 766, 2, 0, 1, 0, 15, 100, 0 },
  { 784, 2, 0, 1, 0, 15, 100, 0 },
  { 796, 2, 0, 1, 0, 15, 100, 0 },
  { 808, 2, 0, 1, 0, 15, 100, 0 },
  { 820, 2, 0, 1, 0, 15, 100, 0 },
  // 430: convert_int4, convert_int4_rte, convert_int4_rtn, convert_int4_rtp, convert_int4_rtz, convert_int4_sat, convert_int4_sat_rte, convert_int4_sat_rtn, convert_int4_sat_rtp, convert_int4_sat_rtz, 
  { 682, 2, 0, 1, 0, 15, 100, 0 },
  { 700, 2, 0, 1, 0, 15, 100, 0 },
  { 714, 2, 0, 1, 0, 15, 100, 0 },
  { 726, 2, 0, 1, 0, 15, 100, 0 },
  { 738, 2, 0, 1, 0, 15, 100, 0 },
  { 750, 2, 0, 1, 0, 15, 100, 0 },
  { 768, 2, 0, 1, 0, 15, 100, 0 },
  { 786, 2, 0, 1, 0, 15, 100, 0 },
  { 798, 2, 0, 1, 0, 15, 100, 0 },
  { 810, 2, 0, 1, 0, 15, 100, 0 },
  { 822, 2, 0, 1, 0, 15, 100, 0 },
  // 441: convert_int8, convert_int8_rte, convert_int8_rtn, convert_int8_rtp, convert_int8_rtz, convert_int8_sat, convert_int8_sat_rte, convert_int8_sat_rtn, convert_int8_sat_rtp, convert_int8_sat_rtz, 
  { 684, 2, 0, 1, 0, 15, 100, 0 },
  { 702, 2, 0, 1, 0, 15, 100, 0 },
  { 716, 2, 0, 1, 0, 15, 100, 0 },
  { 728, 2, 0, 1, 0, 15, 100, 0 },
  { 740, 2, 0, 1, 0, 15, 100, 0 },
  { 752, 2, 0, 1, 0, 15, 100, 0 },
  { 770, 2, 0, 1, 0, 15, 100, 0 },
  { 788, 2, 0, 1, 0, 15, 100, 0 },
  { 800, 2, 0, 1, 0, 15, 100, 0 },
  { 812, 2, 0, 1, 0, 15, 100, 0 },
  { 824, 2, 0, 1, 0, 15, 100, 0 },
  // 452: convert_int16, convert_int16_rte, convert_int16_rtn, convert_int16_rtp, convert_int16_rtz, convert_int16_sat, convert_int16_sat_rte, convert_int16_sat_rtn, convert_int16_sat_rtp, convert_int16_sat_rtz, 
  { 686, 2, 0, 1, 0, 15, 100, 0 },
  { 704, 2, 0, 1, 0, 15, 100, 0 },
  { 718, 2, 0, 1, 0, 15, 100, 0 },
  { 730, 2, 0, 1, 0, 15, 100, 0 },
  { 742, 2, 0, 1, 0, 15, 100, 0 },
  { 754, 2, 0, 1, 0, 15, 100, 0 },
  { 772, 2, 0, 1, 0, 15, 100, 0 },
  { 790, 2, 0, 1, 0, 15, 100, 0 },
  { 802, 2, 0, 1, 0, 15, 100, 0 },
  { 814, 2, 0, 1, 0, 15, 100, 0 },
  { 826, 2, 0, 1, 0, 15, 100, 0 },
  // 463: convert_uint, convert_uint_rte, convert_uint_rtn, convert_uint_rtp, convert_uint_rtz, convert_uint_sat, convert_uint_sat_rte, convert_uint_sat_rtn, convert_uint_sat_rtp, convert_uint_sat_rtz, 
  { 828, 2, 0, 1, 0, 15, 100, 0 },
  { 852, 2, 0, 1, 0, 15, 100, 0 },
  { 864, 2, 0, 1, 0, 15, 100, 0 },
  { 876, 2, 0, 1, 0, 15, 100, 0 },
  { 888, 2, 0, 1, 0, 15, 100, 0 },
  { 900, 2, 0, 1, 0, 15, 100, 0 },
  { 924, 2, 0, 1, 0, 15, 100, 0 },
  { 936, 2, 0, 1, 0, 15, 100, 0 },
  { 948, 2, 0, 1, 0, 15, 100, 0 },
  { 960, 2, 0, 1, 0, 15, 100, 0 },
  { 972, 2, 0, 1, 0, 15, 100, 0 },
  // 474: convert_uint2, convert_uint2_rte, convert_uint2_rtn, convert_uint2_rtp, convert_uint2_rtz, convert_uint2_sat, convert_uint2_sat_rte, convert_uint2_sat_rtn, convert_uint2_sat_rtp, convert_uint2_sat_rtz, 
  { 830, 2, 0, 1, 0, 15, 100, 0 },
  { 854, 2, 0, 1, 0, 15, 100, 0 },
  { 866, 2, 0, 1, 0, 15, 100, 0 },
  { 878, 2, 0, 1, 0, 15, 100, 0 },
  { 890, 2, 0, 1, 0, 15, 100, 0 },
  { 902, 2, 0, 1, 0, 15, 100, 0 },
  { 926, 2, 0, 1, 0, 15, 100, 0 },
  { 938, 2, 0, 1, 0, 15, 100, 0 },
  { 950, 2, 0, 1, 0, 15, 100, 0 },
  { 962, 2, 0, 1, 0, 15, 100, 0 },
  { 974, 2, 0, 1, 0, 15, 100, 0 },
  // 485: convert_uint3, convert_uint3_rte, convert_uint3_rtn, convert_uint3_rtp, convert_uint3_rtz, convert_uint3_sat, convert_uint3_sat_rte, convert_uint3_sat_rtn, convert_uint3_sat_rtp, convert_uint3_sat_rtz, 
  { 832, 2, 0, 1, 0, 15, 100, 0 },
  { 856, 2, 0, 1, 0, 15, 100, 0 },
  { 868, 2, 0, 1, 0, 15, 100, 0 },
  { 880, 2, 0, 1, 0, 15, 100, 0 },
  { 892, 2, 0, 1, 0, 15, 100, 0 },
  { 904, 2, 0, 1, 0, 15, 100, 0 },
  { 928, 2, 0, 1, 0, 15, 100, 0 },
  { 940, 2, 0, 1, 0, 15, 100, 0 },
  { 952, 2, 0, 1, 0, 15, 100, 0 },
  { 964, 2, 0, 1, 0, 15, 100, 0 },
  { 976, 2, 0, 1, 0, 15, 100, 0 },
  // 496: convert_uint4, convert_uint4_rte, convert_uint4_rtn, convert_uint4_rtp, convert_uint4_rtz, convert_uint4_sat, convert_uint4_sat_rte, convert_uint4_sat_rtn, convert_uint4_sat_rtp, convert_uint4_sat_rtz, 
  { 834, 2, 0, 1, 0, 15, 100, 0 },
  { 858, 2, 0, 1, 0, 15, 100, 0 },
  { 870, 2, 0, 1, 0, 15, 100, 0 },
  { 882, 2, 0, 1, 0, 15, 100, 0 },
  { 894, 2, 0, 1, 0, 15, 100, 0 },
  { 906, 2, 0, 1, 0, 15, 100, 0 },
  { 930, 2, 0, 1, 0, 15, 100, 0 },
  { 942, 2, 0, 1, 0, 15, 100, 0 },
  { 954, 2, 0, 1, 0, 15, 100, 0 },
  { 966, 2, 0, 1, 0, 15, 100, 0 },
  { 978, 2, 0, 1, 0, 15, 100, 0 },
  // 507: convert_uint8, convert_uint8_rte, convert_uint8_rtn, convert_uint8_rtp, convert_uint8_rtz, convert_uint8_sat, convert_uint8_sat_rte, convert_uint8_sat_rtn, convert_uint8_sat_rtp, convert_uint8_sat_rtz, 
  { 836, 2, 0, 1, 0, 15, 100, 0 },
  { 860, 2, 0, 1, 0, 15, 100, 0 },
  { 872, 2, 0, 1, 0, 15, 100, 0 },
  { 884, 2, 0, 1, 0, 15, 100, 0 },
  { 896, 2, 0, 1, 0, 15, 100, 0 },
  { 908, 2, 0, 1, 0, 15, 100, 0 },
  { 932, 2, 0, 1, 0, 15, 100, 0 },
  { 944, 2, 0, 1, 0, 15, 100, 0 },
  { 956, 2, 0, 1, 0, 15, 100, 0 },
  { 968, 2, 0, 1, 0, 15, 100, 0 },
  { 980, 2, 0, 1, 0, 15, 100, 0 },
  // 518: convert_uint16, convert_uint16_rte, convert_uint16_rtn, convert_uint16_rtp, convert_uint16_rtz, convert_uint16_sat, convert_uint16_sat_rte, convert_uint16_sat_rtn, convert_uint16_sat_rtp, convert_uint16_sat_rtz, 
  { 838, 2, 0, 1, 0, 15, 100, 0 },
  { 862, 2, 0, 1, 0, 15, 100, 0 },
  { 874, 2, 0, 1, 0, 15, 100, 0 },
  { 886, 2, 0, 1, 0, 15, 100, 0 },
  { 898, 2, 0, 1, 0, 15, 100, 0 },
  { 910, 2, 0, 1, 0, 15, 100, 0 },
  { 934, 2, 0, 1, 0, 15, 100, 0 },
  { 946, 2, 0, 1, 0, 15, 100, 0 },
  { 958, 2, 0, 1, 0, 15, 100, 0 },
  { 970, 2, 0, 1, 0, 15, 100, 0 },
  { 982, 2, 0, 1, 0, 15, 100, 0 },
  // 529: convert_double, convert_double_rte, convert_double_rtn, convert_double_rtp, convert_double_rtz, 
  { 840, 2, 0, 1, 0, 15, 100, 0 },
  { 912, 2, 0, 1, 0, 15, 100, 0 },
  { 984, 2, 0, 1, 0, 15, 100, 0 },
  { 1056, 2, 0, 1, 0, 15, 100, 0 },
  { 1130, 2, 0, 1, 0, 15, 100, 0 },
  { 1204, 2, 0, 1, 0, 15, 100, 0 },
  { 1280, 2, 0, 1, 0, 15, 100, 0 },
  { 1430, 2, 0, 1, 0, 15, 100, 0 },
  { 1851, 2, 0, 1, 0, 15, 100, 0 },
  { 2579, 2, 0, 1, 0, 15, 100, 0 },
  { 3286, 2, 0, 1, 0, 15, 100, 0 },
  // 540: convert_double2, convert_double2_rte, convert_double2_rtn, convert_double2_rtp, convert_double2_rtz, 
  { 842, 2, 0, 1, 0, 15, 100, 0 },
  { 914, 2, 0, 1, 0, 15, 100, 0 },
  { 986, 2, 0, 1, 0, 15, 100, 0 },
  { 1058, 2, 0, 1, 0, 15, 100, 0 },
  { 1132, 2, 0, 1, 0, 15, 100, 0 },
  { 1206, 2, 0, 1, 0, 15, 100, 0 },
  { 1282, 2, 0, 1, 0, 15, 100, 0 },
  { 1450, 2, 0, 1, 0, 15, 100, 0 },
  { 1868, 2, 0, 1, 0, 15, 100, 0 },
  { 2596, 2, 0, 1, 0, 15, 100, 0 },
  { 3318, 2, 0, 1, 0, 15, 100, 0 },
  // 551: convert_double3, convert_double3_rte, convert_double3_rtn, convert_double3_rtp, convert_double3_rtz, 
  { 844, 2, 0, 1, 0, 15, 100, 0 },
  { 916, 2, 0, 1, 0, 15, 100, 0 },
  { 988, 2, 0, 1, 0, 15, 100, 0 },
  { 1060, 2, 0, 1, 0, 15, 100, 0 },
  { 1134, 2, 0, 1, 0, 15, 100, 0 },
  { 1208, 2, 0, 1, 0, 15, 100, 0 },
  { 1284, 2, 0, 1, 0, 15, 100, 0 },
  { 1472, 2, 0, 1, 0, 15, 100, 0 },
  { 1904, 2, 0, 1, 0, 15, 100, 0 },
  { 2616, 2, 0, 1, 0, 15, 100, 0 },
  { 3360, 2, 0, 1, 0, 15, 100, 0 },
  // 562: convert_double4, convert_double4_rte, convert_double4_rtn, convert_double4_rtp, convert_double4_rtz, 
  { 846, 2, 0, 1, 0, 15, 100, 0 },
  { 918, 2, 0, 1, 0, 15, 100, 0 },
  { 990, 2, 0, 1, 0, 15, 100, 0 },
  { 1062, 2, 0, 1, 0, 15, 100, 0 },
  { 1136, 2, 0, 1, 0, 15, 100, 0 },
  { 1210, 2, 0, 1, 0, 15, 100, 0 },
  { 1286, 2, 0, 1, 0, 15, 100, 0 },
  { 1474, 2, 0, 1, 0, 15, 100, 0 },
  { 1945, 2, 0, 1, 0, 15, 100, 0 },
  { 2638, 2, 0, 1, 0, 15, 100, 0 },
  { 3377, 2, 0, 1, 0, 15, 100, 0 },
  // 573: convert_double8, convert_double8_rte, convert_double8_rtn, convert_double8_rtp, convert_double8_rtz, 
  { 848, 2, 0, 1, 0, 15, 100, 0 },
  { 920, 2, 0, 1, 0, 15, 100, 0 },
  { 992, 2, 0, 1, 0, 15, 100, 0 },
  { 1064, 2, 0, 1, 0, 15, 100, 0 },
  { 1138, 2, 0, 1, 0, 15, 100, 0 },
  { 1212, 2, 0, 1, 0, 15, 100, 0 },
  { 1288, 2, 0, 1, 0, 15, 100, 0 },
  { 1476, 2, 0, 1, 0, 15, 100, 0 },
  { 1953, 2, 0, 1, 0, 15, 100, 0 },
  { 2663, 2, 0, 1, 0, 15, 100, 0 },
  { 3403, 2, 0, 1, 0, 15, 100, 0 },
  // 584: convert_double16, convert_double16_rte, convert_double16_rtn, convert_double16_rtp, convert_double16_rtz, 
  { 850, 2, 0, 1, 0, 15, 100, 0 },
  { 922, 2, 0, 1, 0, 15, 100, 0 },
  { 994, 2, 0, 1, 0, 15, 100, 0 },
  { 1066, 2, 0, 1, 0, 15, 100, 0 },
  { 1140, 2, 0, 1, 0, 15, 100, 0 },
  { 1214, 2, 0, 1, 0, 15, 100, 0 },
  { 1290, 2, 0, 1, 0, 15, 100, 0 },
  { 1485, 2, 0, 1, 0, 15, 100, 0 },
  { 1986, 2, 0, 1, 0, 15, 100, 0 },
  { 2677, 2, 0, 1, 0, 15, 100, 0 },
  { 3442, 2, 0, 1, 0, 15, 100, 0 },
  // 595: convert_long, convert_long_rte, convert_long_rtn, convert_long_rtp, convert_long_rtz, convert_long_sat, convert_long_sat_rte, convert_long_sat_rtn, convert_long_sat_rtp, convert_long_sat_rtz, 
  { 996, 2, 0, 1, 0, 15, 100, 0 },
  { 1008, 2, 0, 1, 0, 15, 100, 0 },
  { 1020, 2, 0, 1, 0, 15, 100, 0 },
  { 1032, 2, 0, 1, 0, 15, 100, 0 },
  { 1044, 2, 0, 1, 0, 15, 100, 0 },
  { 1068, 2, 0, 1, 0, 15, 100, 0 },
  { 1080, 2, 0, 1, 0, 15, 100, 0 },
  { 1092, 2, 0, 1, 0, 15, 100, 0 },
  { 1104, 2, 0, 1, 0, 15, 100, 0 },
  { 1118, 2, 0, 1, 0, 15, 100, 0 },
  { 1142, 2, 0, 1, 0, 15, 100, 0 },
  // 606: convert_long2, convert_long2_rte, convert_long2_rtn, convert_long2_rtp, convert_long2_rtz, convert_long2_sat, convert_long2_sat_rte, convert_long2_sat_rtn, convert_long2_sat_rtp, convert_long2_sat_rtz, 
  { 998, 2, 0, 1, 0, 15, 100, 0 },
  { 1010, 2, 0, 1, 0, 15, 100, 0 },
  { 1022, 2, 0, 1, 0, 15, 100, 0 },
  { 1034, 2, 0, 1, 0, 15, 100, 0 },
  { 1046, 2, 0, 1, 0, 15, 100, 0 },
  { 1070, 2, 0, 1, 0, 15, 100, 0 },
  { 1082, 2, 0, 1, 0, 15, 100, 0 },
  { 1094, 2, 0, 1, 0, 15, 100, 0 },
  { 1106, 2, 0, 1, 0, 15, 100, 0 },
  { 1120, 2, 0, 1, 0, 15, 100, 0 },
  { 1144, 2, 0, 1, 0, 15, 100, 0 },
  // 617: convert_long3, convert_long3_rte, convert_long3_rtn, convert_long3_rtp, convert_long3_rtz, convert_long3_sat, convert_long3_sat_rte, convert_long3_sat_rtn, convert_long3_sat_rtp, convert_long3_sat_rtz, 
  { 1000, 2, 0, 1, 0, 15, 100, 0 },
  { 1012, 2, 0, 1, 0, 15, 100, 0 },
  { 1024, 2, 0, 1, 0, 15, 100, 0 },
  { 1036, 2, 0, 1, 0, 15, 100, 0 },
  { 1048, 2, 0, 1, 0, 15, 100, 0 },
  { 1072, 2, 0, 1, 0, 15, 100, 0 },
  { 1084, 2, 0, 1, 0, 15, 100, 0 },
  { 1096, 2, 0, 1, 0, 15, 100, 0 },
  { 1108, 2, 0, 1, 0, 15, 100, 0 },
  { 1122, 2, 0, 1, 0, 15, 100, 0 },
  { 1146, 2, 0, 1, 0, 15, 100, 0 },
  // 628: convert_long4, convert_long4_rte, convert_long4_rtn, convert_long4_rtp, convert_long4_rtz, convert_long4_sat, convert_long4_sat_rte, convert_long4_sat_rtn, convert_long4_sat_rtp, convert_long4_sat_rtz, 
  { 1002, 2, 0, 1, 0, 15, 100, 0 },
  { 1014, 2, 0, 1, 0, 15, 100, 0 },
  { 1026, 2, 0, 1, 0, 15, 100, 0 },
  { 1038, 2, 0, 1, 0, 15, 100, 0 },
  { 1050, 2, 0, 1, 0, 15, 100, 0 },
  { 1074, 2, 0, 1, 0, 15, 100, 0 },
  { 1086, 2, 0, 1, 0, 15, 100, 0 },
  { 1098, 2, 0, 1, 0, 15, 100, 0 },
  { 1110, 2, 0, 1, 0, 15, 100, 0 },
  { 1124, 2, 0, 1, 0, 15, 100, 0 },
  { 1148, 2, 0, 1, 0, 15, 100, 0 },
  // 639: convert_long8, convert_long8_rte, convert_long8_rtn, convert_long8_rtp, convert_long8_rtz, convert_long8_sat, convert_long8_sat_rte, convert_long8_sat_rtn, convert_long8_sat_rtp, convert_long8_sat_rtz, 
  { 1004, 2, 0, 1, 0, 15, 100, 0 },
  { 1016, 2, 0, 1, 0, 15, 100, 0 },
  { 1028, 2, 0, 1, 0, 15, 100, 0 },
  { 1040, 2, 0, 1, 0, 15, 100, 0 },
  { 1052, 2, 0, 1, 0, 15, 100, 0 },
  { 1076, 2, 0, 1, 0, 15, 100, 0 },
  { 1088, 2, 0, 1, 0, 15, 100, 0 },
  { 1100, 2, 0, 1, 0, 15, 100, 0 },
  { 1112, 2, 0, 1, 0, 15, 100, 0 },
  { 1126, 2, 0, 1, 0, 15, 100, 0 },
  { 1150, 2, 0, 1, 0, 15, 100, 0 },
  // 650: convert_long16, convert_long16_rte, convert_long16_rtn, convert_long16_rtp, convert_long16_rtz, convert_long16_sat, convert_long16_sat_rte, convert_long16_sat_rtn, convert_long16_sat_rtp, convert_long16_sat_rtz, 
  { 1006, 2, 0, 1, 0, 15, 100, 0 },
  { 1018, 2, 0, 1, 0, 15, 100, 0 },
  { 1030, 2, 0, 1, 0, 15, 100, 0 },
  { 1042, 2, 0, 1, 0, 15, 100, 0 },
  { 1054, 2, 0, 1, 0, 15, 100, 0 },
  { 1078, 2, 0, 1, 0, 15, 100, 0 },
  { 1090, 2, 0, 1, 0, 15, 100, 0 },
  { 1102, 2, 0, 1, 0, 15, 100, 0 },
  { 1114, 2, 0, 1, 0, 15, 100, 0 },
  { 1128, 2, 0, 1, 0, 15, 100, 0 },
  { 1152, 2, 0, 1, 0, 15, 100, 0 },
  // 661: convert_ulong, convert_ulong_rte, convert_ulong_rtn, convert_ulong_rtp, convert_ulong_rtz, convert_ulong_sat, convert_ulong_sat_rte, convert_ulong_sat_rtn, convert_ulong_sat_rtp, convert_ulong_sat_rtz, 
  { 1156, 2, 0, 1, 0, 15, 100, 0 },
  { 1168, 2, 0, 1, 0, 15, 100, 0 },
  { 1180, 2, 0, 1, 0, 15, 100, 0 },
  { 1192, 2, 0, 1, 0, 15, 100, 0 },
  { 1216, 2, 0, 1, 0, 15, 100, 0 },
  { 1230, 2, 0, 1, 0, 15, 100, 0 },
  { 1242, 2, 0, 1, 0, 15, 100, 0 },
  { 1254, 2, 0, 1, 0, 15, 100, 0 },
  { 1268, 2, 0, 1, 0, 15, 100, 0 },
  { 1292, 2, 0, 1, 0, 15, 100, 0 },
  { 1304, 2, 0, 1, 0, 15, 100, 0 },
  // 672: convert_ulong2, convert_ulong2_rte, convert_ulong2_rtn, convert_ulong2_rtp, convert_ulong2_rtz, convert_ulong2_sat, convert_ulong2_sat_rte, convert_ulong2_sat_rtn, convert_ulong2_sat_rtp, convert_ulong2_sat_rtz, 
  { 1158, 2, 0, 1, 0, 15, 100, 0 },
  { 1170, 2, 0, 1, 0, 15, 100, 0 },
  { 1182, 2, 0, 1, 0, 15, 100, 0 },
  { 1194, 2, 0, 1, 0, 15, 100, 0 },
  { 1218, 2, 0, 1, 0, 15, 100, 0 },
  { 1232, 2, 0, 1, 0, 15, 100, 0 },
  { 1244, 2, 0, 1, 0, 15, 100, 0 },
  { 1256, 2, 0, 1, 0, 15, 100, 0 },
  { 1270, 2, 0, 1, 0, 15, 100, 0 },
  { 1294, 2, 0, 1, 0, 15, 100, 0 },
  { 1306, 2, 0, 1, 0, 15, 100, 0 },
  // 683: convert_ulong3, convert_ulong3_rte, convert_ulong3_rtn, convert_ulong3_rtp, convert_ulong3_rtz, convert_ulong3_sat, convert_ulong3_sat_rte, convert_ulong3_sat_rtn, convert_ulong3_sat_rtp, convert_ulong3_sat_rtz, 
  { 1160, 2, 0, 1, 0, 15, 100, 0 },
  { 1172, 2, 0, 1, 0, 15, 100, 0 },
  { 1184, 2, 0, 1, 0, 15, 100, 0 },
  { 1196, 2, 0, 1, 0, 15, 100, 0 },
  { 1220, 2, 0, 1, 0, 15, 100, 0 },
  { 1234, 2, 0, 1, 0, 15, 100, 0 },
  { 1246, 2, 0, 1, 0, 15, 100, 0 },
  { 1258, 2, 0, 1, 0, 15, 100, 0 },
  { 1272, 2, 0, 1, 0, 15, 100, 0 },
  { 1296, 2, 0, 1, 0, 15, 100, 0 },
  { 1308, 2, 0, 1, 0, 15, 100, 0 },
  // 694: convert_ulong4, convert_ulong4_rte, convert_ulong4_rtn, convert_ulong4_rtp, convert_ulong4_rtz, convert_ulong4_sat, convert_ulong4_sat_rte, convert_ulong4_sat_rtn, convert_ulong4_sat_rtp, convert_ulong4_sat_rtz, 
  { 1162, 2, 0, 1, 0, 15, 100, 0 },
  { 1174, 2, 0, 1, 0, 15, 100, 0 },
  { 1186, 2, 0, 1, 0, 15, 100, 0 },
  { 1198, 2, 0, 1, 0, 15, 100, 0 },
  { 1222, 2, 0, 1, 0, 15, 100, 0 },
  { 1236, 2, 0, 1, 0, 15, 100, 0 },
  { 1248, 2, 0, 1, 0, 15, 100, 0 },
  { 1260, 2, 0, 1, 0, 15, 100, 0 },
  { 1274, 2, 0, 1, 0, 15, 100, 0 },
  { 1298, 2, 0, 1, 0, 15, 100, 0 },
  { 1310, 2, 0, 1, 0, 15, 100, 0 },
  // 705: convert_ulong8, convert_ulong8_rte, convert_ulong8_rtn, convert_ulong8_rtp, convert_ulong8_rtz, convert_ulong8_sat, convert_ulong8_sat_rte, convert_ulong8_sat_rtn, convert_ulong8_sat_rtp, convert_ulong8_sat_rtz, 
  { 1164, 2, 0, 1, 0, 15, 100, 0 },
  { 1176, 2, 0, 1, 0, 15, 100, 0 },
  { 1188, 2, 0, 1, 0, 15, 100, 0 },
  { 1200, 2, 0, 1, 0, 15, 100, 0 },
  { 1224, 2, 0, 1, 0, 15, 100, 0 },
  { 1238, 2, 0, 1, 0, 15, 100, 0 },
  { 1250, 2, 0, 1, 0, 15, 100, 0 },
  { 1262, 2, 0, 1, 0, 15, 100, 0 },
  { 1276, 2, 0, 1, 0, 15, 100, 0 },
  { 1300, 2, 0, 1, 0, 15, 100, 0 },
  { 1312, 2, 0, 1, 0, 15, 100, 0 },
  // 716: convert_ulong16, convert_ulong16_rte, convert_ulong16_rtn, convert_ulong16_rtp, convert_ulong16_rtz, convert_ulong16_sat, convert_ulong16_sat_rte, convert_ulong16_sat_rtn, convert_ulong16_sat_rtp, convert_ulong16_sat_rtz, 
  { 1166, 2, 0, 1, 0, 15, 100, 0 },
  { 1178, 2, 0, 1, 0, 15, 100, 0 },
  { 1190, 2, 0, 1, 0, 15, 100, 0 },
  { 1202, 2, 0, 1, 0, 15, 100, 0 },
  { 1226, 2, 0, 1, 0, 15, 100, 0 },
  { 1240, 2, 0, 1, 0, 15, 100, 0 },
  { 1252, 2, 0, 1, 0, 15, 100, 0 },
  { 1264, 2, 0, 1, 0, 15, 100, 0 },
  { 1278, 2, 0, 1, 0, 15, 100, 0 },
  { 1302, 2, 0, 1, 0, 15, 100, 0 },
  { 1314, 2, 0, 1, 0, 15, 100, 0 },
  // 727: get_work_dim, 
  { 1316, 1, 0, 1, 0, 15, 100, 0 },
  // 728: get_global_size, get_global_id, get_local_size, get_local_id, get_num_groups, get_group_id, get_global_offset, 
  { 1317, 2, 0, 1, 0, 15, 100, 0 },
  // 729: get_enqueued_local_size, 
  { 1317, 2, 0, 0, 0, 15, 200, 0 },
  // 730: get_global_linear_id, get_local_linear_id, 
  { 1319, 1, 0, 0, 0, 15, 200, 0 },
  // 731: acos, acosh, acospi, asin, asinh, asinpi, atan, atanh, atanpi, cbrt, ceil, cos, cosh, cospi, erfc, erf, exp, exp2, exp10, expm1, fabs, floor, log, log2, log10, log1p, logb, rint, round, rsqrt, sin, sinh, sinpi, sqrt, tan, tanh, tanpi, tgamma, trunc, lgamma, degrees, radians, sign, 
  { 1320, 2, 0, 1, 0, 15, 100, 0 },
  // 732: nan, 
  { 1324, 2, 0, 1, 0, 15, 100, 0 },
  { 1326, 2, 0, 1, 0, 15, 100, 0 },
  { 1328, 2, 0, 1, 0, 15, 100, 0 },
  // 735: atan2, atan2pi, copysign, fdim, fmod, hypot, maxmag, minmag, nextafter, pow, powr, remainder, 
  { 1330, 3, 0, 1, 0, 15, 100, 0 },
  // 736: fmax, fmin, 
  { 1330, 3, 0, 1, 0, 15, 100, 0 },
  { 1333, 3, 0, 1, 0, 15, 100, 0 },
  { 1336, 3, 0, 1, 0, 15, 100, 0 },
  { 1339, 3, 0, 1, 0, 15, 100, 0 },
  // 740: ilogb, 
  { 1342, 2, 0, 1, 0, 15, 100, 0 },
  { 1344, 2, 0, 1, 0, 15, 100, 0 },
  { 1346, 2, 0, 1, 0, 15, 100, 0 },
  // 743: ldexp, 
  { 1348, 3, 0, 1, 0, 15, 100, 0 },
  { 1351, 3, 0, 1, 0, 15, 100, 0 },
  { 1354, 3, 0, 1, 0, 15, 100, 0 },
  { 1357, 3, 0, 1, 0, 15, 100, 0 },
  { 1360, 3, 0, 1, 0, 15, 100, 0 },
  { 1363, 3, 0, 1, 0, 15, 100, 0 },
  // 749: pown, rootn, 
  { 1348, 3, 0, 1, 0, 15, 100, 0 },
  { 1354, 3, 0, 1, 0, 15, 100, 0 },
  { 1360, 3, 0, 1, 0, 15, 100, 0 },
  // 752: fma, mad, 
  { 1366, 4, 0, 1, 0, 15, 100, 0 },
  // 753: fract, modf, sincos, 
  { 1370, 3, 0, 0, 0, 15, 100, 200 },
  { 1394, 3, 0, 0, 0, 15, 100, 200 },
  { 1418, 3, 0, 0, 0, 15, 100, 200 },
  { 1444, 3, 0, 0, 0, 15, 200, 0 },
  // 757: frexp, lgamma_r, 
  { 1373, 3, 0, 0, 0, 15, 100, 200 },
  { 1380, 3, 0, 0, 0, 15, 100, 200 },
  { 1383, 3, 0, 0, 0, 15, 100, 200 },
  { 1397, 3, 0, 0, 0, 15, 100, 200 },
  { 1400, 3, 0, 0, 0, 15, 100, 200 },
  { 1403, 3, 0, 0, 0, 15, 100, 200 },
  { 1421, 3, 0, 0, 0, 15, 100, 200 },
  { 1424, 3, 0, 0, 0, 15, 100, 200 },
  { 1427, 3, 0, 0, 0, 15, 100, 200 },
  { 1447, 3, 0, 0, 0, 15, 200, 0 },
  { 1452, 3, 0, 0, 0, 15, 200, 0 },
  { 1455, 3, 0, 0, 0, 15, 200, 0 },
  // 769: remquo, 
  { 1376, 4, 0, 0, 0, 15, 100, 200 },
  { 1386, 4, 0, 0, 0, 15, 100, 200 },
  { 1390, 4, 0, 0, 0, 15, 100, 200 },
  { 1406, 4, 0, 0, 0, 15, 100, 200 },
  { 1410, 4, 0, 0, 0, 15, 100, 200 },
  { 1414, 4, 0, 0, 0, 15, 100, 200 },
  { 1432, 4, 0, 0, 0, 15, 100, 200 },
  { 1436, 4, 0, 0, 0, 15, 100, 200 },
  { 1440, 4, 0, 0, 0, 15, 100, 200 },
  { 1458, 4, 0, 0, 0, 15, 200, 0 },
  { 1462, 4, 0, 0, 0, 15, 200, 0 },
  { 1466, 4, 0, 0, 0, 15, 200, 0 },
  // 781: half_cos, half_exp, half_exp2, half_exp10, half_log, half_log2, half_log10, half_recip, half_rsqrt, half_sin, half_sqrt, half_tan, native_cos, native_exp, native_exp2, native_exp10, native_log, native_log2, native_log10, native_recip, native_rsqrt, native_sin, native_sqrt, native_tan, 
  { 1470, 2, 0, 1, 0, 15, 100, 0 },
  // 782: half_divide, half_powr, native_divide, native_powr, 
  { 1478, 3, 0, 1, 0, 15, 100, 0 },
  // 783: abs, 
  { 1481, 2, 0, 1, 0, 15, 100, 0 },
  // 784: clz, popcount, 
  { 1483, 2, 0, 1, 0, 15, 100, 0 },
  // 785: ctz, 
  { 1483, 2, 0, 0, 0, 15, 200, 0 },
  // 786: abs_diff, 
  { 1487, 3, 0, 1, 0, 15, 100, 0 },
  // 787: add_sat, hadd, rhadd, mul_hi, rotate, sub_sat, 
  { 1490, 3, 0, 1, 0, 15, 100, 0 },
  // 788: max, min, 
  { 1490, 3, 0, 1, 0, 15, 100, 0 },
  { 1493, 3, 0, 1, 0, 15, 100, 0 },
  { 1330, 3, 0, 1, 0, 15, 100, 0 },
  { 1333, 3, 0, 1, 0, 15, 100, 0 },
  { 1336, 3, 0, 1, 0, 15, 100, 0 },
  { 1339, 3, 0, 1, 0, 15, 100, 0 },
  // 794: upsample, 
  { 1496, 3, 0, 1, 0, 15, 100, 0 },
  { 1499, 3, 0, 1, 0, 15, 100, 0 },
  { 1502, 3, 0, 1, 0, 15, 100, 0 },
  { 1505, 3, 0, 1, 0, 15, 100, 0 },
  { 1508, 3, 0, 1, 0, 15, 100, 0 },
  { 1511, 3, 0, 1, 0, 15, 100, 0 },
  // 800: clamp, 
  { 1514, 4, 0, 1, 0, 15, 100, 0 },
  { 1518, 4, 0, 1, 0, 15, 100, 0 },
  { 1366, 4, 0, 1, 0, 15, 100, 0 },
  { 1547, 4, 0, 1, 0, 15, 100, 0 },
  { 1551, 4, 0, 1, 0, 15, 100, 0 },
  { 1555, 4, 0, 1, 0, 15, 100, 0 },
  // 806: mad_hi, mad_sat, 
  { 1514, 4, 0, 1, 0, 15, 100, 0 },
  // 807: mad24, 
  { 1522, 4, 0, 1, 0, 15, 100, 0 },
  { 1526, 4, 0, 1, 0, 15, 100, 0 },
  // 809: mul24, 
  { 1530, 3, 0, 1, 0, 15, 100, 0 },
  { 1533, 3, 0, 1, 0, 15, 100, 0 },
  // 811: step, 
  { 1330, 3, 0, 1, 0, 15, 100, 0 },
  { 1536, 3, 0, 1, 0, 15, 100, 0 },
  { 1539, 3, 0, 1, 0, 15, 100, 0 },
  { 1542, 3, 0, 1, 0, 15, 100, 0 },
  // 815: mix, 
  { 1366, 4, 0, 1, 0, 15, 100, 0 },
  { 1547, 4, 0, 1, 0, 15, 100, 0 },
  { 1551, 4, 0, 1, 0, 15, 100, 0 },
  { 1555, 4, 0, 1, 0, 15, 100, 0 },
  // 819: smoothstep, 
  { 1366, 4, 0, 1, 0, 15, 100, 0 },
  { 1559, 4, 0, 1, 0, 15, 100, 0 },
  { 1563, 4, 0, 1, 0, 15, 100, 0 },
  { 1567, 4, 0, 1, 0, 15, 100, 0 },
  // 823: length, 
  { 1571, 2, 0, 1, 0, 15, 100, 0 },
  { 1573, 2, 0, 1, 0, 15, 100, 0 },
  { 1575, 2, 0, 1, 0, 15, 100, 0 },
  // 826: normalize, 
  { 1577, 2, 0, 1, 0, 15, 100, 0 },
  { 1579, 2, 0, 1, 0, 15, 100, 0 },
  { 1581, 2, 0, 1, 0, 15, 100, 0 },
  // 829: fast_length, 
  { 1571, 2, 0, 1, 0, 15, 100, 0 },
  // 830: fast_normalize, 
  { 1577, 2, 0, 1, 0, 15, 100, 0 },
  // 831: cross, 
  { 1583, 3, 0, 1, 0, 15, 100, 0 },
  { 1586, 3, 0, 1, 0, 15, 100, 0 },
  { 1589, 3, 0, 1, 0, 15, 100, 0 },
  { 1592, 3, 0, 1, 0, 15, 100, 0 },
  { 1595, 3, 0, 1, 0, 15, 100, 0 },
  { 1598, 3, 0, 1, 0, 15, 100, 0 },
  // 837: dot, distance, 
  { 1601, 3, 0, 1, 0, 15, 100, 0 },
  { 1604, 3, 0, 1, 0, 15, 100, 0 },
  { 1607, 3, 0, 1, 0, 15, 100, 0 },
  // 840: fast_distance, 
  { 1601, 3, 0, 1, 0, 15, 100, 0 },
  // 841: isfinite, isinf, isnan, isnormal, signbit, 
  { 1342, 2, 0, 1, 0, 15, 100, 0 },
  { 694, 2, 0, 1, 0, 15, 100, 0 },
  { 1610, 2, 0, 1, 0, 15, 100, 0 },
  { 708, 2, 0, 1, 0, 15, 100, 0 },
  { 1612, 2, 0, 1, 0, 15, 100, 0 },
  // 846: any, all, 
  { 1614, 2, 0, 1, 0, 15, 100, 0 },
  // 847: isequal, isnotequal, isgreater, isgreaterequal, isless, islessequal, islessgreater, isordered, isunordered, 
  { 1616, 3, 0, 1, 0, 15, 100, 0 },
  { 1619, 3, 0, 1, 0, 15, 100, 0 },
  { 1622, 3, 0, 1, 0, 15, 100, 0 },
  { 1625, 3, 0, 1, 0, 15, 100, 0 },
  { 1628, 3, 0, 1, 0, 15, 100, 0 },
  // 852: bitselect, 
  { 1631, 4, 0, 1, 0, 15, 100, 0 },
  // 853: select, 
  { 1635, 4, 0, 1, 0, 15, 100, 0 },
  { 1639, 4, 0, 1, 0, 15, 100, 0 },
  { 1643, 4, 0, 1, 0, 15, 100, 0 },
  { 1647, 4, 0, 1, 0, 15, 100, 0 },
  { 1651, 4, 0, 1, 0, 15, 100, 0 },
  { 1655, 4, 0, 1, 0, 15, 100, 0 },
  { 1659, 4, 0, 1, 0, 15, 100, 0 },
  { 1663, 4, 0, 1, 0, 15, 100, 0 },
  { 1667, 4, 0, 1, 0, 15, 100, 0 },
  { 1671, 4, 0, 1, 0, 15, 100, 0 },
  // 863: vload2, 
  { 1675, 3, 0, 0, 0, 15, 100, 200 },
  { 1678, 3, 0, 0, 0, 15, 100, 200 },
  { 1681, 3, 0, 0, 0, 15, 100, 200 },
  { 1684, 3, 0, 0, 0, 15, 100, 200 },
  { 1687, 3, 0, 0, 0, 15, 100, 200 },
  { 1690, 3, 0, 0, 0, 15, 100, 200 },
  { 1693, 3, 0, 0, 0, 15, 100, 200 },
  { 1696, 3, 0, 0, 0, 15, 100, 200 },
  { 1699, 3, 0, 0, 0, 15, 100, 200 },
  { 1702, 3, 0, 0, 0, 15, 100, 200 },
  { 1705, 3, 0, 0, 0, 15, 100, 200 },
  { 2127, 3, 0, 0, 0, 15, 100, 200 },
  { 2130, 3, 0, 0, 0, 15, 100, 200 },
  { 2133, 3, 0, 0, 0, 15, 100, 200 },
  { 2136, 3, 0, 0, 0, 15, 100, 200 },
  { 2139, 3, 0, 0, 0, 15, 100, 200 },
  { 2142, 3, 0, 0, 0, 15, 100, 200 },
  { 2145, 3, 0, 0, 0, 15, 100, 200 },
  { 2148, 3, 0, 0, 0, 15, 100, 200 },
  { 2151, 3, 0, 0, 0, 15, 100, 200 },
  { 2154, 3, 0, 0, 0, 15, 100, 200 },
  { 2157, 3, 0, 0, 0, 15, 100, 200 },
  { 2567, 3, 0, 0, 0, 15, 100, 200 },
  { 2570, 3, 0, 0, 0, 15, 100, 200 },
  { 2573, 3, 0, 0, 0, 15, 100, 200 },
  { 2576, 3, 0, 0, 0, 15, 100, 200 },
  { 2581, 3, 0, 0, 0, 15, 100, 200 },
  { 2584, 3, 0, 0, 0, 15, 100, 200 },
  { 2587, 3, 0, 0, 0, 15, 100, 200 },
  { 2590, 3, 0, 0, 0, 15, 100, 200 },
  { 2593, 3, 0, 0, 0, 15, 100, 200 },
  { 2598, 3, 0, 0, 0, 15, 100, 200 },
  { 2601, 3, 0, 0, 0, 15, 100, 200 },
  { 3019, 3, 0, 0, 0, 15, 200, 0 },
  { 3022, 3, 0, 0, 0, 15, 200, 0 },
  { 3025, 3, 0, 0, 0, 15, 200, 0 },
  { 3028, 3, 0, 0, 0, 15, 200, 0 },
  { 3031, 3, 0, 0, 0, 15, 200, 0 },
  { 3034, 3, 0, 0, 0, 15, 200, 0 },
  { 3037, 3, 0, 0, 0, 15, 200, 0 },
  { 3040, 3, 0, 0, 0, 15, 200, 0 },
  { 3043, 3, 0, 0, 0, 15, 200, 0 },
  { 3046, 3, 0, 0, 0, 15, 200, 0 },
  { 3049, 3, 0, 0, 0, 15, 200, 0 },
  { 3471, 3, 0, 0, 0, 15, 100, 0 },
  { 3474, 3, 0, 0, 0, 15, 100, 0 },
  { 3477, 3, 0, 0, 0, 15, 100, 0 },
  { 3480, 3, 0, 0, 0, 15, 100, 0 },
  { 3483, 3, 0, 0, 0, 15, 100, 0 },
  { 3486, 3, 0, 0, 0, 15, 100, 0 },
  { 3489, 3, 0, 0, 0, 15, 100, 0 },
  { 3492, 3, 0, 0, 0, 15, 100, 0 },
  { 3495, 3, 0, 0, 0, 15, 100, 0 },
  { 3498, 3, 0, 0, 0, 15, 100, 0 },
  { 3501, 3, 0, 0, 0, 15, 100, 0 },
  // 918: vstore2, 
  { 1708, 4, 0, 0, 0, 15, 100, 200 },
  { 1712, 4, 0, 0, 0, 15, 100, 200 },
  { 1716, 4, 0, 0, 0, 15, 100, 200 },
  { 1720, 4, 0, 0, 0, 15, 100, 200 },
  { 1724, 4, 0, 0, 0, 15, 100, 200 },
  { 1728, 4, 0, 0, 0, 15, 100, 200 },
  { 1732, 4, 0, 0, 0, 15, 100, 200 },
  { 1736, 4, 0, 0, 0, 15, 100, 200 },
  { 1740, 4, 0, 0, 0, 15, 100, 200 },
  { 1744, 4, 0, 0, 0, 15, 100, 200 },
  { 1748, 4, 0, 0, 0, 15, 100, 200 },
  { 2160, 4, 0, 0, 0, 15, 100, 200 },
  { 2164, 4, 0, 0, 0, 15, 100, 200 },
  { 2168, 4, 0, 0, 0, 15, 100, 200 },
  { 2172, 4, 0, 0, 0, 15, 100, 200 },
  { 2176, 4, 0, 0, 0, 15, 100, 200 },
  { 2180, 4, 0, 0, 0, 15, 100, 200 },
  { 2184, 4, 0, 0, 0, 15, 100, 200 },
  { 2188, 4, 0, 0, 0, 15, 100, 200 },
  { 2192, 4, 0, 0, 0, 15, 100, 200 },
  { 2196, 4, 0, 0, 0, 15, 100, 200 },
  { 2200, 4, 0, 0, 0, 15, 100, 200 },
  { 2604, 4, 0, 0, 0, 15, 100, 200 },
  { 2608, 4, 0, 0, 0, 15, 100, 200 },
  { 2612, 4, 0, 0, 0, 15, 100, 200 },
  { 2618, 4, 0, 0, 0, 15, 100, 200 },
  { 2622, 4, 0, 0, 0, 15, 100, 200 },
  { 2626, 4, 0, 0, 0, 15, 100, 200 },
  { 2630, 4, 0, 0, 0, 15, 100, 200 },
  { 2634, 4, 0, 0, 0, 15, 100, 200 },
  { 2640, 4, 0, 0, 0, 15, 100, 200 },
  { 2644, 4, 0, 0, 0, 15, 100, 200 },
  { 2648, 4, 0, 0, 0, 15, 100, 200 },
  { 3052, 4, 0, 0, 0, 15, 200, 0 },
  { 3056, 4, 0, 0, 0, 15, 200, 0 },
  { 3060, 4, 0, 0, 0, 15, 200, 0 },
  { 3064, 4, 0, 0, 0, 15, 200, 0 },
  { 3068, 4, 0, 0, 0, 15, 200, 0 },
  { 3072, 4, 0, 0, 0, 15, 200, 0 },
  { 3076, 4, 0, 0, 0, 15, 200, 0 },
  { 3080, 4, 0, 0, 0, 15, 200, 0 },
  { 3084, 4, 0, 0, 0, 15, 200, 0 },
  { 3088, 4, 0, 0, 0, 15, 200, 0 },
  { 3092, 4, 0, 0, 0, 15, 200, 0 },
  // 962: vloada_half2, vload_half2, 
  { 1752, 3, 0, 0, 0, 15, 100, 200 },
  { 2204, 3, 0, 0, 0, 15, 100, 200 },
  { 2652, 3, 0, 0, 0, 15, 100, 200 },
  { 3096, 3, 0, 0, 0, 15, 200, 0 },
  { 3504, 3, 0, 0, 0, 15, 100, 0 },
  // 967: vstorea_half2, vstorea_half2_rte, vstorea_half2_rtz, vstorea_half2_rtp, vstorea_half2_rtn, vstore_half2, vstore_half2_rte, vstore_half2_rtz, vstore_half2_rtp, vstore_half2_rtn, 
  { 1755, 4, 0, 0, 0, 15, 100, 200 },
  { 1759, 4, 0, 0, 0, 15, 100, 200 },
  { 2207, 4, 0, 0, 0, 15, 100, 200 },
  { 2211, 4, 0, 0, 0, 15, 100, 200 },
  { 2655, 4, 0, 0, 0, 15, 100, 200 },
  { 2659, 4, 0, 0, 0, 15, 100, 200 },
  { 3099, 4, 0, 0, 0, 15, 200, 0 },
  { 3103, 4, 0, 0, 0, 15, 200, 0 },
  // 975: vload3, 
  { 1763, 3, 0, 0, 0, 15, 100, 200 },
  { 1766, 3, 0, 0, 0, 15, 100, 200 },
  { 1769, 3, 0, 0, 0, 15, 100, 200 },
  { 1772, 3, 0, 0, 0, 15, 100, 200 },
  { 1775, 3, 0, 0, 0, 15, 100, 200 },
  { 1778, 3, 0, 0, 0, 15, 100, 200 },
  { 1781, 3, 0, 0, 0, 15, 100, 200 },
  { 1784, 3, 0, 0, 0, 15, 100, 200 },
  { 1787, 3, 0, 0, 0, 15, 100, 200 },
  { 1790, 3, 0, 0, 0, 15, 100, 200 },
  { 1793, 3, 0, 0, 0, 15, 100, 200 },
  { 2215, 3, 0, 0, 0, 15, 100, 200 },
  { 2218, 3, 0, 0, 0, 15, 100, 200 },
  { 2221, 3, 0, 0, 0, 15, 100, 200 },
  { 2224, 3, 0, 0, 0, 15, 100, 200 },
  { 2227, 3, 0, 0, 0, 15, 100, 200 },
  { 2230, 3, 0, 0, 0, 15, 100, 200 },
  { 2233, 3, 0, 0, 0, 15, 100, 200 },
  { 2236, 3, 0, 0, 0, 15, 100, 200 },
  { 2239, 3, 0, 0, 0, 15, 100, 200 },
  { 2242, 3, 0, 0, 0, 15, 100, 200 },
  { 2245, 3, 0, 0, 0, 15, 100, 200 },
  { 2665, 3, 0, 0, 0, 15, 100, 200 },
  { 2668, 3, 0, 0, 0, 15, 100, 200 },
  { 2671, 3, 0, 0, 0, 15, 100, 200 },
  { 2674, 3, 0, 0, 0, 15, 100, 200 },
  { 2679, 3, 0, 0, 0, 15, 100, 200 },
  { 2682, 3, 0, 0, 0, 15, 100, 200 },
  { 2685, 3, 0, 0, 0, 15, 100, 200 },
  { 2688, 3, 0, 0, 0, 15, 100, 200 },
  { 2691, 3, 0, 0, 0, 15, 100, 200 },
  { 2694, 3, 0, 0, 0, 15, 100, 200 },
  { 2697, 3, 0, 0, 0, 15, 100, 200 },
  { 3107, 3, 0, 0, 0, 15, 200, 0 },
  { 3110, 3, 0, 0, 0, 15, 200, 0 },
  { 3113, 3, 0, 0, 0, 15, 200, 0 },
  { 3116, 3, 0, 0, 0, 15, 200, 0 },
  { 3119, 3, 0, 0, 0, 15, 200, 0 },
  { 3122, 3, 0, 0, 0, 15, 200, 0 },
  { 3125, 3, 0, 0, 0, 15, 200, 0 },
  { 3128, 3, 0, 0, 0, 15, 200, 0 },
  { 3131, 3, 0, 0, 0, 15, 200, 0 },
  { 3134, 3, 0, 0, 0, 15, 200, 0 },
  { 3137, 3, 0, 0, 0, 15, 200, 0 },
  { 3507, 3, 0, 0, 0, 15, 100, 0 },
  { 3510, 3, 0, 0, 0, 15, 100, 0 },
  { 3513, 3, 0, 0, 0, 15, 100, 0 },
  { 3516, 3, 0, 0, 0, 15, 100, 0 },
  { 3519, 3, 0, 0, 0, 15, 100, 0 },
  { 3522, 3, 0, 0, 0, 15, 100, 0 },
  { 3525, 3, 0, 0, 0, 15, 100, 0 },
  { 3528, 3, 0, 0, 0, 15, 100, 0 },
  { 3531, 3, 0, 0, 0, 15, 100, 0 },
  { 3534, 3, 0, 0, 0, 15, 100, 0 },
  { 3537, 3, 0, 0, 0, 15, 100, 0 },
  // 1030: vstore3, 
  { 1796, 4, 0, 0, 0, 15, 100, 200 },
  { 1800, 4, 0, 0, 0, 15, 100, 200 },
  { 1804, 4, 0, 0, 0, 15, 100, 200 },
  { 1808, 4, 0, 0, 0, 15, 100, 200 },
  { 1812, 4, 0, 0, 0, 15, 100, 200 },
  { 1816, 4, 0, 0, 0, 15, 100, 200 },
  { 1820, 4, 0, 0, 0, 15, 100, 200 },
  { 1824, 4, 0, 0, 0, 15, 100, 200 },
  { 1828, 4, 0, 0, 0, 15, 100, 200 },
  { 1832, 4, 0, 0, 0, 15, 100, 200 },
  { 1836, 4, 0, 0, 0, 15, 100, 200 },
  { 2248, 4, 0, 0, 0, 15, 100, 200 },
  { 2252, 4, 0, 0, 0, 15, 100, 200 },
  { 2256, 4, 0, 0, 0, 15, 100, 200 },
  { 2260, 4, 0, 0, 0, 15, 100, 200 },
  { 2264, 4, 0, 0, 0, 15, 100, 200 },
  { 2268, 4, 0, 0, 0, 15, 100, 200 },
  { 2272, 4, 0, 0, 0, 15, 100, 200 },
  { 2276, 4, 0, 0, 0, 15, 100, 200 },
  { 2280, 4, 0, 0, 0, 15, 100, 200 },
  { 2284, 4, 0, 0, 0, 15, 100, 200 },
  { 2288, 4, 0, 0, 0, 15, 100, 200 },
  { 2700, 4, 0, 0, 0, 15, 100, 200 },
  { 2704, 4, 0, 0, 0, 15, 100, 200 },
  { 2708, 4, 0, 0, 0, 15, 100, 200 },
  { 2712, 4, 0, 0, 0, 15, 100, 200 },
  { 2716, 4, 0, 0, 0, 15, 100, 200 },
  { 2720, 4, 0, 0, 0, 15, 100, 200 },
  { 2724, 4, 0, 0, 0, 15, 100, 200 },
  { 2728, 4, 0, 0, 0, 15, 100, 200 },
  { 2732, 4, 0, 0, 0, 15, 100, 200 },
  { 2736, 4, 0, 0, 0, 15, 100, 200 },
  { 2740, 4, 0, 0, 0, 15, 100, 200 },
  { 3140, 4, 0, 0, 0, 15, 200, 0 },
  { 3144, 4, 0, 0, 0, 15, 200, 0 },
  { 3148, 4, 0, 0, 0, 15, 200, 0 },
  { 3152, 4, 0, 0, 0, 15, 200, 0 },
  { 3156, 4, 0, 0, 0, 15, 200, 0 },
  { 3160, 4, 0, 0, 0, 15, 200, 0 },
  { 3164, 4, 0, 0, 0, 15, 200, 0 },
  { 3168, 4, 0, 0, 0, 15, 200, 0 },
  { 3172, 4, 0, 0, 0, 15, 200, 0 },
  { 3176, 4, 0, 0, 0, 15, 200, 0 },
  { 3180, 4, 0, 0, 0, 15, 200, 0 },
  // 1074: vloada_half3, vload_half3, 
  { 1840, 3, 0, 0, 0, 15, 100, 200 },
  { 2292, 3, 0, 0, 0, 15, 100, 200 },
  { 2744, 3, 0, 0, 0, 15, 100, 200 },
  { 3184, 3, 0, 0, 0, 15, 200, 0 },
  { 3540, 3, 0, 0, 0, 15, 100, 0 },
  // 1079: vstorea_half3, vstorea_half3_rte, vstorea_half3_rtz, vstorea_half3_rtp, vstorea_half3_rtn, vstore_half3, vstore_half3_rte, vstore_half3_rtz, vstore_half3_rtp, vstore_half3_rtn, 
  { 1843, 4, 0, 0, 0, 15, 100, 200 },
  { 1847, 4, 0, 0, 0, 15, 100, 200 },
  { 2295, 4, 0, 0, 0, 15, 100, 200 },
  { 2299, 4, 0, 0, 0, 15, 100, 200 },
  { 2747, 4, 0, 0, 0, 15, 100, 200 },
  { 2751, 4, 0, 0, 0, 15, 100, 200 },
  { 3187, 4, 0, 0, 0, 15, 200, 0 },
  { 3191, 4, 0, 0, 0, 15, 200, 0 },
  // 1087: vload4, 
  { 1853, 3, 0, 0, 0, 15, 100, 200 },
  { 1856, 3, 0, 0, 0, 15, 100, 200 },
  { 1859, 3, 0, 0, 0, 15, 100, 200 },
  { 1862, 3, 0, 0, 0, 15, 100, 200 },
  { 1865, 3, 0, 0, 0, 15, 100, 200 },
  { 1870, 3, 0, 0, 0, 15, 100, 200 },
  { 1873, 3, 0, 0, 0, 15, 100, 200 },
  { 1876, 3, 0, 0, 0, 15, 100, 200 },
  { 1879, 3, 0, 0, 0, 15, 100, 200 },
  { 1882, 3, 0, 0, 0, 15, 100, 200 },
  { 1885, 3, 0, 0, 0, 15, 100, 200 },
  { 2303, 3, 0, 0, 0, 15, 100, 200 },
  { 2306, 3, 0, 0, 0, 15, 100, 200 },
  { 2309, 3, 0, 0, 0, 15, 100, 200 },
  { 2312, 3, 0, 0, 0, 15, 100, 200 },
  { 2315, 3, 0, 0, 0, 15, 100, 200 },
  { 2318, 3, 0, 0, 0, 15, 100, 200 },
  { 2321, 3, 0, 0, 0, 15, 100, 200 },
  { 2324, 3, 0, 0, 0, 15, 100, 200 },
  { 2327, 3, 0, 0, 0, 15, 100, 200 },
  { 2330, 3, 0, 0, 0, 15, 100, 200 },
  { 2333, 3, 0, 0, 0, 15, 100, 200 },
  { 2755, 3, 0, 0, 0, 15, 100, 200 },
  { 2758, 3, 0, 0, 0, 15, 100, 200 },
  { 2761, 3, 0, 0, 0, 15, 100, 200 },
  { 2764, 3, 0, 0, 0, 15, 100, 200 },
  { 2767, 3, 0, 0, 0, 15, 100, 200 },
  { 2770, 3, 0, 0, 0, 15, 100, 200 },
  { 2773, 3, 0, 0, 0, 15, 100, 200 },
  { 2776, 3, 0, 0, 0, 15, 100, 200 },
  { 2779, 3, 0, 0, 0, 15, 100, 200 },
  { 2782, 3, 0, 0, 0, 15, 100, 200 },
  { 2785, 3, 0, 0, 0, 15, 100, 200 },
  { 3195, 3, 0, 0, 0, 15, 200, 0 },
  { 3198, 3, 0, 0, 0, 15, 200, 0 },
  { 3201, 3, 0, 0, 0, 15, 200, 0 },
  { 3204, 3, 0, 0, 0, 15, 200, 0 },
  { 3207, 3, 0, 0, 0, 15, 200, 0 },
  { 3210, 3, 0, 0, 0, 15, 200, 0 },
  { 3213, 3, 0, 0, 0, 15, 200, 0 },
  { 3216, 3, 0, 0, 0, 15, 200, 0 },
  { 3219, 3, 0, 0, 0, 15, 200, 0 },
  { 3222, 3, 0, 0, 0, 15, 200, 0 },
  { 3225, 3, 0, 0, 0, 15, 200, 0 },
  { 3543, 3, 0, 0, 0, 15, 100, 0 },
  { 3546, 3, 0, 0, 0, 15, 100, 0 },
  { 3549, 3, 0, 0, 0, 15, 100, 0 },
  { 3552, 3, 0, 0, 0, 15, 100, 0 },
  { 3555, 3, 0, 0, 0, 15, 100, 0 },
  { 3558, 3, 0, 0, 0, 15, 100, 0 },
  { 3561, 3, 0, 0, 0, 15, 100, 0 },
  { 3564, 3, 0, 0, 0, 15, 100, 0 },
  { 3567, 3, 0, 0, 0, 15, 100, 0 },
  { 3570, 3, 0, 0, 0, 15, 100, 0 },
  { 3573, 3, 0, 0, 0, 15, 100, 0 },
  // 1142: vstore4, 
  { 1888, 4, 0, 0, 0, 15, 100, 200 },
  { 1892, 4, 0, 0, 0, 15, 100, 200 },
  { 1896, 4, 0, 0, 0, 15, 100, 200 },
  { 1900, 4, 0, 0, 0, 15, 100, 200 },
  { 1906, 4, 0, 0, 0, 15, 100, 200 },
  { 1910, 4, 0, 0, 0, 15, 100, 200 },
  { 1914, 4, 0, 0, 0, 15, 100, 200 },
  { 1918, 4, 0, 0, 0, 15, 100, 200 },
  { 1922, 4, 0, 0, 0, 15, 100, 200 },
  { 1926, 4, 0, 0, 0, 15, 100, 200 },
  { 1930, 4, 0, 0, 0, 15, 100, 200 },
  { 2336, 4, 0, 0, 0, 15, 100, 200 },
  { 2340, 4, 0, 0, 0, 15, 100, 200 },
  { 2344, 4, 0, 0, 0, 15, 100, 200 },
  { 2348, 4, 0, 0, 0, 15, 100, 200 },
  { 2352, 4, 0, 0, 0, 15, 100, 200 },
  { 2356, 4, 0, 0, 0, 15, 100, 200 },
  { 2360, 4, 0, 0, 0, 15, 100, 200 },
  { 2364, 4, 0, 0, 0, 15, 100, 200 },
  { 2368, 4, 0, 0, 0, 15, 100, 200 },
  { 2372, 4, 0, 0, 0, 15, 100, 200 },
  { 2376, 4, 0, 0, 0, 15, 100, 200 },
  { 2788, 4, 0, 0, 0, 15, 100, 200 },
  { 2792, 4, 0, 0, 0, 15, 100, 200 },
  { 2796, 4, 0, 0, 0, 15, 100, 200 },
  { 2800, 4, 0, 0, 0, 15, 100, 200 },
  { 2804, 4, 0, 0, 0, 15, 100, 200 },
  { 2808, 4, 0, 0, 0, 15, 100, 200 },
  { 2812, 4, 0, 0, 0, 15, 100, 200 },
  { 2816, 4, 0, 0, 0, 15, 100, 200 },
  { 2820, 4, 0, 0, 0, 15, 100, 200 },
  { 2824, 4, 0, 0, 0, 15, 100, 200 },
  { 2828, 4, 0, 0, 0, 15, 100, 200 },
  { 3228, 4, 0, 0, 0, 15, 200, 0 },
  { 3232, 4, 0, 0, 0, 15, 200, 0 },
  { 3236, 4, 0, 0, 0, 15, 200, 0 },
  { 3240, 4, 0, 0, 0, 15, 200, 0 },
  { 3244, 4, 0, 0, 0, 15, 200, 0 },
  { 3248, 4, 0, 0, 0, 15, 200, 0 },
  { 3252, 4, 0, 0, 0, 15, 200, 0 },
  { 3256, 4, 0, 0, 0, 15, 200, 0 },
  { 3260, 4, 0, 0, 0, 15, 200, 0 },
  { 3264, 4, 0, 0, 0, 15, 200, 0 },
  { 3268, 4, 0, 0, 0, 15, 200, 0 },
  // 1186: vloada_half4, vload_half4, 
  { 1934, 3, 0, 0, 0, 15, 100, 200 },
  { 2380, 3, 0, 0, 0, 15, 100, 200 },
  { 2832, 3, 0, 0, 0, 15, 100, 200 },
  { 3272, 3, 0, 0, 0, 15, 200, 0 },
  { 3576, 3, 0, 0, 0, 15, 100, 0 },
  // 1191: vstorea_half4, vstorea_half4_rte, vstorea_half4_rtz, vstorea_half4_rtp, vstorea_half4_rtn, vstore_half4, vstore_half4_rte, vstore_half4_rtz, vstore_half4_rtp, vstore_half4_rtn, 
  { 1937, 4, 0, 0, 0, 15, 100, 200 },
  { 1941, 4, 0, 0, 0, 15, 100, 200 },
  { 2383, 4, 0, 0, 0, 15, 100, 200 },
  { 2387, 4, 0, 0, 0, 15, 100, 200 },
  { 2835, 4, 0, 0, 0, 15, 100, 200 },
  { 2839, 4, 0, 0, 0, 15, 100, 200 },
  { 3275, 4, 0, 0, 0, 15, 200, 0 },
  { 3279, 4, 0, 0, 0, 15, 200, 0 },
  // 1199: vload8, 
  { 1947, 3, 0, 0, 0, 15, 100, 200 },
  { 1950, 3, 0, 0, 0, 15, 100, 200 },
  { 1955, 3, 0, 0, 0, 15, 100, 200 },
  { 1958, 3, 0, 0, 0, 15, 100, 200 },
  { 1961, 3, 0, 0, 0, 15, 100, 200 },
  { 1964, 3, 0, 0, 0, 15, 100, 200 },
  { 1967, 3, 0, 0, 0, 15, 100, 200 },
  { 1970, 3, 0, 0, 0, 15, 100, 200 },
  { 1973, 3, 0, 0, 0, 15, 100, 200 },
  { 1976, 3, 0, 0, 0, 15, 100, 200 },
  { 1979, 3, 0, 0, 0, 15, 100, 200 },
  { 2391, 3, 0, 0, 0, 15, 100, 200 },
  { 2394, 3, 0, 0, 0, 15, 100, 200 },
  { 2397, 3, 0, 0, 0, 15, 100, 200 },
  { 2400, 3, 0, 0, 0, 15, 100, 200 },
  { 2403, 3, 0, 0, 0, 15, 100, 200 },
  { 2406, 3, 0, 0, 0, 15, 100, 200 },
  { 2409, 3, 0, 0, 0, 15, 100, 200 },
  { 2412, 3, 0, 0, 0, 15, 100, 200 },
  { 2415, 3, 0, 0, 0, 15, 100, 200 },
  { 2418, 3, 0, 0, 0, 15, 100, 200 },
  { 2421, 3, 0, 0, 0, 15, 100, 200 },
  { 2843, 3, 0, 0, 0, 15, 100, 200 },
  { 2846, 3, 0, 0, 0, 15, 100, 200 },
  { 2849, 3, 0, 0, 0, 15, 100, 200 },
  { 2852, 3, 0, 0, 0, 15, 100, 200 },
  { 2855, 3, 0, 0, 0, 15, 100, 200 },
  { 2858, 3, 0, 0, 0, 15, 100, 200 },
  { 2861, 3, 0, 0, 0, 15, 100, 200 },
  { 2864, 3, 0, 0, 0, 15, 100, 200 },
  { 2867, 3, 0, 0, 0, 15, 100, 200 },
  { 2870, 3, 0, 0, 0, 15, 100, 200 },
  { 2873, 3, 0, 0, 0, 15, 100, 200 },
  { 3283, 3, 0, 0, 0, 15, 200, 0 },
  { 3288, 3, 0, 0, 0, 15, 200, 0 },
  { 3291, 3, 0, 0, 0, 15, 200, 0 },
  { 3294, 3, 0, 0, 0, 15, 200, 0 },
  { 3297, 3, 0, 0, 0, 15, 200, 0 },
  { 3300, 3, 0, 0, 0, 15, 200, 0 },
  { 3303, 3, 0, 0, 0, 15, 200, 0 },
  { 3306, 3, 0, 0, 0, 15, 200, 0 },
  { 3309, 3, 0, 0, 0, 15, 200, 0 },
  { 3312, 3, 0, 0, 0, 15, 200, 0 },
  { 3315, 3, 0, 0, 0, 15, 200, 0 },
  { 3579, 3, 0, 0, 0, 15, 100, 0 },
  { 3582, 3, 0, 0, 0, 15, 100, 0 },
  { 3585, 3, 0, 0, 0, 15, 100, 0 },
  { 3588, 3, 0, 0, 0, 15, 100, 0 },
  { 3591, 3, 0, 0, 0, 15, 100, 0 },
  { 3594, 3, 0, 0, 0, 15, 100, 0 },
  { 3597, 3, 0, 0, 0, 15, 100, 0 },
  { 3600, 3, 0, 0, 0, 15, 100, 0 },
  { 3603, 3, 0, 0, 0, 15, 100, 0 },
  { 3606, 3, 0, 0, 0, 15, 100, 0 },
  { 3609, 3, 0, 0, 0, 15, 100, 0 },
  // 1254: vstore8, 
  { 1982, 4, 0, 0, 0, 15, 100, 200 },
  { 1988, 4, 0, 0, 0, 15, 100, 200 },
  { 1992, 4, 0, 0, 0, 15, 100, 200 },
  { 1996, 4, 0, 0, 0, 15, 100, 200 },
  { 2000, 4, 0, 0, 0, 15, 100, 200 },
  { 2004, 4, 0, 0, 0, 15, 100, 200 },
  { 2008, 4, 0, 0, 0, 15, 100, 200 },
  { 2012, 4, 0, 0, 0, 15, 100, 200 },
  { 2016, 4, 0, 0, 0, 15, 100, 200 },
  { 2020, 4, 0, 0, 0, 15, 100, 200 },
  { 2024, 4, 0, 0, 0, 15, 100, 200 },
  { 2424, 4, 0, 0, 0, 15, 100, 200 },
  { 2428, 4, 0, 0, 0, 15, 100, 200 },
  { 2432, 4, 0, 0, 0, 15, 100, 200 },
  { 2436, 4, 0, 0, 0, 15, 100, 200 },
  { 2440, 4, 0, 0, 0, 15, 100, 200 },
  { 2444, 4, 0, 0, 0, 15, 100, 200 },
  { 2448, 4, 0, 0, 0, 15, 100, 200 },
  { 2452, 4, 0, 0, 0, 15, 100, 200 },
  { 2456, 4, 0, 0, 0, 15, 100, 200 },
  { 2460, 4, 0, 0, 0, 15, 100, 200 },
  { 2464, 4, 0, 0, 0, 15, 100, 200 },
  { 2876, 4, 0, 0, 0, 15, 100, 200 },
  { 2880, 4, 0, 0, 0, 15, 100, 200 },
  { 2884, 4, 0, 0, 0, 15, 100, 200 },
  { 2888, 4, 0, 0, 0, 15, 100, 200 },
  { 2892, 4, 0, 0, 0, 15, 100, 200 },
  { 2896, 4, 0, 0, 0, 15, 100, 200 },
  { 2900, 4, 0, 0, 0, 15, 100, 200 },
  { 2904, 4, 0, 0, 0, 15, 100, 200 },
  { 2908, 4, 0, 0, 0, 15, 100, 200 },
  { 2912, 4, 0, 0, 0, 15, 100, 200 },
  { 2916, 4, 0, 0, 0, 15, 100, 200 },
  { 3320, 4, 0, 0, 0, 15, 200, 0 },
  { 3324, 4, 0, 0, 0, 15, 200, 0 },
  { 3328, 4, 0, 0, 0, 15, 200, 0 },
  { 3332, 4, 0, 0, 0, 15, 200, 0 },
  { 3336, 4, 0, 0, 0, 15, 200, 0 },
  { 3340, 4, 0, 0, 0, 15, 200, 0 },
  { 3344, 4, 0, 0, 0, 15, 200, 0 },
  { 3348, 4, 0, 0, 0, 15, 200, 0 },
  { 3352, 4, 0, 0, 0, 15, 200, 0 },
  { 3356, 4, 0, 0, 0, 15, 200, 0 },
  { 3362, 4, 0, 0, 0, 15, 200, 0 },
  // 1298: vloada_half8, vload_half8, 
  { 2028, 3, 0, 0, 0, 15, 100, 200 },
  { 2468, 3, 0, 0, 0, 15, 100, 200 },
  { 2920, 3, 0, 0, 0, 15, 100, 200 },
  { 3366, 3, 0, 0, 0, 15, 200, 0 },
  { 3612, 3, 0, 0, 0, 15, 100, 0 },
  // 1303: vstorea_half8, vstorea_half8_rte, vstorea_half8_rtz, vstorea_half8_rtp, vstorea_half8_rtn, vstore_half8, vstore_half8_rte, vstore_half8_rtz, vstore_half8_rtp, vstore_half8_rtn, 
  { 2031, 4, 0, 0, 0, 15, 100, 200 },
  { 2035, 4, 0, 0, 0, 15, 100, 200 },
  { 2471, 4, 0, 0, 0, 15, 100, 200 },
  { 2475, 4, 0, 0, 0, 15, 100, 200 },
  { 2923, 4, 0, 0, 0, 15, 100, 200 },
  { 2927, 4, 0, 0, 0, 15, 100, 200 },
  { 3369, 4, 0, 0, 0, 15, 200, 0 },
  { 3373, 4, 0, 0, 0, 15, 200, 0 },
  // 1311: vload16, 
  { 2039, 3, 0, 0, 0, 15, 100, 200 },
  { 2042, 3, 0, 0, 0, 15, 100, 200 },
  { 2045, 3, 0, 0, 0, 15, 100, 200 },
  { 2048, 3, 0, 0, 0, 15, 100, 200 },
  { 2051, 3, 0, 0, 0, 15, 100, 200 },
  { 2054, 3, 0, 0, 0, 15, 100, 200 },
  { 2057, 3, 0, 0, 0, 15, 100, 200 },
  { 2060, 3, 0, 0, 0, 15, 100, 200 },
  { 2063, 3, 0, 0, 0, 15, 100, 200 },
  { 2066, 3, 0, 0, 0, 15, 100, 200 },
  { 2069, 3, 0, 0, 0, 15, 100, 200 },
  { 2479, 3, 0, 0, 0, 15, 100, 200 },
  { 2482, 3, 0, 0, 0, 15, 100, 200 },
  { 2485, 3, 0, 0, 0, 15, 100, 200 },
  { 2488, 3, 0, 0, 0, 15, 100, 200 },
  { 2491, 3, 0, 0, 0, 15, 100, 200 },
  { 2494, 3, 0, 0, 0, 15, 100, 200 },
  { 2497, 3, 0, 0, 0, 15, 100, 200 },
  { 2500, 3, 0, 0, 0, 15, 100, 200 },
  { 2503, 3, 0, 0, 0, 15, 100, 200 },
  { 2506, 3, 0, 0, 0, 15, 100, 200 },
  { 2509, 3, 0, 0, 0, 15, 100, 200 },
  { 2931, 3, 0, 0, 0, 15, 100, 200 },
  { 2934, 3, 0, 0, 0, 15, 100, 200 },
  { 2937, 3, 0, 0, 0, 15, 100, 200 },
  { 2940, 3, 0, 0, 0, 15, 100, 200 },
  { 2943, 3, 0, 0, 0, 15, 100, 200 },
  { 2946, 3, 0, 0, 0, 15, 100, 200 },
  { 2949, 3, 0, 0, 0, 15, 100, 200 },
  { 2952, 3, 0, 0, 0, 15, 100, 200 },
  { 2955, 3, 0, 0, 0, 15, 100, 200 },
  { 2958, 3, 0, 0, 0, 15, 100, 200 },
  { 2961, 3, 0, 0, 0, 15, 100, 200 },
  { 3379, 3, 0, 0, 0, 15, 200, 0 },
  { 3382, 3, 0, 0, 0, 15, 200, 0 },
  { 3385, 3, 0, 0, 0, 15, 200, 0 },
  { 3388, 3, 0, 0, 0, 15, 200, 0 },
  { 3391, 3, 0, 0, 0, 15, 200, 0 },
  { 3394, 3, 0, 0, 0, 15, 200, 0 },
  { 3397, 3, 0, 0, 0, 15, 200, 0 },
  { 3400, 3, 0, 0, 0, 15, 200, 0 },
  { 3405, 3, 0, 0, 0, 15, 200, 0 },
  { 3408, 3, 0, 0, 0, 15, 200, 0 },
  { 3411, 3, 0, 0, 0, 15, 200, 0 },
  { 3615, 3, 0, 0, 0, 15, 100, 0 },
  { 3618, 3, 0, 0, 0, 15, 100, 0 },
  { 3621, 3, 0, 0, 0, 15, 100, 0 },
  { 3624, 3, 0, 0, 0, 15, 100, 0 },
  { 3627, 3, 0, 0, 0, 15, 100, 0 },
  { 3630, 3, 0, 0, 0, 15, 100, 0 },
  { 3633, 3, 0, 0, 0, 15, 100, 0 },
  { 3636, 3, 0, 0, 0, 15, 100, 0 },
  { 3639, 3, 0, 0, 0, 15, 100, 0 },
  { 3642, 3, 0, 0, 0, 15, 100, 0 },
  { 3645, 3, 0, 0, 0, 15, 100, 0 },
  // 1366: vstore16, 
  { 2072, 4, 0, 0, 0, 15, 100, 200 },
  { 2076, 4, 0, 0, 0, 15, 100, 200 },
  { 2080, 4, 0, 0, 0, 15, 100, 200 },
  { 2084, 4, 0, 0, 0, 15, 100, 200 },
  { 2088, 4, 0, 0, 0, 15, 100, 200 },
  { 2092, 4, 0, 0, 0, 15, 100, 200 },
  { 2096, 4, 0, 0, 0, 15, 100, 200 },
  { 2100, 4, 0, 0, 0, 15, 100, 200 },
  { 2104, 4, 0, 0, 0, 15, 100, 200 },
  { 2108, 4, 0, 0, 0, 15, 100, 200 },
  { 2112, 4, 0, 0, 0, 15, 100, 200 },
  { 2512, 4, 0, 0, 0, 15, 100, 200 },
  { 2516, 4, 0, 0, 0, 15, 100, 200 },
  { 2520, 4, 0, 0, 0, 15, 100, 200 },
  { 2524, 4, 0, 0, 0, 15, 100, 200 },
  { 2528, 4, 0, 0, 0, 15, 100, 200 },
  { 2532, 4, 0, 0, 0, 15, 100, 200 },
  { 2536, 4, 0, 0, 0, 15, 100, 200 },
  { 2540, 4, 0, 0, 0, 15, 100, 200 },
  { 2544, 4, 0, 0, 0, 15, 100, 200 },
  { 2548, 4, 0, 0, 0, 15, 100, 200 },
  { 2552, 4, 0, 0, 0, 15, 100, 200 },
  { 2964, 4, 0, 0, 0, 15, 100, 200 },
  { 2968, 4, 0, 0, 0, 15, 100, 200 },
  { 2972, 4, 0, 0, 0, 15, 100, 200 },
  { 2976, 4, 0, 0, 0, 15, 100, 200 },
  { 2980, 4, 0, 0, 0, 15, 100, 200 },
  { 2984, 4, 0, 0, 0, 15, 100, 200 },
  { 2988, 4, 0, 0, 0, 15, 100, 200 },
  { 2992, 4, 0, 0, 0, 15, 100, 200 },
  { 2996, 4, 0, 0, 0, 15, 100, 200 },
  { 3000, 4, 0, 0, 0, 15, 100, 200 },
  { 3004, 4, 0, 0, 0, 15, 100, 200 },
  { 3414, 4, 0, 0, 0, 15, 200, 0 },
  { 3418, 4, 0, 0, 0, 15, 200, 0 },
  { 3422, 4, 0, 0, 0, 15, 200, 0 },
  { 3426, 4, 0, 0, 0, 15, 200, 0 },
  { 3430, 4, 0, 0, 0, 15, 200, 0 },
  { 3434, 4, 0, 0, 0, 15, 200, 0 },
  { 3438, 4, 0, 0, 0, 15, 200, 0 },
  { 3444, 4, 0, 0, 0, 15, 200, 0 },
  { 3448, 4, 0, 0, 0, 15, 200, 0 },
  { 3452, 4, 0, 0, 0, 15, 200, 0 },
  { 3456, 4, 0, 0, 0, 15, 200, 0 },
  // 1410: vloada_half16, vload_half16, 
  { 2116, 3, 0, 0, 0, 15, 100, 200 },
  { 2556, 3, 0, 0, 0, 15, 100, 200 },
  { 3008, 3, 0, 0, 0, 15, 100, 200 },
  { 3460, 3, 0, 0, 0, 15, 200, 0 },
  { 3648, 3, 0, 0, 0, 15, 100, 0 },
  // 1415: vstorea_half16, vstorea_half16_rte, vstorea_half16_rtz, vstorea_half16_rtp, vstorea_half16_rtn, vstore_half16, vstore_half16_rte, vstore_half16_rtz, vstore_half16_rtp, vstore_half16_rtn, 
  { 2119, 4, 0, 0, 0, 15, 100, 200 },
  { 2123, 4, 0, 0, 0, 15, 100, 200 },
  { 2559, 4, 0, 0, 0, 15, 100, 200 },
  { 2563, 4, 0, 0, 0, 15, 100, 200 },
  { 3011, 4, 0, 0, 0, 15, 100, 200 },
  { 3015, 4, 0, 0, 0, 15, 100, 200 },
  { 3463, 4, 0, 0, 0, 15, 200, 0 },
  { 3467, 4, 0, 0, 0, 15, 200, 0 },
  // 1423: vload_half, vloada_half, 
  { 3651, 3, 0, 0, 0, 15, 100, 200 },
  { 3662, 3, 0, 0, 0, 15, 100, 200 },
  { 3673, 3, 0, 0, 0, 15, 100, 200 },
  { 3696, 3, 0, 0, 0, 15, 200, 0 },
  { 3707, 3, 0, 0, 0, 15, 100, 0 },
  // 1428: vstore_half, vstorea_half, vstore_half_rte, vstorea_half_rte, vstore_half_rtz, vstorea_half_rtz, vstore_half_rtp, vstorea_half_rtp, vstore_half_rtn, vstorea_half_rtn, 
  { 3654, 4, 0, 0, 0, 15, 100, 200 },
  { 3658, 4, 0, 0, 0, 15, 100, 200 },
  { 3665, 4, 0, 0, 0, 15, 100, 200 },
  { 3669, 4, 0, 0, 0, 15, 100, 200 },
  { 3676, 4, 0, 0, 0, 15, 100, 200 },
  { 3680, 4, 0, 0, 0, 15, 100, 200 },
  { 3699, 4, 0, 0, 0, 15, 200, 0 },
  { 3703, 4, 0, 0, 0, 15, 200, 0 },
  // 1436: async_work_group_copy, 
  { 3710, 5, 0, 0, 0, 15, 100, 0 },
  { 3715, 5, 0, 0, 0, 15, 100, 0 },
  // 1438: async_work_group_strided_copy, 
  { 3720, 6, 0, 0, 0, 15, 100, 0 },
  { 3726, 6, 0, 0, 0, 15, 100, 0 },
  // 1440: wait_group_events, 
  { 3732, 3, 0, 0, 0, 15, 100, 0 },
  // 1441: prefetch, 
  { 3735, 3, 0, 0, 0, 15, 100, 0 },
  // 1442: atom_add, atom_sub, atom_xchg, 
  { 3738, 3, 0, 0, 0, 5, 100, 0 },
  { 3747, 3, 0, 0, 0, 5, 100, 0 },
  { 3756, 3, 0, 0, 0, 9, 100, 0 },
  { 3765, 3, 0, 0, 0, 9, 100, 0 },
  { 3774, 3, 0, 0, 0, 7, 100, 0 },
  { 3783, 3, 0, 0, 0, 7, 100, 0 },
  { 3792, 3, 0, 0, 0, 7, 100, 0 },
  { 3801, 3, 0, 0, 0, 7, 100, 0 },
  // 1450: atom_inc, atom_dec, 
  { 3741, 2, 0, 0, 0, 5, 100, 0 },
  { 3750, 2, 0, 0, 0, 5, 100, 0 },
  { 3759, 2, 0, 0, 0, 9, 100, 0 },
  { 3768, 2, 0, 0, 0, 9, 100, 0 },
  { 3777, 2, 0, 0, 0, 7, 100, 0 },
  { 3786, 2, 0, 0, 0, 7, 100, 0 },
  { 3795, 2, 0, 0, 0, 7, 100, 0 },
  { 3804, 2, 0, 0, 0, 7, 100, 0 },
  // 1458: atom_cmpxchg, 
  { 3743, 4, 0, 0, 0, 5, 100, 0 },
  { 3752, 4, 0, 0, 0, 5, 100, 0 },
  { 3761, 4, 0, 0, 0, 9, 100, 0 },
  { 3770, 4, 0, 0, 0, 9, 100, 0 },
  { 3779, 4, 0, 0, 0, 7, 100, 0 },
  { 3788, 4, 0, 0, 0, 7, 100, 0 },
  { 3797, 4, 0, 0, 0, 7, 100, 0 },
  { 3806, 4, 0, 0, 0, 7, 100, 0 },
  // 1466: atom_min, atom_max, atom_and, atom_or, atom_xor, 
  { 3738, 3, 0, 0, 0, 6, 100, 0 },
  { 3747, 3, 0, 0, 0, 6, 100, 0 },
  { 3756, 3, 0, 0, 0, 10, 100, 0 },
  { 3765, 3, 0, 0, 0, 10, 100, 0 },
  { 3774, 3, 0, 0, 0, 8, 100, 0 },
  { 3783, 3, 0, 0, 0, 8, 100, 0 },
  { 3792, 3, 0, 0, 0, 8, 100, 0 },
  { 3801, 3, 0, 0, 0, 8, 100, 0 },
  // 1474: atomic_add, atomic_sub, atomic_xchg, atomic_min, atomic_max, atomic_and, atomic_or, atomic_xor, 
  { 3738, 3, 0, 0, 0, 15, 100, 0 },
  { 3747, 3, 0, 0, 0, 15, 100, 0 },
  { 3756, 3, 0, 0, 0, 15, 100, 0 },
  { 3765, 3, 0, 0, 0, 15, 100, 0 },
  // 1478: atomic_inc, atomic_dec, 
  { 3741, 2, 0, 0, 0, 15, 100, 0 },
  { 3750, 2, 0, 0, 0, 15, 100, 0 },
  { 3759, 2, 0, 0, 0, 15, 100, 0 },
  { 3768, 2, 0, 0, 0, 15, 100, 0 },
  // 1482: atomic_cmpxchg, 
  { 3743, 4, 0, 0, 0, 15, 100, 0 },
  { 3752, 4, 0, 0, 0, 15, 100, 0 },
  { 3761, 4, 0, 0, 0, 15, 100, 0 },
  { 3770, 4, 0, 0, 0, 15, 100, 0 },
  // 1486: atomic_init, atomic_store, 
  { 3812, 3, 0, 0, 0, 15, 200, 0 },
  { 3826, 3, 0, 0, 0, 15, 200, 0 },
  { 3840, 3, 0, 0, 0, 15, 200, 0 },
  { 3854, 3, 0, 0, 0, 15, 200, 0 },
  { 3868, 3, 0, 0, 0, 15, 200, 0 },
  { 3880, 3, 0, 0, 0, 15, 200, 0 },
  // 1492: atomic_load, 
  { 3815, 2, 0, 0, 0, 15, 200, 0 },
  { 3829, 2, 0, 0, 0, 15, 200, 0 },
  { 3843, 2, 0, 0, 0, 15, 200, 0 },
  { 3857, 2, 0, 0, 0, 15, 200, 0 },
  { 3871, 2, 0, 0, 0, 15, 200, 0 },
  { 3885, 2, 0, 0, 0, 15, 200, 0 },
  // 1498: atomic_exchange, 
  { 3819, 3, 0, 0, 0, 15, 200, 0 },
  { 3833, 3, 0, 0, 0, 15, 200, 0 },
  { 3845, 3, 0, 0, 0, 15, 200, 0 },
  { 3859, 3, 0, 0, 0, 15, 200, 0 },
  { 3873, 3, 0, 0, 0, 15, 200, 0 },
  { 3887, 3, 0, 0, 0, 15, 200, 0 },
  // 1504: atomic_compare_exchange_weak, atomic_compare_exchange_strong, 
  { 3822, 4, 0, 0, 0, 15, 200, 0 },
  { 3836, 4, 0, 0, 0, 15, 200, 0 },
  { 3848, 4, 0, 0, 0, 15, 200, 0 },
  { 3862, 4, 0, 0, 0, 15, 200, 0 },
  { 3876, 4, 0, 0, 0, 15, 200, 0 },
  { 3890, 4, 0, 0, 0, 15, 200, 0 },
  // 1510: atomic_fetch_add, atomic_fetch_sub, 
  { 3819, 3, 0, 0, 0, 15, 200, 0 },
  { 3833, 3, 0, 0, 0, 15, 200, 0 },
  { 3845, 3, 0, 0, 0, 15, 200, 0 },
  { 3859, 3, 0, 0, 0, 15, 200, 0 },
  { 3894, 3, 0, 0, 0, 15, 200, 0 },
  { 3897, 3, 0, 0, 0, 15, 200, 0 },
  // 1516: atomic_fetch_or, atomic_fetch_xor, atomic_fetch_and, atomic_fetch_min, atomic_fetch_max, 
  { 3819, 3, 0, 0, 0, 15, 200, 0 },
  { 3833, 3, 0, 0, 0, 15, 200, 0 },
  { 3845, 3, 0, 0, 0, 15, 200, 0 },
  { 3859, 3, 0, 0, 0, 15, 200, 0 },
  { 3900, 3, 0, 0, 0, 15, 200, 0 },
  { 3903, 3, 0, 0, 0, 15, 200, 0 },
  // 1522: shuffle, 
  { 3906, 3, 0, 1, 0, 15, 100, 0 },
  { 3909, 3, 0, 1, 0, 15, 100, 0 },
  { 3912, 3, 0, 1, 0, 15, 100, 0 },
  { 3915, 3, 0, 1, 0, 15, 100, 0 },
  { 3918, 3, 0, 1, 0, 15, 100, 0 },
  { 3921, 3, 0, 1, 0, 15, 100, 0 },
  { 3924, 3, 0, 1, 0, 15, 100, 0 },
  { 3927, 3, 0, 1, 0, 15, 100, 0 },
  { 3930, 3, 0, 1, 0, 15, 100, 0 },
  { 3933, 3, 0, 1, 0, 15, 100, 0 },
  { 3936, 3, 0, 1, 0, 15, 100, 0 },
  { 3939, 3, 0, 1, 0, 15, 100, 0 },
  { 3942, 3, 0, 1, 0, 15, 100, 0 },
  { 3945, 3, 0, 1, 0, 15, 100, 0 },
  { 3948, 3, 0, 1, 0, 15, 100, 0 },
  { 3951, 3, 0, 1, 0, 15, 100, 0 },
  // 1538: shuffle2, 
  { 3954, 4, 0, 1, 0, 15, 100, 0 },
  { 3958, 4, 0, 1, 0, 15, 100, 0 },
  { 3962, 4, 0, 1, 0, 15, 100, 0 },
  { 3966, 4, 0, 1, 0, 15, 100, 0 },
  { 3970, 4, 0, 1, 0, 15, 100, 0 },
  { 3974, 4, 0, 1, 0, 15, 100, 0 },
  { 3978, 4, 0, 1, 0, 15, 100, 0 },
  { 3982, 4, 0, 1, 0, 15, 100, 0 },
  { 3986, 4, 0, 1, 0, 15, 100, 0 },
  { 3990, 4, 0, 1, 0, 15, 100, 0 },
  { 3994, 4, 0, 1, 0, 15, 100, 0 },
  { 3998, 4, 0, 1, 0, 15, 100, 0 },
  { 4002, 4, 0, 1, 0, 15, 100, 0 },
  { 4006, 4, 0, 1, 0, 15, 100, 0 },
  { 4010, 4, 0, 1, 0, 15, 100, 0 },
  { 4014, 4, 0, 1, 0, 15, 100, 0 },
  // 1554: read_imagef, 
  { 4018, 4, 1, 0, 0, 15, 100, 0 },
  { 4030, 4, 1, 0, 0, 15, 100, 0 },
  { 4042, 4, 1, 0, 0, 15, 100, 0 },
  { 4054, 4, 1, 0, 0, 15, 100, 0 },
  { 4066, 4, 1, 0, 0, 15, 100, 0 },
  { 4078, 4, 1, 0, 0, 15, 100, 0 },
  { 4090, 4, 1, 0, 0, 15, 100, 0 },
  { 4102, 4, 1, 0, 0, 15, 100, 0 },
  { 4114, 4, 1, 0, 0, 15, 100, 0 },
  { 4126, 4, 1, 0, 0, 15, 100, 0 },
  { 4138, 4, 1, 0, 0, 15, 100, 0 },
  { 4142, 4, 1, 0, 0, 15, 100, 0 },
  { 4146, 4, 1, 0, 0, 15, 100, 0 },
  { 4150, 4, 1, 0, 0, 15, 100, 0 },
  { 4154, 3, 1, 0, 0, 15, 100, 0 },
  { 4163, 3, 1, 0, 0, 15, 100, 0 },
  { 4172, 3, 1, 0, 0, 15, 100, 0 },
  { 4181, 3, 1, 0, 0, 15, 100, 0 },
  { 4184, 3, 1, 0, 0, 15, 100, 0 },
  { 4187, 3, 1, 0, 0, 15, 100, 0 },
  { 4196, 3, 1, 0, 0, 15, 100, 0 },
  { 4205, 3, 1, 0, 0, 15, 100, 0 },
  { 4214, 3, 1, 0, 0, 15, 100, 0 },
  { 4223, 3, 1, 0, 0, 15, 100, 0 },
  { 4232, 3, 1, 0, 0, 15, 100, 0 },
  { 4241, 3, 1, 0, 0, 15, 100, 0 },
  { 4250, 3, 1, 0, 0, 15, 100, 0 },
  { 4259, 3, 1, 0, 0, 15, 100, 0 },
  { 4268, 3, 1, 0, 0, 15, 100, 0 },
  { 4271, 3, 1, 0, 0, 15, 100, 0 },
  { 4696, 5, 1, 0, 0, 11, 100, 0 },
  { 4701, 6, 1, 0, 0, 11, 100, 0 },
  { 4729, 5, 1, 0, 0, 11, 100, 0 },
  { 4734, 6, 1, 0, 0, 11, 100, 0 },
  { 4740, 5, 1, 0, 0, 11, 100, 0 },
  { 4745, 6, 1, 0, 0, 11, 100, 0 },
  { 4773, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4796, 5, 1, 0, 0, 11, 100, 0 },
  { 4801, 6, 1, 0, 0, 11, 100, 0 },
  { 4829, 5, 1, 0, 0, 11, 100, 0 },
  { 4834, 6, 1, 0, 0, 11, 100, 0 },
  { 4862, 5, 1, 0, 0, 11, 100, 0 },
  { 4867, 6, 1, 0, 0, 11, 100, 0 },
  { 4958, 4, 1, 0, 0, 4, 100, 0 },
  { 4970, 4, 1, 0, 0, 4, 100, 0 },
  { 4982, 4, 1, 0, 0, 4, 100, 0 },
  { 4986, 4, 1, 0, 0, 4, 100, 0 },
  { 4990, 4, 1, 0, 0, 4, 100, 0 },
  { 5002, 4, 1, 0, 0, 4, 100, 0 },
  { 5014, 4, 1, 0, 0, 4, 100, 0 },
  { 5018, 4, 1, 0, 0, 4, 100, 0 },
  // 1606: read_imagei, 
  { 4022, 4, 1, 0, 0, 15, 100, 0 },
  { 4034, 4, 1, 0, 0, 15, 100, 0 },
  { 4046, 4, 1, 0, 0, 15, 100, 0 },
  { 4058, 4, 1, 0, 0, 15, 100, 0 },
  { 4070, 4, 1, 0, 0, 15, 100, 0 },
  { 4082, 4, 1, 0, 0, 15, 100, 0 },
  { 4094, 4, 1, 0, 0, 15, 100, 0 },
  { 4106, 4, 1, 0, 0, 15, 100, 0 },
  { 4118, 4, 1, 0, 0, 15, 100, 0 },
  { 4130, 4, 1, 0, 0, 15, 100, 0 },
  { 4157, 3, 1, 0, 0, 15, 100, 0 },
  { 4166, 3, 1, 0, 0, 15, 100, 0 },
  { 4175, 3, 1, 0, 0, 15, 100, 0 },
  { 4190, 3, 1, 0, 0, 15, 100, 0 },
  { 4199, 3, 1, 0, 0, 15, 100, 0 },
  { 4208, 3, 1, 0, 0, 15, 100, 0 },
  { 4217, 3, 1, 0, 0, 15, 100, 0 },
  { 4226, 3, 1, 0, 0, 15, 100, 0 },
  { 4235, 3, 1, 0, 0, 15, 100, 0 },
  { 4244, 3, 1, 0, 0, 15, 100, 0 },
  { 4253, 3, 1, 0, 0, 15, 100, 0 },
  { 4262, 3, 1, 0, 0, 15, 100, 0 },
  { 4707, 5, 1, 0, 0, 11, 100, 0 },
  { 4712, 6, 1, 0, 0, 11, 100, 0 },
  { 4751, 5, 1, 0, 0, 11, 100, 0 },
  { 4756, 6, 1, 0, 0, 11, 100, 0 },
  { 4784, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4807, 5, 1, 0, 0, 11, 100, 0 },
  { 4812, 6, 1, 0, 0, 11, 100, 0 },
  { 4840, 5, 1, 0, 0, 11, 100, 0 },
  { 4845, 6, 1, 0, 0, 11, 100, 0 },
  { 4962, 4, 1, 0, 0, 4, 100, 0 },
  { 4974, 4, 1, 0, 0, 4, 100, 0 },
  { 4994, 4, 1, 0, 0, 4, 100, 0 },
  { 5006, 4, 1, 0, 0, 4, 100, 0 },
  // 1642: read_imageui, 
  { 4026, 4, 1, 0, 0, 15, 100, 0 },
  { 4038, 4, 1, 0, 0, 15, 100, 0 },
  { 4050, 4, 1, 0, 0, 15, 100, 0 },
  { 4062, 4, 1, 0, 0, 15, 100, 0 },
  { 4074, 4, 1, 0, 0, 15, 100, 0 },
  { 4086, 4, 1, 0, 0, 15, 100, 0 },
  { 4098, 4, 1, 0, 0, 15, 100, 0 },
  { 4110, 4, 1, 0, 0, 15, 100, 0 },
  { 4122, 4, 1, 0, 0, 15, 100, 0 },
  { 4134, 4, 1, 0, 0, 15, 100, 0 },
  { 4160, 3, 1, 0, 0, 15, 100, 0 },
  { 4169, 3, 1, 0, 0, 15, 100, 0 },
  { 4178, 3, 1, 0, 0, 15, 100, 0 },
  { 4193, 3, 1, 0, 0, 15, 100, 0 },
  { 4202, 3, 1, 0, 0, 15, 100, 0 },
  { 4211, 3, 1, 0, 0, 15, 100, 0 },
  { 4220, 3, 1, 0, 0, 15, 100, 0 },
  { 4229, 3, 1, 0, 0, 15, 100, 0 },
  { 4238, 3, 1, 0, 0, 15, 100, 0 },
  { 4247, 3, 1, 0, 0, 15, 100, 0 },
  { 4256, 3, 1, 0, 0, 15, 100, 0 },
  { 4265, 3, 1, 0, 0, 15, 100, 0 },
  { 4718, 5, 1, 0, 0, 11, 100, 0 },
  { 4723, 6, 1, 0, 0, 11, 100, 0 },
  { 4762, 5, 1, 0, 0, 11, 100, 0 },
  { 4767, 6, 1, 0, 0, 11, 100, 0 },
  { 4790, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4818, 5, 1, 0, 0, 11, 100, 0 },
  { 4823, 6, 1, 0, 0, 11, 100, 0 },
  { 4851, 5, 1, 0, 0, 11, 100, 0 },
  { 4856, 6, 1, 0, 0, 11, 100, 0 },
  { 4966, 4, 1, 0, 0, 4, 100, 0 },
  { 4978, 4, 1, 0, 0, 4, 100, 0 },
  { 4998, 4, 1, 0, 0, 4, 100, 0 },
  { 5010, 4, 1, 0, 0, 4, 100, 0 },
  // 1678: write_imagef, 
  { 4274, 4, 0, 0, 0, 15, 100, 0 },
  { 4286, 4, 0, 0, 0, 15, 100, 0 },
  { 4298, 4, 0, 0, 0, 15, 100, 0 },
  { 4310, 4, 0, 0, 0, 15, 100, 0 },
  { 4322, 4, 0, 0, 0, 15, 100, 0 },
  { 4334, 4, 0, 0, 0, 15, 100, 0 },
  { 4338, 4, 0, 0, 0, 15, 100, 0 },
  { 4342, 4, 0, 0, 0, 15, 100, 0 },
  { 4354, 4, 0, 0, 0, 15, 100, 0 },
  { 4366, 4, 0, 0, 0, 15, 100, 0 },
  { 4378, 4, 0, 0, 0, 15, 100, 0 },
  { 4390, 4, 0, 0, 0, 15, 100, 0 },
  { 4402, 4, 0, 0, 0, 15, 100, 0 },
  { 4414, 4, 0, 0, 0, 15, 100, 0 },
  { 4428, 4, 0, 0, 0, 15, 100, 0 },
  { 4432, 4, 0, 0, 0, 15, 100, 0 },
  { 4873, 5, 0, 0, 0, 12, 100, 0 },
  { 4888, 5, 0, 0, 0, 12, 100, 0 },
  { 4893, 5, 0, 0, 0, 12, 100, 0 },
  { 4908, 5, 0, 0, 0, 12, 100, 0 },
  { 4923, 5, 0, 0, 0, 12, 100, 0 },
  { 4938, 5, 0, 0, 0, 12, 100, 0 },
  { 4943, 5, 0, 0, 0, 13, 100, 0 },
  // 1701: write_imagei, 
  { 4278, 4, 0, 0, 0, 15, 100, 0 },
  { 4290, 4, 0, 0, 0, 15, 100, 0 },
  { 4302, 4, 0, 0, 0, 15, 100, 0 },
  { 4314, 4, 0, 0, 0, 15, 100, 0 },
  { 4326, 4, 0, 0, 0, 15, 100, 0 },
  { 4346, 4, 0, 0, 0, 15, 100, 0 },
  { 4358, 4, 0, 0, 0, 15, 100, 0 },
  { 4370, 4, 0, 0, 0, 15, 100, 0 },
  { 4382, 4, 0, 0, 0, 15, 100, 0 },
  { 4394, 4, 0, 0, 0, 15, 100, 0 },
  { 4406, 4, 0, 0, 0, 15, 100, 0 },
  { 4418, 4, 0, 0, 0, 15, 100, 0 },
  { 4878, 5, 0, 0, 0, 12, 100, 0 },
  { 4898, 5, 0, 0, 0, 12, 100, 0 },
  { 4913, 5, 0, 0, 0, 12, 100, 0 },
  { 4928, 5, 0, 0, 0, 12, 100, 0 },
  { 4948, 5, 0, 0, 0, 13, 100, 0 },
  // 1718: write_imageui, 
  { 4282, 4, 0, 0, 0, 15, 100, 0 },
  { 4294, 4, 0, 0, 0, 15, 100, 0 },
  { 4306, 4, 0, 0, 0, 15, 100, 0 },
  { 4318, 4, 0, 0, 0, 15, 100, 0 },
  { 4330, 4, 0, 0, 0, 15, 100, 0 },
  { 4350, 4, 0, 0, 0, 15, 100, 0 },
  { 4362, 4, 0, 0, 0, 15, 100, 0 },
  { 4374, 4, 0, 0, 0, 15, 100, 0 },
  { 4386, 4, 0, 0, 0, 15, 100, 0 },
  { 4398, 4, 0, 0, 0, 15, 100, 0 },
  { 4410, 4, 0, 0, 0, 15, 100, 0 },
  { 4424, 4, 0, 0, 0, 15, 100, 0 },
  { 4883, 5, 0, 0, 0, 12, 100, 0 },
  { 4903, 5, 0, 0, 0, 12, 100, 0 },
  { 4918, 5, 0, 0, 0, 12, 100, 0 },
  { 4933, 5, 0, 0, 0, 12, 100, 0 },
  { 4953, 5, 0, 0, 0, 13, 100, 0 },
  // 1735: get_image_width, get_image_channel_data_type, get_image_channel_order, 
  { 4436, 2, 0, 0, 0, 15, 100, 0 },
  { 4450, 2, 0, 0, 0, 15, 100, 0 },
  { 4438, 2, 0, 0, 0, 15, 100, 0 },
  { 4440, 2, 0, 0, 0, 15, 100, 0 },
  { 4454, 2, 0, 0, 0, 15, 100, 0 },
  { 4456, 2, 0, 0, 0, 15, 100, 0 },
  { 4458, 2, 0, 0, 0, 15, 100, 0 },
  { 4460, 2, 0, 0, 0, 15, 100, 0 },
  { 4476, 2, 0, 0, 0, 15, 100, 0 },
  { 4478, 2, 0, 0, 0, 15, 100, 0 },
  { 4480, 2, 0, 0, 0, 15, 100, 0 },
  { 4484, 2, 0, 0, 0, 15, 100, 0 },
  { 4486, 2, 0, 0, 0, 15, 100, 0 },
  { 4488, 2, 0, 0, 0, 15, 100, 0 },
  { 4490, 2, 0, 0, 0, 15, 100, 0 },
  { 4492, 2, 0, 0, 0, 15, 100, 0 },
  { 4510, 2, 0, 0, 0, 15, 100, 0 },
  { 4512, 2, 0, 0, 0, 15, 100, 0 },
  { 4514, 2, 0, 0, 0, 15, 100, 0 },
  { 4516, 2, 0, 0, 0, 15, 100, 0 },
  { 4518, 2, 0, 0, 0, 15, 100, 0 },
  { 4520, 2, 0, 0, 0, 15, 100, 0 },
  { 4522, 2, 0, 0, 0, 15, 100, 0 },
  { 4524, 2, 0, 0, 0, 15, 100, 0 },
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1771: get_image_height, 
  { 4438, 2, 0, 0, 0, 15, 100, 0 },
  { 4440, 2, 0, 0, 0, 15, 100, 0 },
  { 4456, 2, 0, 0, 0, 15, 100, 0 },
  { 4458, 2, 0, 0, 0, 15, 100, 0 },
  { 4460, 2, 0, 0, 0, 15, 100, 0 },
  { 4480, 2, 0, 0, 0, 15, 100, 0 },
  { 4484, 2, 0, 0, 0, 15, 100, 0 },
  { 4488, 2, 0, 0, 0, 15, 100, 0 },
  { 4490, 2, 0, 0, 0, 15, 100, 0 },
  { 4492, 2, 0, 0, 0, 15, 100, 0 },
  { 4514, 2, 0, 0, 0, 15, 100, 0 },
  { 4516, 2, 0, 0, 0, 15, 100, 0 },
  { 4520, 2, 0, 0, 0, 15, 100, 0 },
  { 4522, 2, 0, 0, 0, 15, 100, 0 },
  { 4524, 2, 0, 0, 0, 15, 100, 0 },
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1798: get_image_depth, 
  { 4440, 2, 0, 0, 0, 15, 100, 0 },
  { 4484, 2, 0, 0, 0, 15, 100, 0 },
  { 4516, 2, 0, 0, 0, 15, 100, 0 },
  // 1801: get_image_dim, 
  { 4442, 2, 0, 0, 0, 15, 100, 0 },
  { 4444, 2, 0, 0, 0, 15, 100, 0 },
  { 4464, 2, 0, 0, 0, 15, 100, 0 },
  { 4466, 2, 0, 0, 0, 15, 100, 0 },
  { 4468, 2, 0, 0, 0, 15, 100, 0 },
  { 4494, 2, 0, 0, 0, 15, 100, 0 },
  { 4496, 2, 0, 0, 0, 15, 100, 0 },
  { 4498, 2, 0, 0, 0, 15, 100, 0 },
  { 4500, 2, 0, 0, 0, 15, 100, 0 },
  { 4502, 2, 0, 0, 0, 15, 100, 0 },
  { 4526, 2, 0, 0, 0, 15, 100, 0 },
  { 4528, 2, 0, 0, 0, 15, 100, 0 },
  { 4530, 2, 0, 0, 0, 15, 100, 0 },
  { 4532, 2, 0, 0, 0, 15, 100, 0 },
  { 4534, 2, 0, 0, 0, 15, 100, 0 },
  { 5024, 2, 0, 1, 0, 4, 100, 0 },
  { 5030, 2, 0, 1, 0, 4, 100, 0 },
  { 5034, 2, 0, 1, 0, 4, 100, 0 },
  { 5040, 2, 0, 1, 0, 4, 100, 0 },
  { 5048, 2, 0, 1, 0, 4, 100, 0 },
  { 5054, 2, 0, 1, 0, 4, 100, 0 },
  { 5058, 2, 0, 1, 0, 4, 100, 0 },
  { 5064, 2, 0, 1, 0, 4, 100, 0 },
  { 5074, 2, 0, 1, 0, 4, 100, 0 },
  { 5080, 2, 0, 1, 0, 4, 100, 0 },
  { 5084, 2, 0, 1, 0, 4, 100, 0 },
  { 5088, 2, 0, 1, 0, 4, 100, 0 },
  // 1828: get_image_array_size, 
  { 4446, 2, 0, 0, 0, 15, 100, 0 },
  { 4470, 2, 0, 0, 0, 15, 100, 0 },
  { 4474, 2, 0, 0, 0, 15, 100, 0 },
  { 4504, 2, 0, 0, 0, 15, 100, 0 },
  { 4506, 2, 0, 0, 0, 15, 100, 0 },
  { 4508, 2, 0, 0, 0, 15, 100, 0 },
  { 4536, 2, 0, 0, 0, 15, 100, 0 },
  { 4538, 2, 0, 0, 0, 15, 100, 0 },
  { 4540, 2, 0, 0, 0, 15, 100, 0 },
  { 5026, 2, 0, 1, 0, 4, 100, 0 },
  { 5042, 2, 0, 1, 0, 4, 100, 0 },
  { 5066, 2, 0, 1, 0, 4, 100, 0 },
  { 5068, 2, 0, 1, 0, 4, 100, 0 },
  { 5090, 2, 0, 1, 0, 4, 100, 0 },
  { 5092, 2, 0, 1, 0, 4, 100, 0 },
  // 1843: read_imageh, 
  { 4542, 4, 1, 0, 0, 15, 100, 0 },
  { 4546, 4, 1, 0, 0, 15, 100, 0 },
  { 4550, 4, 1, 0, 0, 15, 100, 0 },
  { 4554, 4, 1, 0, 0, 15, 100, 0 },
  { 4558, 4, 1, 0, 0, 15, 100, 0 },
  { 4562, 4, 1, 0, 0, 15, 100, 0 },
  { 4566, 4, 1, 0, 0, 15, 100, 0 },
  { 4570, 4, 1, 0, 0, 15, 100, 0 },
  { 4574, 4, 1, 0, 0, 15, 100, 0 },
  { 4578, 4, 1, 0, 0, 15, 100, 0 },
  { 4582, 3, 1, 0, 0, 15, 100, 0 },
  { 4585, 3, 1, 0, 0, 15, 100, 0 },
  { 4588, 3, 1, 0, 0, 15, 100, 0 },
  { 4591, 3, 1, 0, 0, 15, 100, 0 },
  { 4594, 3, 1, 0, 0, 15, 100, 0 },
  { 4597, 3, 1, 0, 0, 15, 100, 0 },
  { 4600, 3, 1, 0, 0, 15, 100, 0 },
  { 4603, 3, 1, 0, 0, 15, 100, 0 },
  { 4606, 3, 1, 0, 0, 15, 100, 0 },
  { 4609, 3, 1, 0, 0, 15, 100, 0 },
  { 4612, 3, 1, 0, 0, 15, 100, 0 },
  { 4615, 3, 1, 0, 0, 15, 100, 0 },
  // 1865: write_imageh, 
  { 4618, 4, 0, 0, 0, 15, 100, 0 },
  { 4622, 4, 0, 0, 0, 15, 100, 0 },
  { 4626, 4, 0, 0, 0, 15, 100, 0 },
  { 4630, 4, 0, 0, 0, 15, 100, 0 },
  { 4634, 4, 0, 0, 0, 15, 100, 0 },
  { 4638, 4, 0, 0, 0, 15, 100, 0 },
  { 4642, 4, 0, 0, 0, 15, 100, 0 },
  { 4646, 4, 0, 0, 0, 15, 100, 0 },
  { 4650, 4, 0, 0, 0, 15, 100, 0 },
  { 4654, 4, 0, 0, 0, 15, 100, 0 },
  { 4658, 4, 0, 0, 0, 15, 100, 0 },
  { 4662, 4, 0, 0, 0, 15, 100, 0 },
  // 1877: work_group_all, work_group_any, 
  { 780, 2, 0, 0, 1, 15, 200, 0 },
  // 1878: work_group_broadcast, 
  { 4666, 3, 0, 0, 1, 15, 200, 0 },
  { 4669, 4, 0, 0, 1, 15, 200, 0 },
  { 4673, 5, 0, 0, 1, 15, 200, 0 },
  // 1881: work_group_reduce_add, work_group_scan_exclusive_add, work_group_scan_inclusive_add, work_group_reduce_min, work_group_scan_exclusive_min, work_group_scan_inclusive_min, work_group_reduce_max, work_group_scan_exclusive_max, work_group_scan_inclusive_max, 
  { 4678, 2, 0, 0, 1, 15, 200, 0 },
  // 1882: is_valid_reserve_id, 
  { 4680, 2, 0, 0, 0, 15, 100, 0 },
  // 1883: enqueue_marker, 
  { 4682, 5, 0, 0, 0, 15, 100, 0 },
  // 1884: retain_event, release_event, 
  { 4687, 2, 0, 0, 0, 15, 100, 0 },
  // 1885: create_user_event, 
  { 4689, 1, 0, 0, 0, 15, 100, 0 },
  // 1886: is_valid_event, 
  { 4690, 2, 0, 0, 0, 15, 100, 0 },
  // 1887: set_user_event_status, 
  { 4692, 3, 0, 0, 0, 15, 100, 0 },
  // 1888: get_default_queue, 
  { 4695, 1, 0, 0, 0, 15, 100, 0 },
  // 1889: get_image_num_mip_levels, 
  { 4436, 2, 0, 0, 0, 11, 100, 0 },
  { 4438, 2, 0, 0, 0, 11, 100, 0 },
  { 4440, 2, 0, 0, 0, 11, 100, 0 },
  { 4454, 2, 0, 0, 0, 11, 100, 0 },
  { 4456, 2, 0, 0, 0, 11, 100, 0 },
  { 4458, 2, 0, 0, 0, 11, 100, 0 },
  { 4460, 2, 0, 0, 0, 11, 100, 0 },
  { 4476, 2, 0, 0, 0, 11, 100, 0 },
  { 4480, 2, 0, 0, 0, 11, 100, 0 },
  { 4484, 2, 0, 0, 0, 11, 100, 0 },
  { 4486, 2, 0, 0, 0, 11, 100, 0 },
  { 4488, 2, 0, 0, 0, 11, 100, 0 },
  { 4490, 2, 0, 0, 0, 11, 100, 0 },
  { 4492, 2, 0, 0, 0, 11, 100, 0 },
  { 4510, 2, 0, 0, 0, 11, 100, 0 },
  { 4514, 2, 0, 0, 0, 11, 100, 0 },
  { 4516, 2, 0, 0, 0, 11, 100, 0 },
  { 4518, 2, 0, 0, 0, 11, 100, 0 },
  { 4520, 2, 0, 0, 0, 11, 100, 0 },
  { 4522, 2, 0, 0, 0, 11, 100, 0 },
  { 4524, 2, 0, 0, 0, 11, 100, 0 },
  // 1910: get_image_num_samples, 
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1922: get_sub_group_size, get_max_sub_group_size, get_num_sub_groups, get_sub_group_id, get_sub_group_local_id, 
  { 1316, 1, 0, 0, 0, 14, 100, 0 },
  // 1923: get_enqueued_num_sub_groups, 
  { 1316, 1, 0, 0, 0, 14, 200, 0 },
  // 1924: sub_group_all, sub_group_any, 
  { 780, 2, 0, 0, 1, 14, 100, 0 },
  // 1925: sub_group_broadcast, 
  { 5094, 3, 0, 0, 1, 14, 100, 0 },
  // 1926: sub_group_reduce_add, sub_group_reduce_min, sub_group_reduce_max, sub_group_scan_exclusive_add, sub_group_scan_exclusive_min, sub_group_scan_exclusive_max, sub_group_scan_inclusive_add, sub_group_scan_inclusive_min, sub_group_scan_inclusive_max, 
  { 4678, 2, 0, 0, 1, 14, 100, 0 },
  // 1927: arm_dot, 
  { 5097, 3, 0, 0, 0, 3, 100, 0 },
  { 5100, 3, 0, 0, 0, 3, 100, 0 },
  // 1929: arm_dot_acc, 
  { 5103, 4, 0, 0, 0, 1, 100, 0 },
  { 5107, 4, 0, 0, 0, 1, 100, 0 },
  { 5111, 4, 0, 0, 0, 0, 100, 0 },
  { 5115, 4, 0, 0, 0, 0, 100, 0 },
  // 1933: arm_dot_acc_sat, 
  { 5103, 4, 0, 0, 0, 2, 100, 0 },
  { 5107, 4, 0, 0, 0, 2, 100, 0 },
};


// Find out whether a string matches an existing OpenCL builtin function name.
// Returns: A pair <0, 0> if no name matches.
//          A pair <Index, Len> indexing the BuiltinTable if the name is
//          matching an OpenCL builtin function.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef Name) {

  switch (Name.size()) {
  default: break;
  case 3:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(783, 1);	 // "abs"
      case 'l':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return std::make_pair(846, 1);	 // "all"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return std::make_pair(846, 1);	 // "any"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(784, 1);	 // "clz"
      case 'o':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(731, 1);	 // "cos"
      case 't':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(785, 1);	 // "ctz"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot", 2) != 0)
        break;
      return std::make_pair(837, 3);	 // "dot"
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'f')
          break;
        return std::make_pair(731, 1);	 // "erf"
      case 'x':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return std::make_pair(731, 1);	 // "exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ma", 2) != 0)
        break;
      return std::make_pair(752, 1);	 // "fma"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "log"
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          return std::make_pair(752, 1);	 // "mad"
        case 'x':	 // 1 string to match.
          return std::make_pair(788, 6);	 // "max"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          return std::make_pair(788, 6);	 // "min"
        case 'x':	 // 1 string to match.
          return std::make_pair(815, 4);	 // "mix"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(732, 3);	 // "nan"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      return std::make_pair(735, 1);	 // "pow"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "in", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "sin"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "tan"
    }
    break;
  case 4:	 // 25 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "atan"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cbrt"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "il", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "ceil"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sh", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cosh"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "fc", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "erfc"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "p2", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "exp2"
      }
      break;
    case 'f':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bs", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "fabs"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "im", 2) != 0)
          break;
        return std::make_pair(735, 1);	 // "fdim"
      case 'm':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return std::make_pair(736, 4);	 // "fmax"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(736, 4);	 // "fmin"
        case 'o':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return std::make_pair(735, 1);	 // "fmod"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "add", 3) != 0)
        break;
      return std::make_pair(787, 1);	 // "hadd"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "log2"
      case 'b':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "logb"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odf", 3) != 0)
        break;
      return std::make_pair(753, 4);	 // "modf"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        return std::make_pair(749, 3);	 // "pown"
      case 'r':	 // 1 string to match.
        return std::make_pair(735, 1);	 // "powr"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "int", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "rint"
    case 's':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(731, 1);	 // "sign"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return std::make_pair(731, 1);	 // "sinh"
        }
        break;
      case 'q':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "sqrt"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ep", 2) != 0)
          break;
        return std::make_pair(811, 4);	 // "step"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "anh", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "tanh"
    }
    break;
  case 5:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "osh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "acosh"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinh"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(735, 1);	 // "atan2"
        case 'h':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "atanh"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amp", 3) != 0)
          break;
        return std::make_pair(800, 6);	 // "clamp"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "spi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "cospi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oss", 3) != 0)
          break;
        return std::make_pair(831, 6);	 // "cross"
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xp", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return std::make_pair(731, 1);	 // "exp10"
      case 'm':	 // 1 string to match.
        if (Name[4] != '1')
          break;
        return std::make_pair(731, 1);	 // "expm1"
      }
      break;
    case 'f':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oor", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "floor"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ct", 2) != 0)
            break;
          return std::make_pair(753, 4);	 // "fract"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "xp", 2) != 0)
            break;
          return std::make_pair(757, 12);	 // "frexp"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ypot", 4) != 0)
        break;
      return std::make_pair(735, 1);	 // "hypot"
    case 'i':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ogb", 3) != 0)
          break;
        return std::make_pair(740, 3);	 // "ilogb"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nf", 2) != 0)
            break;
          return std::make_pair(841, 5);	 // "isinf"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "an", 2) != 0)
            break;
          return std::make_pair(841, 5);	 // "isnan"
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "exp", 3) != 0)
          break;
        return std::make_pair(743, 6);	 // "ldexp"
      case 'o':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "g1", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '0':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log10"
        case 'p':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log1p"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d24", 3) != 0)
          break;
        return std::make_pair(807, 2);	 // "mad24"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l24", 3) != 0)
          break;
        return std::make_pair(809, 2);	 // "mul24"
      }
      break;
    case 'r':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "add", 3) != 0)
          break;
        return std::make_pair(787, 1);	 // "rhadd"
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tn", 2) != 0)
            break;
          return std::make_pair(749, 3);	 // "rootn"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nd", 2) != 0)
            break;
          return std::make_pair(731, 1);	 // "round"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "qrt", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "rsqrt"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "inpi", 4) != 0)
        break;
      return std::make_pair(731, 1);	 // "sinpi"
    case 't':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "tanpi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "unc", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "trunc"
      }
      break;
    }
    break;
  case 6:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ospi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "acospi"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinpi"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "anpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "atanpi"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sless", 5) != 0)
        break;
      return std::make_pair(847, 5);	 // "isless"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ngth", 4) != 0)
          break;
        return std::make_pair(823, 3);	 // "length"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amma", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "lgamma"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "_hi", 3) != 0)
            break;
          return std::make_pair(806, 1);	 // "mad_hi"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mag", 3) != 0)
            break;
          return std::make_pair(735, 1);	 // "maxmag"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nmag", 4) != 0)
          break;
        return std::make_pair(735, 1);	 // "minmag"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l_hi", 4) != 0)
          break;
        return std::make_pair(787, 1);	 // "mul_hi"
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mquo", 4) != 0)
          break;
        return std::make_pair(769, 12);	 // "remquo"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tate", 4) != 0)
          break;
        return std::make_pair(787, 1);	 // "rotate"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "lect", 4) != 0)
          break;
        return std::make_pair(853, 10);	 // "select"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncos", 4) != 0)
          break;
        return std::make_pair(753, 4);	 // "sincos"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma", 5) != 0)
        break;
      return std::make_pair(731, 1);	 // "tgamma"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "load", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(863, 55);	 // "vload2"
      case '3':	 // 1 string to match.
        return std::make_pair(975, 55);	 // "vload3"
      case '4':	 // 1 string to match.
        return std::make_pair(1087, 55);	 // "vload4"
      case '8':	 // 1 string to match.
        return std::make_pair(1199, 55);	 // "vload8"
      }
      break;
    }
    break;
  case 7:	 // 16 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d_sat", 5) != 0)
          break;
        return std::make_pair(787, 1);	 // "add_sat"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot", 5) != 0)
          break;
        return std::make_pair(1927, 2);	 // "arm_dot"
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "n2pi", 4) != 0)
            break;
          return std::make_pair(735, 1);	 // "atan2pi"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "m_or", 4) != 0)
            break;
          return std::make_pair(1466, 8);	 // "atom_or"
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "egrees", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "degrees"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sequal", 6) != 0)
        break;
      return std::make_pair(847, 5);	 // "isequal"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ad_sat", 6) != 0)
        break;
      return std::make_pair(806, 1);	 // "mad_sat"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "adians", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "radians"
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "uffle", 5) != 0)
          break;
        return std::make_pair(1522, 16);	 // "shuffle"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gnbit", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "signbit"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_sat", 5) != 0)
          break;
        return std::make_pair(787, 1);	 // "sub_sat"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oad16", 5) != 0)
          break;
        return std::make_pair(1311, 55);	 // "vload16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(918, 44);	 // "vstore2"
        case '3':	 // 1 string to match.
          return std::make_pair(1030, 44);	 // "vstore3"
        case '4':	 // 1 string to match.
          return std::make_pair(1142, 44);	 // "vstore4"
        case '8':	 // 1 string to match.
          return std::make_pair(1254, 44);	 // "vstore8"
        }
        break;
      }
      break;
    }
    break;
  case 8:	 // 24 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "s_diff", 6) != 0)
          break;
        return std::make_pair(786, 1);	 // "abs_diff"
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "om_", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1442, 8);	 // "atom_add"
          case 'n':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1466, 8);	 // "atom_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ec", 2) != 0)
            break;
          return std::make_pair(1450, 8);	 // "atom_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+6, "nc", 2) != 0)
            break;
          return std::make_pair(1450, 8);	 // "atom_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[7] != 'x')
              break;
            return std::make_pair(1466, 8);	 // "atom_max"
          case 'i':	 // 1 string to match.
            if (Name[7] != 'n')
              break;
            return std::make_pair(1466, 8);	 // "atom_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return std::make_pair(1442, 8);	 // "atom_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+6, "or", 2) != 0)
            break;
          return std::make_pair(1466, 8);	 // "atom_xor"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opysign", 7) != 0)
        break;
      return std::make_pair(735, 1);	 // "copysign"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "istance", 7) != 0)
        break;
      return std::make_pair(837, 3);	 // "distance"
    case 'h':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+6, "os", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "in", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+6, "an", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_tan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+3, "inite", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "isfinite"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ormal", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "isnormal"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma_r", 7) != 0)
        break;
      return std::make_pair(757, 12);	 // "lgamma_r"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pcount", 6) != 0)
          break;
        return std::make_pair(784, 1);	 // "popcount"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "efetch", 6) != 0)
          break;
        return std::make_pair(1441, 1);	 // "prefetch"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "huffle2", 7) != 0)
        break;
      return std::make_pair(1538, 16);	 // "shuffle2"
    case 'u':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psample", 7) != 0)
        break;
      return std::make_pair(794, 6);	 // "upsample"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "store16", 7) != 0)
        break;
      return std::make_pair(1366, 44);	 // "vstore16"
    }
    break;
  case 9:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "xchg", 4) != 0)
          break;
        return std::make_pair(1442, 8);	 // "atom_xchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_or", 4) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_or"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itselect", 8) != 0)
        break;
      return std::make_pair(852, 1);	 // "bitselect"
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+6, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "half_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sqrt"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reater", 6) != 0)
          break;
        return std::make_pair(847, 5);	 // "isgreater"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+3, "rdered", 6) != 0)
          break;
        return std::make_pair(847, 5);	 // "isordered"
      }
      break;
    case 'n':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtafter", 7) != 0)
          break;
        return std::make_pair(735, 1);	 // "nextafter"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rmalize", 7) != 0)
          break;
        return std::make_pair(826, 3);	 // "normalize"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emainder", 8) != 0)
        break;
      return std::make_pair(735, 1);	 // "remainder"
    }
    break;
  case 10:	 // 20 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1474, 4);	 // "atomic_add"
        case 'n':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1474, 4);	 // "atomic_and"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ec", 2) != 0)
          break;
        return std::make_pair(1478, 4);	 // "atomic_dec"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+8, "nc", 2) != 0)
          break;
        return std::make_pair(1478, 4);	 // "atomic_inc"
      case 'm':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[9] != 'x')
            break;
          return std::make_pair(1474, 4);	 // "atomic_max"
        case 'i':	 // 1 string to match.
          if (Name[9] != 'n')
            break;
          return std::make_pair(1474, 4);	 // "atomic_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ub", 2) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+8, "or", 2) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_xor"
      }
      break;
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[6]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+7, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+7, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_rsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "snotequal", 9) != 0)
        break;
      return std::make_pair(847, 5);	 // "isnotequal"
    case 'n':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+8, "os", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "in", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+8, "an", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_tan"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "moothstep", 9) != 0)
        break;
      return std::make_pair(819, 4);	 // "smoothstep"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "load_half", 9) != 0)
        break;
      return std::make_pair(1423, 5);	 // "vload_half"
    }
    break;
  case 11:	 // 22 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc", 9) != 0)
          break;
        return std::make_pair(1929, 4);	 // "arm_dot_acc"
      case 't':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+8, "nit", 3) != 0)
            break;
          return std::make_pair(1486, 6);	 // "atomic_init"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "oad", 3) != 0)
            break;
          return std::make_pair(1492, 6);	 // "atomic_load"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+8, "chg", 3) != 0)
            break;
          return std::make_pair(1474, 4);	 // "atomic_xchg"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(397, 11);	 // "convert_int"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_length", 10) != 0)
        break;
      return std::make_pair(829, 1);	 // "fast_length"
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "alf_divide", 10) != 0)
        break;
      return std::make_pair(782, 1);	 // "half_divide"
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+3, "essequal", 8) != 0)
          break;
        return std::make_pair(847, 5);	 // "islessequal"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nordered", 8) != 0)
          break;
        return std::make_pair(847, 5);	 // "isunordered"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+8, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "native_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_sqrt"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ead_image", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(1554, 52);	 // "read_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(1843, 22);	 // "read_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(1606, 36);	 // "read_imagei"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "half", 4) != 0)
            break;
          switch (Name[10]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(962, 5);	 // "vload_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1074, 5);	 // "vload_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1186, 5);	 // "vload_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1298, 5);	 // "vload_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          return std::make_pair(1423, 5);	 // "vloada_half"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        return std::make_pair(1428, 8);	 // "vstore_half"
      }
      break;
    }
    break;
  case 12:	 // 32 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "cmpxchg", 7) != 0)
          break;
        return std::make_pair(1458, 8);	 // "atom_cmpxchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_store", 7) != 0)
          break;
        return std::make_pair(1486, 6);	 // "atomic_store"
      }
      break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(133, 11);	 // "convert_char"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        return std::make_pair(56, 11);	 // "convert_half"
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(408, 11);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(419, 11);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(430, 11);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(441, 11);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(595, 11);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(463, 11);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(727, 1);	 // "get_work_dim"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+9, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_rsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 2 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+3, "d_imageui", 9) != 0)
          break;
        return std::make_pair(1642, 36);	 // "read_imageui"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ain_event", 9) != 0)
          break;
        return std::make_pair(1884, 1);	 // "retain_event"
      }
      break;
    case 'v':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+6, "half16", 6) != 0)
            break;
          return std::make_pair(1410, 5);	 // "vload_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(962, 5);	 // "vloada_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1074, 5);	 // "vloada_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1186, 5);	 // "vloada_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1298, 5);	 // "vloada_half8"
          }
          break;
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "half", 4) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          return std::make_pair(1428, 8);	 // "vstorea_half"
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "rite_image", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(1678, 23);	 // "write_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(1865, 12);	 // "write_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(1701, 17);	 // "write_imagei"
      }
      break;
    }
    break;
  case 13:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(144, 11);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(155, 11);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(166, 11);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(177, 11);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(78, 11);	 // "convert_float"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(23, 11);	 // "convert_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(34, 11);	 // "convert_half8"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(452, 11);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(606, 11);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(617, 11);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(628, 11);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(639, 11);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(265, 11);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(199, 11);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(474, 11);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(485, 11);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(496, 11);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(507, 11);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(661, 11);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_distance", 12) != 0)
        break;
      return std::make_pair(840, 1);	 // "fast_distance"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_id", 8) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_dim", 8) != 0)
          break;
        return std::make_pair(1801, 27);	 // "get_image_dim"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "slessgreater", 12) != 0)
        break;
      return std::make_pair(847, 5);	 // "islessgreater"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ative_divide", 12) != 0)
        break;
      return std::make_pair(782, 1);	 // "native_divide"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "elease_event", 12) != 0)
        break;
      return std::make_pair(1884, 1);	 // "release_event"
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_a", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[12] != 'l')
          break;
        return std::make_pair(1924, 1);	 // "sub_group_all"
      case 'n':	 // 1 string to match.
        if (Name[12] != 'y')
          break;
        return std::make_pair(1924, 1);	 // "sub_group_any"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oada_half16", 11) != 0)
          break;
        return std::make_pair(1410, 5);	 // "vloada_half16"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+7, "half16", 6) != 0)
            break;
          return std::make_pair(1415, 8);	 // "vstore_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_imageui", 12) != 0)
        break;
      return std::make_pair(1718, 17);	 // "write_imageui"
    }
    break;
  case 14:	 // 32 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_cmpxchg", 13) != 0)
        break;
      return std::make_pair(1482, 4);	 // "atomic_cmpxchg"
    case 'c':	 // 22 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(188, 11);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(529, 11);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(89, 11);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(100, 11);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(122, 11);	 // "convert_float8"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf16", 5) != 0)
          break;
        return std::make_pair(45, 11);	 // "convert_half16"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(650, 11);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(276, 11);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(287, 11);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(298, 11);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(309, 11);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(210, 11);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(221, 11);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(232, 11);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(243, 11);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(518, 11);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(672, 11);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(683, 11);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(694, 11);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(705, 11);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(331, 11);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nqueue_marker", 13) != 0)
        break;
      return std::make_pair(1883, 1);	 // "enqueue_marker"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_normalize", 13) != 0)
        break;
      return std::make_pair(830, 1);	 // "fast_normalize"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_num_groups"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+3, "valid_event", 11) != 0)
          break;
        return std::make_pair(1886, 1);	 // "is_valid_event"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reaterequal", 11) != 0)
          break;
        return std::make_pair(847, 5);	 // "isgreaterequal"
      }
      break;
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "storea_half16", 13) != 0)
        break;
      return std::make_pair(1415, 8);	 // "vstorea_half16"
    case 'w':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ork_group_a", 11) != 0)
        break;
      switch (Name[12]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[13] != 'l')
          break;
        return std::make_pair(1877, 1);	 // "work_group_all"
      case 'n':	 // 1 string to match.
        if (Name[13] != 'y')
          break;
        return std::make_pair(1877, 1);	 // "work_group_any"
      }
      break;
    }
    break;
  case 15:	 // 27 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc_sat", 13) != 0)
          break;
        return std::make_pair(1933, 2);	 // "arm_dot_acc_sat"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xchange", 7) != 0)
            break;
          return std::make_pair(1498, 6);	 // "atomic_exchange"
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+8, "etch_or", 7) != 0)
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_or"
        }
        break;
      }
      break;
    case 'c':	 // 17 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(540, 11);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(551, 11);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(562, 11);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(573, 11);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(67, 11);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt_", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[13] != 't')
            break;
          switch (Name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(397, 11);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(320, 11);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(254, 11);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(716, 11);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(342, 11);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(353, 11);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(364, 11);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(375, 11);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_size", 10) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_size"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+5, "mage_", 5) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+11, "epth", 4) != 0)
            break;
          return std::make_pair(1798, 3);	 // "get_image_depth"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+11, "idth", 4) != 0)
            break;
          return std::make_pair(1735, 36);	 // "get_image_width"
        }
        break;
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "store_half_rt", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtz"
      }
      break;
    }
    break;
  case 16:	 // 69 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1510, 6);	 // "atomic_fetch_add"
        case 'n':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_and"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[15] != 'x')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_max"
        case 'i':	 // 1 string to match.
          if (Name[15] != 'n')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub", 2) != 0)
          break;
        return std::make_pair(1510, 6);	 // "atomic_fetch_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or", 2) != 0)
          break;
        return std::make_pair(1516, 6);	 // "atomic_fetch_xor"
      }
      break;
    case 'c':	 // 41 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(133, 11);	 // "convert_char_sat"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble16", 7) != 0)
          break;
        return std::make_pair(584, 11);	 // "convert_double16"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf_rt", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtz"
        }
        break;
      case 'i':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(408, 11);	 // "convert_int2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(419, 11);	 // "convert_int3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(430, 11);	 // "convert_int4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(441, 11);	 // "convert_int8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(595, 11);	 // "convert_long_sat"
        }
        break;
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt_", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(463, 11);	 // "convert_uint_sat"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort16", 6) != 0)
            break;
          return std::make_pair(386, 11);	 // "convert_ushort16"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_height", 11) != 0)
          break;
        return std::make_pair(1771, 27);	 // "get_image_height"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_id", 11) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_id"
      }
      break;
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "half", 4) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtz"
          }
          break;
        }
        break;
      case 'a':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "_half_rt", 8) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 17:	 // 124 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 101 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 100 strings to match.
        if (memcmp(Name.data()+2, "nvert_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "har", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(144, 11);	 // "convert_char2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(155, 11);	 // "convert_char3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(166, 11);	 // "convert_char4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(177, 11);	 // "convert_char8_sat"
            }
            break;
          }
          break;
        case 'f':	 // 4 strings to match.
          if (memcmp(Name.data()+9, "loat_rt", 7) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtz"
          }
          break;
        case 'h':	 // 16 strings to match.
          if (memcmp(Name.data()+9, "alf", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "nt16_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(452, 11);	 // "convert_int16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "ong", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(606, 11);	 // "convert_long2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(617, 11);	 // "convert_long3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(628, 11);	 // "convert_long4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(639, 11);	 // "convert_long8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "hort_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(265, 11);	 // "convert_short_sat"
          }
          break;
        case 'u':	 // 30 strings to match.
          switch (Name[9]) {
          default: break;
          case 'c':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "har_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(199, 11);	 // "convert_uchar_sat"
            }
            break;
          case 'i':	 // 20 strings to match.
            if (memcmp(Name.data()+10, "nt", 2) != 0)
              break;
            switch (Name[12]) {
            default: break;
            case '2':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(474, 11);	 // "convert_uint2_sat"
              }
              break;
            case '3':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(485, 11);	 // "convert_uint3_sat"
              }
              break;
            case '4':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(496, 11);	 // "convert_uint4_sat"
              }
              break;
            case '8':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(507, 11);	 // "convert_uint8_sat"
              }
              break;
            }
            break;
          case 'l':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "ong_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(661, 11);	 // "convert_ulong_sat"
            }
            break;
          }
          break;
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "eate_user_event", 15) != 0)
          break;
        return std::make_pair(1885, 1);	 // "create_user_event"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+5, "efault_queue", 12) != 0)
          break;
        return std::make_pair(1888, 1);	 // "get_default_queue"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_offset", 12) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_offset"
      }
      break;
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "half16_rt", 9) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtz"
        }
        break;
      case 'a':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "_half", 5) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ait_group_events", 16) != 0)
        break;
      return std::make_pair(1440, 1);	 // "wait_group_events"
    }
    break;
  case 18:	 // 110 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 104 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(188, 11);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtz"
          }
          break;
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf16_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtz"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(650, 11);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(276, 11);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(287, 11);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(298, 11);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(309, 11);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(210, 11);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(221, 11);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(232, 11);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(243, 11);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt16_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(518, 11);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(672, 11);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(683, 11);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(694, 11);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(705, 11);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(331, 11);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_size"
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "storea_half16_rt", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtz"
      }
      break;
    }
    break;
  case 19:	 // 62 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 59 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat16_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtz"
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt_sat_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(320, 11);	 // "convert_short16_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(254, 11);	 // "convert_uchar16_sat"
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(716, 11);	 // "convert_ulong16_sat"
          }
          break;
        case 's':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(342, 11);	 // "convert_ushort2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(353, 11);	 // "convert_ushort3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(364, 11);	 // "convert_ushort4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(375, 11);	 // "convert_ushort8_sat"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_local_linear_id", 18) != 0)
        break;
      return std::make_pair(730, 1);	 // "get_local_linear_id"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "s_valid_reserve_id", 18) != 0)
        break;
      return std::make_pair(1882, 1);	 // "is_valid_reserve_id"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_broadcast", 18) != 0)
        break;
      return std::make_pair(1925, 1);	 // "sub_group_broadcast"
    }
    break;
  case 20:	 // 43 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 37 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble16_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtz"
        }
        break;
      case 'u':	 // 9 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt_sat_rt", 9) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtz"
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort16_", 7) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[18] != 't')
              break;
            switch (Name[19]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+18, "at", 2) != 0)
              break;
            return std::make_pair(386, 11);	 // "convert_ushort16_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_linear_id", 15) != 0)
          break;
        return std::make_pair(730, 1);	 // "get_global_linear_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_array_size", 15) != 0)
          break;
        return std::make_pair(1828, 15);	 // "get_image_array_size"
      }
      break;
    case 's':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ub_group_reduce_", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+18, "dd", 2) != 0)
          break;
        return std::make_pair(1926, 1);	 // "sub_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[18]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[19] != 'x')
            break;
          return std::make_pair(1926, 1);	 // "sub_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[19] != 'n')
            break;
          return std::make_pair(1926, 1);	 // "sub_group_reduce_min"
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_broadcast", 19) != 0)
        break;
      return std::make_pair(1878, 3);	 // "work_group_broadcast"
    }
    break;
  case 21:	 // 70 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_copy", 20) != 0)
        break;
      return std::make_pair(1436, 2);	 // "async_work_group_copy"
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtz"
          }
          break;
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt16_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtz"
        }
        break;
      case 'l':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtz"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtz"
          }
          break;
        case 'i':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtz"
            }
            break;
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_samples", 20) != 0)
        break;
      return std::make_pair(1910, 12);	 // "get_image_num_samples"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_user_event_status", 20) != 0)
        break;
      return std::make_pair(1887, 1);	 // "set_user_event_status"
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ork_group_reduce_", 17) != 0)
        break;
      switch (Name[18]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+19, "dd", 2) != 0)
          break;
        return std::make_pair(1881, 1);	 // "work_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[19]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[20] != 'x')
            break;
          return std::make_pair(1881, 1);	 // "work_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[20] != 'n')
            break;
          return std::make_pair(1881, 1);	 // "work_group_reduce_min"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ax_sub_group_size", 17) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_max_sub_group_size"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_local_id", 17) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_local_id"
      }
      break;
    }
    break;
  case 23:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 28 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtz"
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtz"
          }
          break;
        case 's':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtz"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+5, "nqueued_local_size", 18) != 0)
          break;
        return std::make_pair(729, 1);	 // "get_enqueued_local_size"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_channel_order", 18) != 0)
          break;
        return std::make_pair(1735, 36);	 // "get_image_channel_order"
      }
      break;
    }
    break;
  case 24:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "onvert_ushort16_sat_rt", 22) != 0)
        break;
      switch (Name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtz"
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_mip_levels", 23) != 0)
        break;
      return std::make_pair(1889, 21);	 // "get_image_num_mip_levels"
    }
    break;
  case 27:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "get_", 4) != 0)
      break;
    switch (Name[4]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+5, "nqueued_num_sub_groups", 22) != 0)
        break;
      return std::make_pair(1923, 1);	 // "get_enqueued_num_sub_groups"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+5, "mage_channel_data_type", 22) != 0)
        break;
      return std::make_pair(1735, 36);	 // "get_image_channel_data_type"
    }
    break;
  case 28:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak", 27) != 0)
        break;
      return std::make_pair(1504, 6);	 // "atomic_compare_exchange_weak"
    case 's':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ub_group_scan_", 14) != 0)
        break;
      switch (Name[15]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+16, "xclusive_", 9) != 0)
          break;
        switch (Name[25]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+26, "dd", 2) != 0)
            break;
          return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[26]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[27] != 'x')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[27] != 'n')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+16, "nclusive_", 9) != 0)
          break;
        switch (Name[25]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+26, "dd", 2) != 0)
            break;
          return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[26]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[27] != 'x')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[27] != 'n')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_strided_copy", 28) != 0)
        break;
      return std::make_pair(1438, 2);	 // "async_work_group_strided_copy"
    case 'w':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ork_group_scan_", 15) != 0)
        break;
      switch (Name[16]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "xclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "nclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(Name.data()+0, "atomic_compare_exchange_strong", 30) != 0)
      break;
    return std::make_pair(1504, 6);	 // "atomic_compare_exchange_strong"
  }
  return std::make_pair(0, 0);
} // isOpenCLBuiltin


// Convert an OpenCLTypeStruct type to a list of QualTypes.
// Generic types represent multiple types and vector sizes, thus a vector
// is returned. The conversion is done in two steps:
// Step 1: A switch statement fills a vector with scalar base types for the
//         Cartesian product of (vector sizes) x (types) for generic types,
//         or a single scalar type for non generic types.
// Step 2: Qualifiers and other type properties such as vector size are
//         applied.
static void OCL2Qual(ASTContext &Context, const OpenCLTypeStruct &Ty,
                     llvm::SmallVectorImpl<QualType> &QT) {
  // Number of scalar types in the GenType.
  unsigned GenTypeNumTypes;
  // Pointer to the list of vector sizes for the GenType.
  llvm::ArrayRef<unsigned> GenVectorSizes;
  constexpr unsigned ListVec1[] = {1, };
  constexpr unsigned ListVec1234[] = {1, 2, 3, 4, };
  constexpr unsigned ListVec16[] = {16, };
  constexpr unsigned ListVec2[] = {2, };
  constexpr unsigned ListVec4[] = {4, };
  constexpr unsigned ListVec8[] = {8, };
  constexpr unsigned ListVecAndScalar[] = {1, 2, 3, 4, 8, 16, };
  constexpr unsigned ListVecNoScalar[] = {2, 3, 4, 8, 16, };

  switch (Ty.ID) {
    case OCLT_image1d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dArrayWOTy);
          break;
      }
      break;
    case OCLT_image1d_buffer_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dBufferROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dBufferRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dBufferWOTy);
          break;
      }
      break;
    case OCLT_image1d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayWOTy);
          break;
      }
      break;
    case OCLT_image2d_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAAWOTy);
          break;
      }
      break;
    case OCLT_image2d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dWOTy);
          break;
      }
      break;
    case OCLT_image3d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage3dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage3dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage3dWOTy);
          break;
      }
      break;
    case OCLT_AGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_AI2UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenType1:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_AIGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_FGenTypeN:
      QT.append({Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 3;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecAndScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecNoScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeDoubleVec1234:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeDoubleVecAndScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeDoubleVecNoScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeFloatVec1234:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeFloatVecAndScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeFloatVecNoScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeHalfVec1234:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeHalfVecAndScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeHalfVecNoScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeIntVecAndScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeIntVecNoScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeLongVecAndScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeLongVecNoScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeShortVecAndScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeShortVecNoScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUCharVecAndScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUCharVecNoScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUIntVecAndScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUIntVecNoScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeULongVecAndScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeULongVecNoScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUShortVecAndScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUShortVecNoScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_IntLongFloatGenType1:
      QT.append({Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 7;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_SGenTypeN:
      QT.append({Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, });
      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_TLAllVec2:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec2;
      break;
    case OCLT_TLAllUnsignedVec2:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec2;
      break;
    case OCLT_TLAllVec4:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec4;
      break;
    case OCLT_TLAllVec8:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec8;
      break;
    case OCLT_TLAllVec16:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec16;
      break;
    case OCLT_TLAllUnsignedVec4:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec4;
      break;
    case OCLT_TLAllUnsignedVec8:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec8;
      break;
    case OCLT_TLAllUnsignedVec16:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec16;
      break;
    case OCLT_atomic_double:
      QT.push_back(Context.getAtomicType(Context.DoubleTy));
      break;
    case OCLT_atomic_float:
      QT.push_back(Context.getAtomicType(Context.FloatTy));
      break;
    case OCLT_atomic_int:
      QT.push_back(Context.getAtomicType(Context.IntTy));
      break;
    case OCLT_atomic_intptr_t:
      QT.push_back(Context.getAtomicType(Context.getIntPtrType()));
      break;
    case OCLT_atomic_long:
      QT.push_back(Context.getAtomicType(Context.LongTy));
      break;
    case OCLT_atomic_ptrdiff_t:
      QT.push_back(Context.getAtomicType(Context.getPointerDiffType()));
      break;
    case OCLT_atomic_size_t:
      QT.push_back(Context.getAtomicType(Context.getSizeType()));
      break;
    case OCLT_atomic_uint:
      QT.push_back(Context.getAtomicType(Context.UnsignedIntTy));
      break;
    case OCLT_atomic_uintptr_t:
      QT.push_back(Context.getAtomicType(Context.getUIntPtrType()));
      break;
    case OCLT_atomic_ulong:
      QT.push_back(Context.getAtomicType(Context.UnsignedLongTy));
      break;
    case OCLT_bool:
      QT.push_back(Context.BoolTy);
      break;
    case OCLT_char:
      QT.push_back(Context.CharTy);
      break;
    case OCLT_clk_event_t:
      QT.push_back(Context.OCLClkEventTy);
      break;
    case OCLT_double:
      QT.push_back(Context.DoubleTy);
      break;
    case OCLT_event_t:
      QT.push_back(Context.OCLEventTy);
      break;
    case OCLT_float:
      QT.push_back(Context.FloatTy);
      break;
    case OCLT_half:
      QT.push_back(Context.HalfTy);
      break;
    case OCLT_int:
      QT.push_back(Context.IntTy);
      break;
    case OCLT_intptr_t:
      QT.push_back(Context.getIntPtrType());
      break;
    case OCLT_long:
      QT.push_back(Context.LongTy);
      break;
    case OCLT_ptrdiff_t:
      QT.push_back(Context.getPointerDiffType());
      break;
    case OCLT_queue_t:
      QT.push_back(Context.OCLQueueTy);
      break;
    case OCLT_reserve_id_t:
      QT.push_back(Context.OCLReserveIDTy);
      break;
    case OCLT_sampler_t:
      QT.push_back(Context.OCLSamplerTy);
      break;
    case OCLT_short:
      QT.push_back(Context.ShortTy);
      break;
    case OCLT_size_t:
      QT.push_back(Context.getSizeType());
      break;
    case OCLT_uchar:
      QT.push_back(Context.UnsignedCharTy);
      break;
    case OCLT_uint:
      QT.push_back(Context.UnsignedIntTy);
      break;
    case OCLT_uintptr_t:
      QT.push_back(Context.getUIntPtrType());
      break;
    case OCLT_ulong:
      QT.push_back(Context.UnsignedLongTy);
      break;
    case OCLT_ushort:
      QT.push_back(Context.UnsignedShortTy);
      break;
    case OCLT_void:
      QT.push_back(Context.VoidTy);
      break;
  } // end of switch (Ty.ID)

  // Construct the different vector types for each generic type.
  if (Ty.ID >= 44) {
    for (unsigned I = 0; I < QT.size(); I++) {
      // For scalars, size is 1.
      if (GenVectorSizes[I / GenTypeNumTypes] != 1) {
        QT[I] = Context.getExtVectorType(QT[I],
                          GenVectorSizes[I / GenTypeNumTypes]);
      }
    }
  }

  // Set vector size for non-generic vector types.
  if (Ty.VectorWidth > 1) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getExtVectorType(QT[Index], Ty.VectorWidth);
    }
  }

  if (Ty.IsVolatile != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getVolatileType(QT[Index]);
    }
  }

  if (Ty.IsConst != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getConstType(QT[Index]);
    }
  }

  // Transform the type to a pointer as the last step, if necessary.
  // Builtin functions only have pointers on [const|volatile], no
  // [const|volatile] pointers, so this is ok to do it as a last step.
  if (Ty.IsPointer != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getAddrSpaceQualType(QT[Index], Ty.AS);
      QT[Index] = Context.getPointerType(QT[Index]);
    }
  }

} // OCL2Qual
