#pragma once
// IWYU pragma private; include "Unity/Mathematics/half3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half3)
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
class __half3__DebuggerProxy;
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
struct half2;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class __half3__DebuggerProxy;
}
namespace Unity::Mathematics {
struct half3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__half3__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::half3);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 22, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::half3::DebuggerProxy*
class CORDL_TYPE __half3__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::Unity::Mathematics::half  x;

/// @brief Field y, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) ::Unity::Mathematics::half  y;

/// @brief Field z, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) ::Unity::Mathematics::half  z;

static inline ::Unity::Mathematics::__half3__DebuggerProxy* New_ctor(::Unity::Mathematics::half3  v) ;

constexpr ::Unity::Mathematics::half const& __cordl_internal_get_x() const;

constexpr ::Unity::Mathematics::half& __cordl_internal_get_x() ;

constexpr ::Unity::Mathematics::half const& __cordl_internal_get_y() const;

constexpr ::Unity::Mathematics::half& __cordl_internal_get_y() ;

constexpr ::Unity::Mathematics::half const& __cordl_internal_get_z() const;

constexpr ::Unity::Mathematics::half& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(::Unity::Mathematics::half  value) ;

constexpr void __cordl_internal_set_y(::Unity::Mathematics::half  value) ;

constexpr void __cordl_internal_set_z(::Unity::Mathematics::half  value) ;

/// @brief Method .ctor, addr 0x4615ff0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __half3__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__half3__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__half3__DebuggerProxy(__half3__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__half3__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__half3__DebuggerProxy(__half3__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x2, def value: None
 ::Unity::Mathematics::half  ___x;

/// @brief Field y, offset: 0x12, size: 0x2, def value: None
 ::Unity::Mathematics::half  ___y;

/// @brief Field z, offset: 0x14, size: 0x2, def value: None
 ::Unity::Mathematics::half  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__half3__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half3__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half3__DebuggerProxy, ___y) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half3__DebuggerProxy, ___z) == 0x14, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::half3
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::half3
struct CORDL_TYPE half3 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__half3__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) ::Unity::Mathematics::half  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::half2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::half3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::half4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::half4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::half4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::half3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::half4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::half4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::half4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::half3  xxz;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::half4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::half4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::half4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::half2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::half3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::half4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::half4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::half4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::half3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::half4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::half4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::half4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::half3  xyz;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::half4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::half4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::half4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::half2  xz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::half3  xzx;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::half4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::half4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::half4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::half3  xzy;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::half4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::half4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::half4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::half3  xzz;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::half4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::half4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::half4  xzzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::half2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::half3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::half4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::half4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::half4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::half3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::half4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::half4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::half4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::half3  yxz;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::half4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::half4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::half4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::half2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::half3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::half4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::half4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::half4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::half3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::half4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::half4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::half4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::half3  yyz;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::half4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::half4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::half4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::half2  yz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::half3  yzx;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::half4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::half4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::half4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::half3  yzy;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::half4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::half4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::half4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::half3  yzz;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::half4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::half4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::half4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0x6 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::half3  zero;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::half2  zx;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::half3  zxx;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::half4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::half4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::half4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::half3  zxy;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::half4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::half4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::half4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::half3  zxz;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::half4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::half4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::half4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::half2  zy;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::half3  zyx;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::half4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::half4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::half4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::half3  zyy;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::half4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::half4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::half4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::half3  zyz;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::half4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::half4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::half4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::half2  zz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::half3  zzx;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::half4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::half4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::half4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::half3  zzy;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::half4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::half4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::half4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::half3  zzz;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::half4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::half4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::half4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::half3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x4615c80, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x4615c4c, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::half3  rhs) ;

/// @brief Method GetHashCode, addr 0x4615d1c, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x4615d70, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x4615e34, size 0x1bc, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x4614a48, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  v) ;

/// @brief Method .ctor, addr 0x46148f8, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  v) ;

