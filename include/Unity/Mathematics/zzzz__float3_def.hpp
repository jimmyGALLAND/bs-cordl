#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3)
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
class __float3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Mathematics {
class __float3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct float3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__float3__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::float3);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::float3::DebuggerProxy*
class CORDL_TYPE __float3__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) float_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) float_t  y;

/// @brief Field z, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) float_t  z;

static inline ::Unity::Mathematics::__float3__DebuggerProxy* New_ctor(::Unity::Mathematics::float3  v) ;

constexpr float_t const& __cordl_internal_get_x() const;

constexpr float_t& __cordl_internal_get_x() ;

constexpr float_t const& __cordl_internal_get_y() const;

constexpr float_t& __cordl_internal_get_y() ;

constexpr float_t const& __cordl_internal_get_z() const;

constexpr float_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(float_t  value) ;

constexpr void __cordl_internal_set_y(float_t  value) ;

constexpr void __cordl_internal_set_z(float_t  value) ;

/// @brief Method .ctor, addr 0x45febb0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __float3__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__float3__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__float3__DebuggerProxy(__float3__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__float3__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__float3__DebuggerProxy(__float3__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 float_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 float_t  ___y;

/// @brief Field z, offset: 0x18, size: 0x4, def value: None
 float_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__float3__DebuggerProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__float3__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__float3__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__float3__DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::float3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float3
struct CORDL_TYPE float3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__float3__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::float2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::float3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::float4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::float4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::float4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::float3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::float4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::float4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::float4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::float3  xxz;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::float4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::float4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::float4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::float2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::float3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::float4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::float4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::float4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::float3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::float4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::float4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::float4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::float3  xyz;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::float4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::float4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::float4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::float2  xz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::float3  xzx;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::float4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::float4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::float4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::float3  xzy;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::float4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::float4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::float4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::float3  xzz;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::float4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::float4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::float4  xzzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::float2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::float3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::float4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::float4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::float4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::float3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::float4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::float4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::float4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::float3  yxz;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::float4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::float4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::float4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::float2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::float3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::float4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::float4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::float4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::float3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::float4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::float4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::float4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::float3  yyz;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::float4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::float4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::float4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::float2  yz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::float3  yzx;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::float4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::float4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::float4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::float3  yzy;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::float4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::float4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::float4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::float3  yzz;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::float4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::float4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::float4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3  zero;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::float2  zx;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::float3  zxx;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::float4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::float4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::float4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::float3  zxy;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::float4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::float4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::float4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::float3  zxz;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::float4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::float4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::float4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::float2  zy;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::float3  zyx;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::float4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::float4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::float4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::float3  zyy;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::float4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::float4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::float4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::float3  zyz;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::float4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::float4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::float4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::float2  zz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::float3  zzx;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::float4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::float4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::float4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::float3  zzy;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::float4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::float4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::float4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::float3  zzz;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::float4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::float4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::float4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x45fe954, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45fe924, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3  rhs) ;

/// @brief Method GetHashCode, addr 0x45fe9ec, size 0x44, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45fea30, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x45feaf4, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45fd8a0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  v) ;

/// @brief Method .ctor, addr 0x45fda64, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  v) ;

/// @brief Method .ctor, addr 0x45fd924, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  v) ;

/// @brief Method .ctor, addr 0x45fd988, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half3  v) ;

/// @brief Method .ctor, addr 0x45fd8dc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  v) ;

/// @brief Method .ctor, addr 0x45fd908, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  v) ;

/// @brief Method .ctor, addr 0x45fd884, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x45fda54, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45fd878, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x45fd8cc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x45fd8f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x45fd848, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z) ;

/// @brief Method .ctor, addr 0x45fd854, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method .ctor, addr 0x45fd860, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method .ctor, addr 0x45fd86c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  xyz) ;

static inline ::Unity::Mathematics::float3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x45fe914, size 0x8, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x45fe880, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xx() ;

