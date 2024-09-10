#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2x2)
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
struct float2x2;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int2x2);
// Type: Unity.Mathematics::int2x2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int2x2
struct CORDL_TYPE int2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int2  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::int2x2  identity;

/// @brief Field zero, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int2x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x461af08, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x461aec4, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x461afb0, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x461b004, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x461b1b0, size 0x194, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x461a388, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) ;

/// @brief Method .ctor, addr 0x461a390, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11) ;

/// @brief Method .ctor, addr 0x461a3cc, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method .ctor, addr 0x461a4a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x2  v) ;

/// @brief Method .ctor, addr 0x461a428, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x2  v) ;

/// @brief Method .ctor, addr 0x461a3fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method .ctor, addr 0x461a3b8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x461a480, size 0x24, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x461a404, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x461a3a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x461a3ec, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int2x2 getStaticF_identity() ;

static inline ::Unity::Mathematics::int2x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x461aebc, size 0x8, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::int2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int2x2>* i___System__IEquatable_1___Unity__Mathematics__int2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x461a6c0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Addition(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Addition, addr 0x461a6ec, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Addition(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x461a710, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Addition(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x461adb4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x461adc0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x461ade4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x461ae0c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x461ae18, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x461ae3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Decrement, addr 0x461a8f8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Decrement(::Unity::Mathematics::int2x2  val) ;

/// @brief Method op_Division, addr 0x461a7b0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Division(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Division, addr 0x461a7dc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Division(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x461a800, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Division(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Equality, addr 0x461ac48, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Equality, addr 0x461ac88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x461acc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x461ae64, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x461ae70, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x461ae94, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Explicit, addr 0x461a520, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method op_Explicit, addr 0x461a5f4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method op_Explicit, addr 0x461a57c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method op_Explicit, addr 0x461a554, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method op_Explicit, addr 0x461a50c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(bool  v) ;

/// @brief Method op_Explicit, addr 0x461a5d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(double_t  v) ;

/// @brief Method op_Explicit, addr 0x461a558, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(float_t  v) ;

/// @brief Method op_Explicit, addr 0x461a544, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Explicit___Unity__Mathematics__int2x2(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x461aa80, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x461aac0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x461aaf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x461ab30, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x461ab70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x461aba8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x461a4fc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Implicit___Unity__Mathematics__int2x2(int32_t  v) ;

/// @brief Method op_Increment, addr 0x461a8d0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Increment(::Unity::Mathematics::int2x2  val) ;

/// @brief Method op_Inequality, addr 0x461acf8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x461ad38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x461ad70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_LeftShift, addr 0x461ac00, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_LeftShift(::Unity::Mathematics::int2x2  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x461a920, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x461a960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x461a998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x461a9d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x461aa10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x461aa48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x461a828, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Modulus(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x461a864, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Modulus(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x461a898, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x461a648, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Multiply(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x461a674, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Multiply(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x461a698, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_OnesComplement, addr 0x461ada8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_OnesComplement(::Unity::Mathematics::int2x2  val) ;

/// @brief Method op_RightShift, addr 0x461ac24, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_RightShift(::Unity::Mathematics::int2x2  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x461a738, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Subtraction(::Unity::Mathematics::int2x2  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x461a764, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Subtraction(::Unity::Mathematics::int2x2  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x461a788, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int2x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x461abe0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_UnaryNegation(::Unity::Mathematics::int2x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x461abfc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 op_UnaryPlus(::Unity::Mathematics::int2x2  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::int2x2  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::int2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
constexpr int2x2(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int2x2, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x2, c1) == 0x8, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int2x2, "Unity.Mathematics", "int2x2");
