#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct __math__IntFloatUnion;
}
namespace Unity::Mathematics {
struct __math__LongDoubleUnion;
}
namespace Unity::Mathematics {
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct __math__ShuffleComponent;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool2x2;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct bool2x4;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool3x2;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct bool3x4;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct bool4x2;
}
namespace Unity::Mathematics {
struct bool4x3;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double3x2;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
namespace Unity::Mathematics {
struct uint2x3;
}
namespace Unity::Mathematics {
struct uint2x4;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint3x2;
}
namespace Unity::Mathematics {
struct uint3x3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace Unity::Mathematics {
struct uint4x2;
}
namespace Unity::Mathematics {
struct uint4x3;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct __math__ShuffleComponent;
}
namespace Unity::Mathematics {
class math;
}
namespace Unity::Mathematics {
struct __math__IntFloatUnion;
}
namespace Unity::Mathematics {
struct __math__LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::__math__RotationOrder);
MARK_VAL_T(::Unity::Mathematics::__math__ShuffleComponent);
MARK_REF_PTR_T(::Unity::Mathematics::math);
MARK_VAL_T(::Unity::Mathematics::__math__IntFloatUnion);
MARK_VAL_T(::Unity::Mathematics::__math__LongDoubleUnion);
// Type: ::RotationOrder
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::RotationOrder
struct CORDL_TYPE __math__RotationOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____math__RotationOrder_Unwrapped
enum struct ____math__RotationOrder_Unwrapped : uint8_t {
__E_XYZ = static_cast<uint8_t>(0x0u),
__E_XZY = static_cast<uint8_t>(0x1u),
__E_YXZ = static_cast<uint8_t>(0x2u),
__E_YZX = static_cast<uint8_t>(0x3u),
__E_ZXY = static_cast<uint8_t>(0x4u),
__E_ZYX = static_cast<uint8_t>(0x5u),
__E_Default = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____math__RotationOrder_Unwrapped () const noexcept {
return static_cast<____math__RotationOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __math__RotationOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __math__RotationOrder(uint8_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

/// @brief Field Default value: static_cast<uint8_t>(0x4u)
static ::Unity::Mathematics::__math__RotationOrder const Default;

/// @brief Field XYZ value: static_cast<uint8_t>(0x0u)
static ::Unity::Mathematics::__math__RotationOrder const XYZ;

/// @brief Field XZY value: static_cast<uint8_t>(0x1u)
static ::Unity::Mathematics::__math__RotationOrder const XZY;

/// @brief Field YXZ value: static_cast<uint8_t>(0x2u)
static ::Unity::Mathematics::__math__RotationOrder const YXZ;

/// @brief Field YZX value: static_cast<uint8_t>(0x3u)
static ::Unity::Mathematics::__math__RotationOrder const YZX;

/// @brief Field ZXY value: static_cast<uint8_t>(0x4u)
static ::Unity::Mathematics::__math__RotationOrder const ZXY;

/// @brief Field ZYX value: static_cast<uint8_t>(0x5u)
static ::Unity::Mathematics::__math__RotationOrder const ZYX;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__RotationOrder, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__math__RotationOrder, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: ::ShuffleComponent
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::ShuffleComponent
struct CORDL_TYPE __math__ShuffleComponent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____math__ShuffleComponent_Unwrapped
enum struct ____math__ShuffleComponent_Unwrapped : uint8_t {
__E_LeftX = static_cast<uint8_t>(0x0u),
__E_LeftY = static_cast<uint8_t>(0x1u),
__E_LeftZ = static_cast<uint8_t>(0x2u),
__E_LeftW = static_cast<uint8_t>(0x3u),
__E_RightX = static_cast<uint8_t>(0x4u),
__E_RightY = static_cast<uint8_t>(0x5u),
__E_RightZ = static_cast<uint8_t>(0x6u),
__E_RightW = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____math__ShuffleComponent_Unwrapped () const noexcept {
return static_cast<____math__ShuffleComponent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __math__ShuffleComponent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __math__ShuffleComponent(uint8_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

/// @brief Field LeftW value: static_cast<uint8_t>(0x3u)
static ::Unity::Mathematics::__math__ShuffleComponent const LeftW;

/// @brief Field LeftX value: static_cast<uint8_t>(0x0u)
static ::Unity::Mathematics::__math__ShuffleComponent const LeftX;

/// @brief Field LeftY value: static_cast<uint8_t>(0x1u)
static ::Unity::Mathematics::__math__ShuffleComponent const LeftY;

/// @brief Field LeftZ value: static_cast<uint8_t>(0x2u)
static ::Unity::Mathematics::__math__ShuffleComponent const LeftZ;

/// @brief Field RightW value: static_cast<uint8_t>(0x7u)
static ::Unity::Mathematics::__math__ShuffleComponent const RightW;

/// @brief Field RightX value: static_cast<uint8_t>(0x4u)
static ::Unity::Mathematics::__math__ShuffleComponent const RightX;

/// @brief Field RightY value: static_cast<uint8_t>(0x5u)
static ::Unity::Mathematics::__math__ShuffleComponent const RightY;

/// @brief Field RightZ value: static_cast<uint8_t>(0x6u)
static ::Unity::Mathematics::__math__ShuffleComponent const RightZ;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__ShuffleComponent, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__math__ShuffleComponent, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: ::IntFloatUnion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::IntFloatUnion
struct CORDL_TYPE __math__IntFloatUnion {
public:
// Declarations
/// @brief Field floatValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatValue, put=__cordl_internal_set_floatValue)) float_t  floatValue;

/// @brief Field intValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_intValue, put=__cordl_internal_set_intValue)) int32_t  intValue;

constexpr float_t const& __cordl_internal_get_floatValue() const;

constexpr float_t& __cordl_internal_get_floatValue() ;

constexpr int32_t const& __cordl_internal_get_intValue() const;

constexpr int32_t& __cordl_internal_get_intValue() ;

constexpr void __cordl_internal_set_floatValue(float_t  value) ;

constexpr void __cordl_internal_set_intValue(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __math__IntFloatUnion() ;

// Ctor Parameters [CppParam { name: "intValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
constexpr __math__IntFloatUnion(int32_t  intValue, float_t  floatValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___intValue_padding[0x0];
/// @brief Field intValue, offset: 0x0, size: 0x4, def value: None
 int32_t  ___intValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___intValue_padding_forAlignment[0x0];
/// @brief Field intValue, offset: 0x0, size: 0x4, def value: None
 int32_t  ___intValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___floatValue_padding[0x0];
/// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___floatValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___floatValue_padding_forAlignment[0x0];
/// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___floatValue_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__IntFloatUnion, 0x4>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Type: ::LongDoubleUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::LongDoubleUnion
struct CORDL_TYPE __math__LongDoubleUnion {
public:
// Declarations
/// @brief Field doubleValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleValue, put=__cordl_internal_set_doubleValue)) double_t  doubleValue;

/// @brief Field longValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_longValue, put=__cordl_internal_set_longValue)) int64_t  longValue;

constexpr double_t const& __cordl_internal_get_doubleValue() const;

constexpr double_t& __cordl_internal_get_doubleValue() ;

constexpr int64_t const& __cordl_internal_get_longValue() const;

constexpr int64_t& __cordl_internal_get_longValue() ;

constexpr void __cordl_internal_set_doubleValue(double_t  value) ;

constexpr void __cordl_internal_set_longValue(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __math__LongDoubleUnion() ;

// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
constexpr __math__LongDoubleUnion(int64_t  longValue, double_t  doubleValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___longValue_padding[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___longValue_padding_forAlignment[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___doubleValue_padding[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___doubleValue_padding_forAlignment[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__LongDoubleUnion, 0x8>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::Unity.Mathematics::math*
class CORDL_TYPE math : public ::System::Object {
public:
// Declarations
using IntFloatUnion = ::Unity::Mathematics::__math__IntFloatUnion;

using LongDoubleUnion = ::Unity::Mathematics::__math__LongDoubleUnion;

using RotationOrder = ::Unity::Mathematics::__math__RotationOrder;

using ShuffleComponent = ::Unity::Mathematics::__math__ShuffleComponent;

/// @brief Method RigidTransform, addr 0x45bdcb4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion  rot, ::Unity::Mathematics::float3  pos) ;

/// @brief Method RigidTransform, addr 0x45bdcc8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method RigidTransform, addr 0x45bdd3c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4  transform) ;

/// @brief Method abs, addr 0x45a4cb8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2  x) ;

/// @brief Method abs, addr 0x45a4cc4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3  x) ;

/// @brief Method abs, addr 0x45a4cd4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4  x) ;

/// @brief Method abs, addr 0x45a4c80, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2  x) ;

/// @brief Method abs, addr 0x45a4c8c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3  x) ;

/// @brief Method abs, addr 0x45a4c9c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4  x) ;

/// @brief Method abs, addr 0x45a4b98, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2  x) ;

/// @brief Method abs, addr 0x45a4bc4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3  x) ;

/// @brief Method abs, addr 0x45a4c00, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4  x) ;

/// @brief Method abs, addr 0x45a4cb0, size 0x8, virtual false, abstract: false, final false
static inline double_t abs(double_t  x) ;

/// @brief Method abs, addr 0x45a4c78, size 0x8, virtual false, abstract: false, final false
static inline float_t abs(float_t  x) ;

/// @brief Method abs, addr 0x45a4b88, size 0x10, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  x) ;

/// @brief Method abs, addr 0x45a4c68, size 0x10, virtual false, abstract: false, final false
static inline int64_t abs(int64_t  x) ;

/// @brief Method acos, addr 0x45a77e4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2  x) ;

/// @brief Method acos, addr 0x45a7888, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3  x) ;

/// @brief Method acos, addr 0x45a7974, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4  x) ;

/// @brief Method acos, addr 0x45a74cc, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2  x) ;

/// @brief Method acos, addr 0x45a7570, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3  x) ;

/// @brief Method acos, addr 0x45a765c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4  x) ;

/// @brief Method acos, addr 0x45a7788, size 0x5c, virtual false, abstract: false, final false
static inline double_t acos(double_t  x) ;

/// @brief Method acos, addr 0x45a7468, size 0x64, virtual false, abstract: false, final false
static inline float_t acos(float_t  x) ;

/// @brief Method all, addr 0x45b0608, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool2  x) ;

/// @brief Method all, addr 0x45b061c, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool3  x) ;

/// @brief Method all, addr 0x45b0634, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool4  x) ;

/// @brief Method all, addr 0x45b0790, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double2  x) ;

/// @brief Method all, addr 0x45b07a8, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double3  x) ;

/// @brief Method all, addr 0x45b07c8, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double4  x) ;

/// @brief Method all, addr 0x45b0730, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float2  x) ;

/// @brief Method all, addr 0x45b0748, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float3  x) ;

/// @brief Method all, addr 0x45b0768, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float4  x) ;

/// @brief Method all, addr 0x45b0648, size 0x1c, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int2  x) ;

/// @brief Method all, addr 0x45b0664, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int3  x) ;

/// @brief Method all, addr 0x45b0684, size 0x38, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int4  x) ;

/// @brief Method all, addr 0x45b06bc, size 0x1c, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint2  x) ;

/// @brief Method all, addr 0x45b06d8, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint3  x) ;

/// @brief Method all, addr 0x45b06f8, size 0x38, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint4  x) ;

/// @brief Method any, addr 0x45b045c, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool2  x) ;

/// @brief Method any, addr 0x45b046c, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool3  x) ;

/// @brief Method any, addr 0x45b0480, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0x45b05a8, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double2  x) ;

/// @brief Method any, addr 0x45b05c0, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double3  x) ;

/// @brief Method any, addr 0x45b05e0, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double4  x) ;

/// @brief Method any, addr 0x45b0548, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float2  x) ;

/// @brief Method any, addr 0x45b0560, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float3  x) ;

/// @brief Method any, addr 0x45b0580, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float4  x) ;

/// @brief Method any, addr 0x45b0490, size 0x1c, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int2  x) ;

/// @brief Method any, addr 0x45b04ac, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int3  x) ;

/// @brief Method any, addr 0x45b04cc, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int4  x) ;

/// @brief Method any, addr 0x45b04ec, size 0x1c, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint2  x) ;

/// @brief Method any, addr 0x45b0508, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint3  x) ;

/// @brief Method any, addr 0x45b0528, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint4  x) ;

/// @brief Method asdouble, addr 0x45a2d6c, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(int64_t  x) ;

/// @brief Method asdouble, addr 0x45a2d74, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(uint64_t  x) ;

/// @brief Method asfloat, addr 0x45a2cbc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2  x) ;

/// @brief Method asfloat, addr 0x45a2d04, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2  x) ;

/// @brief Method asfloat, addr 0x45a2ccc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3  x) ;

/// @brief Method asfloat, addr 0x45a2d14, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3  x) ;

/// @brief Method asfloat, addr 0x45a2ce0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4  x) ;

/// @brief Method asfloat, addr 0x45a2d28, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4  x) ;

/// @brief Method asfloat, addr 0x45a2cb4, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(int32_t  x) ;

/// @brief Method asfloat, addr 0x45a2cfc, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(uint32_t  x) ;

/// @brief Method asin, addr 0x45a8a8c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2  x) ;

/// @brief Method asin, addr 0x45a8b30, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3  x) ;

/// @brief Method asin, addr 0x45a8c1c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4  x) ;

/// @brief Method asin, addr 0x45a8774, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2  x) ;

/// @brief Method asin, addr 0x45a8818, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3  x) ;

/// @brief Method asin, addr 0x45a8904, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4  x) ;

/// @brief Method asin, addr 0x45a8a30, size 0x5c, virtual false, abstract: false, final false
static inline double_t asin(double_t  x) ;

/// @brief Method asin, addr 0x45a8710, size 0x64, virtual false, abstract: false, final false
static inline float_t asin(float_t  x) ;

/// @brief Method asint, addr 0x45a2c00, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2  x) ;

/// @brief Method asint, addr 0x45a2be8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2  x) ;

/// @brief Method asint, addr 0x45a2c10, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3  x) ;

/// @brief Method asint, addr 0x45a2bec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3  x) ;

/// @brief Method asint, addr 0x45a2c24, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4  x) ;

/// @brief Method asint, addr 0x45a2bf4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4  x) ;

/// @brief Method asint, addr 0x45a2bf8, size 0x8, virtual false, abstract: false, final false
static inline int32_t asint(float_t  x) ;

/// @brief Method asint, addr 0x45a2be4, size 0x4, virtual false, abstract: false, final false
static inline int32_t asint(uint32_t  x) ;

/// @brief Method aslong, addr 0x45a2ca0, size 0x8, virtual false, abstract: false, final false
static inline int64_t aslong(double_t  x) ;

/// @brief Method aslong, addr 0x45a2c9c, size 0x4, virtual false, abstract: false, final false
static inline int64_t aslong(uint64_t  x) ;

/// @brief Method asuint, addr 0x45a2c5c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2  x) ;

/// @brief Method asuint, addr 0x45a2c44, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2  x) ;

/// @brief Method asuint, addr 0x45a2c6c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3  x) ;

/// @brief Method asuint, addr 0x45a2c48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3  x) ;

/// @brief Method asuint, addr 0x45a2c80, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4  x) ;

/// @brief Method asuint, addr 0x45a2c50, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4  x) ;

/// @brief Method asuint, addr 0x45a2c54, size 0x8, virtual false, abstract: false, final false
static inline uint32_t asuint(float_t  x) ;

/// @brief Method asuint, addr 0x45a2c40, size 0x4, virtual false, abstract: false, final false
static inline uint32_t asuint(int32_t  x) ;

/// @brief Method asulong, addr 0x45a2cac, size 0x8, virtual false, abstract: false, final false
static inline uint64_t asulong(double_t  x) ;

/// @brief Method asulong, addr 0x45a2ca8, size 0x4, virtual false, abstract: false, final false
static inline uint64_t asulong(int64_t  x) ;

/// @brief Method atan, addr 0x45a5e24, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2  x) ;

/// @brief Method atan, addr 0x45a5ec8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3  x) ;

/// @brief Method atan, addr 0x45a5fb4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4  x) ;

/// @brief Method atan, addr 0x45a5b0c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2  x) ;

/// @brief Method atan, addr 0x45a5bb0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3  x) ;

/// @brief Method atan, addr 0x45a5c9c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4  x) ;

/// @brief Method atan, addr 0x45a5dc8, size 0x5c, virtual false, abstract: false, final false
static inline double_t atan(double_t  x) ;

/// @brief Method atan, addr 0x45a5aa8, size 0x64, virtual false, abstract: false, final false
static inline float_t atan(float_t  x) ;

/// @brief Method atan2, addr 0x45a64d4, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  x) ;

/// @brief Method atan2, addr 0x45a6590, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  x) ;

/// @brief Method atan2, addr 0x45a669c, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  x) ;

/// @brief Method atan2, addr 0x45a614c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  x) ;

/// @brief Method atan2, addr 0x45a6208, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  x) ;

/// @brief Method atan2, addr 0x45a6314, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  x) ;

/// @brief Method atan2, addr 0x45a6470, size 0x64, virtual false, abstract: false, final false
static inline double_t atan2(double_t  y, double_t  x) ;

/// @brief Method atan2, addr 0x45a60e0, size 0x6c, virtual false, abstract: false, final false
static inline float_t atan2(float_t  y, float_t  x) ;

/// @brief Method back, addr 0x45b5600, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 back() ;

/// @brief Method bitmask, addr 0x45a2d44, size 0x28, virtual false, abstract: false, final false
static inline int32_t bitmask(::Unity::Mathematics::bool4  value) ;

/// @brief Method bool2, addr 0x45952a4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  v) ;

/// @brief Method bool2, addr 0x4595280, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  x, bool  y) ;

/// @brief Method bool2, addr 0x4595298, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2  xy) ;

/// @brief Method bool2x2, addr 0x45955c4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) ;

/// @brief Method bool2x2, addr 0x45955d4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  m00, bool  m01, bool  m10, bool  m11) ;

/// @brief Method bool2x2, addr 0x45955f8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  v) ;

/// @brief Method bool2x3, addr 0x4595728, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2) ;

/// @brief Method bool2x3, addr 0x459573c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12) ;

/// @brief Method bool2x3, addr 0x4595770, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  v) ;

/// @brief Method bool2x4, addr 0x4595938, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2, ::Unity::Mathematics::bool2  c3) ;

/// @brief Method bool2x4, addr 0x4595950, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13) ;

/// @brief Method bool2x4, addr 0x4595994, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  v) ;

/// @brief Method bool3, addr 0x4595c48, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  v) ;

/// @brief Method bool3, addr 0x4595be4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, bool  y, bool  z) ;

/// @brief Method bool3, addr 0x4595c08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, ::Unity::Mathematics::bool2  yz) ;

/// @brief Method bool3, addr 0x4595c1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2  xy, bool  z) ;

/// @brief Method bool3, addr 0x4595c38, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3  xyz) ;

/// @brief Method bool3x2, addr 0x4595fb0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) ;

/// @brief Method bool3x2, addr 0x4595fbc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21) ;

/// @brief Method bool3x2, addr 0x4596010, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  v) ;

/// @brief Method bool3x3, addr 0x45961b8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2) ;

/// @brief Method bool3x3, addr 0x45961ec, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22) ;

/// @brief Method bool3x3, addr 0x4596268, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  v) ;

/// @brief Method bool3x4, addr 0x4596530, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method bool3x4, addr 0x4596570, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method bool3x4, addr 0x459661c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  v) ;

/// @brief Method bool4, addr 0x4596abc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  v) ;

/// @brief Method bool4, addr 0x45969b4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x45969e8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x4596a0c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool2  yz, bool  w) ;

/// @brief Method bool4, addr 0x4596a30, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool3  yzw) ;

/// @brief Method bool4, addr 0x4596a4c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x4596a78, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x4596a90, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3  xyz, bool  w) ;

/// @brief Method bool4, addr 0x4596ab0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4  xyzw) ;

/// @brief Method bool4x2, addr 0x4596e2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1) ;

/// @brief Method bool4x2, addr 0x4596e34, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21, bool  m30, bool  m31) ;

/// @brief Method bool4x2, addr 0x4596e90, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  v) ;

/// @brief Method bool4x3, addr 0x45970a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2) ;

/// @brief Method bool4x3, addr 0x45970b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22, bool  m30, bool  m31, bool  m32) ;

/// @brief Method bool4x3, addr 0x4597140, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  v) ;

/// @brief Method bool4x4, addr 0x459745c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Method bool4x4, addr 0x459746c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23, bool  m30, bool  m31, bool  m32, bool  m33) ;

/// @brief Method bool4x4, addr 0x459753c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  v) ;

/// @brief Method ceil, addr 0x45a95cc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2  x) ;

/// @brief Method ceil, addr 0x45a965c, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3  x) ;

/// @brief Method ceil, addr 0x45a9728, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4  x) ;

/// @brief Method ceil, addr 0x45a9314, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2  x) ;

/// @brief Method ceil, addr 0x45a93a4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3  x) ;

/// @brief Method ceil, addr 0x45a9470, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4  x) ;

/// @brief Method ceil, addr 0x45a9570, size 0x5c, virtual false, abstract: false, final false
static inline double_t ceil(double_t  x) ;

/// @brief Method ceil, addr 0x45a92b8, size 0x5c, virtual false, abstract: false, final false
static inline float_t ceil(float_t  x) ;

/// @brief Method ceillog2, addr 0x45b3d90, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceillog2, addr 0x45b4010, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceillog2, addr 0x45b3e14, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceillog2, addr 0x45b4094, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceillog2, addr 0x45b3ed4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceillog2, addr 0x45b4154, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceillog2, addr 0x45b3d54, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ceillog2(int32_t  x) ;

/// @brief Method ceillog2, addr 0x45b3fd4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ceillog2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x45b383c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceilpow2, addr 0x45b38cc, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceilpow2, addr 0x45b3978, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceilpow2, addr 0x45b3aac, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceilpow2, addr 0x45b3b3c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceilpow2, addr 0x45b3bf0, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceilpow2, addr 0x45b381c, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceilpow2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0x45b3d0c, size 0x24, virtual false, abstract: false, final false
static inline int64_t ceilpow2(int64_t  x) ;

/// @brief Method ceilpow2, addr 0x45b3a8c, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ceilpow2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x45b3d30, size 0x24, virtual false, abstract: false, final false
static inline uint64_t ceilpow2(uint64_t  x) ;

/// @brief Method clamp, addr 0x45a4658, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method clamp, addr 0x45a46b0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method clamp, addr 0x45a4738, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method clamp, addr 0x45a4498, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method clamp, addr 0x45a44f0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method clamp, addr 0x45a4578, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method clamp, addr 0x45a426c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method clamp, addr 0x45a42a0, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method clamp, addr 0x45a42e8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method clamp, addr 0x45a4360, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method clamp, addr 0x45a4394, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method clamp, addr 0x45a43dc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method clamp, addr 0x45a4628, size 0x30, virtual false, abstract: false, final false
static inline double_t clamp(double_t  x, double_t  a, double_t  b) ;

/// @brief Method clamp, addr 0x45a4468, size 0x30, virtual false, abstract: false, final false
static inline float_t clamp(float_t  x, float_t  a, float_t  b) ;

/// @brief Method clamp, addr 0x45a4258, size 0x14, virtual false, abstract: false, final false
static inline int32_t clamp(int32_t  x, int32_t  a, int32_t  b) ;

/// @brief Method clamp, addr 0x45a4440, size 0x14, virtual false, abstract: false, final false
static inline int64_t clamp(int64_t  x, int64_t  a, int64_t  b) ;

/// @brief Method clamp, addr 0x45a434c, size 0x14, virtual false, abstract: false, final false
static inline uint32_t clamp(uint32_t  x, uint32_t  a, uint32_t  b) ;

/// @brief Method clamp, addr 0x45a4454, size 0x14, virtual false, abstract: false, final false
static inline uint64_t clamp(uint64_t  x, uint64_t  a, uint64_t  b) ;

/// @brief Method cmax, addr 0x45b4afc, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double2  x) ;

/// @brief Method cmax, addr 0x45b4b18, size 0x30, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double3  x) ;

/// @brief Method cmax, addr 0x45b4b48, size 0x44, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double4  x) ;

/// @brief Method cmax, addr 0x45b4a6c, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float2  x) ;

/// @brief Method cmax, addr 0x45b4a88, size 0x30, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float3  x) ;

/// @brief Method cmax, addr 0x45b4ab8, size 0x44, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float4  x) ;

/// @brief Method cmax, addr 0x45b49d4, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int2  x) ;

/// @brief Method cmax, addr 0x45b49e4, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int3  x) ;

/// @brief Method cmax, addr 0x45b49fc, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int4  x) ;

/// @brief Method cmax, addr 0x45b4a20, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmax, addr 0x45b4a30, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmax, addr 0x45b4a48, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint4  x) ;

/// @brief Method cmin, addr 0x45b4944, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double2  x) ;

/// @brief Method cmin, addr 0x45b4960, size 0x30, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double3  x) ;

/// @brief Method cmin, addr 0x45b4990, size 0x44, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double4  x) ;

/// @brief Method cmin, addr 0x45b48b4, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float2  x) ;

/// @brief Method cmin, addr 0x45b48d0, size 0x30, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float3  x) ;

/// @brief Method cmin, addr 0x45b4900, size 0x44, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float4  x) ;

/// @brief Method cmin, addr 0x45b481c, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int2  x) ;

/// @brief Method cmin, addr 0x45b482c, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int3  x) ;

/// @brief Method cmin, addr 0x45b4844, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int4  x) ;

/// @brief Method cmin, addr 0x45b4868, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmin, addr 0x45b4878, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmin, addr 0x45b4890, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint4  x) ;

/// @brief Method compress, addr 0x45b4cfc, size 0x58, virtual false, abstract: false, final false
static inline int32_t compress(::cordl_internals::Ptr<float_t>  output, int32_t  index, ::Unity::Mathematics::float4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x45b4c3c, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(::cordl_internals::Ptr<int32_t>  output, int32_t  index, ::Unity::Mathematics::int4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x45b4c9c, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(::cordl_internals::Ptr<uint32_t>  output, int32_t  index, ::Unity::Mathematics::uint4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method conjugate, addr 0x45bcca8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion  q) ;

/// @brief Method cos, addr 0x45a6b74, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2  x) ;

/// @brief Method cos, addr 0x45a6c18, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3  x) ;

/// @brief Method cos, addr 0x45a6d04, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4  x) ;

/// @brief Method cos, addr 0x45a685c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2  x) ;

/// @brief Method cos, addr 0x45a6900, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3  x) ;

/// @brief Method cos, addr 0x45a69ec, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4  x) ;

/// @brief Method cos, addr 0x45a6b18, size 0x5c, virtual false, abstract: false, final false
static inline double_t cos(double_t  x) ;

/// @brief Method cos, addr 0x45a67f8, size 0x64, virtual false, abstract: false, final false
static inline float_t cos(float_t  x) ;

/// @brief Method cosh, addr 0x45a71ac, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2  x) ;

/// @brief Method cosh, addr 0x45a7250, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3  x) ;

/// @brief Method cosh, addr 0x45a733c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4  x) ;

/// @brief Method cosh, addr 0x45a6e94, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2  x) ;

/// @brief Method cosh, addr 0x45a6f38, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3  x) ;

/// @brief Method cosh, addr 0x45a7024, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4  x) ;

/// @brief Method cosh, addr 0x45a7150, size 0x5c, virtual false, abstract: false, final false
static inline double_t cosh(double_t  x) ;

/// @brief Method cosh, addr 0x45a6e30, size 0x64, virtual false, abstract: false, final false
static inline float_t cosh(float_t  x) ;

/// @brief Method countbits, addr 0x45b1ea8, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2  x) ;

/// @brief Method countbits, addr 0x45b2118, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2  x) ;

/// @brief Method countbits, addr 0x45b1f38, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3  x) ;

/// @brief Method countbits, addr 0x45b21a8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3  x) ;

/// @brief Method countbits, addr 0x45b1ff4, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4  x) ;

/// @brief Method countbits, addr 0x45b2260, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4  x) ;

/// @brief Method countbits, addr 0x45b1e74, size 0x34, virtual false, abstract: false, final false
static inline int32_t countbits(int32_t  x) ;

/// @brief Method countbits, addr 0x45b2384, size 0x34, virtual false, abstract: false, final false
static inline int32_t countbits(int64_t  x) ;

/// @brief Method countbits, addr 0x45b20e4, size 0x34, virtual false, abstract: false, final false
static inline int32_t countbits(uint32_t  x) ;

/// @brief Method countbits, addr 0x45b2350, size 0x34, virtual false, abstract: false, final false
static inline int32_t countbits(uint64_t  x) ;

/// @brief Method cross, addr 0x45aff24, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method cross, addr 0x45afefc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method csum, addr 0x45b4c18, size 0x8, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double2  x) ;

/// @brief Method csum, addr 0x45b4c20, size 0xc, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double3  x) ;

/// @brief Method csum, addr 0x45b4c2c, size 0x10, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double4  x) ;

/// @brief Method csum, addr 0x45b4bf4, size 0x8, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float2  x) ;

/// @brief Method csum, addr 0x45b4bfc, size 0xc, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float3  x) ;

/// @brief Method csum, addr 0x45b4c08, size 0x10, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float4  x) ;

/// @brief Method csum, addr 0x45b4b8c, size 0xc, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int2  x) ;

/// @brief Method csum, addr 0x45b4b98, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int3  x) ;

/// @brief Method csum, addr 0x45b4ba8, size 0x18, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int4  x) ;

/// @brief Method csum, addr 0x45b4bc0, size 0xc, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint2  x) ;

/// @brief Method csum, addr 0x45b4bcc, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint3  x) ;

/// @brief Method csum, addr 0x45b4bdc, size 0x18, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint4  x) ;

/// @brief Method degrees, addr 0x45b47d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2  x) ;

/// @brief Method degrees, addr 0x45b47e8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3  x) ;

/// @brief Method degrees, addr 0x45b4800, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4  x) ;

/// @brief Method degrees, addr 0x45b477c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2  x) ;

/// @brief Method degrees, addr 0x45b4790, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3  x) ;

/// @brief Method degrees, addr 0x45b47a8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4  x) ;

/// @brief Method degrees, addr 0x45b47c4, size 0x10, virtual false, abstract: false, final false
static inline double_t degrees(double_t  x) ;

/// @brief Method degrees, addr 0x45b476c, size 0x10, virtual false, abstract: false, final false
static inline float_t degrees(float_t  x) ;

/// @brief Method determinant, addr 0x4597f08, size 0x10, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double2x2  m) ;

/// @brief Method determinant, addr 0x459920c, size 0x50, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double3x3  m) ;

/// @brief Method determinant, addr 0x459b168, size 0xd8, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double4x4  m) ;

/// @brief Method determinant, addr 0x459bb14, size 0x10, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float2x2  m) ;

/// @brief Method determinant, addr 0x459cc0c, size 0x50, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float3x3  m) ;

/// @brief Method determinant, addr 0x459e710, size 0xd8, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float4x4  m) ;

/// @brief Method determinant, addr 0x459fb30, size 0x18, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int2x2  m) ;

/// @brief Method determinant, addr 0x45a0e60, size 0x48, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int3x3  m) ;

/// @brief Method determinant, addr 0x45a28f0, size 0xc4, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int4x4  m) ;

/// @brief Method distance, addr 0x45afc44, size 0x7c, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distance, addr 0x45afcc0, size 0x98, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distance, addr 0x45afd58, size 0xb4, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distance, addr 0x45afc3c, size 0x8, virtual false, abstract: false, final false
static inline double_t distance(double_t  x, double_t  y) ;

/// @brief Method distance, addr 0x45afa74, size 0x7c, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distance, addr 0x45afaf0, size 0x98, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distance, addr 0x45afb88, size 0xb4, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distance, addr 0x45afa6c, size 0x8, virtual false, abstract: false, final false
static inline float_t distance(float_t  x, float_t  y) ;

/// @brief Method distancesq, addr 0x45afe90, size 0x18, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distancesq, addr 0x45afea8, size 0x24, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distancesq, addr 0x45afecc, size 0x30, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distancesq, addr 0x45afe84, size 0xc, virtual false, abstract: false, final false
static inline double_t distancesq(double_t  x, double_t  y) ;

/// @brief Method distancesq, addr 0x45afe18, size 0x18, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distancesq, addr 0x45afe30, size 0x24, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0x45afe54, size 0x30, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distancesq, addr 0x45afe0c, size 0xc, virtual false, abstract: false, final false
static inline float_t distancesq(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x45a4df0, size 0x10, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method dot, addr 0x45a4e00, size 0x18, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method dot, addr 0x45a4e18, size 0x20, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method dot, addr 0x45a4de8, size 0x8, virtual false, abstract: false, final false
static inline double_t dot(double_t  x, double_t  y) ;

/// @brief Method dot, addr 0x45bccfc, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method dot, addr 0x45a4da0, size 0x10, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method dot, addr 0x45a4db0, size 0x18, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method dot, addr 0x45a4dc8, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method dot, addr 0x45a4d98, size 0x8, virtual false, abstract: false, final false
static inline float_t dot(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x45a4cf0, size 0x14, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method dot, addr 0x45a4d04, size 0x18, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method dot, addr 0x45a4d1c, size 0x24, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method dot, addr 0x45a4ce8, size 0x8, virtual false, abstract: false, final false
static inline int32_t dot(int32_t  x, int32_t  y) ;

/// @brief Method dot, addr 0x45a4d48, size 0x14, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method dot, addr 0x45a4d5c, size 0x18, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method dot, addr 0x45a4d74, size 0x24, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method dot, addr 0x45a4d40, size 0x8, virtual false, abstract: false, final false
static inline uint32_t dot(uint32_t  x, uint32_t  y) ;

/// @brief Method double2, addr 0x4597944, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2  v) ;

/// @brief Method double2, addr 0x4597a8c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2  v) ;

/// @brief Method double2, addr 0x4597998, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half  v) ;

/// @brief Method double2, addr 0x4597a00, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2  v) ;

/// @brief Method double2, addr 0x459796c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2  v) ;

/// @brief Method double2, addr 0x4597988, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2  v) ;

/// @brief Method double2, addr 0x459792c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(bool  v) ;

/// @brief Method double2, addr 0x4597924, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  v) ;

/// @brief Method double2, addr 0x4597a80, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(float_t  v) ;

/// @brief Method double2, addr 0x4597960, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(int32_t  v) ;

/// @brief Method double2, addr 0x459797c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(uint32_t  v) ;

/// @brief Method double2, addr 0x459791c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  x, double_t  y) ;

/// @brief Method double2, addr 0x4597920, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2  xy) ;

/// @brief Method double2x2, addr 0x4597dcc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method double2x2, addr 0x4597dd0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method double2x2, addr 0x4597e10, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method double2x2, addr 0x4597eb0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method double2x2, addr 0x4597e50, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method double2x2, addr 0x4597e80, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method double2x2, addr 0x4597df0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(bool  v) ;

/// @brief Method double2x2, addr 0x4597de0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  v) ;

/// @brief Method double2x2, addr 0x4597e9c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(float_t  v) ;

/// @brief Method double2x2, addr 0x4597e3c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(int32_t  v) ;

/// @brief Method double2x2, addr 0x4597e6c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t  v) ;

/// @brief Method double2x3, addr 0x4598010, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) ;

/// @brief Method double2x3, addr 0x4598020, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12) ;

/// @brief Method double2x3, addr 0x4598060, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method double2x3, addr 0x459814c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method double2x3, addr 0x45980bc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method double2x3, addr 0x4598104, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method double2x3, addr 0x4598040, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(bool  v) ;

/// @brief Method double2x3, addr 0x4598030, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  v) ;

/// @brief Method double2x3, addr 0x4598138, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(float_t  v) ;

/// @brief Method double2x3, addr 0x45980a8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(int32_t  v) ;

/// @brief Method double2x3, addr 0x45980f0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t  v) ;

/// @brief Method double2x4, addr 0x45982c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2, ::Unity::Mathematics::double2  c3) ;

/// @brief Method double2x4, addr 0x45982dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13) ;

/// @brief Method double2x4, addr 0x4598328, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method double2x4, addr 0x4598454, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method double2x4, addr 0x459839c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method double2x4, addr 0x45983f8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method double2x4, addr 0x4598304, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(bool  v) ;

/// @brief Method double2x4, addr 0x45982f0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  v) ;

/// @brief Method double2x4, addr 0x459843c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(float_t  v) ;

/// @brief Method double2x4, addr 0x4598384, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(int32_t  v) ;

/// @brief Method double2x4, addr 0x45983e0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t  v) ;

/// @brief Method double3, addr 0x4598670, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3  v) ;

/// @brief Method double3, addr 0x4598850, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3  v) ;

/// @brief Method double3, addr 0x45986dc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half  v) ;

/// @brief Method double3, addr 0x4598748, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3  v) ;

/// @brief Method double3, addr 0x45986a4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3  v) ;

/// @brief Method double3, addr 0x45986c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3  v) ;

/// @brief Method double3, addr 0x4598654, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(bool  v) ;

/// @brief Method double3, addr 0x4598648, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  v) ;

/// @brief Method double3, addr 0x4598840, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(float_t  v) ;

/// @brief Method double3, addr 0x4598694, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(int32_t  v) ;

/// @brief Method double3, addr 0x45986b8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(uint32_t  v) ;

/// @brief Method double3, addr 0x4598638, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, double_t  y, double_t  z) ;

/// @brief Method double3, addr 0x459863c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, ::Unity::Mathematics::double2  yz) ;

/// @brief Method double3, addr 0x4598640, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2  xy, double_t  z) ;

/// @brief Method double3, addr 0x4598644, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3  xyz) ;

/// @brief Method double3x2, addr 0x4598c38, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) ;

/// @brief Method double3x2, addr 0x4598c48, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21) ;

/// @brief Method double3x2, addr 0x4598c88, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method double3x2, addr 0x4598d74, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method double3x2, addr 0x4598ce4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method double3x2, addr 0x4598d2c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method double3x2, addr 0x4598c68, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(bool  v) ;

/// @brief Method double3x2, addr 0x4598c58, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  v) ;

/// @brief Method double3x2, addr 0x4598d60, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(float_t  v) ;

/// @brief Method double3x2, addr 0x4598cd0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(int32_t  v) ;

/// @brief Method double3x2, addr 0x4598d18, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t  v) ;

/// @brief Method double3x3, addr 0x4598ee8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method double3x3, addr 0x4598f08, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method double3x3, addr 0x4598f64, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method double3x3, addr 0x45990d8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method double3x3, addr 0x4599000, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method double3x3, addr 0x459906c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method double3x3, addr 0x4598f3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(bool  v) ;

/// @brief Method double3x3, addr 0x4598f24, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  v) ;

/// @brief Method double3x3, addr 0x45990bc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(float_t  v) ;

/// @brief Method double3x3, addr 0x4598fe4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(int32_t  v) ;

/// @brief Method double3x3, addr 0x4599050, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t  v) ;

/// @brief Method double3x4, addr 0x4599418, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) ;

/// @brief Method double3x4, addr 0x4599448, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23) ;

/// @brief Method double3x4, addr 0x45994b4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method double3x4, addr 0x4599678, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method double3x4, addr 0x4599570, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method double3x4, addr 0x45995f4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method double3x4, addr 0x4599488, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(bool  v) ;

/// @brief Method double3x4, addr 0x459946c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  v) ;

/// @brief Method double3x4, addr 0x4599658, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(float_t  v) ;

/// @brief Method double3x4, addr 0x4599550, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(int32_t  v) ;

/// @brief Method double3x4, addr 0x45995d4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t  v) ;

/// @brief Method double4, addr 0x45999f0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4  v) ;

/// @brief Method double4, addr 0x4599c44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4  v) ;

/// @brief Method double4, addr 0x4599a7c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half  v) ;

/// @brief Method double4, addr 0x4599aec, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4  v) ;

/// @brief Method double4, addr 0x4599a30, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4  v) ;

/// @brief Method double4, addr 0x4599a60, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4  v) ;

/// @brief Method double4, addr 0x45999d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(bool  v) ;

/// @brief Method double4, addr 0x45999c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  v) ;

/// @brief Method double4, addr 0x4599c30, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(float_t  v) ;

/// @brief Method double4, addr 0x4599a1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(int32_t  v) ;

/// @brief Method double4, addr 0x4599a4c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(uint32_t  v) ;

/// @brief Method double4, addr 0x45999a0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x45999a4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x45999a8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double2  yz, double_t  w) ;

/// @brief Method double4, addr 0x45999ac, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double3  yzw) ;

/// @brief Method double4, addr 0x45999b0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x45999b4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x45999b8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3  xyz, double_t  w) ;

/// @brief Method double4, addr 0x45999bc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4  xyzw) ;

/// @brief Method double4x2, addr 0x459a0d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) ;

/// @brief Method double4x2, addr 0x459a0e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21, double_t  m30, double_t  m31) ;

/// @brief Method double4x2, addr 0x459a134, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method double4x2, addr 0x459a260, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method double4x2, addr 0x459a1a8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method double4x2, addr 0x459a204, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method double4x2, addr 0x459a110, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(bool  v) ;

/// @brief Method double4x2, addr 0x459a0fc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  v) ;

/// @brief Method double4x2, addr 0x459a248, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(float_t  v) ;

/// @brief Method double4x2, addr 0x459a190, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(int32_t  v) ;

/// @brief Method double4x2, addr 0x459a1ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t  v) ;

/// @brief Method double4x3, addr 0x459a450, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2) ;

/// @brief Method double4x3, addr 0x459a474, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22, double_t  m30, double_t  m31, double_t  m32) ;

/// @brief Method double4x3, addr 0x459a4e0, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method double4x3, addr 0x459a68c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method double4x3, addr 0x459a584, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method double4x3, addr 0x459a608, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method double4x3, addr 0x459a4b4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(bool  v) ;

/// @brief Method double4x3, addr 0x459a498, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  v) ;

/// @brief Method double4x3, addr 0x459a66c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(float_t  v) ;

/// @brief Method double4x3, addr 0x459a564, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(int32_t  v) ;

/// @brief Method double4x3, addr 0x459a5e8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t  v) ;

/// @brief Method double4x4, addr 0x459a958, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) ;

/// @brief Method double4x4, addr 0x459a98c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23, double_t  m30, double_t  m31, double_t  m32, double_t  m33) ;

/// @brief Method double4x4, addr 0x459aa18, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method double4x4, addr 0x459ac44, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method double4x4, addr 0x459aaec, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method double4x4, addr 0x459ab98, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method double4x4, addr 0x459a9e4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(bool  v) ;

/// @brief Method double4x4, addr 0x459a9c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  v) ;

/// @brief Method double4x4, addr 0x459ac1c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(float_t  v) ;

/// @brief Method double4x4, addr 0x459aac4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(int32_t  v) ;

/// @brief Method double4x4, addr 0x459ab70, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t  v) ;

/// @brief Method down, addr 0x45b55e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 down() ;

/// @brief Method exp, addr 0x45abd44, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2  x) ;

/// @brief Method exp, addr 0x45abde8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3  x) ;

/// @brief Method exp, addr 0x45abed4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4  x) ;

/// @brief Method exp, addr 0x45aba2c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2  x) ;

/// @brief Method exp, addr 0x45abad0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3  x) ;

/// @brief Method exp, addr 0x45abbbc, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4  x) ;

/// @brief Method exp, addr 0x45bd1a8, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method exp, addr 0x45abce8, size 0x5c, virtual false, abstract: false, final false
static inline double_t exp(double_t  x) ;

/// @brief Method exp, addr 0x45ab9c8, size 0x64, virtual false, abstract: false, final false
static inline float_t exp(float_t  x) ;

/// @brief Method exp10, addr 0x45aca9c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2  x) ;

/// @brief Method exp10, addr 0x45acb50, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3  x) ;

/// @brief Method exp10, addr 0x45acc44, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4  x) ;

/// @brief Method exp10, addr 0x45ac730, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2  x) ;

/// @brief Method exp10, addr 0x45ac7ec, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3  x) ;

/// @brief Method exp10, addr 0x45ac8ec, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4  x) ;

/// @brief Method exp10, addr 0x45aca38, size 0x64, virtual false, abstract: false, final false
static inline double_t exp10(double_t  x) ;

/// @brief Method exp10, addr 0x45ac6c0, size 0x70, virtual false, abstract: false, final false
static inline float_t exp10(float_t  x) ;

/// @brief Method exp2, addr 0x45ac3dc, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2  x) ;

/// @brief Method exp2, addr 0x45ac490, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3  x) ;

/// @brief Method exp2, addr 0x45ac584, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4  x) ;

/// @brief Method exp2, addr 0x45ac070, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2  x) ;

/// @brief Method exp2, addr 0x45ac12c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3  x) ;

/// @brief Method exp2, addr 0x45ac22c, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4  x) ;

/// @brief Method exp2, addr 0x45ac378, size 0x64, virtual false, abstract: false, final false
static inline double_t exp2(double_t  x) ;

/// @brief Method exp2, addr 0x45ac000, size 0x70, virtual false, abstract: false, final false
static inline float_t exp2(float_t  x) ;

/// @brief Method f16tof32, addr 0x45b4db0, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2  x) ;

/// @brief Method f16tof32, addr 0x45b4e68, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3  x) ;

/// @brief Method f16tof32, addr 0x45b4f68, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4  x) ;

/// @brief Method f16tof32, addr 0x45b4d54, size 0x5c, virtual false, abstract: false, final false
static inline float_t f16tof32(uint32_t  x) ;

/// @brief Method f32tof16, addr 0x45b5120, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2  x) ;

/// @brief Method f32tof16, addr 0x45b51dc, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3  x) ;

/// @brief Method f32tof16, addr 0x45b52d8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4  x) ;

/// @brief Method f32tof16, addr 0x45b50c0, size 0x60, virtual false, abstract: false, final false
static inline uint32_t f32tof16(float_t  x) ;

/// @brief Method faceforward, addr 0x45b1864, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2  n, ::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  ng) ;

/// @brief Method faceforward, addr 0x45b1888, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3  n, ::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  ng) ;

/// @brief Method faceforward, addr 0x45b18c4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4  n, ::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  ng) ;

/// @brief Method faceforward, addr 0x45b17b8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2  n, ::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  ng) ;

/// @brief Method faceforward, addr 0x45b17dc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3  n, ::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  ng) ;

/// @brief Method faceforward, addr 0x45b1818, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4  n, ::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  ng) ;

/// @brief Method fastinverse, addr 0x45996e0, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4  m) ;

/// @brief Method fastinverse, addr 0x459b0c8, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method fastinverse, addr 0x459d038, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4  m) ;

/// @brief Method fastinverse, addr 0x459e670, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method float2, addr 0x459b578, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2  v) ;

/// @brief Method float2, addr 0x459b6b8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2  v) ;

/// @brief Method float2, addr 0x459b5cc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half  v) ;

/// @brief Method float2, addr 0x459b630, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2  v) ;

/// @brief Method float2, addr 0x459b5a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2  v) ;

/// @brief Method float2, addr 0x459b5bc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2  v) ;

/// @brief Method float2, addr 0x459b560, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(bool  v) ;

/// @brief Method float2, addr 0x459b6ac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(double_t  v) ;

/// @brief Method float2, addr 0x459b558, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  v) ;

/// @brief Method float2, addr 0x459b594, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(int32_t  v) ;

/// @brief Method float2, addr 0x459b5b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(uint32_t  v) ;

/// @brief Method float2, addr 0x459b550, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  x, float_t  y) ;

/// @brief Method float2, addr 0x459b554, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2  xy) ;

/// @brief Method float2x2, addr 0x459b9d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method float2x2, addr 0x459b9dc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

/// @brief Method float2x2, addr 0x459ba1c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method float2x2, addr 0x459babc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method float2x2, addr 0x459ba5c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method float2x2, addr 0x459ba8c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method float2x2, addr 0x459b9fc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(bool  v) ;

/// @brief Method float2x2, addr 0x459baa8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(double_t  v) ;

/// @brief Method float2x2, addr 0x459b9ec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  v) ;

/// @brief Method float2x2, addr 0x459ba48, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(int32_t  v) ;

/// @brief Method float2x2, addr 0x459ba78, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t  v) ;

/// @brief Method float2x3, addr 0x459bbdc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2) ;

/// @brief Method float2x3, addr 0x459bbec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12) ;

/// @brief Method float2x3, addr 0x459bc2c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method float2x3, addr 0x459bd18, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method float2x3, addr 0x459bc88, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method float2x3, addr 0x459bcd0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method float2x3, addr 0x459bc0c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(bool  v) ;

/// @brief Method float2x3, addr 0x459bd04, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(double_t  v) ;

/// @brief Method float2x3, addr 0x459bbfc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  v) ;

/// @brief Method float2x3, addr 0x459bc74, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(int32_t  v) ;

/// @brief Method float2x3, addr 0x459bcbc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t  v) ;

/// @brief Method float2x4, addr 0x459be3c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method float2x4, addr 0x459be50, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method float2x4, addr 0x459be94, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method float2x4, addr 0x459bfa8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method float2x4, addr 0x459bf00, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method float2x4, addr 0x459bf54, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method float2x4, addr 0x459be70, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(bool  v) ;

/// @brief Method float2x4, addr 0x459bf98, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(double_t  v) ;

/// @brief Method float2x4, addr 0x459be64, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  v) ;

/// @brief Method float2x4, addr 0x459bef0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(int32_t  v) ;

/// @brief Method float2x4, addr 0x459bf44, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t  v) ;

/// @brief Method float3, addr 0x459c13c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3  v) ;

/// @brief Method float3, addr 0x459c2ec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3  v) ;

/// @brief Method float3, addr 0x459c1a8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half  v) ;

/// @brief Method float3, addr 0x459c210, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3  v) ;

/// @brief Method float3, addr 0x459c170, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3  v) ;

/// @brief Method float3, addr 0x459c194, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3  v) ;

/// @brief Method float3, addr 0x459c120, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(bool  v) ;

/// @brief Method float3, addr 0x459c2dc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(double_t  v) ;

/// @brief Method float3, addr 0x459c114, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  v) ;

/// @brief Method float3, addr 0x459c160, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(int32_t  v) ;

/// @brief Method float3, addr 0x459c184, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(uint32_t  v) ;

/// @brief Method float3, addr 0x459c104, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, float_t  y, float_t  z) ;

/// @brief Method float3, addr 0x459c108, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method float3, addr 0x459c10c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method float3, addr 0x459c110, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3  xyz) ;

/// @brief Method float3x2, addr 0x459c6a4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) ;

/// @brief Method float3x2, addr 0x459c6b4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21) ;

/// @brief Method float3x2, addr 0x459c6f4, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method float3x2, addr 0x459c7e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method float3x2, addr 0x459c750, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method float3x2, addr 0x459c798, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method float3x2, addr 0x459c6d4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(bool  v) ;

/// @brief Method float3x2, addr 0x459c7cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(double_t  v) ;

/// @brief Method float3x2, addr 0x459c6c4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  v) ;

/// @brief Method float3x2, addr 0x459c73c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(int32_t  v) ;

/// @brief Method float3x2, addr 0x459c784, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t  v) ;

/// @brief Method float3x3, addr 0x459c90c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method float3x3, addr 0x45b5740, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method float3x3, addr 0x459c92c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method float3x3, addr 0x45b5780, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method float3x3, addr 0x459c980, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method float3x3, addr 0x459cadc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method float3x3, addr 0x459ca14, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method float3x3, addr 0x459ca78, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method float3x3, addr 0x459c958, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(bool  v) ;

/// @brief Method float3x3, addr 0x459cac8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(double_t  v) ;

/// @brief Method float3x3, addr 0x459c948, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  v) ;

/// @brief Method float3x3, addr 0x459ca00, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(int32_t  v) ;

/// @brief Method float3x3, addr 0x459ca64, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t  v) ;

/// @brief Method float3x4, addr 0x459cd9c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) ;

/// @brief Method float3x4, addr 0x459cdcc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

/// @brief Method float3x4, addr 0x459ce34, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method float3x4, addr 0x459cfd4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method float3x4, addr 0x459cee4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method float3x4, addr 0x459cf5c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method float3x4, addr 0x459ce08, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(bool  v) ;

/// @brief Method float3x4, addr 0x459cfc0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(double_t  v) ;

/// @brief Method float3x4, addr 0x459cdf8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  v) ;

/// @brief Method float3x4, addr 0x459ced0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(int32_t  v) ;

/// @brief Method float3x4, addr 0x459cf48, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t  v) ;

/// @brief Method float4, addr 0x459d294, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4  v) ;

/// @brief Method float4, addr 0x459d458, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4  v) ;

/// @brief Method float4, addr 0x459d320, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half  v) ;

/// @brief Method float4, addr 0x459d38c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4  v) ;

/// @brief Method float4, addr 0x459d2d4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4  v) ;

/// @brief Method float4, addr 0x459d304, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4  v) ;

/// @brief Method float4, addr 0x459d274, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(bool  v) ;

/// @brief Method float4, addr 0x459d444, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(double_t  v) ;

/// @brief Method float4, addr 0x459d264, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  v) ;

/// @brief Method float4, addr 0x459d2c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(int32_t  v) ;

/// @brief Method float4, addr 0x459d2f0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(uint32_t  v) ;

/// @brief Method float4, addr 0x459d244, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x459d248, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x459d24c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float2  yz, float_t  w) ;

/// @brief Method float4, addr 0x459d250, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float3  yzw) ;

/// @brief Method float4, addr 0x459d254, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x459d258, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x459d25c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3  xyz, float_t  w) ;

/// @brief Method float4, addr 0x459d260, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4  xyzw) ;

/// @brief Method float4x2, addr 0x459d89c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1) ;

/// @brief Method float4x2, addr 0x459d8b0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21, float_t  m30, float_t  m31) ;

/// @brief Method float4x2, addr 0x459d8f4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method float4x2, addr 0x459da08, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method float4x2, addr 0x459d960, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method float4x2, addr 0x459d9b4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method float4x2, addr 0x459d8d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(bool  v) ;

/// @brief Method float4x2, addr 0x459d9f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(double_t  v) ;

/// @brief Method float4x2, addr 0x459d8c4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  v) ;

/// @brief Method float4x2, addr 0x459d950, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(int32_t  v) ;

/// @brief Method float4x2, addr 0x459d9a4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t  v) ;

/// @brief Method float4x3, addr 0x459db74, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) ;

/// @brief Method float4x3, addr 0x459db90, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22, float_t  m30, float_t  m31, float_t  m32) ;

/// @brief Method float4x3, addr 0x459dbf8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method float4x3, addr 0x459dd80, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method float4x3, addr 0x459dc90, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method float4x3, addr 0x459dd08, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method float4x3, addr 0x459dbcc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(bool  v) ;

/// @brief Method float4x3, addr 0x459dd6c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(double_t  v) ;

/// @brief Method float4x3, addr 0x459dbbc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  v) ;

/// @brief Method float4x3, addr 0x459dc7c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(int32_t  v) ;

/// @brief Method float4x3, addr 0x459dcf4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t  v) ;

/// @brief Method float4x4, addr 0x459df84, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method float4x4, addr 0x459dfa0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method float4x4, addr 0x45b5798, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x45b57d8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x45b57f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform  transform) ;

/// @brief Method float4x4, addr 0x459e028, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method float4x4, addr 0x459e218, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method float4x4, addr 0x459e0e8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method float4x4, addr 0x459e180, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method float4x4, addr 0x459dff4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(bool  v) ;

/// @brief Method float4x4, addr 0x459e204, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(double_t  v) ;

/// @brief Method float4x4, addr 0x459dfe4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  v) ;

/// @brief Method float4x4, addr 0x459e0d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(int32_t  v) ;

/// @brief Method float4x4, addr 0x459e16c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t  v) ;

/// @brief Method floor, addr 0x45a905c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2  x) ;

/// @brief Method floor, addr 0x45a90ec, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3  x) ;

/// @brief Method floor, addr 0x45a91b8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4  x) ;

/// @brief Method floor, addr 0x45a8da4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2  x) ;

/// @brief Method floor, addr 0x45a8e34, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3  x) ;

/// @brief Method floor, addr 0x45a8f00, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4  x) ;

/// @brief Method floor, addr 0x45a9000, size 0x5c, virtual false, abstract: false, final false
static inline double_t floor(double_t  x) ;

/// @brief Method floor, addr 0x45a8d48, size 0x5c, virtual false, abstract: false, final false
static inline float_t floor(float_t  x) ;

/// @brief Method floorlog2, addr 0x45b428c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2  x) ;

/// @brief Method floorlog2, addr 0x45b44c0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method floorlog2, addr 0x45b4300, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3  x) ;

/// @brief Method floorlog2, addr 0x45b4534, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method floorlog2, addr 0x45b43a8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4  x) ;

/// @brief Method floorlog2, addr 0x45b45dc, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method floorlog2, addr 0x45b4254, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(int32_t  x) ;

/// @brief Method floorlog2, addr 0x45b4488, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(uint32_t  x) ;

/// @brief Method fmod, addr 0x45ae220, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method fmod, addr 0x45ae264, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method fmod, addr 0x45ae2cc, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method fmod, addr 0x45ae0e4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method fmod, addr 0x45ae128, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method fmod, addr 0x45ae190, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method fmod, addr 0x45ae21c, size 0x4, virtual false, abstract: false, final false
static inline double_t fmod(double_t  x, double_t  y) ;

/// @brief Method fmod, addr 0x45ae0e0, size 0x4, virtual false, abstract: false, final false
static inline float_t fmod(float_t  x, float_t  y) ;

/// @brief Method fold_to_uint, addr 0x45b56b8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2  x) ;

/// @brief Method fold_to_uint, addr 0x45b56d8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3  x) ;

/// @brief Method fold_to_uint, addr 0x45b5704, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4  x) ;

/// @brief Method fold_to_uint, addr 0x45b56a8, size 0x10, virtual false, abstract: false, final false
static inline uint32_t fold_to_uint(double_t  x) ;

/// @brief Method forward, addr 0x45b55f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward() ;

/// @brief Method forward, addr 0x45bdc3c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion  q) ;

/// @brief Method frac, addr 0x45aae68, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2  x) ;

/// @brief Method frac, addr 0x45aaf00, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3  x) ;

/// @brief Method frac, addr 0x45aaf3c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4  x) ;

/// @brief Method frac, addr 0x45aacf8, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2  x) ;

/// @brief Method frac, addr 0x45aad90, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3  x) ;

/// @brief Method frac, addr 0x45aadcc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4  x) ;

/// @brief Method frac, addr 0x45aae10, size 0x58, virtual false, abstract: false, final false
static inline double_t frac(double_t  x) ;

/// @brief Method frac, addr 0x45aaca0, size 0x58, virtual false, abstract: false, final false
static inline float_t frac(float_t  x) ;

/// @brief Method half, addr 0x459ea6c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(double_t  v) ;

/// @brief Method half, addr 0x459ea08, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(float_t  v) ;

/// @brief Method half, addr 0x459ea00, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half  x) ;

/// @brief Method half2, addr 0x459ec78, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2  v) ;

/// @brief Method half2, addr 0x459eb7c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2  v) ;

/// @brief Method half2, addr 0x459eb08, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  v) ;

/// @brief Method half2, addr 0x459ec0c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(double_t  v) ;

/// @brief Method half2, addr 0x459eb14, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(float_t  v) ;

/// @brief Method half2, addr 0x459eaf0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) ;

/// @brief Method half2, addr 0x459eb00, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2  xy) ;

/// @brief Method half3, addr 0x459efa4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3  v) ;

/// @brief Method half3, addr 0x459ee44, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3  v) ;

/// @brief Method half3, addr 0x459edc0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  v) ;

/// @brief Method half3, addr 0x459ef30, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(double_t  v) ;

/// @brief Method half3, addr 0x459edd4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(float_t  v) ;

/// @brief Method half3, addr 0x459ed84, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x459ed98, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz) ;

/// @brief Method half3, addr 0x459edac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x459edb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3  xyz) ;

/// @brief Method half4, addr 0x459f400, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4  v) ;

/// @brief Method half4, addr 0x459f254, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4  v) ;

/// @brief Method half4, addr 0x459f1c8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  v) ;

/// @brief Method half4, addr 0x459f388, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(double_t  v) ;

/// @brief Method half4, addr 0x459f1e0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(float_t  v) ;

/// @brief Method half4, addr 0x459f138, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x459f150, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x459f16c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x459f184, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half3  yzw) ;

/// @brief Method half4, addr 0x459f1a0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x459f1ac, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x459f1bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3  xyz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x459f1c4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4  xyzw) ;

/// @brief Method hash, addr 0x45b5420, size 0x1b0, virtual false, abstract: false, final false
static inline uint32_t hash(::cordl_internals::Ptr<void>  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash, addr 0x45bdb78, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hash, addr 0x45be16c, size 0x98, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hash, addr 0x45952bc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2  v) ;

/// @brief Method hash, addr 0x4595638, size 0x78, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hash, addr 0x45957c8, size 0xb8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hash, addr 0x4595a00, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hash, addr 0x4595c64, size 0x54, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3  v) ;

/// @brief Method hash, addr 0x459605c, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hash, addr 0x45962e8, size 0x124, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hash, addr 0x45966c4, size 0x17c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hash, addr 0x4596acc, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4  v) ;

/// @brief Method hash, addr 0x4596ee4, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hash, addr 0x45971c4, size 0x170, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hash, addr 0x45975e4, size 0x1c0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hash, addr 0x4597a98, size 0x44, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2  v) ;

/// @brief Method hash, addr 0x4597f18, size 0x78, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hash, addr 0x4598188, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hash, addr 0x459849c, size 0xc8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hash, addr 0x4598860, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3  v) ;

/// @brief Method hash, addr 0x4598db0, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hash, addr 0x459925c, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hash, addr 0x459975c, size 0x11c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hash, addr 0x4599c58, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4  v) ;

/// @brief Method hash, addr 0x459a2a8, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hash, addr 0x459a6f4, size 0x12c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hash, addr 0x459b240, size 0x184, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hash, addr 0x459b6c4, size 0x34, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2  v) ;

/// @brief Method hash, addr 0x459bb24, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hash, addr 0x459bd5c, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hash, addr 0x459bfec, size 0x88, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hash, addr 0x459c2fc, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3  v) ;

/// @brief Method hash, addr 0x459c824, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hash, addr 0x459cc5c, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hash, addr 0x459d0b4, size 0xc4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hash, addr 0x459d46c, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4  v) ;

/// @brief Method hash, addr 0x459da4c, size 0x94, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hash, addr 0x459dde4, size 0xcc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hash, addr 0x459e7e8, size 0x108, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hash, addr 0x459ead4, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half  v) ;

/// @brief Method hash, addr 0x459ed0c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half2  v) ;

/// @brief Method hash, addr 0x459f09c, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half3  v) ;

/// @brief Method hash, addr 0x459f540, size 0x68, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half4  v) ;

/// @brief Method hash, addr 0x459f710, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2  v) ;

/// @brief Method hash, addr 0x459fb48, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hash, addr 0x459fe24, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hash, addr 0x45a01c8, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hash, addr 0x45a0448, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3  v) ;

/// @brief Method hash, addr 0x45a0a00, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hash, addr 0x45a0ea8, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hash, addr 0x45a1448, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hash, addr 0x45a17c0, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4  v) ;

/// @brief Method hash, addr 0x45a1dd8, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hash, addr 0x45a22ac, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hash, addr 0x45a29b4, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hash, addr 0x45be38c, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2  v) ;

/// @brief Method hash, addr 0x45be78c, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hash, addr 0x45bea50, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hash, addr 0x45bede4, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hash, addr 0x45bf044, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3  v) ;

/// @brief Method hash, addr 0x45bf5ec, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hash, addr 0x45bfa4c, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hash, addr 0x45bfffc, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hash, addr 0x45c0354, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4  v) ;

/// @brief Method hash, addr 0x45c095c, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hash, addr 0x45c0e30, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hash, addr 0x45c1484, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method hashwide, addr 0x45952f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2  v) ;

/// @brief Method hashwide, addr 0x45956b0, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hashwide, addr 0x4595880, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hashwide, addr 0x4595af4, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hashwide, addr 0x4597adc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2  v) ;

/// @brief Method hashwide, addr 0x4597f90, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hashwide, addr 0x4598224, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hashwide, addr 0x4598564, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hashwide, addr 0x459b6f8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2  v) ;

/// @brief Method hashwide, addr 0x459bb7c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hashwide, addr 0x459bdc8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hashwide, addr 0x459c074, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hashwide, addr 0x459ed44, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2  v) ;

/// @brief Method hashwide, addr 0x459f740, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2  v) ;

/// @brief Method hashwide, addr 0x459fb98, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hashwide, addr 0x459fe98, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hashwide, addr 0x45a0258, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hashwide, addr 0x45be3bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2  v) ;

/// @brief Method hashwide, addr 0x45be7dc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hashwide, addr 0x45beac4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hashwide, addr 0x45bee74, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hashwide, addr 0x4595cb8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3  v) ;

/// @brief Method hashwide, addr 0x459610c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hashwide, addr 0x459640c, size 0x124, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hashwide, addr 0x4596840, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hashwide, addr 0x45988c0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3  v) ;

/// @brief Method hashwide, addr 0x4598e4c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hashwide, addr 0x4599338, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hashwide, addr 0x4599878, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hashwide, addr 0x459c344, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3  v) ;

/// @brief Method hashwide, addr 0x459c894, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hashwide, addr 0x459ccf8, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hashwide, addr 0x459d178, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hashwide, addr 0x459f0e8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3  v) ;

/// @brief Method hashwide, addr 0x45a0488, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3  v) ;

/// @brief Method hashwide, addr 0x45a0a7c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hashwide, addr 0x45a0f54, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hashwide, addr 0x45a1524, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hashwide, addr 0x45bf084, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3  v) ;

/// @brief Method hashwide, addr 0x45bf668, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hashwide, addr 0x45bfaf8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hashwide, addr 0x45c00d8, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hashwide, addr 0x45bdbd8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hashwide, addr 0x45be204, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hashwide, addr 0x4596b18, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4  v) ;

/// @brief Method hashwide, addr 0x4596fd4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hashwide, addr 0x4597334, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hashwide, addr 0x45977a4, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hashwide, addr 0x4599cd8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4  v) ;

/// @brief Method hashwide, addr 0x459a37c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hashwide, addr 0x459a820, size 0x138, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hashwide, addr 0x459b3c4, size 0x18c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hashwide, addr 0x459d4cc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4  v) ;

/// @brief Method hashwide, addr 0x459dae0, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hashwide, addr 0x459deb0, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hashwide, addr 0x459e8f0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hashwide, addr 0x459f5a8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4  v) ;

/// @brief Method hashwide, addr 0x45a1818, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4  v) ;

/// @brief Method hashwide, addr 0x45a1e74, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hashwide, addr 0x45a2384, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hashwide, addr 0x45a2ac8, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hashwide, addr 0x45c03ac, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4  v) ;

/// @brief Method hashwide, addr 0x45c09f8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hashwide, addr 0x45c0f08, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hashwide, addr 0x45c1598, size 0x2404, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int2, addr 0x459f648, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2  v) ;

/// @brief Method int2, addr 0x459f6dc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2  v) ;

/// @brief Method int2, addr 0x459f688, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2  v) ;

/// @brief Method int2, addr 0x459f664, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2  v) ;

/// @brief Method int2, addr 0x459f630, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(bool  v) ;

/// @brief Method int2, addr 0x459f6bc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(double_t  v) ;

/// @brief Method int2, addr 0x459f668, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(float_t  v) ;

/// @brief Method int2, addr 0x459f624, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  v) ;

/// @brief Method int2, addr 0x459f658, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(uint32_t  v) ;

/// @brief Method int2, addr 0x459f614, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  x, int32_t  y) ;

/// @brief Method int2, addr 0x459f620, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2  xy) ;

/// @brief Method int2x2, addr 0x459f9b8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) ;

/// @brief Method int2x2, addr 0x459f9bc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11) ;

/// @brief Method int2x2, addr 0x459f9f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method int2x2, addr 0x459fac8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method int2x2, addr 0x459fa50, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method int2x2, addr 0x459fa28, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method int2x2, addr 0x459f9e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(bool  v) ;

/// @brief Method int2x2, addr 0x459faa4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(double_t  v) ;

/// @brief Method int2x2, addr 0x459fa2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(float_t  v) ;

/// @brief Method int2x2, addr 0x459f9d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  v) ;

/// @brief Method int2x2, addr 0x459fa18, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t  v) ;

/// @brief Method int2x3, addr 0x459fbf0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2) ;

/// @brief Method int2x3, addr 0x459fbfc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12) ;

/// @brief Method int2x3, addr 0x459fc4c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method int2x3, addr 0x459fd78, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method int2x3, addr 0x459fcc8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method int2x3, addr 0x459fc8c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method int2x3, addr 0x459fc34, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(bool  v) ;

/// @brief Method int2x3, addr 0x459fd50, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(double_t  v) ;

/// @brief Method int2x3, addr 0x459fca0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(float_t  v) ;

/// @brief Method int2x3, addr 0x459fc20, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  v) ;

/// @brief Method int2x3, addr 0x459fc78, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t  v) ;

/// @brief Method int2x4, addr 0x459ff14, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) ;

/// @brief Method int2x4, addr 0x459ff20, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13) ;

/// @brief Method int2x4, addr 0x459ff78, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method int2x4, addr 0x45a00f8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method int2x4, addr 0x45a0024, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method int2x4, addr 0x459fff0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method int2x4, addr 0x459ff60, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(bool  v) ;

/// @brief Method int2x4, addr 0x45a00d0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(double_t  v) ;

/// @brief Method int2x4, addr 0x459fffc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(float_t  v) ;

/// @brief Method int2x4, addr 0x459ff4c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  v) ;

/// @brief Method int2x4, addr 0x459ffdc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t  v) ;

/// @brief Method int3, addr 0x45a0350, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3  v) ;

/// @brief Method int3, addr 0x45a0408, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3  v) ;

/// @brief Method int3, addr 0x45a03a4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3  v) ;

/// @brief Method int3, addr 0x45a0378, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3  v) ;

/// @brief Method int3, addr 0x45a0334, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(bool  v) ;

/// @brief Method int3, addr 0x45a03e4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(double_t  v) ;

/// @brief Method int3, addr 0x45a0380, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(float_t  v) ;

/// @brief Method int3, addr 0x45a0324, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  v) ;

/// @brief Method int3, addr 0x45a0368, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(uint32_t  v) ;

/// @brief Method int3, addr 0x45a02f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method int3, addr 0x45a0300, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, ::Unity::Mathematics::int2  yz) ;

/// @brief Method int3, addr 0x45a0314, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2  xy, int32_t  z) ;

/// @brief Method int3, addr 0x45a031c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3  xyz) ;

/// @brief Method int3x2, addr 0x45a079c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1) ;

/// @brief Method int3x2, addr 0x45a07b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21) ;

/// @brief Method int3x2, addr 0x45a07fc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method int3x2, addr 0x45a0954, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method int3x2, addr 0x45a089c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method int3x2, addr 0x45a0848, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method int3x2, addr 0x45a07dc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(bool  v) ;

/// @brief Method int3x2, addr 0x45a0924, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(double_t  v) ;

/// @brief Method int3x2, addr 0x45a086c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(float_t  v) ;

/// @brief Method int3x2, addr 0x45a07c0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  v) ;

/// @brief Method int3x2, addr 0x45a082c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t  v) ;

/// @brief Method int3x3, addr 0x45a0b00, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) ;

/// @brief Method int3x3, addr 0x45a0b1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22) ;

/// @brief Method int3x3, addr 0x45a0b84, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method int3x3, addr 0x45a0d70, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method int3x3, addr 0x45a0c74, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method int3x3, addr 0x45a0c08, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method int3x3, addr 0x45a0b5c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(bool  v) ;

/// @brief Method int3x3, addr 0x45a0d38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(double_t  v) ;

/// @brief Method int3x3, addr 0x45a0c3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(float_t  v) ;

/// @brief Method int3x3, addr 0x45a0b38, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  v) ;

/// @brief Method int3x3, addr 0x45a0be4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t  v) ;

/// @brief Method int3x4, addr 0x45a1008, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) ;

/// @brief Method int3x4, addr 0x45a102c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23) ;

/// @brief Method int3x4, addr 0x45a10b4, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method int3x4, addr 0x45a1318, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method int3x4, addr 0x45a11dc, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method int3x4, addr 0x45a1158, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method int3x4, addr 0x45a1084, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(bool  v) ;

/// @brief Method int3x4, addr 0x45a12d8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(double_t  v) ;

/// @brief Method int3x4, addr 0x45a119c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(float_t  v) ;

/// @brief Method int3x4, addr 0x45a1058, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  v) ;

/// @brief Method int3x4, addr 0x45a112c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t  v) ;

/// @brief Method int4, addr 0x45a169c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4  v) ;

/// @brief Method int4, addr 0x45a176c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4  v) ;

/// @brief Method int4, addr 0x45a16f4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4  v) ;

/// @brief Method int4, addr 0x45a16cc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4  v) ;

/// @brief Method int4, addr 0x45a1684, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(bool  v) ;

/// @brief Method int4, addr 0x45a1748, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(double_t  v) ;

/// @brief Method int4, addr 0x45a16d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(float_t  v) ;

/// @brief Method int4, addr 0x45a1674, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  v) ;

/// @brief Method int4, addr 0x45a16bc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(uint32_t  v) ;

/// @brief Method int4, addr 0x45a1608, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x45a1620, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x45a1630, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int2  yz, int32_t  w) ;

/// @brief Method int4, addr 0x45a1644, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

/// @brief Method int4, addr 0x45a1658, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x45a1664, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x45a1668, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3  xyz, int32_t  w) ;

/// @brief Method int4, addr 0x45a1670, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4  xyzw) ;

/// @brief Method int4x2, addr 0x45a1b34, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1) ;

/// @brief Method int4x2, addr 0x45a1b40, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21, int32_t  m30, int32_t  m31) ;

/// @brief Method int4x2, addr 0x45a1b80, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method int4x2, addr 0x45a1d00, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method int4x2, addr 0x45a1c2c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method int4x2, addr 0x45a1bf8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method int4x2, addr 0x45a1b68, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(bool  v) ;

/// @brief Method int4x2, addr 0x45a1cd8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(double_t  v) ;

/// @brief Method int4x2, addr 0x45a1c04, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(float_t  v) ;

/// @brief Method int4x2, addr 0x45a1b54, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  v) ;

/// @brief Method int4x2, addr 0x45a1be4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t  v) ;

/// @brief Method int4x3, addr 0x45a1f10, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) ;

/// @brief Method int4x3, addr 0x45a1f20, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m30, int32_t  m31, int32_t  m32) ;

/// @brief Method int4x3, addr 0x45a1f80, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method int4x3, addr 0x45a2180, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method int4x3, addr 0x45a205c, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method int4x3, addr 0x45a201c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method int4x3, addr 0x45a1f64, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(bool  v) ;

/// @brief Method int4x3, addr 0x45a2154, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(double_t  v) ;

/// @brief Method int4x3, addr 0x45a2030, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(float_t  v) ;

/// @brief Method int4x3, addr 0x45a1f4c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  v) ;

/// @brief Method int4x3, addr 0x45a2004, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t  v) ;

/// @brief Method int4x4, addr 0x45a2464, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method int4x4, addr 0x45a2478, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method int4x4, addr 0x45a24f8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method int4x4, addr 0x45a2768, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method int4x4, addr 0x45a25f4, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method int4x4, addr 0x45a25b0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int4x4, addr 0x45a24d8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(bool  v) ;

/// @brief Method int4x4, addr 0x45a2738, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(double_t  v) ;

/// @brief Method int4x4, addr 0x45a25c4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(float_t  v) ;

/// @brief Method int4x4, addr 0x45a24bc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  v) ;

/// @brief Method int4x4, addr 0x45a2594, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t  v) ;

/// @brief Method inverse, addr 0x45bddb0, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method inverse, addr 0x4597ed4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2  m) ;

/// @brief Method inverse, addr 0x4599134, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3  m) ;

/// @brief Method inverse, addr 0x459ad90, size 0x338, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method inverse, addr 0x459bae0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2  m) ;

/// @brief Method inverse, addr 0x459cb34, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method inverse, addr 0x459e338, size 0x338, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method inverse, addr 0x45bccb8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion  q) ;

/// @brief Method isfinite, addr 0x45a2e5c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2  x) ;

/// @brief Method isfinite, addr 0x45a2d94, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2  x) ;

/// @brief Method isfinite, addr 0x45a2e84, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3  x) ;

/// @brief Method isfinite, addr 0x45a2dbc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3  x) ;

/// @brief Method isfinite, addr 0x45a2ec0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4  x) ;

/// @brief Method isfinite, addr 0x45a2df8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4  x) ;

/// @brief Method isfinite, addr 0x45a2e44, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(double_t  x) ;

/// @brief Method isfinite, addr 0x45a2d7c, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(float_t  x) ;

/// @brief Method isinf, addr 0x45a2fec, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2  x) ;

/// @brief Method isinf, addr 0x45a2f24, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2  x) ;

/// @brief Method isinf, addr 0x45a3014, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3  x) ;

/// @brief Method isinf, addr 0x45a2f4c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3  x) ;

/// @brief Method isinf, addr 0x45a3050, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4  x) ;

/// @brief Method isinf, addr 0x45a2f88, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4  x) ;

/// @brief Method isinf, addr 0x45a2fd4, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(double_t  x) ;

/// @brief Method isinf, addr 0x45a2f0c, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(float_t  x) ;

/// @brief Method isnan, addr 0x45a318c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2  x) ;

/// @brief Method isnan, addr 0x45a30b4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2  x) ;

/// @brief Method isnan, addr 0x45a31b8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3  x) ;

/// @brief Method isnan, addr 0x45a30e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0x45a31f8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4  x) ;

/// @brief Method isnan, addr 0x45a3120, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4  x) ;

/// @brief Method isnan, addr 0x45a3174, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(double_t  x) ;

/// @brief Method isnan, addr 0x45a309c, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(float_t  x) ;

/// @brief Method ispow2, addr 0x45a3268, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ispow2, addr 0x45a337c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ispow2, addr 0x45a32a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ispow2, addr 0x45a33bc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ispow2, addr 0x45a32f0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ispow2, addr 0x45a341c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ispow2, addr 0x45a324c, size 0x1c, virtual false, abstract: false, final false
static inline bool ispow2(int32_t  x) ;

/// @brief Method ispow2, addr 0x45a335c, size 0x20, virtual false, abstract: false, final false
static inline bool ispow2(uint32_t  x) ;

/// @brief Method left, addr 0x45b5610, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 left() ;

/// @brief Method length, addr 0x45af86c, size 0x64, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double2  x) ;

/// @brief Method length, addr 0x45af8d0, size 0x78, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double3  x) ;

/// @brief Method length, addr 0x45af948, size 0x84, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double4  x) ;

/// @brief Method length, addr 0x45af864, size 0x8, virtual false, abstract: false, final false
static inline double_t length(double_t  x) ;

/// @brief Method length, addr 0x45bcd1c, size 0x84, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::quaternion  q) ;

/// @brief Method length, addr 0x45af704, size 0x64, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float2  x) ;

/// @brief Method length, addr 0x45af768, size 0x78, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float3  x) ;

/// @brief Method length, addr 0x45af7e0, size 0x84, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float4  x) ;

/// @brief Method length, addr 0x45af6fc, size 0x8, virtual false, abstract: false, final false
static inline float_t length(float_t  x) ;

/// @brief Method lengthsq, addr 0x45afa24, size 0x10, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double2  x) ;

/// @brief Method lengthsq, addr 0x45afa34, size 0x18, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double3  x) ;

/// @brief Method lengthsq, addr 0x45afa4c, size 0x20, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double4  x) ;

/// @brief Method lengthsq, addr 0x45afa1c, size 0x8, virtual false, abstract: false, final false
static inline double_t lengthsq(double_t  x) ;

/// @brief Method lengthsq, addr 0x45bcda0, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::quaternion  q) ;

/// @brief Method lengthsq, addr 0x45af9d4, size 0x10, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float2  x) ;

/// @brief Method lengthsq, addr 0x45af9e4, size 0x18, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float3  x) ;

/// @brief Method lengthsq, addr 0x45af9fc, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0x45af9cc, size 0x8, virtual false, abstract: false, final false
static inline float_t lengthsq(float_t  x) ;

/// @brief Method lerp, addr 0x45a3c5c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  s) ;

/// @brief Method lerp, addr 0x45a3be0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y, double_t  s) ;

/// @brief Method lerp, addr 0x45a3c78, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  s) ;

/// @brief Method lerp, addr 0x45a3bfc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y, double_t  s) ;

/// @brief Method lerp, addr 0x45a3ca8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  s) ;

/// @brief Method lerp, addr 0x45a3c24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y, double_t  s) ;

/// @brief Method lerp, addr 0x45a3b48, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  s) ;

/// @brief Method lerp, addr 0x45a3acc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y, float_t  s) ;

/// @brief Method lerp, addr 0x45a3b64, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  s) ;

/// @brief Method lerp, addr 0x45a3ae8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y, float_t  s) ;

/// @brief Method lerp, addr 0x45a3b94, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  s) ;

/// @brief Method lerp, addr 0x45a3b10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y, float_t  s) ;

/// @brief Method lerp, addr 0x45a3bd0, size 0x10, virtual false, abstract: false, final false
static inline double_t lerp(double_t  x, double_t  y, double_t  s) ;

/// @brief Method lerp, addr 0x45a3abc, size 0x10, virtual false, abstract: false, final false
static inline float_t lerp(float_t  x, float_t  y, float_t  s) ;

/// @brief Method log, addr 0x45ad0fc, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2  x) ;

/// @brief Method log, addr 0x45ad1a0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3  x) ;

/// @brief Method log, addr 0x45ad28c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4  x) ;

/// @brief Method log, addr 0x45acde4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2  x) ;

/// @brief Method log, addr 0x45ace88, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3  x) ;

/// @brief Method log, addr 0x45acf74, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4  x) ;

/// @brief Method log, addr 0x45bd434, size 0x1c4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion  q) ;

/// @brief Method log, addr 0x45ad0a0, size 0x5c, virtual false, abstract: false, final false
static inline double_t log(double_t  x) ;

/// @brief Method log, addr 0x45acd80, size 0x64, virtual false, abstract: false, final false
static inline float_t log(float_t  x) ;

/// @brief Method log10, addr 0x45ade24, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2  x) ;

/// @brief Method log10, addr 0x45adec8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3  x) ;

/// @brief Method log10, addr 0x45adfb4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4  x) ;

/// @brief Method log10, addr 0x45adb0c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2  x) ;

/// @brief Method log10, addr 0x45adbb0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3  x) ;

/// @brief Method log10, addr 0x45adc9c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4  x) ;

/// @brief Method log10, addr 0x45addc8, size 0x5c, virtual false, abstract: false, final false
static inline double_t log10(double_t  x) ;

/// @brief Method log10, addr 0x45adaa8, size 0x64, virtual false, abstract: false, final false
static inline float_t log10(float_t  x) ;

/// @brief Method log2, addr 0x45ad7a4, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2  x) ;

/// @brief Method log2, addr 0x45ad858, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3  x) ;

/// @brief Method log2, addr 0x45ad95c, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4  x) ;

/// @brief Method log2, addr 0x45ad424, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2  x) ;

/// @brief Method log2, addr 0x45ad4dc, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3  x) ;

/// @brief Method log2, addr 0x45ad5e8, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4  x) ;

/// @brief Method log2, addr 0x45ad740, size 0x64, virtual false, abstract: false, final false
static inline double_t log2(double_t  x) ;

/// @brief Method log2, addr 0x45ad3b8, size 0x6c, virtual false, abstract: false, final false
static inline float_t log2(float_t  x) ;

/// @brief Method lzcnt, addr 0x45b23f4, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method lzcnt, addr 0x45b2640, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method lzcnt, addr 0x45b246c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method lzcnt, addr 0x45b26b8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method lzcnt, addr 0x45b2518, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method lzcnt, addr 0x45b2764, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method lzcnt, addr 0x45b23b8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int32_t  x) ;

/// @brief Method lzcnt, addr 0x45b2850, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int64_t  x) ;

/// @brief Method lzcnt, addr 0x45b2604, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint32_t  x) ;

/// @brief Method lzcnt, addr 0x45b289c, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint64_t  x) ;

/// @brief Method mad, addr 0x45a41f4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::double2  c) ;

/// @brief Method mad, addr 0x45a4208, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::double3  c) ;

/// @brief Method mad, addr 0x45a422c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::double4  c) ;

/// @brief Method mad, addr 0x45a4184, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c) ;

/// @brief Method mad, addr 0x45a4198, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method mad, addr 0x45a41bc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::float4  c) ;

/// @brief Method mad, addr 0x45a4080, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::int2  c) ;

/// @brief Method mad, addr 0x45a409c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::int3  c) ;

/// @brief Method mad, addr 0x45a40bc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::int4  c) ;

/// @brief Method mad, addr 0x45a40f8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::uint2  c) ;

/// @brief Method mad, addr 0x45a4114, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::uint3  c) ;

/// @brief Method mad, addr 0x45a4134, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::uint4  c) ;

/// @brief Method mad, addr 0x45a41e8, size 0xc, virtual false, abstract: false, final false
static inline double_t mad(double_t  a, double_t  b, double_t  c) ;

/// @brief Method mad, addr 0x45a4178, size 0xc, virtual false, abstract: false, final false
static inline float_t mad(float_t  a, float_t  b, float_t  c) ;

/// @brief Method mad, addr 0x45a4078, size 0x8, virtual false, abstract: false, final false
static inline int32_t mad(int32_t  a, int32_t  b, int32_t  c) ;

/// @brief Method mad, addr 0x45a4168, size 0x8, virtual false, abstract: false, final false
static inline int64_t mad(int64_t  a, int64_t  b, int64_t  c) ;

/// @brief Method mad, addr 0x45a40f0, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mad(uint32_t  a, uint32_t  b, uint32_t  c) ;

/// @brief Method mad, addr 0x45a4170, size 0x8, virtual false, abstract: false, final false
static inline uint64_t mad(uint64_t  a, uint64_t  b, uint64_t  c) ;

/// @brief Method max, addr 0x45a39f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method max, addr 0x45a3a20, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method max, addr 0x45a3a64, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method max, addr 0x45a3908, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method max, addr 0x45a3938, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method max, addr 0x45a397c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method max, addr 0x45a37b8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method max, addr 0x45a37d8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method max, addr 0x45a3804, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method max, addr 0x45a384c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method max, addr 0x45a386c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method max, addr 0x45a3898, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method max, addr 0x45a39d4, size 0x1c, virtual false, abstract: false, final false
static inline double_t max(double_t  x, double_t  y) ;

/// @brief Method max, addr 0x45a38ec, size 0x1c, virtual false, abstract: false, final false
static inline float_t max(float_t  x, float_t  y) ;

/// @brief Method max, addr 0x45a37ac, size 0xc, virtual false, abstract: false, final false
static inline int32_t max(int32_t  x, int32_t  y) ;

/// @brief Method max, addr 0x45a38d4, size 0xc, virtual false, abstract: false, final false
static inline int64_t max(int64_t  x, int64_t  y) ;

/// @brief Method max, addr 0x45a3840, size 0xc, virtual false, abstract: false, final false
static inline uint32_t max(uint32_t  x, uint32_t  y) ;

/// @brief Method max, addr 0x45a38e0, size 0xc, virtual false, abstract: false, final false
static inline uint64_t max(uint64_t  x, uint64_t  y) ;

/// @brief Method min, addr 0x45a36e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method min, addr 0x45a3710, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method min, addr 0x45a3754, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method min, addr 0x45a35f8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method min, addr 0x45a3628, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method min, addr 0x45a366c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method min, addr 0x45a34a8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method min, addr 0x45a34c8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method min, addr 0x45a34f4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method min, addr 0x45a353c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method min, addr 0x45a355c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method min, addr 0x45a3588, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method min, addr 0x45a36c4, size 0x1c, virtual false, abstract: false, final false
static inline double_t min(double_t  x, double_t  y) ;

/// @brief Method min, addr 0x45a35dc, size 0x1c, virtual false, abstract: false, final false
static inline float_t min(float_t  x, float_t  y) ;

/// @brief Method min, addr 0x45a349c, size 0xc, virtual false, abstract: false, final false
static inline int32_t min(int32_t  x, int32_t  y) ;

/// @brief Method min, addr 0x45a35c4, size 0xc, virtual false, abstract: false, final false
static inline int64_t min(int64_t  x, int64_t  y) ;

/// @brief Method min, addr 0x45a3530, size 0xc, virtual false, abstract: false, final false
static inline uint32_t min(uint32_t  x, uint32_t  y) ;

/// @brief Method min, addr 0x45a35d0, size 0xc, virtual false, abstract: false, final false
static inline uint64_t min(uint64_t  x, uint64_t  y) ;

/// @brief Method modf, addr 0x45ae5a8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2  x, ByRef<::Unity::Mathematics::double2>  i) ;

/// @brief Method modf, addr 0x45ae668, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3  x, ByRef<::Unity::Mathematics::double3>  i) ;

/// @brief Method modf, addr 0x45ae6b4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4  x, ByRef<::Unity::Mathematics::double4>  i) ;

/// @brief Method modf, addr 0x45ae3cc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2  x, ByRef<::Unity::Mathematics::float2>  i) ;

/// @brief Method modf, addr 0x45ae490, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3  x, ByRef<::Unity::Mathematics::float3>  i) ;

/// @brief Method modf, addr 0x45ae4dc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4  x, ByRef<::Unity::Mathematics::float4>  i) ;

/// @brief Method modf, addr 0x45ae534, size 0x74, virtual false, abstract: false, final false
static inline double_t modf(double_t  x, ByRef<double_t>  i) ;

/// @brief Method modf, addr 0x45ae358, size 0x74, virtual false, abstract: false, final false
static inline float_t modf(float_t  x, ByRef<float_t>  i) ;

/// @brief Method movehl, addr 0x45b569c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movehl, addr 0x45b5690, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method movelh, addr 0x45b5684, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movelh, addr 0x45b5678, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x45bde8c, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::RigidTransform  b) ;

/// @brief Method mul, addr 0x45b6ed4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x45b71e8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x45b7320, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x45b74d0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x45b6f80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x45b7098, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x45b7204, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x45b7344, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x45b74fc, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x45b7238, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x45b73b0, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x45b7590, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x45b729c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x45b7428, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x45b762c, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x45b6ef0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x45b6fb8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x45b7714, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x45b78c0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x45b7b58, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x45b70e4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x45b7748, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x45b7914, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x45b7bc8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x45b779c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x45b799c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x45b7c7c, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x45b781c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x45b7a5c, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x45b7d80, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x45b6f24, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x45b700c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x45b7154, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x45b7ef4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x45b8084, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x45b82fc, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x45b7f38, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x45b80f0, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x45b8390, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x45b7f7c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x45b816c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x45b8434, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x45b7ff0, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x45b821c, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x45b851c, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x45b59fc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x45b5d10, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x45b5e08, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x45b5fb8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x45b5aa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x45b5bc0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x45b5d2c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x45b5e2c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x45b5fe4, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x45b5d60, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x45b5e98, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x45b605c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x45b5dbc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x45b5f10, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x45b60f8, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x45b5a18, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x45b5ae0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x45b61e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x45b6388, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x45b6614, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x45b5c0c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x45bd66c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method mul, addr 0x45b6210, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x45b63d0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x45b6674, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x45b6264, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x45b6458, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x45b6728, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x45b62e4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x45b6518, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x45b682c, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x45bdfac, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x45b5a4c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x45b5b34, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x45b5c7c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x45b69a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x45b6abc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x45b6c7c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x45b69c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x45b6ae8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x45b6cb0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x45b69e4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x45b6b34, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x45b6d10, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x45b6a40, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x45b6bc0, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x45b6dc4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x45b867c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x45b8930, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x45b8ab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x45b8d10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x45b8728, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x45b881c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x45b8954, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x45b8aec, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x45b8d60, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x45b8990, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x45b8b60, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x45b8df4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x45b8a10, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x45b8c18, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x45b8ee0, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x45b86a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x45b8758, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x45b9024, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x45b9250, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x45b959c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x45b885c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x45b9054, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x45b929c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x45b9608, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x45b90b4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x45b9340, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x45b96dc, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x45b9160, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x45b943c, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x45b9820, size 0x1dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x45b86d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x45b879c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x45b88b4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x45b99fc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x45b9d58, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x45ba294, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x45b9a3c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x45b9dc0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x45ba320, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x45b9ab0, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x45b9eb0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x45ba45c, size 0x1fc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x45b9bbc, size 0x19c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x45ba040, size 0x254, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x45ba658, size 0x2e8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x45bd5f8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method mul, addr 0x45ba95c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x45bac10, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x45bad94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x45baff0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x45baa08, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x45baafc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x45bac34, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x45badcc, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x45bb040, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x45bac70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x45bae40, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x45bb0d4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x45bacf0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x45baef8, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x45bb1c0, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x45ba980, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x45baa38, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x45bb304, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x45bb530, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x45bb87c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x45bab3c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x45bb334, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x45bb57c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x45bb8e8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x45bb394, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x45bb620, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x45bb9bc, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x45bb440, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x45bb71c, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x45bbb00, size 0x1dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x45ba9b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x45baa7c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x45bab94, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x45bbcdc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x45bc038, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x45bc574, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x45bbd1c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x45bc0a0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x45bc600, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x45bbd90, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x45bc190, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x45bc73c, size 0x1fc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x45bbe9c, size 0x19c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x45bc320, size 0x254, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x45bc938, size 0x2e8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x45b6ec4, size 0x10, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x45b6f68, size 0x18, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x45b7078, size 0x20, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x45b6ebc, size 0x8, virtual false, abstract: false, final false
static inline double_t mul(double_t  a, double_t  b) ;

/// @brief Method mul, addr 0x45b59ec, size 0x10, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x45b5a90, size 0x18, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x45b5ba0, size 0x20, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x45b59e4, size 0x8, virtual false, abstract: false, final false
static inline float_t mul(float_t  a, float_t  b) ;

/// @brief Method mul, addr 0x45b8668, size 0x14, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x45b8710, size 0x18, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x45b87f8, size 0x24, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x45b8660, size 0x8, virtual false, abstract: false, final false
static inline int32_t mul(int32_t  a, int32_t  b) ;

/// @brief Method mul, addr 0x45ba948, size 0x14, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x45ba9f0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x45baad8, size 0x24, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x45ba940, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mul(uint32_t  a, uint32_t  b) ;

/// @brief Method nlerp, addr 0x45bd764, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method normalize, addr 0x45af0a0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2  x) ;

/// @brief Method normalize, addr 0x45af114, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3  x) ;

/// @brief Method normalize, addr 0x45af1a0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4  x) ;

/// @brief Method normalize, addr 0x45aef04, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2  x) ;

/// @brief Method normalize, addr 0x45aef78, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3  x) ;

/// @brief Method normalize, addr 0x45af004, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4  x) ;

/// @brief Method normalize, addr 0x45bcdc0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x45af49c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45af53c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45af5fc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45af23c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45af2dc, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45af39c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x45bce5c, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x45bcf7c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::quaternion  defaultvalue) ;

/// @brief Method orthonormalize, addr 0x45b5830, size 0x1b4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3  i) ;

/// @brief Method pow, addr 0x45ab680, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method pow, addr 0x45ab744, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method pow, addr 0x45ab85c, size 0x16c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method pow, addr 0x45ab2b8, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method pow, addr 0x45ab380, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method pow, addr 0x45ab4a0, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method pow, addr 0x45ab618, size 0x68, virtual false, abstract: false, final false
static inline double_t pow(double_t  x, double_t  y) ;

/// @brief Method pow, addr 0x45ab248, size 0x70, virtual false, abstract: false, final false
static inline float_t pow(float_t  x, float_t  y) ;

/// @brief Method project, addr 0x45b1560, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method project, addr 0x45b1588, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method project, addr 0x45b15c4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method project, addr 0x45b1308, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method project, addr 0x45b1330, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method project, addr 0x45b136c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method projectsafe, addr 0x45b1614, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::double2  defaultValue) ;

/// @brief Method projectsafe, addr 0x45b166c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::double3  defaultValue) ;

/// @brief Method projectsafe, addr 0x45b1700, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::double4  defaultValue) ;

/// @brief Method projectsafe, addr 0x45b13bc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  defaultValue) ;

/// @brief Method projectsafe, addr 0x45b1414, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  defaultValue) ;

/// @brief Method projectsafe, addr 0x45b14a8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::float4  defaultValue) ;

/// @brief Method quaternion, addr 0x45bcc28, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x45bcc68, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4  m) ;

/// @brief Method quaternion, addr 0x45bcc24, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4  value) ;

/// @brief Method quaternion, addr 0x45bcc20, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method radians, addr 0x45b4724, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2  x) ;

/// @brief Method radians, addr 0x45b4738, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3  x) ;

/// @brief Method radians, addr 0x45b4750, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4  x) ;

/// @brief Method radians, addr 0x45b46cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2  x) ;

/// @brief Method radians, addr 0x45b46e0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3  x) ;

/// @brief Method radians, addr 0x45b46f8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4  x) ;

/// @brief Method radians, addr 0x45b4714, size 0x10, virtual false, abstract: false, final false
static inline double_t radians(double_t  x) ;

/// @brief Method radians, addr 0x45b46bc, size 0x10, virtual false, abstract: false, final false
static inline float_t radians(float_t  x) ;

/// @brief Method rcp, addr 0x45aafd4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2  x) ;

/// @brief Method rcp, addr 0x45aafe4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3  x) ;

/// @brief Method rcp, addr 0x45aaff8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4  x) ;

/// @brief Method rcp, addr 0x45aaf8c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2  x) ;

/// @brief Method rcp, addr 0x45aaf9c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3  x) ;

/// @brief Method rcp, addr 0x45aafb0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4  x) ;

/// @brief Method rcp, addr 0x45aafc8, size 0xc, virtual false, abstract: false, final false
static inline double_t rcp(double_t  x) ;

/// @brief Method rcp, addr 0x45aaf80, size 0xc, virtual false, abstract: false, final false
static inline float_t rcp(float_t  x) ;

/// @brief Method reflect, addr 0x45b0c3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n) ;

/// @brief Method reflect, addr 0x45b0c64, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n) ;

/// @brief Method reflect, addr 0x45b0ca0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n) ;

/// @brief Method reflect, addr 0x45b0b88, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n) ;

/// @brief Method reflect, addr 0x45b0bb0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n) ;

/// @brief Method reflect, addr 0x45b0bec, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n) ;

/// @brief Method refract, addr 0x45b0ffc, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n, double_t  eta) ;

/// @brief Method refract, addr 0x45b10cc, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n, double_t  eta) ;

/// @brief Method refract, addr 0x45b11d4, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n, double_t  eta) ;

/// @brief Method refract, addr 0x45b0cf0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n, float_t  eta) ;

/// @brief Method refract, addr 0x45b0dc0, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n, float_t  eta) ;

/// @brief Method refract, addr 0x45b0ec8, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n, float_t  eta) ;

/// @brief Method remap, addr 0x45a3f64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::double2  c, ::Unity::Mathematics::double2  d, ::Unity::Mathematics::double2  x) ;

/// @brief Method remap, addr 0x45a3f9c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::double3  c, ::Unity::Mathematics::double3  d, ::Unity::Mathematics::double3  x) ;

/// @brief Method remap, addr 0x45a3ffc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::double4  c, ::Unity::Mathematics::double4  d, ::Unity::Mathematics::double4  x) ;

/// @brief Method remap, addr 0x45a3e30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c, ::Unity::Mathematics::float2  d, ::Unity::Mathematics::float2  x) ;

/// @brief Method remap, addr 0x45a3e68, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::Unity::Mathematics::float3  d, ::Unity::Mathematics::float3  x) ;

/// @brief Method remap, addr 0x45a3ecc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::float4  c, ::Unity::Mathematics::float4  d, ::Unity::Mathematics::float4  x) ;

/// @brief Method remap, addr 0x45a3f48, size 0x1c, virtual false, abstract: false, final false
static inline double_t remap(double_t  a, double_t  b, double_t  c, double_t  d, double_t  x) ;

/// @brief Method remap, addr 0x45a3e14, size 0x1c, virtual false, abstract: false, final false
static inline float_t remap(float_t  a, float_t  b, float_t  c, float_t  d, float_t  x) ;

/// @brief Method reversebits, addr 0x45b2ed4, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2  x) ;

/// @brief Method reversebits, addr 0x45b2fbc, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3  x) ;

/// @brief Method reversebits, addr 0x45b3100, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4  x) ;

/// @brief Method reversebits, addr 0x45b314c, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2  x) ;

/// @brief Method reversebits, addr 0x45b3238, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3  x) ;

/// @brief Method reversebits, addr 0x45b337c, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4  x) ;

/// @brief Method reversebits, addr 0x45b2e90, size 0x44, virtual false, abstract: false, final false
static inline int32_t reversebits(int32_t  x) ;

/// @brief Method reversebits, addr 0x45b34e4, size 0x6c, virtual false, abstract: false, final false
static inline int64_t reversebits(int64_t  x) ;

/// @brief Method reversebits, addr 0x45b3108, size 0x44, virtual false, abstract: false, final false
static inline uint32_t reversebits(uint32_t  x) ;

/// @brief Method reversebits, addr 0x45b3550, size 0x6c, virtual false, abstract: false, final false
static inline uint64_t reversebits(uint64_t  x) ;

/// @brief Method right, addr 0x45b5620, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 right() ;

/// @brief Method rol, addr 0x45b35c8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b35e8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b3614, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b3660, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b3680, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b36ac, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b35bc, size 0xc, virtual false, abstract: false, final false
static inline int32_t rol(int32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b36ec, size 0xc, virtual false, abstract: false, final false
static inline int64_t rol(int64_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b3654, size 0xc, virtual false, abstract: false, final false
static inline uint32_t rol(uint32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x45b36f8, size 0xc, virtual false, abstract: false, final false
static inline uint64_t rol(uint64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b370c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b372c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b3750, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b3790, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b37b0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b37d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b3704, size 0x8, virtual false, abstract: false, final false
static inline int32_t ror(int32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b380c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ror(int64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b3788, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ror(uint32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x45b3814, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ror(uint64_t  x, int32_t  n) ;

/// @brief Method rotate, addr 0x459ac88, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method rotate, addr 0x45be050, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x459e254, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method rotate, addr 0x45bd6e8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method round, addr 0x45aa000, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2  x) ;

/// @brief Method round, addr 0x45aa15c, size 0x208, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3  x) ;

/// @brief Method round, addr 0x45aa364, size 0x29c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4  x) ;

/// @brief Method round, addr 0x45a98f0, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2  x) ;

/// @brief Method round, addr 0x45a9a68, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3  x) ;

/// @brief Method round, addr 0x45a9c78, size 0x2c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4  x) ;

/// @brief Method round, addr 0x45a9f38, size 0xc8, virtual false, abstract: false, final false
static inline double_t round(double_t  x) ;

/// @brief Method round, addr 0x45a9828, size 0xc8, virtual false, abstract: false, final false
static inline float_t round(float_t  x) ;

/// @brief Method rsqrt, addr 0x45aee1c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method rsqrt, addr 0x45aeeb8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method rsqrt, addr 0x45aeedc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method rsqrt, addr 0x45aecd8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method rsqrt, addr 0x45aed74, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method rsqrt, addr 0x45aed98, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method rsqrt, addr 0x45aedc0, size 0x5c, virtual false, abstract: false, final false
static inline double_t rsqrt(double_t  x) ;

/// @brief Method rsqrt, addr 0x45aec7c, size 0x5c, virtual false, abstract: false, final false
static inline float_t rsqrt(float_t  x) ;

/// @brief Method saturate, addr 0x45a49f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2  x) ;

/// @brief Method saturate, addr 0x45a4a50, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3  x) ;

/// @brief Method saturate, addr 0x45a4ad8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4  x) ;

/// @brief Method saturate, addr 0x45a4820, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2  x) ;

/// @brief Method saturate, addr 0x45a4880, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3  x) ;

/// @brief Method saturate, addr 0x45a4908, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4  x) ;

/// @brief Method saturate, addr 0x45a49b8, size 0x38, virtual false, abstract: false, final false
static inline double_t saturate(double_t  x) ;

/// @brief Method saturate, addr 0x45a47e8, size 0x38, virtual false, abstract: false, final false
static inline float_t saturate(float_t  x) ;

/// @brief Method select, addr 0x45b0a34, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::bool2  c) ;

/// @brief Method select, addr 0x45b09f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, bool  c) ;

/// @brief Method select, addr 0x45b0a48, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::bool3  c) ;

/// @brief Method select, addr 0x45b0a08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, bool  c) ;

/// @brief Method select, addr 0x45b0a64, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::bool4  c) ;

/// @brief Method select, addr 0x45b0a1c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, bool  c) ;

/// @brief Method select, addr 0x45b0998, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::bool2  c) ;

/// @brief Method select, addr 0x45b095c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, bool  c) ;

/// @brief Method select, addr 0x45b09ac, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::bool3  c) ;

/// @brief Method select, addr 0x45b096c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, bool  c) ;

/// @brief Method select, addr 0x45b09c8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::bool4  c) ;

/// @brief Method select, addr 0x45b0980, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, bool  c) ;

/// @brief Method select, addr 0x45b082c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::bool2  c) ;

/// @brief Method select, addr 0x45b07fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, bool  c) ;

/// @brief Method select, addr 0x45b0844, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::bool3  c) ;

/// @brief Method select, addr 0x45b0808, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, bool  c) ;

/// @brief Method select, addr 0x45b0868, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::bool4  c) ;

/// @brief Method select, addr 0x45b081c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, bool  c) ;

/// @brief Method select, addr 0x45b08d0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::bool2  c) ;

/// @brief Method select, addr 0x45b08a0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, bool  c) ;

/// @brief Method select, addr 0x45b08e8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::bool3  c) ;

/// @brief Method select, addr 0x45b08ac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, bool  c) ;

/// @brief Method select, addr 0x45b090c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::bool4  c) ;

/// @brief Method select, addr 0x45b08c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, bool  c) ;

/// @brief Method select, addr 0x45b09ec, size 0xc, virtual false, abstract: false, final false
static inline double_t select(double_t  a, double_t  b, bool  c) ;

/// @brief Method select, addr 0x45b0950, size 0xc, virtual false, abstract: false, final false
static inline float_t select(float_t  a, float_t  b, bool  c) ;

/// @brief Method select, addr 0x45b07f0, size 0xc, virtual false, abstract: false, final false
static inline int32_t select(int32_t  a, int32_t  b, bool  c) ;

/// @brief Method select, addr 0x45b0938, size 0xc, virtual false, abstract: false, final false
static inline int64_t select(int64_t  a, int64_t  b, bool  c) ;

/// @brief Method select, addr 0x45b0894, size 0xc, virtual false, abstract: false, final false
static inline uint32_t select(uint32_t  a, uint32_t  b, bool  c) ;

/// @brief Method select, addr 0x45b0944, size 0xc, virtual false, abstract: false, final false
static inline uint64_t select(uint64_t  a, uint64_t  b, bool  c) ;

/// @brief Method select_shuffle_component, addr 0x45954e8, size 0xdc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool2  a, ::Unity::Mathematics::bool2  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x4595ec4, size 0xec, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool3  a, ::Unity::Mathematics::bool3  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x4596d30, size 0xfc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool4  a, ::Unity::Mathematics::bool4  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x4597cf8, size 0xd4, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x4598b54, size 0xe4, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x4599fe0, size 0xf4, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x459b904, size 0xd4, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x459c5c0, size 0xe4, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x459d7a8, size 0xf4, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x459f8e4, size 0xd4, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x45a06b8, size 0xe4, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x45a1a40, size 0xf4, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x45be560, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x45bf2b4, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x45c05d4, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::__math__ShuffleComponent  component) ;

/// @brief Method shuffle, addr 0x459533c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x4595d18, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x4596b84, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459539c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x4595d78, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x4596be4, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x4595428, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x4595e04, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x4596c70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x4597b30, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459892c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x4599d64, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x4597b98, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45989ac, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x4599dfc, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x4597c30, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x4598a64, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x4599ed4, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x459b73c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459c398, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459d538, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459b7a4, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x459c418, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x459d5d0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x459b83c, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x459c4d0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x459d69c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x459f780, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x45a04dc, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x45a187c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x459f7d4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45a0550, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45a18e8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x459f848, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x45a05ec, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x45a197c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x45be3fc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x45bf0d8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x45c0410, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x45be450, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45bf14c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45c047c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x45be4c4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x45bf1e8, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x45c0510, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::__math__ShuffleComponent  x, ::Unity::Mathematics::__math__ShuffleComponent  y, ::Unity::Mathematics::__math__ShuffleComponent  z, ::Unity::Mathematics::__math__ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x459532c, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x4595d08, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x4596b74, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x4597b28, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x4598924, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x4599d5c, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x459b734, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x459c390, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x459d530, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x459f778, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x45a04cc, size 0x10, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x45a1874, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x45be3f4, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x45bf0c8, size 0x10, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x45c0408, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::__math__ShuffleComponent  x) ;

/// @brief Method sign, addr 0x45ab108, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2  x) ;

/// @brief Method sign, addr 0x45ab150, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3  x) ;

/// @brief Method sign, addr 0x45ab1bc, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4  x) ;

/// @brief Method sign, addr 0x45ab02c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2  x) ;

/// @brief Method sign, addr 0x45ab058, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3  x) ;

/// @brief Method sign, addr 0x45ab094, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4  x) ;

/// @brief Method sign, addr 0x45ab0e0, size 0x28, virtual false, abstract: false, final false
static inline double_t sign(double_t  x) ;

/// @brief Method sign, addr 0x45ab010, size 0x1c, virtual false, abstract: false, final false
static inline float_t sign(float_t  x) ;

/// @brief Method sin, addr 0x45a7e1c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2  x) ;

/// @brief Method sin, addr 0x45a7ec0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3  x) ;

/// @brief Method sin, addr 0x45a7fac, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4  x) ;

/// @brief Method sin, addr 0x45a7b04, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2  x) ;

/// @brief Method sin, addr 0x45a7ba8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3  x) ;

/// @brief Method sin, addr 0x45a7c94, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4  x) ;

/// @brief Method sin, addr 0x45a7dc0, size 0x5c, virtual false, abstract: false, final false
static inline double_t sin(double_t  x) ;

/// @brief Method sin, addr 0x45a7aa0, size 0x64, virtual false, abstract: false, final false
static inline float_t sin(float_t  x) ;

/// @brief Method sincos, addr 0x45b1c78, size 0x12c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double2  x, ByRef<::Unity::Mathematics::double2>  s, ByRef<::Unity::Mathematics::double2>  c) ;

/// @brief Method sincos, addr 0x45b1da4, size 0x64, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double3  x, ByRef<::Unity::Mathematics::double3>  s, ByRef<::Unity::Mathematics::double3>  c) ;

/// @brief Method sincos, addr 0x45b1e08, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double4  x, ByRef<::Unity::Mathematics::double4>  s, ByRef<::Unity::Mathematics::double4>  c) ;

/// @brief Method sincos, addr 0x45b19c4, size 0x13c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float2  x, ByRef<::Unity::Mathematics::float2>  s, ByRef<::Unity::Mathematics::float2>  c) ;

/// @brief Method sincos, addr 0x45b1b00, size 0x64, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float3  x, ByRef<::Unity::Mathematics::float3>  s, ByRef<::Unity::Mathematics::float3>  c) ;

/// @brief Method sincos, addr 0x45b1b64, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float4  x, ByRef<::Unity::Mathematics::float4>  s, ByRef<::Unity::Mathematics::float4>  c) ;

/// @brief Method sincos, addr 0x45b1bd0, size 0xa8, virtual false, abstract: false, final false
static inline void sincos(double_t  x, ByRef<double_t>  s, ByRef<double_t>  c) ;

/// @brief Method sincos, addr 0x45b1910, size 0xb4, virtual false, abstract: false, final false
static inline void sincos(float_t  x, ByRef<float_t>  s, ByRef<float_t>  c) ;

/// @brief Method sinh, addr 0x45a8454, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2  x) ;

/// @brief Method sinh, addr 0x45a84f8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3  x) ;

/// @brief Method sinh, addr 0x45a85e4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4  x) ;

/// @brief Method sinh, addr 0x45a813c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2  x) ;

/// @brief Method sinh, addr 0x45a81e0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3  x) ;

/// @brief Method sinh, addr 0x45a82cc, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4  x) ;

/// @brief Method sinh, addr 0x45a83f8, size 0x5c, virtual false, abstract: false, final false
static inline double_t sinh(double_t  x) ;

/// @brief Method sinh, addr 0x45a80d8, size 0x64, virtual false, abstract: false, final false
static inline float_t sinh(float_t  x) ;

/// @brief Method slerp, addr 0x45bd878, size 0x300, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method smoothstep, addr 0x45b01d8, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::double2  x) ;

/// @brief Method smoothstep, addr 0x45b0248, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::double3  x) ;

/// @brief Method smoothstep, addr 0x45b0330, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::double4  x) ;

/// @brief Method smoothstep, addr 0x45affa4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  x) ;

/// @brief Method smoothstep, addr 0x45b0014, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  x) ;

/// @brief Method smoothstep, addr 0x45b00e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::float4  x) ;

/// @brief Method smoothstep, addr 0x45b0180, size 0x58, virtual false, abstract: false, final false
static inline double_t smoothstep(double_t  a, double_t  b, double_t  x) ;

/// @brief Method smoothstep, addr 0x45aff4c, size 0x58, virtual false, abstract: false, final false
static inline float_t smoothstep(float_t  a, float_t  b, float_t  x) ;

/// @brief Method sqrt, addr 0x45aea20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method sqrt, addr 0x45aeab0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method sqrt, addr 0x45aeb7c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method sqrt, addr 0x45ae768, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method sqrt, addr 0x45ae7f8, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method sqrt, addr 0x45ae8c4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method sqrt, addr 0x45ae9c4, size 0x5c, virtual false, abstract: false, final false
static inline double_t sqrt(double_t  x) ;

/// @brief Method sqrt, addr 0x45ae70c, size 0x5c, virtual false, abstract: false, final false
static inline float_t sqrt(float_t  x) ;

/// @brief Method step, addr 0x45b0b1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  x) ;

/// @brief Method step, addr 0x45b0b38, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  x) ;

/// @brief Method step, addr 0x45b0b5c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  x) ;

/// @brief Method step, addr 0x45b0a9c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  x) ;

/// @brief Method step, addr 0x45b0ab8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  x) ;

/// @brief Method step, addr 0x45b0adc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  x) ;

/// @brief Method step, addr 0x45b0b08, size 0x14, virtual false, abstract: false, final false
static inline double_t step(double_t  y, double_t  x) ;

/// @brief Method step, addr 0x45b0a88, size 0x14, virtual false, abstract: false, final false
static inline float_t step(float_t  y, float_t  x) ;

/// @brief Method tan, addr 0x45a51b4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2  x) ;

/// @brief Method tan, addr 0x45a5258, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3  x) ;

/// @brief Method tan, addr 0x45a5344, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4  x) ;

/// @brief Method tan, addr 0x45a4e9c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2  x) ;

/// @brief Method tan, addr 0x45a4f40, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3  x) ;

/// @brief Method tan, addr 0x45a502c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4  x) ;

/// @brief Method tan, addr 0x45a5158, size 0x5c, virtual false, abstract: false, final false
static inline double_t tan(double_t  x) ;

/// @brief Method tan, addr 0x45a4e38, size 0x64, virtual false, abstract: false, final false
static inline float_t tan(float_t  x) ;

/// @brief Method tanh, addr 0x45a57ec, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2  x) ;

/// @brief Method tanh, addr 0x45a5890, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3  x) ;

/// @brief Method tanh, addr 0x45a597c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4  x) ;

/// @brief Method tanh, addr 0x45a54d4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2  x) ;

/// @brief Method tanh, addr 0x45a5578, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3  x) ;

/// @brief Method tanh, addr 0x45a5664, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4  x) ;

/// @brief Method tanh, addr 0x45a5790, size 0x5c, virtual false, abstract: false, final false
static inline double_t tanh(double_t  x) ;

/// @brief Method tanh, addr 0x45a5470, size 0x64, virtual false, abstract: false, final false
static inline float_t tanh(float_t  x) ;

/// @brief Method transform, addr 0x459ace0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method transform, addr 0x45be0d4, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x459e29c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method transpose, addr 0x4595610, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method transpose, addr 0x459602c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method transpose, addr 0x4596ea4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method transpose, addr 0x459578c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method transpose, addr 0x45962a8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method transpose, addr 0x4597154, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method transpose, addr 0x45959b4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method transpose, addr 0x4596664, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method transpose, addr 0x4597554, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method transpose, addr 0x4597ec4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2  v) ;

/// @brief Method transpose, addr 0x4598d94, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2  v) ;

/// @brief Method transpose, addr 0x459a284, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2  v) ;

/// @brief Method transpose, addr 0x459816c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3  v) ;

/// @brief Method transpose, addr 0x4599108, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3  v) ;

/// @brief Method transpose, addr 0x459a6c0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3  v) ;

/// @brief Method transpose, addr 0x4598478, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4  v) ;

/// @brief Method transpose, addr 0x45996ac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4  v) ;

/// @brief Method transpose, addr 0x459ad4c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4  v) ;

/// @brief Method transpose, addr 0x459bad0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2  v) ;

/// @brief Method transpose, addr 0x459c800, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2  v) ;

/// @brief Method transpose, addr 0x459da28, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2  v) ;

/// @brief Method transpose, addr 0x459bd38, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3  v) ;

/// @brief Method transpose, addr 0x459cb08, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3  v) ;

/// @brief Method transpose, addr 0x459ddb0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3  v) ;

/// @brief Method transpose, addr 0x459bfc8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4  v) ;

/// @brief Method transpose, addr 0x459d004, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4  v) ;

/// @brief Method transpose, addr 0x459e2f4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4  v) ;

/// @brief Method transpose, addr 0x459fb1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2  v) ;

/// @brief Method transpose, addr 0x45a09dc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2  v) ;

/// @brief Method transpose, addr 0x45a1dac, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2  v) ;

/// @brief Method transpose, addr 0x459fe00, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3  v) ;

/// @brief Method transpose, addr 0x45a0e34, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3  v) ;

/// @brief Method transpose, addr 0x45a2278, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3  v) ;

/// @brief Method transpose, addr 0x45a01a4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4  v) ;

/// @brief Method transpose, addr 0x45a1414, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4  v) ;

/// @brief Method transpose, addr 0x45a28ac, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4  v) ;

/// @brief Method transpose, addr 0x45be778, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method transpose, addr 0x45bf5c8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method transpose, addr 0x45c0930, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method transpose, addr 0x45bea2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method transpose, addr 0x45bfa20, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method transpose, addr 0x45c0dfc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method transpose, addr 0x45bedc0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method transpose, addr 0x45bffc8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method transpose, addr 0x45c1440, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method trunc, addr 0x45aa9c0, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2  x) ;

/// @brief Method trunc, addr 0x45aaa6c, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3  x) ;

/// @brief Method trunc, addr 0x45aab64, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4  x) ;

/// @brief Method trunc, addr 0x45aa668, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2  x) ;

/// @brief Method trunc, addr 0x45aa718, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3  x) ;

/// @brief Method trunc, addr 0x45aa818, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4  x) ;

/// @brief Method trunc, addr 0x45aa960, size 0x60, virtual false, abstract: false, final false
static inline double_t trunc(double_t  x) ;

/// @brief Method trunc, addr 0x45aa600, size 0x68, virtual false, abstract: false, final false
static inline float_t trunc(float_t  x) ;

/// @brief Method tzcnt, addr 0x45b2924, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method tzcnt, addr 0x45b2ba4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method tzcnt, addr 0x45b29a8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method tzcnt, addr 0x45b2c28, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method tzcnt, addr 0x45b2a68, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method tzcnt, addr 0x45b2ce8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method tzcnt, addr 0x45b28e8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(int32_t  x) ;

/// @brief Method tzcnt, addr 0x45b2de8, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(int64_t  x) ;

/// @brief Method tzcnt, addr 0x45b2b68, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint32_t  x) ;

/// @brief Method tzcnt, addr 0x45b2e3c, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint64_t  x) ;

/// @brief Method uint2, addr 0x45be2ec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2  v) ;

/// @brief Method uint2, addr 0x45be364, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2  v) ;

/// @brief Method uint2, addr 0x45be324, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2  v) ;

/// @brief Method uint2, addr 0x45be308, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2  v) ;

/// @brief Method uint2, addr 0x45be2d4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(bool  v) ;

/// @brief Method uint2, addr 0x45be34c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(double_t  v) ;

/// @brief Method uint2, addr 0x45be30c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(float_t  v) ;

/// @brief Method uint2, addr 0x45be2fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(int32_t  v) ;

/// @brief Method uint2, addr 0x45be2c8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  v) ;

/// @brief Method uint2, addr 0x45be2b8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  x, uint32_t  y) ;

/// @brief Method uint2, addr 0x45be2c4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2  xy) ;

/// @brief Method uint2x2, addr 0x45be634, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) ;

/// @brief Method uint2x2, addr 0x45be638, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11) ;

/// @brief Method uint2x2, addr 0x45be670, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method uint2x2, addr 0x45be72c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method uint2x2, addr 0x45be6c4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method uint2x2, addr 0x45be6a4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method uint2x2, addr 0x45be65c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(bool  v) ;

/// @brief Method uint2x2, addr 0x45be710, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t  v) ;

/// @brief Method uint2x2, addr 0x45be6a8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t  v) ;

/// @brief Method uint2x2, addr 0x45be694, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t  v) ;

/// @brief Method uint2x2, addr 0x45be64c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  v) ;

/// @brief Method uint2x3, addr 0x45be834, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) ;

/// @brief Method uint2x3, addr 0x45be840, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12) ;

/// @brief Method uint2x3, addr 0x45be890, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method uint2x3, addr 0x45be9a8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method uint2x3, addr 0x45be904, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method uint2x3, addr 0x45be8d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method uint2x3, addr 0x45be878, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(bool  v) ;

/// @brief Method uint2x3, addr 0x45be988, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t  v) ;

/// @brief Method uint2x3, addr 0x45be8e4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t  v) ;

/// @brief Method uint2x3, addr 0x45be8bc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t  v) ;

/// @brief Method uint2x3, addr 0x45be864, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  v) ;

/// @brief Method uint2x4, addr 0x45beb40, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) ;

/// @brief Method uint2x4, addr 0x45beb4c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13) ;

/// @brief Method uint2x4, addr 0x45beba4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method uint2x4, addr 0x45bed14, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method uint2x4, addr 0x45bec48, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method uint2x4, addr 0x45bec1c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method uint2x4, addr 0x45beb8c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(bool  v) ;

/// @brief Method uint2x4, addr 0x45becf4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t  v) ;

/// @brief Method uint2x4, addr 0x45bec28, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t  v) ;

/// @brief Method uint2x4, addr 0x45bec08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t  v) ;

/// @brief Method uint2x4, addr 0x45beb78, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  v) ;

/// @brief Method uint3, addr 0x45bef6c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3  v) ;

/// @brief Method uint3, addr 0x45bf00c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3  v) ;

/// @brief Method uint3, addr 0x45befb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3  v) ;

/// @brief Method uint3, addr 0x45bef94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3  v) ;

/// @brief Method uint3, addr 0x45bef50, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(bool  v) ;

/// @brief Method uint3, addr 0x45beff0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(double_t  v) ;

/// @brief Method uint3, addr 0x45bef9c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(float_t  v) ;

/// @brief Method uint3, addr 0x45bef84, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(int32_t  v) ;

/// @brief Method uint3, addr 0x45bef40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  v) ;

/// @brief Method uint3, addr 0x45bef0c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method uint3, addr 0x45bef1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, ::Unity::Mathematics::uint2  yz) ;

/// @brief Method uint3, addr 0x45bef30, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2  xy, uint32_t  z) ;

/// @brief Method uint3, addr 0x45bef38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3  xyz) ;

/// @brief Method uint3x2, addr 0x45bf398, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1) ;

/// @brief Method uint3x2, addr 0x45bf3ac, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21) ;

/// @brief Method uint3x2, addr 0x45bf3f8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method uint3x2, addr 0x45bf540, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method uint3x2, addr 0x45bf490, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method uint3x2, addr 0x45bf444, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method uint3x2, addr 0x45bf3d8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(bool  v) ;

/// @brief Method uint3x2, addr 0x45bf518, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t  v) ;

/// @brief Method uint3x2, addr 0x45bf468, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t  v) ;

/// @brief Method uint3x2, addr 0x45bf428, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t  v) ;

/// @brief Method uint3x2, addr 0x45bf3bc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  v) ;

/// @brief Method uint3x3, addr 0x45bf6ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2) ;

/// @brief Method uint3x3, addr 0x45bf708, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22) ;

/// @brief Method uint3x3, addr 0x45bf770, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method uint3x3, addr 0x45bf954, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method uint3x3, addr 0x45bf858, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method uint3x3, addr 0x45bf7f4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method uint3x3, addr 0x45bf748, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(bool  v) ;

/// @brief Method uint3x3, addr 0x45bf924, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t  v) ;

/// @brief Method uint3x3, addr 0x45bf828, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t  v) ;

/// @brief Method uint3x3, addr 0x45bf7d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t  v) ;

/// @brief Method uint3x3, addr 0x45bf724, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  v) ;

/// @brief Method uint3x4, addr 0x45bfbac, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) ;

/// @brief Method uint3x4, addr 0x45bfbd0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23) ;

/// @brief Method uint3x4, addr 0x45bfc58, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method uint3x4, addr 0x45bfebc, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method uint3x4, addr 0x45bfd78, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method uint3x4, addr 0x45bfcfc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method uint3x4, addr 0x45bfc28, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(bool  v) ;

/// @brief Method uint3x4, addr 0x45bfe84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t  v) ;

/// @brief Method uint3x4, addr 0x45bfd40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t  v) ;

/// @brief Method uint3x4, addr 0x45bfcd0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t  v) ;

/// @brief Method uint3x4, addr 0x45bfbfc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  v) ;

/// @brief Method uint4, addr 0x45c0250, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4  v) ;

/// @brief Method uint4, addr 0x45c0308, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4  v) ;

/// @brief Method uint4, addr 0x45c02a0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4  v) ;

/// @brief Method uint4, addr 0x45c0280, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4  v) ;

/// @brief Method uint4, addr 0x45c0238, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(bool  v) ;

/// @brief Method uint4, addr 0x45c02ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(double_t  v) ;

/// @brief Method uint4, addr 0x45c0284, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(float_t  v) ;

/// @brief Method uint4, addr 0x45c0270, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(int32_t  v) ;

/// @brief Method uint4, addr 0x45c0228, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  v) ;

/// @brief Method uint4, addr 0x45c01bc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x45c01d4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x45c01e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint2  yz, uint32_t  w) ;

/// @brief Method uint4, addr 0x45c01f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint3  yzw) ;

/// @brief Method uint4, addr 0x45c020c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x45c0218, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x45c021c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3  xyz, uint32_t  w) ;

/// @brief Method uint4, addr 0x45c0224, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4  xyzw) ;

/// @brief Method uint4x2, addr 0x45c06c8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1) ;

/// @brief Method uint4x2, addr 0x45c06d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21, uint32_t  m30, uint32_t  m31) ;

/// @brief Method uint4x2, addr 0x45c0714, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method uint4x2, addr 0x45c0884, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method uint4x2, addr 0x45c07b8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method uint4x2, addr 0x45c078c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method uint4x2, addr 0x45c06fc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(bool  v) ;

/// @brief Method uint4x2, addr 0x45c0864, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t  v) ;

/// @brief Method uint4x2, addr 0x45c0798, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t  v) ;

/// @brief Method uint4x2, addr 0x45c0778, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t  v) ;

/// @brief Method uint4x2, addr 0x45c06e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  v) ;

/// @brief Method uint4x3, addr 0x45c0a94, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2) ;

/// @brief Method uint4x3, addr 0x45c0aa4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m30, uint32_t  m31, uint32_t  m32) ;

/// @brief Method uint4x3, addr 0x45c0b04, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method uint4x3, addr 0x45c0cfc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method uint4x3, addr 0x45c0bd8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method uint4x3, addr 0x45c0ba0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method uint4x3, addr 0x45c0ae8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(bool  v) ;

/// @brief Method uint4x3, addr 0x45c0cd8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t  v) ;

/// @brief Method uint4x3, addr 0x45c0bb4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t  v) ;

/// @brief Method uint4x3, addr 0x45c0b88, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t  v) ;

/// @brief Method uint4x3, addr 0x45c0ad0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  v) ;

/// @brief Method uint4x4, addr 0x45c0fe8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) ;

/// @brief Method uint4x4, addr 0x45c0ffc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23, uint32_t  m30, uint32_t  m31, uint32_t  m32, uint32_t  m33) ;

/// @brief Method uint4x4, addr 0x45c107c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method uint4x4, addr 0x45c12ec, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method uint4x4, addr 0x45c1170, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method uint4x4, addr 0x45c1134, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method uint4x4, addr 0x45c105c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(bool  v) ;

/// @brief Method uint4x4, addr 0x45c12c4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t  v) ;

/// @brief Method uint4x4, addr 0x45c1148, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t  v) ;

/// @brief Method uint4x4, addr 0x45c1118, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t  v) ;

/// @brief Method uint4x4, addr 0x45c1040, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  v) ;

/// @brief Method unitexp, addr 0x45bd07c, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unitlog, addr 0x45bd32c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unlerp, addr 0x45a3d8c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::double2  x) ;

/// @brief Method unlerp, addr 0x45a3da8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::double3  x) ;

/// @brief Method unlerp, addr 0x45a3dd8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::double4  x) ;

/// @brief Method unlerp, addr 0x45a3cf4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  x) ;

/// @brief Method unlerp, addr 0x45a3d10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  x) ;

/// @brief Method unlerp, addr 0x45a3d40, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::float4  x) ;

/// @brief Method unlerp, addr 0x45a3d7c, size 0x10, virtual false, abstract: false, final false
static inline double_t unlerp(double_t  a, double_t  b, double_t  x) ;

/// @brief Method unlerp, addr 0x45a3ce4, size 0x10, virtual false, abstract: false, final false
static inline float_t unlerp(float_t  a, float_t  b, float_t  x) ;

/// @brief Method unpackhi, addr 0x45b5664, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpackhi, addr 0x45b5650, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method unpacklo, addr 0x45b5640, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpacklo, addr 0x45b5630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method up, addr 0x45b55d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 up() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr math() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
math(math && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
math(math const& ) = delete;

/// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
static constexpr double_t  DBL_MIN_NORMAL{0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000022250738585072014};

/// @brief Field E offset 0xffffffff size 0x4
static constexpr float_t  E{2.7182817};

/// @brief Field EPSILON offset 0xffffffff size 0x4
static constexpr float_t  EPSILON{0.00000011920929};

/// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
static constexpr double_t  EPSILON_DBL{0.0000000000000002220446049250313};

/// @brief Field E_DBL offset 0xffffffff size 0x8
static constexpr double_t  E_DBL{2.718281828459045};

/// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
static constexpr float_t  FLT_MIN_NORMAL{0.000000000000000000000000000000000000011754944};

/// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
static constexpr double_t  INFINITY_DBL{INFINITY};

/// @brief Field LN10 offset 0xffffffff size 0x4
static constexpr float_t  LN10{2.3025851};

/// @brief Field LN10_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN10_DBL{2.302585092994046};

/// @brief Field LN2 offset 0xffffffff size 0x4
static constexpr float_t  LN2{0.6931472};

/// @brief Field LN2_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN2_DBL{0.6931471805599453};

/// @brief Field LOG10E offset 0xffffffff size 0x4
static constexpr float_t  LOG10E{0.4342945};

/// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG10E_DBL{0.4342944819032518};

/// @brief Field LOG2E offset 0xffffffff size 0x4
static constexpr float_t  LOG2E{1.442695};

/// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG2E_DBL{1.4426950408889634};

/// @brief Field NAN_DBL offset 0xffffffff size 0x8
static constexpr double_t  NAN_DBL{NAN};

/// @brief Field PI offset 0xffffffff size 0x4
static constexpr float_t  PI{3.1415927};

/// @brief Field PI_DBL offset 0xffffffff size 0x8
static constexpr double_t  PI_DBL{3.141592653589793};

/// @brief Field SQRT2 offset 0xffffffff size 0x4
static constexpr float_t  SQRT2{1.4142135};

/// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
static constexpr double_t  SQRT2_DBL{1.4142135623730951};

/// @brief Field INFINITY offset 0xffffffff size 0x4
static constexpr float_t  _cordl_INFINITY{INFINITY};

/// @brief Field NAN offset 0xffffffff size 0x4
static constexpr float_t  _cordl_NAN{NAN};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
NEED_NO_BOX(::Unity::Mathematics::math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__IntFloatUnion, "Unity.Mathematics", "math/IntFloatUnion");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");
