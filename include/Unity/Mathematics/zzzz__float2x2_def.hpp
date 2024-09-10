#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x2);
// Type: Unity.Mathematics::float2x2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float2x2
struct CORDL_TYPE float2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float2  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float2x2  identity;

/// @brief Field zero, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float2x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x45fa974, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45fa938, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x45faa1c, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Rotate, addr 0x45fadac, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 Rotate(float_t  angle) ;

/// @brief Method Scale, addr 0x45fae60, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 Scale(float_t  s) ;

/// @brief Method Scale, addr 0x45fae80, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 Scale(::Unity::Mathematics::float2  v) ;

/// @brief Method Scale, addr 0x45fae70, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 Scale(float_t  x, float_t  y) ;

/// @brief Method ToString, addr 0x45faa6c, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x45fac18, size 0x194, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45fa11c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method .ctor, addr 0x45fa128, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

/// @brief Method .ctor, addr 0x45fa15c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method .ctor, addr 0x45fa208, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x2  v) ;

/// @brief Method .ctor, addr 0x45fa1a0, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x2  v) ;

/// @brief Method .ctor, addr 0x45fa1d4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method .ctor, addr 0x45fa140, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x45fa1f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45fa134, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x45fa190, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x45fa1c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float2x2 getStaticF_identity() ;

static inline ::Unity::Mathematics::float2x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x45fa930, size 0x8, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::float2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x2>* i___System__IEquatable_1___Unity__Mathematics__float2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x45fa348, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Addition, addr 0x45fa35c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x45fa370, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Addition(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Decrement, addr 0x45fa5a0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Decrement(::Unity::Mathematics::float2x2  val) ;

/// @brief Method op_Division, addr 0x45fa3c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Division, addr 0x45fa3dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x45fa3f0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Division(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Equality, addr 0x45fa810, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Equality, addr 0x45fa840, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x45fa870, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Explicit, addr 0x45fa254, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method op_Explicit, addr 0x45fa2f4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method op_Explicit, addr 0x45fa234, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(bool  v) ;

/// @brief Method op_Explicit, addr 0x45fa2e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x45fa6d8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fa708, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fa738, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fa768, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fa798, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fa7c8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x45fa294, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method op_Implicit, addr 0x45fa2c4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method op_Implicit, addr 0x45fa224, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x45fa280, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x45fa2b0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x45fa588, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Increment(::Unity::Mathematics::float2x2  val) ;

/// @brief Method op_Inequality, addr 0x45fa8a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x45fa8d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x45fa900, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x45fa5b8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x45fa5e8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x45fa618, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fa648, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fa678, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fa6a8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x45fa408, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x45fa494, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x45fa510, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Modulus(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x45fa308, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x45fa31c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x45fa330, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Multiply(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fa388, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fa39c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fa3b0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float2x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x45fa7f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_UnaryNegation(::Unity::Mathematics::float2x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x45fa80c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 op_UnaryPlus(::Unity::Mathematics::float2x2  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::float2x2  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::float2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
constexpr float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x2, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x2, c1) == 0x8, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x2, "Unity.Mathematics", "float2x2");