/// @brief Method .ctor, addr 0x461487c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  v) ;

/// @brief Method .ctor, addr 0x46149d8, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x461488c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x461482c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

/// @brief Method .ctor, addr 0x461483c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz) ;

/// @brief Method .ctor, addr 0x4614850, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z) ;

/// @brief Method .ctor, addr 0x4614864, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::half3  xyz) ;

static inline ::Unity::Mathematics::half3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x4615c3c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x4615b70, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_xx() ;

/// @brief Method get_xxx, addr 0x4615870, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x4614f28, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x4614f40, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x4614f5c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x4615884, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x4614f78, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x4614f94, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x4614fb0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x461589c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xxz() ;

/// @brief Method get_xxzx, addr 0x4614fd0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x4614fec, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x461500c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xxzz() ;

/// @brief Method get_xy, addr 0x4615b7c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_xy() ;

/// @brief Method get_xyx, addr 0x46158b4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x4615028, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x4615044, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x4615060, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x46158cc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x4615080, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x461509c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x46150b8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x46158e4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xyz() ;

/// @brief Method get_xyzx, addr 0x46150d8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x46150f8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x4615118, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xyzz() ;

/// @brief Method get_xz, addr 0x4615b8c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_xz() ;

/// @brief Method get_xzx, addr 0x461590c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xzx() ;

/// @brief Method get_xzxx, addr 0x461512c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x4615148, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x4615168, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x4615924, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xzy() ;

/// @brief Method get_xzyx, addr 0x4615184, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x46151a4, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x46151c4, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x4615958, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_xzz() ;

/// @brief Method get_xzzx, addr 0x46151e4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x4615200, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x4615220, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_xzzz() ;

/// @brief Method get_yx, addr 0x4615bb0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_yx() ;

/// @brief Method get_yxx, addr 0x4615970, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x461523c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x4615258, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x4615274, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x4615988, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x4615294, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x46152b0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x46152cc, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x46159a0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yxz() ;

/// @brief Method get_yxzx, addr 0x46152ec, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x461530c, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x461532c, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yxzz() ;

/// @brief Method get_yy, addr 0x4615bd0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_yy() ;

/// @brief Method get_yyx, addr 0x46159d4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x461534c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x4615368, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x4615384, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x46159ec, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x46153a4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x46153c0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x46153d8, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x4615a00, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yyz() ;

/// @brief Method get_yyzx, addr 0x46153f4, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x4615414, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x4615430, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yyzz() ;

/// @brief Method get_yz, addr 0x4615bdc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_yz() ;

/// @brief Method get_yzx, addr 0x4615a18, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yzx() ;

/// @brief Method get_yzxx, addr 0x461544c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x4615460, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x4615480, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x4615a38, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yzy() ;

/// @brief Method get_yzyx, addr 0x46154a0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x46154c0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x46154dc, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x4615a50, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_yzz() ;

/// @brief Method get_yzzx, addr 0x46154f8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x4615518, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x4615534, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_yzzz() ;

/// @brief Method get_zx, addr 0x4615bec, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_zx() ;

/// @brief Method get_zxx, addr 0x4615a68, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zxx() ;

/// @brief Method get_zxxx, addr 0x4615550, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x461556c, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x461558c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x4615a80, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zxy() ;

/// @brief Method get_zxyx, addr 0x46155a8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x46155c8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x46155e8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x4615ab4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zxz() ;

/// @brief Method get_zxzx, addr 0x4615608, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x4615624, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x4615644, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zxzz() ;

/// @brief Method get_zy, addr 0x4615c10, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_zy() ;

/// @brief Method get_zyx, addr 0x4615acc, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zyx() ;

/// @brief Method get_zyxx, addr 0x4615660, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x4615680, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x46156a0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x4615afc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zyy() ;

/// @brief Method get_zyyx, addr 0x46156c0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x46156e0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x46156fc, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x4615b14, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zyz() ;

