#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x4)
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
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x4);
// Type: Unity.Mathematics::int3x4
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int3x4
struct CORDL_TYPE int3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int3x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int3x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x46273c8, size 0x128, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x46272fc, size 0xcc, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x46274f0, size 0xdc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x46275cc, size 0x3ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x4627978, size 0x394, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x4624c64, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) ;

/// @brief Method .ctor, addr 0x4624c8c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23) ;

/// @brief Method .ctor, addr 0x4624d18, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method .ctor, addr 0x4624f84, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x4  v) ;

/// @brief Method .ctor, addr 0x4624e40, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x4  v) ;

/// @brief Method .ctor, addr 0x4624dbc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method .ctor, addr 0x4624ce8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x4624f44, size 0x40, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x4624e00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x4624cbc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x4624d90, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int3x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x46272f0, size 0xc, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::int3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x4>* i___System__IEquatable_1___Unity__Mathematics__int3x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x4625600, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Addition, addr 0x46256c4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x4625740, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Addition(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4626e7c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4626f00, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4626f7c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x4626ff8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x462707c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x46270f8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Decrement, addr 0x4625dd8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Decrement(::Unity::Mathematics::int3x4  val) ;

/// @brief Method op_Division, addr 0x4625978, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Division, addr 0x4625a0c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x4625a88, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Division(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Equality, addr 0x4626980, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Equality, addr 0x4626a54, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x4626b10, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4627174, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x46271f8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4627274, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Explicit, addr 0x46250e4, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method op_Explicit, addr 0x4625348, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method op_Explicit, addr 0x462520c, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method op_Explicit, addr 0x4625188, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method op_Explicit, addr 0x46250b4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x4625308, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x46251cc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x462515c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x4626328, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x46263fc, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x46264b8, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4626574, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4626648, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4626704, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x4625088, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Implicit___Unity__Mathematics__int3x4(int32_t  v) ;

/// @brief Method op_Increment, addr 0x4625d20, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Increment(::Unity::Mathematics::int3x4  val) ;

/// @brief Method op_Inequality, addr 0x4626bcc, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x4626ca0, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x4626d5c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x4626888, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_LeftShift(::Unity::Mathematics::int3x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x4625e90, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x4625f64, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x4626020, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46260dc, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46261b0, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x462626c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x4625b04, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x4625bc8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x4625c74, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x4625444, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x4625508, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x4625584, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x4626e18, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_OnesComplement(::Unity::Mathematics::int3x4  val) ;

/// @brief Method op_RightShift, addr 0x4626904, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_RightShift(::Unity::Mathematics::int3x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x46257bc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x4625880, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x46258fc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int3x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x46267c0, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_UnaryNegation(::Unity::Mathematics::int3x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x4626844, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 op_UnaryPlus(::Unity::Mathematics::int3x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int3x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }]
constexpr int3x4(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) noexcept;

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c2;

/// @brief Field c3, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::int3  c3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x4, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c3) == 0x24, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x4, "Unity.Mathematics", "int3x4");
