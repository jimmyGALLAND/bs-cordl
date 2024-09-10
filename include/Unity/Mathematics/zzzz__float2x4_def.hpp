#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x4)
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
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x4);
// Type: Unity.Mathematics::float2x4
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float2x4
struct CORDL_TYPE float2x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x20 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float2x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float2x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x45fd198, size 0xe8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45fd10c, size 0x8c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method GetHashCode, addr 0x45fd280, size 0x88, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45fd308, size 0x2ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x45fd5b4, size 0x294, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45fc1c4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method .ctor, addr 0x45fc1d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method .ctor, addr 0x45fc21c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method .ctor, addr 0x45fc330, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x4  v) ;

/// @brief Method .ctor, addr 0x45fc288, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x4  v) ;

/// @brief Method .ctor, addr 0x45fc2dc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method .ctor, addr 0x45fc1f8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x45fc320, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45fc1ec, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x45fc278, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x45fc2cc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float2x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x45fd104, size 0x8, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::float2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x4>* i___System__IEquatable_1___Unity__Mathematics__float2x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x45fc508, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Addition, addr 0x45fc520, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x45fc538, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Decrement, addr 0x45fc888, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Decrement(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_Division, addr 0x45fc598, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Division, addr 0x45fc5b0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x45fc5c8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Equality, addr 0x45fce44, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Equality, addr 0x45fcec4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x45fcf34, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Explicit, addr 0x45fc394, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method op_Explicit, addr 0x45fc4a8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method op_Explicit, addr 0x45fc370, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x45fc498, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x45fcb64, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fcbe4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fcc54, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fccc4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fcd44, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fcdb4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Implicit, addr 0x45fc400, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method op_Implicit, addr 0x45fc454, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method op_Implicit, addr 0x45fc364, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(float_t  v) ;

/// @brief Method op_Implicit, addr 0x45fc3f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x45fc444, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x45fc86c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Increment(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_Inequality, addr 0x45fcfa4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Inequality, addr 0x45fd024, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x45fd094, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x45fc8a4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x45fc924, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x45fc994, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fca04, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fca84, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fcaf4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x45fc5e0, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x45fc6c4, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x45fc7a0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x45fc4c8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x45fc4e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x45fc4f4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fc550, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fc568, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fc580, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x45fce24, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_UnaryNegation(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x45fce38, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_UnaryPlus(::Unity::Mathematics::float2x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float2x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float2x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
constexpr float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c1;

/// @brief Field c2, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c2;

/// @brief Field c3, offset: 0x18, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2x4, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c3) == 0x18, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2x4, "Unity.Mathematics", "float2x4");