/// @brief Method get_xxx, addr 0x45fe6d0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x45fe15c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x45fe170, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x45fe180, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x45fe6e0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x45fe194, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x45fe1a8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x45fe1bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x45fe6ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xxz() ;

/// @brief Method get_xxzx, addr 0x45fe1cc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x45fe1e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x45fe1f0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xxzz() ;

/// @brief Method get_xy, addr 0x45fe88c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xy() ;

/// @brief Method get_xyx, addr 0x45fe6fc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x45fe204, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x45fe214, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x45fe224, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x45fe708, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x45fe234, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x45fe244, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x45fe254, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x45fe714, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xyz() ;

/// @brief Method get_xyzx, addr 0x45fe264, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x45fe274, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x45fe284, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xyzz() ;

/// @brief Method get_xz, addr 0x45fe89c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_xz() ;

/// @brief Method get_xzx, addr 0x45fe72c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xzx() ;

/// @brief Method get_xzxx, addr 0x45fe294, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x45fe2a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x45fe2b8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x45fe73c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xzy() ;

/// @brief Method get_xzyx, addr 0x45fe2cc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x45fe2dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x45fe2ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x45fe754, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_xzz() ;

/// @brief Method get_xzzx, addr 0x45fe2fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x45fe310, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x45fe320, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_xzzz() ;

/// @brief Method get_yx, addr 0x45fe8b4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_yx() ;

/// @brief Method get_yxx, addr 0x45fe764, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x45fe334, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x45fe344, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x45fe354, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x45fe770, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x45fe364, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x45fe374, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x45fe384, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x45fe77c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yxz() ;

/// @brief Method get_yxzx, addr 0x45fe394, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x45fe3a4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x45fe3b4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yxzz() ;

/// @brief Method get_yy, addr 0x45fe8c4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_yy() ;

/// @brief Method get_yyx, addr 0x45fe794, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x45fe3c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x45fe3d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x45fe3ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x45fe7a0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x45fe3fc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x45fe40c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x45fe420, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x45fe7b0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yyz() ;

/// @brief Method get_yyzx, addr 0x45fe430, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x45fe440, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x45fe454, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yyzz() ;

/// @brief Method get_yz, addr 0x45fe8d0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_yz() ;

/// @brief Method get_yzx, addr 0x45fe7bc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yzx() ;

/// @brief Method get_yzxx, addr 0x45fe468, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x45fe478, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x45fe488, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x45fe7d4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yzy() ;

/// @brief Method get_yzyx, addr 0x45fe498, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x45fe4a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x45fe4b8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x45fe7e0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_yzz() ;

/// @brief Method get_yzzx, addr 0x45fe4c8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x45fe4d8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x45fe4e8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_yzzz() ;

/// @brief Method get_zx, addr 0x45fe8e0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_zx() ;

/// @brief Method get_zxx, addr 0x45fe7ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zxx() ;

/// @brief Method get_zxxx, addr 0x45fe4f8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x45fe50c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x45fe51c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x45fe7fc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zxy() ;

/// @brief Method get_zxyx, addr 0x45fe530, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x45fe540, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x45fe550, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x45fe814, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zxz() ;

/// @brief Method get_zxzx, addr 0x45fe560, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x45fe574, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x45fe584, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zxzz() ;

/// @brief Method get_zy, addr 0x45fe8f8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_zy() ;

/// @brief Method get_zyx, addr 0x45fe824, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zyx() ;

/// @brief Method get_zyxx, addr 0x45fe598, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x45fe5a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x45fe5b8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x45fe83c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zyy() ;

/// @brief Method get_zyyx, addr 0x45fe5c8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x45fe5d8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x45fe5e8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x45fe848, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zyz() ;

/// @brief Method get_zyzx, addr 0x45fe5f8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x45fe608, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x45fe618, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zyzz() ;

/// @brief Method get_zz, addr 0x45fe908, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_zz() ;

/// @brief Method get_zzx, addr 0x45fe854, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zzx() ;

/// @brief Method get_zzxx, addr 0x45fe628, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x45fe63c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x45fe64c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x45fe864, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zzy() ;

