#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x4);
// Type: Unity.Mathematics::int4x4
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int4x4
struct CORDL_TYPE int4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int4  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x40 
static __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::int4x4  identity;

/// @brief Field zero, offset 0xffffffff, size 0x40 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int4x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int4x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x46335b4, size 0x168, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x46334a8, size 0x10c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method GetHashCode, addr 0x463371c, size 0x114, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x4633830, size 0x4ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x4633cdc, size 0x494, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x4630c80, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method .ctor, addr 0x4630c98, size 0x48, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method .ctor, addr 0x4630d1c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method .ctor, addr 0x4630f9c, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4x4  v) ;

/// @brief Method .ctor, addr 0x4630e28, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  v) ;

/// @brief Method .ctor, addr 0x4630dd4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method .ctor, addr 0x4630cfc, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x4630f6c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x4630df8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x4630ce0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x4630db8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int4x4 getStaticF_identity() ;

static inline ::Unity::Mathematics::int4x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x46334a0, size 0x8, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::int4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x4>* i___System__IEquatable_1___Unity__Mathematics__int4x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x46316b4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Addition, addr 0x4631718, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x46317a0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x46330ec, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4633118, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x46331a0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x4633228, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x4633254, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x46332dc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Decrement, addr 0x4631ea8, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Decrement(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_Division, addr 0x463199c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Division, addr 0x4631a60, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x4631af4, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Equality, addr 0x4632b60, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Equality, addr 0x4632c5c, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x4632d38, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4633364, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4633390, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4633418, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Explicit, addr 0x463111c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method op_Explicit, addr 0x463138c, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method op_Explicit, addr 0x4631218, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method op_Explicit, addr 0x46311d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method op_Explicit, addr 0x46310fc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x463135c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x46311e8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x46311b8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x463246c, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4632568, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4632644, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4632720, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x463281c, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x46328f8, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Implicit, addr 0x46310e0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Implicit___Unity__Mathematics__int4x4(int32_t  v) ;

/// @brief Method op_Increment, addr 0x4631e44, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Increment(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_Inequality, addr 0x4632e14, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Inequality, addr 0x4632f10, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x4632fec, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x4632a44, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_LeftShift(::Unity::Mathematics::int4x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x4631f04, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThan, addr 0x4632000, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x46320dc, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46321b8, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46322b4, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4632390, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x4631b88, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x4631c8c, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x4631d68, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x46314d0, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x46315a4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x463162c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x46330c8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_OnesComplement(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_RightShift, addr 0x4632ad0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_RightShift(::Unity::Mathematics::int4x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x4631828, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x463188c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x4631914, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x46329d4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_UnaryNegation(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x4632a30, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_UnaryPlus(::Unity::Mathematics::int4x4  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::int4x4  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::int4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
constexpr int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c2;

/// @brief Field c3, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4x4, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c3) == 0x30, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4x4, "Unity.Mathematics", "int4x4");
