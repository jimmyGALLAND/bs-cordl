#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3)
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
class __double3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float3;
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
// Forward declare root types
namespace Unity::Mathematics {
class __double3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct double3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__double3__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::double3);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::double3::DebuggerProxy*
class CORDL_TYPE __double3__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) double_t  x;

/// @brief Field y, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) double_t  y;

/// @brief Field z, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) double_t  z;

static inline ::Unity::Mathematics::__double3__DebuggerProxy* New_ctor(::Unity::Mathematics::double3  v) ;

constexpr double_t const& __cordl_internal_get_x() const;

constexpr double_t& __cordl_internal_get_x() ;

constexpr double_t const& __cordl_internal_get_y() const;

constexpr double_t& __cordl_internal_get_y() ;

constexpr double_t const& __cordl_internal_get_z() const;

constexpr double_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(double_t  value) ;

constexpr void __cordl_internal_set_y(double_t  value) ;

constexpr void __cordl_internal_set_z(double_t  value) ;

/// @brief Method .ctor, addr 0x45e6ad8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __double3__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__double3__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__double3__DebuggerProxy(__double3__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__double3__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__double3__DebuggerProxy(__double3__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x8, def value: None
 double_t  ___x;

/// @brief Field y, offset: 0x18, size: 0x8, def value: None
 double_t  ___y;

/// @brief Field z, offset: 0x20, size: 0x8, def value: None
 double_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__double3__DebuggerProxy, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double3__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double3__DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__double3__DebuggerProxy, ___z) == 0x20, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::double3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double3
struct CORDL_TYPE double3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__double3__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) double_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::double2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::double3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::double4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::double4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::double4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::double3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::double4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::double4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::double4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::double3  xxz;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::double4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::double4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::double4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::double2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::double3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::double4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::double4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::double4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::double3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::double4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::double4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::double4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::double3  xyz;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::double4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::double4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::double4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::double2  xz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::double3  xzx;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::double4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::double4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::double4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::double3  xzy;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::double4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::double4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::double4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::double3  xzz;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::double4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::double4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::double4  xzzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::double2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::double3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::double4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::double4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::double4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::double3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::double4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::double4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::double4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::double3  yxz;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::double4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::double4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::double4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::double2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::double3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::double4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::double4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::double4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::double3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::double4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::double4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::double4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::double3  yyz;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::double4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::double4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::double4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::double2  yz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::double3  yzx;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::double4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::double4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::double4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::double3  yzy;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::double4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::double4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::double4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::double3  yzz;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::double4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::double4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::double4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0x18 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double3  zero;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::double2  zx;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::double3  zxx;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::double4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::double4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::double4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::double3  zxy;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::double4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::double4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::double4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::double3  zxz;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::double4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::double4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::double4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::double2  zy;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::double3  zyx;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::double4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::double4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::double4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::double3  zyy;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::double4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::double4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::double4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::double3  zyz;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::double4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::double4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::double4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::double2  zz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::double3  zzx;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::double4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::double4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::double4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::double3  zzy;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::double4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::double4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::double4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::double3  zzz;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::double4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::double4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::double4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x45e6870, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45e6840, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double3  rhs) ;

/// @brief Method GetHashCode, addr 0x45e6908, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45e6960, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x45e6a24, size 0xb4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45e5798, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  v) ;

/// @brief Method .ctor, addr 0x45e5970, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0x45e581c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  v) ;

/// @brief Method .ctor, addr 0x45e5888, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half3  v) ;

/// @brief Method .ctor, addr 0x45e57d4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  v) ;

/// @brief Method .ctor, addr 0x45e5800, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3  v) ;

/// @brief Method .ctor, addr 0x45e577c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x45e5770, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45e5960, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x45e57c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x45e57f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x45e5740, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y, double_t  z) ;

/// @brief Method .ctor, addr 0x45e574c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  x, ::Unity::Mathematics::double2  yz) ;

/// @brief Method .ctor, addr 0x45e5758, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  xy, double_t  z) ;

/// @brief Method .ctor, addr 0x45e5764, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  xyz) ;

static inline ::Unity::Mathematics::double3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x45e6830, size 0x8, virtual false, abstract: false, final false
inline double_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x45e679c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_xx() ;

