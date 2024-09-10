#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3)
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
class __uint3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class __uint3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__uint3__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::uint3);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::uint3::DebuggerProxy*
class CORDL_TYPE __uint3__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) uint32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) uint32_t  y;

/// @brief Field z, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) uint32_t  z;

static inline ::Unity::Mathematics::__uint3__DebuggerProxy* New_ctor(::Unity::Mathematics::uint3  v) ;

constexpr uint32_t const& __cordl_internal_get_x() const;

constexpr uint32_t& __cordl_internal_get_x() ;

constexpr uint32_t const& __cordl_internal_get_y() const;

constexpr uint32_t& __cordl_internal_get_y() ;

constexpr uint32_t const& __cordl_internal_get_z() const;

constexpr uint32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(uint32_t  value) ;

constexpr void __cordl_internal_set_y(uint32_t  value) ;

constexpr void __cordl_internal_set_z(uint32_t  value) ;

/// @brief Method .ctor, addr 0x464ace0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __uint3__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__uint3__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__uint3__DebuggerProxy(__uint3__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__uint3__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__uint3__DebuggerProxy(__uint3__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___y;

/// @brief Field z, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__uint3__DebuggerProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__uint3__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__uint3__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__uint3__DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::uint3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint3
struct CORDL_TYPE uint3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__uint3__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) uint32_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::uint2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::uint3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::uint4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::uint4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::uint4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::uint3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::uint4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::uint4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::uint4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::uint3  xxz;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::uint4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::uint4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::uint4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::uint2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::uint3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::uint4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::uint4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::uint4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::uint3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::uint4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::uint4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::uint4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::uint3  xyz;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::uint4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::uint4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::uint4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::uint2  xz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::uint3  xzx;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::uint4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::uint4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::uint4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::uint3  xzy;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::uint4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::uint4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::uint4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::uint3  xzz;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::uint4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::uint4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::uint4  xzzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::uint2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::uint3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::uint4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::uint4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::uint4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::uint3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::uint4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::uint4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::uint4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::uint3  yxz;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::uint4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::uint4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::uint4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::uint2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::uint3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::uint4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::uint4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::uint4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::uint3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::uint4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::uint4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::uint4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::uint3  yyz;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::uint4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::uint4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::uint4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::uint2  yz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::uint3  yzx;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::uint4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::uint4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::uint4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::uint3  yzy;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::uint4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::uint4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::uint4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::uint3  yzz;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::uint4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::uint4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::uint4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint3  zero;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::uint2  zx;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::uint3  zxx;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::uint4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::uint4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::uint4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::uint3  zxy;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::uint4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::uint4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::uint4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::uint3  zxz;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::uint4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::uint4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::uint4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::uint2  zy;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::uint3  zyx;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::uint4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::uint4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::uint4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::uint3  zyy;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::uint4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::uint4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::uint4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::uint3  zyz;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::uint4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::uint4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::uint4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::uint2  zz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::uint3  zzx;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::uint4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::uint4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::uint4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::uint3  zzy;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::uint4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::uint4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::uint4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::uint3  zzz;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::uint4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::uint4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::uint4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x464aa88, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x464aa54, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint3  rhs) ;

/// @brief Method GetHashCode, addr 0x464ab20, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x464ab68, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x464ac2c, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x4649888, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  v) ;

/// @brief Method .ctor, addr 0x4649948, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  v) ;

/// @brief Method .ctor, addr 0x46498f0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0x46498c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  v) ;

/// @brief Method .ctor, addr 0x4649878, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x464992c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x46498d4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x46498b8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x464986c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x4649830, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method .ctor, addr 0x464983c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, ::Unity::Mathematics::uint2  yz) ;

/// @brief Method .ctor, addr 0x464984c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  xy, uint32_t  z) ;

/// @brief Method .ctor, addr 0x464985c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  xyz) ;

static inline ::Unity::Mathematics::uint3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x464aa44, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x464a980, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_xx() ;

/// @brief Method get_xxx, addr 0x464a754, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x464a074, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x464a084, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x464a09c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x464a764, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x464a0b8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x464a0cc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x464a0dc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x464a774, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xxz() ;

/// @brief Method get_xxzx, addr 0x464a0f0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x464a108, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x464a11c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxzz() ;

/// @brief Method get_xy, addr 0x464a98c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_xy() ;

/// @brief Method get_xyx, addr 0x464a788, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x464a130, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x464a148, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x464a154, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x464a798, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x464a170, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x464a184, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x464a198, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x464a7a8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xyz() ;

/// @brief Method get_xyzx, addr 0x464a1b0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x464a1c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x464a1dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyzz() ;

/// @brief Method get_xz, addr 0x464a99c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_xz() ;

/// @brief Method get_xzx, addr 0x464a7c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xzx() ;

/// @brief Method get_xzxx, addr 0x464a1ec, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x464a208, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x464a224, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x464a7d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xzy() ;

/// @brief Method get_xzyx, addr 0x464a238, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x464a250, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x464a268, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x464a7fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xzz() ;

/// @brief Method get_xzzx, addr 0x464a27c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x464a294, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x464a2ac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xzzz() ;

/// @brief Method get_yx, addr 0x464a9c0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_yx() ;

/// @brief Method get_yxx, addr 0x464a810, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x464a2c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x464a2d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x464a2ec, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x464a820, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x464a304, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x464a314, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x464a32c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x464a830, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yxz() ;

/// @brief Method get_yxzx, addr 0x464a348, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x464a35c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x464a374, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxzz() ;

/// @brief Method get_yy, addr 0x464a9dc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_yy() ;

/// @brief Method get_yyx, addr 0x464a854, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x464a38c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x464a39c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x464a3b0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x464a864, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x464a3c4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x464a3dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x464a3ec, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x464a874, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yyz() ;