/// @brief Method get_zyzx, addr 0x4615718, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x4615738, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x4615754, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zyzz() ;

/// @brief Method get_zz, addr 0x4615c30, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half2 get_zz() ;

/// @brief Method get_zzx, addr 0x4615b2c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zzx() ;

/// @brief Method get_zzxx, addr 0x4615770, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x461578c, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x46157ac, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x4615b44, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zzy() ;

/// @brief Method get_zzyx, addr 0x46157c8, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x46157e8, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x4615804, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x4615b5c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half3 get_zzz() ;

/// @brief Method get_zzzx, addr 0x4615820, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x461583c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x4615858, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::half4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half3>* i___System__IEquatable_1___Unity__Mathematics__half3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0x4614e68, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::half  lhs, ::Unity::Mathematics::half3  rhs) ;

/// @brief Method op_Equality, addr 0x4614e34, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::half3  lhs, ::Unity::Mathematics::half  rhs) ;

/// @brief Method op_Equality, addr 0x4614e08, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::half3  lhs, ::Unity::Mathematics::half3  rhs) ;

/// @brief Method op_Explicit, addr 0x4614d10, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Explicit___Unity__Mathematics__half3(::Unity::Mathematics::double3  v) ;

/// @brief Method op_Explicit, addr 0x4614bb0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Explicit___Unity__Mathematics__half3(::Unity::Mathematics::float3  v) ;

/// @brief Method op_Explicit, addr 0x4614c9c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Explicit___Unity__Mathematics__half3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x4614b40, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Explicit___Unity__Mathematics__half3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x4614b2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 op_Implicit___Unity__Mathematics__half3(::Unity::Mathematics::half  v) ;

/// @brief Method op_Inequality, addr 0x4614ef8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::half  lhs, ::Unity::Mathematics::half3  rhs) ;

/// @brief Method op_Inequality, addr 0x4614ec4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::half3  lhs, ::Unity::Mathematics::half  rhs) ;

/// @brief Method op_Inequality, addr 0x4614e98, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::half3  lhs, ::Unity::Mathematics::half3  rhs) ;

static inline void setStaticF_zero(::Unity::Mathematics::half3  value) ;

/// @brief Method set_Item, addr 0x4615c44, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::Unity::Mathematics::half  value) ;

/// @brief Method set_xy, addr 0x4615b84, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::half2  value) ;

/// @brief Method set_xyz, addr 0x46158f4, size 0x18, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::half3  value) ;

/// @brief Method set_xz, addr 0x4615ba0, size 0x10, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::half2  value) ;

/// @brief Method set_xzy, addr 0x4615940, size 0x18, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::half3  value) ;

/// @brief Method set_yx, addr 0x4615bc4, size 0xc, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::half2  value) ;

/// @brief Method set_yxz, addr 0x46159bc, size 0x18, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::half3  value) ;

/// @brief Method set_yz, addr 0x4615be4, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::half2  value) ;

/// @brief Method set_yzx, addr 0x4615a28, size 0x10, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::half3  value) ;

/// @brief Method set_zx, addr 0x4615c00, size 0x10, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::half2  value) ;

/// @brief Method set_zxy, addr 0x4615a9c, size 0x18, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::half3  value) ;

/// @brief Method set_zy, addr 0x4615c24, size 0xc, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::half2  value) ;

/// @brief Method set_zyx, addr 0x4615ae8, size 0x14, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::half3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr half3() ;

// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }]
constexpr half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) noexcept;

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 ::Unity::Mathematics::half  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 ::Unity::Mathematics::half  y;

/// @brief Field z, offset: 0x4, size: 0x2, def value: None
 ::Unity::Mathematics::half  z;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x6};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::half3, 0x6>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::half3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half3, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half3, z) == 0x4, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__half3__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__half3__DebuggerProxy*, "Unity.Mathematics", "half3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half3, "Unity.Mathematics", "half3");