/// @brief Method get_xxx, addr 0x45e65ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x45e6098, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x45e60ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x45e60bc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x45e65fc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x45e60d0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x45e60e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x45e60f0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x45e6608, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xxz() ;

/// @brief Method get_xxzx, addr 0x45e6100, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x45e6114, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x45e6124, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xxzz() ;

/// @brief Method get_xy, addr 0x45e67a8, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_xy() ;

/// @brief Method get_xyx, addr 0x45e6618, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x45e6138, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x45e6148, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x45e6158, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x45e6624, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x45e6168, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x45e6178, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x45e6188, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x45e6630, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xyz() ;

/// @brief Method get_xyzx, addr 0x45e6198, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x45e61a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x45e61b8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xyzz() ;

/// @brief Method get_xz, addr 0x45e67b8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_xz() ;

/// @brief Method get_xzx, addr 0x45e6648, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xzx() ;

/// @brief Method get_xzxx, addr 0x45e61c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x45e61dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x45e61ec, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x45e6658, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xzy() ;

/// @brief Method get_xzyx, addr 0x45e6200, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x45e6210, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x45e6220, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x45e6670, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_xzz() ;

/// @brief Method get_xzzx, addr 0x45e6230, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x45e6244, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x45e6254, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_xzzz() ;

/// @brief Method get_yx, addr 0x45e67d0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_yx() ;

/// @brief Method get_yxx, addr 0x45e6680, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x45e6268, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x45e6278, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x45e6288, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x45e668c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x45e6298, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x45e62a8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x45e62b8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x45e6698, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yxz() ;

/// @brief Method get_yxzx, addr 0x45e62c8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x45e62d8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x45e62e8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yxzz() ;

/// @brief Method get_yy, addr 0x45e67e0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_yy() ;

/// @brief Method get_yyx, addr 0x45e66b0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x45e62f8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x45e6308, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x45e6318, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x45e66bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x45e6328, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x45e6338, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x45e634c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x45e66cc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yyz() ;

/// @brief Method get_yyzx, addr 0x45e635c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x45e636c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x45e637c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yyzz() ;

/// @brief Method get_yz, addr 0x45e67ec, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_yz() ;

/// @brief Method get_yzx, addr 0x45e66d8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yzx() ;

/// @brief Method get_yzxx, addr 0x45e638c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x45e639c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x45e63ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x45e66f0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yzy() ;

/// @brief Method get_yzyx, addr 0x45e63bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x45e63cc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x45e63dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x45e66fc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_yzz() ;

/// @brief Method get_yzzx, addr 0x45e63ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x45e63fc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x45e640c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_yzzz() ;

/// @brief Method get_zx, addr 0x45e67fc, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_zx() ;

/// @brief Method get_zxx, addr 0x45e6708, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zxx() ;

/// @brief Method get_zxxx, addr 0x45e641c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x45e6430, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x45e6440, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x45e6718, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zxy() ;

/// @brief Method get_zxyx, addr 0x45e6454, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x45e6464, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x45e6474, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x45e6730, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zxz() ;

/// @brief Method get_zxzx, addr 0x45e6484, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x45e6498, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x45e64a8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zxzz() ;

/// @brief Method get_zy, addr 0x45e6814, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_zy() ;

/// @brief Method get_zyx, addr 0x45e6740, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zyx() ;

/// @brief Method get_zyxx, addr 0x45e64bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x45e64cc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x45e64dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x45e6758, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zyy() ;

/// @brief Method get_zyyx, addr 0x45e64ec, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x45e64fc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x45e650c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x45e6764, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zyz() ;

/// @brief Method get_zyzx, addr 0x45e651c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x45e652c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x45e653c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zyzz() ;

/// @brief Method get_zz, addr 0x45e6824, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double2 get_zz() ;

/// @brief Method get_zzx, addr 0x45e6770, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zzx() ;

/// @brief Method get_zzxx, addr 0x45e654c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x45e6560, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x45e6570, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x45e6780, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zzy() ;

/// @brief Method get_zzyx, addr 0x45e6584, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x45e6594, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x45e65a4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x45e678c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double3 get_zzz() ;