/// @brief Method get_zzyx, addr 0x45fe660, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x45fe670, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x45fe684, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x45fe870, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_zzz() ;

/// @brief Method get_zzzx, addr 0x45fe698, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x45fe6ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x45fe6bc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* i___System__IEquatable_1___Unity__Mathematics__float3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x45fdc98, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Addition, addr 0x45fdca8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x45fdcb8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Addition(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Decrement, addr 0x45fde64, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Decrement(::Unity::Mathematics::float3  val) ;

/// @brief Method op_Division, addr 0x45fdd00, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Division, addr 0x45fdd10, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x45fdd20, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Division(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Equality, addr 0x45fe06c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Equality, addr 0x45fe094, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x45fe0bc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Explicit, addr 0x45fdaa4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::bool3  v) ;

/// @brief Method op_Explicit, addr 0x45fdc54, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::double3  v) ;

/// @brief Method op_Explicit, addr 0x45fda88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(bool  v) ;

/// @brief Method op_Explicit, addr 0x45fdc44, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Explicit___Unity__Mathematics__float3(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x45fdf68, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fdf90, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45fdfb8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fdfe0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fe008, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45fe030, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Implicit, addr 0x45feba8, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Implicit, addr 0x45fdb10, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half  v) ;

/// @brief Method op_Implicit, addr 0x45fdb78, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3  v) ;

/// @brief Method op_Implicit, addr 0x45fdad8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3  v) ;

/// @brief Method op_Implicit, addr 0x45fdafc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::uint3  v) ;

/// @brief Method op_Implicit, addr 0x45febac, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3  v) ;

/// @brief Method op_Implicit, addr 0x45fda7c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x45fdac8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x45fdaec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Implicit___Unity__Mathematics__float3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x45fde50, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Increment(::Unity::Mathematics::float3  val) ;

/// @brief Method op_Inequality, addr 0x45fe0e4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Inequality, addr 0x45fe10c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x45fe134, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_LessThan, addr 0x45fde78, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_LessThan, addr 0x45fdea0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x45fdec8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fdef0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fdf18, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45fdf40, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Modulus, addr 0x45fdd34, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Modulus, addr 0x45fdd9c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Modulus(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x45fddf8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Multiply, addr 0x45fdc64, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Multiply, addr 0x45fdc74, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x45fdc84, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fdccc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fdcdc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x45fdcec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x45fe058, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_UnaryNegation(::Unity::Mathematics::float3  val) ;

/// @brief Method op_UnaryPlus, addr 0x45fe068, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 op_UnaryPlus(::Unity::Mathematics::float3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Item, addr 0x45fe91c, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

/// @brief Method set_xy, addr 0x45fe894, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::float2  value) ;

/// @brief Method set_xyz, addr 0x45fe720, size 0xc, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::float3  value) ;

/// @brief Method set_xz, addr 0x45fe8a8, size 0xc, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::float2  value) ;

/// @brief Method set_xzy, addr 0x45fe748, size 0xc, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::float3  value) ;

/// @brief Method set_yx, addr 0x45fe8bc, size 0x8, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::float2  value) ;

/// @brief Method set_yxz, addr 0x45fe788, size 0xc, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::float3  value) ;

/// @brief Method set_yz, addr 0x45fe8d8, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::float2  value) ;

/// @brief Method set_yzx, addr 0x45fe7c8, size 0xc, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::float3  value) ;

/// @brief Method set_zx, addr 0x45fe8ec, size 0xc, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::float2  value) ;

/// @brief Method set_zxy, addr 0x45fe808, size 0xc, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::float3  value) ;

/// @brief Method set_zy, addr 0x45fe900, size 0x8, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::float2  value) ;

/// @brief Method set_zyx, addr 0x45fe830, size 0xc, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr float3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3, z) == 0x8, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__float3__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__float3__DebuggerProxy*, "Unity.Mathematics", "float3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3, "Unity.Mathematics", "float3");