/// @brief Method get_yyzx, addr 0x464a404, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x464a418, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x464a42c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyzz() ;

/// @brief Method get_yz, addr 0x464a9e8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_yz() ;

/// @brief Method get_yzx, addr 0x464a884, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yzx() ;

/// @brief Method get_yzxx, addr 0x464a43c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x464a44c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x464a464, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x464a89c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yzy() ;

/// @brief Method get_yzyx, addr 0x464a478, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x464a494, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x464a4ac, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x464a8ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yzz() ;

/// @brief Method get_yzzx, addr 0x464a4b8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x464a4d0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x464a4e4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yzzz() ;

/// @brief Method get_zx, addr 0x464a9f8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_zx() ;

/// @brief Method get_zxx, addr 0x464a8bc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zxx() ;

/// @brief Method get_zxxx, addr 0x464a4f8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x464a510, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x464a528, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x464a8d0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zxy() ;

/// @brief Method get_zxyx, addr 0x464a540, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x464a554, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x464a56c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x464a8f4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zxz() ;

/// @brief Method get_zxzx, addr 0x464a584, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x464a598, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x464a5b4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zxzz() ;

/// @brief Method get_zy, addr 0x464aa1c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_zy() ;

/// @brief Method get_zyx, addr 0x464a908, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zyx() ;

/// @brief Method get_zyxx, addr 0x464a5d0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x464a5e8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x464a5fc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x464a92c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zyy() ;

/// @brief Method get_zyyx, addr 0x464a614, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x464a62c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x464a640, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x464a93c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zyz() ;

/// @brief Method get_zyzx, addr 0x464a654, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x464a670, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x464a680, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zyzz() ;

/// @brief Method get_zz, addr 0x464aa38, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_zz() ;

/// @brief Method get_zzx, addr 0x464a94c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zzx() ;

/// @brief Method get_zzxx, addr 0x464a698, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x464a6ac, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x464a6c0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x464a960, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zzy() ;

/// @brief Method get_zzyx, addr 0x464a6d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x464a6ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x464a6fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x464a970, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_zzz() ;

/// @brief Method get_zzzx, addr 0x464a710, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x464a72c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x464a744, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3>* i___System__IEquatable_1___Unity__Mathematics__uint3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x4649ad8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Addition, addr 0x4649af4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x4649b0c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4649fb4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4649fc0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4649fd8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x4649ff4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseOr(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x464a000, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseOr(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x464a018, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Decrement, addr 0x4649c58, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Decrement(::Unity::Mathematics::uint3  val) ;

/// @brief Method op_Division, addr 0x4649b78, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Division(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Division, addr 0x4649b94, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Division(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x4649bac, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Equality, addr 0x4649eb0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Equality, addr 0x4649edc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x4649f04, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x464a034, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x464a040, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x464a058, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Explicit, addr 0x46499b0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::bool3  v) ;

/// @brief Method op_Explicit, addr 0x4649a50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::double3  v) ;

/// @brief Method op_Explicit, addr 0x46499fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Explicit, addr 0x46499d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::int3  v) ;

/// @brief Method op_Explicit, addr 0x4649994, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(bool  v) ;

/// @brief Method op_Explicit, addr 0x4649a34, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x46499e0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(float_t  v) ;

/// @brief Method op_Explicit, addr 0x46499c8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Explicit___Unity__Mathematics__uint3(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x4649d6c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4649d98, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4649dc0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4649de8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4649e14, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4649e3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Implicit, addr 0x4649984, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Implicit___Unity__Mathematics__uint3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x4649c3c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Increment(::Unity::Mathematics::uint3  val) ;

/// @brief Method op_Inequality, addr 0x4649f2c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Inequality, addr 0x4649f58, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x4649f80, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_LeftShift, addr 0x4649e80, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_LeftShift(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x4649c74, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_LessThan, addr 0x4649ca0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x4649cc8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4649cf0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4649d1c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4649d44, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Modulus, addr 0x4649bc8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Modulus(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Modulus, addr 0x4649bf0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Modulus(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x4649c14, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Multiply, addr 0x4649a88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Multiply, addr 0x4649aa4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x4649abc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_OnesComplement, addr 0x4649fa8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_OnesComplement(::Unity::Mathematics::uint3  val) ;

/// @brief Method op_RightShift, addr 0x4649e98, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_RightShift(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x4649b28, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Subtraction(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_Subtraction, addr 0x4649b44, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Subtraction(::Unity::Mathematics::uint3  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x4649b5c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x4649e64, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_UnaryNegation(::Unity::Mathematics::uint3  val) ;

/// @brief Method op_UnaryPlus, addr 0x4649e78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 op_UnaryPlus(::Unity::Mathematics::uint3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_Item, addr 0x464aa4c, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint32_t  value) ;

/// @brief Method set_xy, addr 0x464a994, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_xyz, addr 0x464a7b4, size 0x10, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_xz, addr 0x464a9b0, size 0x10, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_xzy, addr 0x464a7ec, size 0x10, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_yx, addr 0x464a9d0, size 0xc, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_yxz, addr 0x464a844, size 0x10, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_yz, addr 0x464a9f0, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_yzx, addr 0x464a890, size 0xc, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_zx, addr 0x464aa0c, size 0x10, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_zxy, addr 0x464a8e4, size 0x10, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::uint3  value) ;

/// @brief Method set_zy, addr 0x464aa2c, size 0xc, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_zyx, addr 0x464a91c, size 0x10, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::uint3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint3() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr uint3(uint32_t  x, uint32_t  y, uint32_t  z) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 uint32_t  z;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3, z) == 0x8, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__uint3__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__uint3__DebuggerProxy*, "Unity.Mathematics", "uint3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3, "Unity.Mathematics", "uint3");