/// @brief Method get_zzzx, addr 0x45e65b4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x45e65c8, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x45e65d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::double4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double3>* i___System__IEquatable_1___Unity__Mathematics__double3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x45e5bd4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Addition, addr 0x45e5be4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Addition(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x45e5bf4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Addition(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Decrement, addr 0x45e5da0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Decrement(::Unity::Mathematics::double3  val) ;

/// @brief Method op_Division, addr 0x45e5c3c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Division, addr 0x45e5c4c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Division(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x45e5c5c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Division(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Equality, addr 0x45e5fa8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Equality, addr 0x45e5fd0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x45e5ff8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Explicit, addr 0x45e59b0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(::Unity::Mathematics::bool3  v) ;

/// @brief Method op_Explicit, addr 0x45e5994, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Explicit___Unity__Mathematics__double3(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x45e5ea4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45e5ecc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x45e5ef4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e5f1c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e5f44, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x45e5f6c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Implicit, addr 0x45e5b90, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Implicit, addr 0x45e5a1c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half  v) ;

/// @brief Method op_Implicit, addr 0x45e5a88, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::half3  v) ;

/// @brief Method op_Implicit, addr 0x45e59e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::int3  v) ;

/// @brief Method op_Implicit, addr 0x45e5a08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(::Unity::Mathematics::uint3  v) ;

/// @brief Method op_Implicit, addr 0x45e5988, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(double_t  v) ;

/// @brief Method op_Implicit, addr 0x45e5b80, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x45e59d4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x45e59f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Implicit___Unity__Mathematics__double3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x45e5d8c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Increment(::Unity::Mathematics::double3  val) ;

/// @brief Method op_Inequality, addr 0x45e6020, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Inequality, addr 0x45e6048, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x45e6070, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_LessThan, addr 0x45e5db4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_LessThan, addr 0x45e5ddc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x45e5e04, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThan(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e5e2c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e5e54, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x45e5e7c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Modulus, addr 0x45e5c70, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Modulus, addr 0x45e5cd8, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Modulus(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x45e5d34, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Modulus(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Multiply, addr 0x45e5ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Multiply, addr 0x45e5bb0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Multiply(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x45e5bc0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Multiply(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e5c08, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e5c18, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Subtraction(::Unity::Mathematics::double3  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x45e5c28, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x45e5f94, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_UnaryNegation(::Unity::Mathematics::double3  val) ;

/// @brief Method op_UnaryPlus, addr 0x45e5fa4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 op_UnaryPlus(::Unity::Mathematics::double3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double3  value) ;

/// @brief Method set_Item, addr 0x45e6838, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, double_t  value) ;

/// @brief Method set_xy, addr 0x45e67b0, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::double2  value) ;

/// @brief Method set_xyz, addr 0x45e663c, size 0xc, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::double3  value) ;

/// @brief Method set_xz, addr 0x45e67c4, size 0xc, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::double2  value) ;

/// @brief Method set_xzy, addr 0x45e6664, size 0xc, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::double3  value) ;

/// @brief Method set_yx, addr 0x45e67d8, size 0x8, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::double2  value) ;

/// @brief Method set_yxz, addr 0x45e66a4, size 0xc, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::double3  value) ;

/// @brief Method set_yz, addr 0x45e67f4, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::double2  value) ;

/// @brief Method set_yzx, addr 0x45e66e4, size 0xc, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::double3  value) ;

/// @brief Method set_zx, addr 0x45e6808, size 0xc, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::double2  value) ;

/// @brief Method set_zxy, addr 0x45e6724, size 0xc, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::double3  value) ;

/// @brief Method set_zy, addr 0x45e681c, size 0x8, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::double2  value) ;

/// @brief Method set_zyx, addr 0x45e674c, size 0xc, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::double3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double3() ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: None }]
constexpr double3(double_t  x, double_t  y, double_t  z) noexcept;

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 double_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 double_t  y;

/// @brief Field z, offset: 0x10, size: 0x8, def value: None
 double_t  z;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3, z) == 0x10, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__double3__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__double3__DebuggerProxy*, "Unity.Mathematics", "double3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3, "Unity.Mathematics", "double3");
