#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2)
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
class __double2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
class __double2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct double2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__double2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::double2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::double2::DebuggerProxy*
class CORDL_TYPE __double2__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) double_t  x;

/// @brief Field y, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) double_t  y;

static inline ::Unity::Mathematics::__double2__DebuggerProxy* New_ctor(::Unity::Mathematics::double2  v) ;

constexpr double_t const& __cordl_internal_get_x() const;

constexpr double_t& __cordl_internal_get_x() ;

constexpr double_t const& __cordl_internal_get_y() const;

constexpr double_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_x(double_t  value) ;

constexpr void __cordl_internal_set_y(double_t  value) ;

/// @brief Method .ctor, addr 0x45e1ecc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __double2__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__double2__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__double2__DebuggerProxy(__double2__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__double2__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__double2__DebuggerProxy(__double2__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x8, def value: None
 double_t  ___x;

/// @brief Field y, offset: 0x18, size: 0x8, def value: None
 double_t  ___y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__double2__DebuggerProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double2__DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::double2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double2
struct CORDL_TYPE double2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__double2__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) double_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::double2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::double3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::double4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::double4  xxxy;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::double3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::double4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::double4  xxyy;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::double2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::double3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::double4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::double4  xyxy;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::double3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::double4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::double4  xyyy;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::double2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::double3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::double4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::double4  yxxy;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::double3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::double4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::double4  yxyy;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::double2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::double3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::double4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::double4  yyxy;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::double3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::double4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::double4  yyyy;

/// @brief Field zero, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x45e1ccc, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45e1ca8, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double2  rhs) ;

/// @brief Method GetHashCode, addr 0x45e1d54, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45e1d94, size 0xa8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x45e1e3c, size 0x90, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45e14d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2  v) ;

/// @brief Method .ctor, addr 0x45e1624, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  v) ;

/// @brief Method .ctor, addr 0x45e1530, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  v) ;

/// @brief Method .ctor, addr 0x45e1598, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half2  v) ;

/// @brief Method .ctor, addr 0x45e14fc, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  v) ;

/// @brief Method .ctor, addr 0x45e151c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  v) ;

/// @brief Method .ctor, addr 0x45e14b8, size 0x18, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x45e14b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45e1618, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x45e14f0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x45e1510, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x45e14a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y) ;

/// @brief Method .ctor, addr 0x45e14a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  xy) ;

static inline ::Unity::Mathematics::double2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x45e1c98, size 0x8, virtual false, abstract: false, final false
inline double_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x45e1c60, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_xx() ;

/// @brief Method get_xxx, addr 0x45e1bf8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x45e1af0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x45e1b04, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxxy() ;

/// @brief Method get_xxy, addr 0x45e1c08, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x45e1b14, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x45e1b24, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxyy() ;

/// @brief Method get_xy, addr 0x45e1c6c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_xy() ;

/// @brief Method get_xyx, addr 0x45e1c14, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x45e1b34, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x45e1b44, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyxy() ;

/// @brief Method get_xyy, addr 0x45e1c20, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x45e1b54, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x45e1b64, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyyy() ;

/// @brief Method get_yx, addr 0x45e1c7c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_yx() ;

/// @brief Method get_yxx, addr 0x45e1c2c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x45e1b74, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x45e1b84, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxxy() ;

/// @brief Method get_yxy, addr 0x45e1c38, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x45e1b94, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x45e1ba4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxyy() ;

/// @brief Method get_yy, addr 0x45e1c8c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_yy() ;

/// @brief Method get_yyx, addr 0x45e1c44, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x45e1bb4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x45e1bc4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyxy() ;

/// @brief Method get_yyy, addr 0x45e1c50, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x45e1bd4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x45e1be4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyyy() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double2>* i___System__IEquatable_1___Unity__Mathematics__double2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x45e17d0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Addition, addr 0x45e17dc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x45e17e8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Addition(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Decrement, addr 0x45e1920, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Decrement(::Unity::Mathematics::double2  val) ;

/// @brief Method op_Division, addr 0x45e1820, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Division, addr 0x45e182c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x45e1838, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Division(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Equality, addr 0x45e1a60, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Equality, addr 0x45e1a78, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x45e1a90, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Explicit, addr 0x45e1654, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(::Unity::Mathematics::bool2  v) ;

/// @brief Method op_Explicit, addr 0x45e163c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x45e19c0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45e19d8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45e19f0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e1a08, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e1a20, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e1a38, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Implicit, addr 0x45e179c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::float2  v) ;

/// @brief Method op_Implicit, addr 0x45e16a8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half  v) ;

/// @brief Method op_Implicit, addr 0x45e1710, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half2  v) ;

/// @brief Method op_Implicit, addr 0x45e167c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::int2  v) ;

/// @brief Method op_Implicit, addr 0x45e1698, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::uint2  v) ;

/// @brief Method op_Implicit, addr 0x45e1634, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(double_t  v) ;

/// @brief Method op_Implicit, addr 0x45e1790, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x45e1670, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x45e168c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x45e1910, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Increment(::Unity::Mathematics::double2  val) ;

/// @brief Method op_Inequality, addr 0x45e1aa8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Inequality, addr 0x45e1ac0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x45e1ad8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_LessThan, addr 0x45e1930, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_LessThan, addr 0x45e1948, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x45e1960, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e1978, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e1990, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e19a8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Modulus, addr 0x45e1848, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Modulus, addr 0x45e188c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x45e18d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Modulus(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Multiply, addr 0x45e17a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Multiply, addr 0x45e17b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x45e17c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Multiply(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e17f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e1804, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e1810, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x45e1a50, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_UnaryNegation(::Unity::Mathematics::double2  val) ;

/// @brief Method op_UnaryPlus, addr 0x45e1a5c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 op_UnaryPlus(::Unity::Mathematics::double2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double2  value) ;

/// @brief Method set_Item, addr 0x45e1ca0, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, double_t  value) ;

/// @brief Method set_xy, addr 0x45e1c74, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::double2  value) ;

/// @brief Method set_yx, addr 0x45e1c84, size 0x8, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::double2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double2() ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }]
constexpr double2(double_t  x, double_t  y) noexcept;

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 double_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 double_t  y;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2, y) == 0x8, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__double2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__double2__DebuggerProxy*, "Unity.Mathematics", "double2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2, "Unity.Mathematics", "double2");
