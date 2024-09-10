#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4)
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
class __int4__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class __int4__DebuggerProxy;
}
namespace Unity::Mathematics {
struct int4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__int4__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::int4);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::int4::DebuggerProxy*
class CORDL_TYPE __int4__DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field w, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) int32_t  w;

/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

/// @brief Field z, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

static inline ::Unity::Mathematics::__int4__DebuggerProxy* New_ctor(::Unity::Mathematics::int4  v) ;

constexpr int32_t const& __cordl_internal_get_w() const;

constexpr int32_t& __cordl_internal_get_w() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_w(int32_t  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x462c6a4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __int4__DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__int4__DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__int4__DebuggerProxy(__int4__DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__int4__DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__int4__DebuggerProxy(__int4__DebuggerProxy const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

/// @brief Field z, offset: 0x18, size: 0x4, def value: None
 int32_t  ___z;

/// @brief Field w, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__int4__DebuggerProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int4__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int4__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int4__DebuggerProxy, ___z) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int4__DebuggerProxy, ___w) == 0x1c, "Offset mismatch!");

} // namespace end def Unity::Mathematics
// Type: Unity.Mathematics::int4
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int4
struct CORDL_TYPE int4 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::__int4__DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

 __declspec(property(get=get_ww)) ::Unity::Mathematics::int2  ww;

 __declspec(property(get=get_www)) ::Unity::Mathematics::int3  www;

 __declspec(property(get=get_wwww)) ::Unity::Mathematics::int4  wwww;

 __declspec(property(get=get_wwwx)) ::Unity::Mathematics::int4  wwwx;

 __declspec(property(get=get_wwwy)) ::Unity::Mathematics::int4  wwwy;

 __declspec(property(get=get_wwwz)) ::Unity::Mathematics::int4  wwwz;

 __declspec(property(get=get_wwx)) ::Unity::Mathematics::int3  wwx;

 __declspec(property(get=get_wwxw)) ::Unity::Mathematics::int4  wwxw;

 __declspec(property(get=get_wwxx)) ::Unity::Mathematics::int4  wwxx;

 __declspec(property(get=get_wwxy)) ::Unity::Mathematics::int4  wwxy;

 __declspec(property(get=get_wwxz)) ::Unity::Mathematics::int4  wwxz;

 __declspec(property(get=get_wwy)) ::Unity::Mathematics::int3  wwy;

 __declspec(property(get=get_wwyw)) ::Unity::Mathematics::int4  wwyw;

 __declspec(property(get=get_wwyx)) ::Unity::Mathematics::int4  wwyx;

 __declspec(property(get=get_wwyy)) ::Unity::Mathematics::int4  wwyy;

 __declspec(property(get=get_wwyz)) ::Unity::Mathematics::int4  wwyz;

 __declspec(property(get=get_wwz)) ::Unity::Mathematics::int3  wwz;

 __declspec(property(get=get_wwzw)) ::Unity::Mathematics::int4  wwzw;

 __declspec(property(get=get_wwzx)) ::Unity::Mathematics::int4  wwzx;

 __declspec(property(get=get_wwzy)) ::Unity::Mathematics::int4  wwzy;

 __declspec(property(get=get_wwzz)) ::Unity::Mathematics::int4  wwzz;

 __declspec(property(get=get_wx, put=set_wx)) ::Unity::Mathematics::int2  wx;

 __declspec(property(get=get_wxw)) ::Unity::Mathematics::int3  wxw;

 __declspec(property(get=get_wxww)) ::Unity::Mathematics::int4  wxww;

 __declspec(property(get=get_wxwx)) ::Unity::Mathematics::int4  wxwx;

 __declspec(property(get=get_wxwy)) ::Unity::Mathematics::int4  wxwy;

 __declspec(property(get=get_wxwz)) ::Unity::Mathematics::int4  wxwz;

 __declspec(property(get=get_wxx)) ::Unity::Mathematics::int3  wxx;

 __declspec(property(get=get_wxxw)) ::Unity::Mathematics::int4  wxxw;

 __declspec(property(get=get_wxxx)) ::Unity::Mathematics::int4  wxxx;

 __declspec(property(get=get_wxxy)) ::Unity::Mathematics::int4  wxxy;

 __declspec(property(get=get_wxxz)) ::Unity::Mathematics::int4  wxxz;

 __declspec(property(get=get_wxy, put=set_wxy)) ::Unity::Mathematics::int3  wxy;

 __declspec(property(get=get_wxyw)) ::Unity::Mathematics::int4  wxyw;

 __declspec(property(get=get_wxyx)) ::Unity::Mathematics::int4  wxyx;

 __declspec(property(get=get_wxyy)) ::Unity::Mathematics::int4  wxyy;

 __declspec(property(get=get_wxyz, put=set_wxyz)) ::Unity::Mathematics::int4  wxyz;

 __declspec(property(get=get_wxz, put=set_wxz)) ::Unity::Mathematics::int3  wxz;

 __declspec(property(get=get_wxzw)) ::Unity::Mathematics::int4  wxzw;

 __declspec(property(get=get_wxzx)) ::Unity::Mathematics::int4  wxzx;

 __declspec(property(get=get_wxzy, put=set_wxzy)) ::Unity::Mathematics::int4  wxzy;

 __declspec(property(get=get_wxzz)) ::Unity::Mathematics::int4  wxzz;

 __declspec(property(get=get_wy, put=set_wy)) ::Unity::Mathematics::int2  wy;

 __declspec(property(get=get_wyw)) ::Unity::Mathematics::int3  wyw;

 __declspec(property(get=get_wyww)) ::Unity::Mathematics::int4  wyww;

 __declspec(property(get=get_wywx)) ::Unity::Mathematics::int4  wywx;

 __declspec(property(get=get_wywy)) ::Unity::Mathematics::int4  wywy;

 __declspec(property(get=get_wywz)) ::Unity::Mathematics::int4  wywz;

 __declspec(property(get=get_wyx, put=set_wyx)) ::Unity::Mathematics::int3  wyx;

 __declspec(property(get=get_wyxw)) ::Unity::Mathematics::int4  wyxw;

 __declspec(property(get=get_wyxx)) ::Unity::Mathematics::int4  wyxx;

 __declspec(property(get=get_wyxy)) ::Unity::Mathematics::int4  wyxy;

 __declspec(property(get=get_wyxz, put=set_wyxz)) ::Unity::Mathematics::int4  wyxz;

 __declspec(property(get=get_wyy)) ::Unity::Mathematics::int3  wyy;

 __declspec(property(get=get_wyyw)) ::Unity::Mathematics::int4  wyyw;

 __declspec(property(get=get_wyyx)) ::Unity::Mathematics::int4  wyyx;

 __declspec(property(get=get_wyyy)) ::Unity::Mathematics::int4  wyyy;

 __declspec(property(get=get_wyyz)) ::Unity::Mathematics::int4  wyyz;

 __declspec(property(get=get_wyz, put=set_wyz)) ::Unity::Mathematics::int3  wyz;

 __declspec(property(get=get_wyzw)) ::Unity::Mathematics::int4  wyzw;

 __declspec(property(get=get_wyzx, put=set_wyzx)) ::Unity::Mathematics::int4  wyzx;

 __declspec(property(get=get_wyzy)) ::Unity::Mathematics::int4  wyzy;

 __declspec(property(get=get_wyzz)) ::Unity::Mathematics::int4  wyzz;

 __declspec(property(get=get_wz, put=set_wz)) ::Unity::Mathematics::int2  wz;

 __declspec(property(get=get_wzw)) ::Unity::Mathematics::int3  wzw;

 __declspec(property(get=get_wzww)) ::Unity::Mathematics::int4  wzww;

 __declspec(property(get=get_wzwx)) ::Unity::Mathematics::int4  wzwx;

 __declspec(property(get=get_wzwy)) ::Unity::Mathematics::int4  wzwy;

 __declspec(property(get=get_wzwz)) ::Unity::Mathematics::int4  wzwz;

 __declspec(property(get=get_wzx, put=set_wzx)) ::Unity::Mathematics::int3  wzx;

 __declspec(property(get=get_wzxw)) ::Unity::Mathematics::int4  wzxw;

 __declspec(property(get=get_wzxx)) ::Unity::Mathematics::int4  wzxx;

 __declspec(property(get=get_wzxy, put=set_wzxy)) ::Unity::Mathematics::int4  wzxy;

 __declspec(property(get=get_wzxz)) ::Unity::Mathematics::int4  wzxz;

 __declspec(property(get=get_wzy, put=set_wzy)) ::Unity::Mathematics::int3  wzy;

 __declspec(property(get=get_wzyw)) ::Unity::Mathematics::int4  wzyw;

 __declspec(property(get=get_wzyx, put=set_wzyx)) ::Unity::Mathematics::int4  wzyx;

 __declspec(property(get=get_wzyy)) ::Unity::Mathematics::int4  wzyy;

 __declspec(property(get=get_wzyz)) ::Unity::Mathematics::int4  wzyz;

 __declspec(property(get=get_wzz)) ::Unity::Mathematics::int3  wzz;

 __declspec(property(get=get_wzzw)) ::Unity::Mathematics::int4  wzzw;

 __declspec(property(get=get_wzzx)) ::Unity::Mathematics::int4  wzzx;

 __declspec(property(get=get_wzzy)) ::Unity::Mathematics::int4  wzzy;

 __declspec(property(get=get_wzzz)) ::Unity::Mathematics::int4  wzzz;

 __declspec(property(get=get_xw, put=set_xw)) ::Unity::Mathematics::int2  xw;

 __declspec(property(get=get_xww)) ::Unity::Mathematics::int3  xww;

 __declspec(property(get=get_xwww)) ::Unity::Mathematics::int4  xwww;

 __declspec(property(get=get_xwwx)) ::Unity::Mathematics::int4  xwwx;

 __declspec(property(get=get_xwwy)) ::Unity::Mathematics::int4  xwwy;

 __declspec(property(get=get_xwwz)) ::Unity::Mathematics::int4  xwwz;

 __declspec(property(get=get_xwx)) ::Unity::Mathematics::int3  xwx;

 __declspec(property(get=get_xwxw)) ::Unity::Mathematics::int4  xwxw;

 __declspec(property(get=get_xwxx)) ::Unity::Mathematics::int4  xwxx;

 __declspec(property(get=get_xwxy)) ::Unity::Mathematics::int4  xwxy;

 __declspec(property(get=get_xwxz)) ::Unity::Mathematics::int4  xwxz;

 __declspec(property(get=get_xwy, put=set_xwy)) ::Unity::Mathematics::int3  xwy;

 __declspec(property(get=get_xwyw)) ::Unity::Mathematics::int4  xwyw;

 __declspec(property(get=get_xwyx)) ::Unity::Mathematics::int4  xwyx;

 __declspec(property(get=get_xwyy)) ::Unity::Mathematics::int4  xwyy;

 __declspec(property(get=get_xwyz, put=set_xwyz)) ::Unity::Mathematics::int4  xwyz;

 __declspec(property(get=get_xwz, put=set_xwz)) ::Unity::Mathematics::int3  xwz;

 __declspec(property(get=get_xwzw)) ::Unity::Mathematics::int4  xwzw;

 __declspec(property(get=get_xwzx)) ::Unity::Mathematics::int4  xwzx;

 __declspec(property(get=get_xwzy, put=set_xwzy)) ::Unity::Mathematics::int4  xwzy;

 __declspec(property(get=get_xwzz)) ::Unity::Mathematics::int4  xwzz;

 __declspec(property(get=get_xx)) ::Unity::Mathematics::int2  xx;

 __declspec(property(get=get_xxw)) ::Unity::Mathematics::int3  xxw;

 __declspec(property(get=get_xxww)) ::Unity::Mathematics::int4  xxww;

 __declspec(property(get=get_xxwx)) ::Unity::Mathematics::int4  xxwx;

 __declspec(property(get=get_xxwy)) ::Unity::Mathematics::int4  xxwy;

 __declspec(property(get=get_xxwz)) ::Unity::Mathematics::int4  xxwz;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::int3  xxx;

 __declspec(property(get=get_xxxw)) ::Unity::Mathematics::int4  xxxw;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::int4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::int4  xxxy;

 __declspec(property(get=get_xxxz)) ::Unity::Mathematics::int4  xxxz;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::int3  xxy;

 __declspec(property(get=get_xxyw)) ::Unity::Mathematics::int4  xxyw;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::int4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::int4  xxyy;

 __declspec(property(get=get_xxyz)) ::Unity::Mathematics::int4  xxyz;

 __declspec(property(get=get_xxz)) ::Unity::Mathematics::int3  xxz;

 __declspec(property(get=get_xxzw)) ::Unity::Mathematics::int4  xxzw;

 __declspec(property(get=get_xxzx)) ::Unity::Mathematics::int4  xxzx;

 __declspec(property(get=get_xxzy)) ::Unity::Mathematics::int4  xxzy;

 __declspec(property(get=get_xxzz)) ::Unity::Mathematics::int4  xxzz;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::int2  xy;

 __declspec(property(get=get_xyw, put=set_xyw)) ::Unity::Mathematics::int3  xyw;

 __declspec(property(get=get_xyww)) ::Unity::Mathematics::int4  xyww;

 __declspec(property(get=get_xywx)) ::Unity::Mathematics::int4  xywx;

 __declspec(property(get=get_xywy)) ::Unity::Mathematics::int4  xywy;

 __declspec(property(get=get_xywz, put=set_xywz)) ::Unity::Mathematics::int4  xywz;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::int3  xyx;

 __declspec(property(get=get_xyxw)) ::Unity::Mathematics::int4  xyxw;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::int4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::int4  xyxy;

 __declspec(property(get=get_xyxz)) ::Unity::Mathematics::int4  xyxz;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::int3  xyy;

 __declspec(property(get=get_xyyw)) ::Unity::Mathematics::int4  xyyw;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::int4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::int4  xyyy;

 __declspec(property(get=get_xyyz)) ::Unity::Mathematics::int4  xyyz;

 __declspec(property(get=get_xyz, put=set_xyz)) ::Unity::Mathematics::int3  xyz;

 __declspec(property(get=get_xyzw, put=set_xyzw)) ::Unity::Mathematics::int4  xyzw;

 __declspec(property(get=get_xyzx)) ::Unity::Mathematics::int4  xyzx;

 __declspec(property(get=get_xyzy)) ::Unity::Mathematics::int4  xyzy;

 __declspec(property(get=get_xyzz)) ::Unity::Mathematics::int4  xyzz;

 __declspec(property(get=get_xz, put=set_xz)) ::Unity::Mathematics::int2  xz;

 __declspec(property(get=get_xzw, put=set_xzw)) ::Unity::Mathematics::int3  xzw;

 __declspec(property(get=get_xzww)) ::Unity::Mathematics::int4  xzww;

 __declspec(property(get=get_xzwx)) ::Unity::Mathematics::int4  xzwx;

 __declspec(property(get=get_xzwy, put=set_xzwy)) ::Unity::Mathematics::int4  xzwy;

 __declspec(property(get=get_xzwz)) ::Unity::Mathematics::int4  xzwz;

 __declspec(property(get=get_xzx)) ::Unity::Mathematics::int3  xzx;

 __declspec(property(get=get_xzxw)) ::Unity::Mathematics::int4  xzxw;

 __declspec(property(get=get_xzxx)) ::Unity::Mathematics::int4  xzxx;

 __declspec(property(get=get_xzxy)) ::Unity::Mathematics::int4  xzxy;

 __declspec(property(get=get_xzxz)) ::Unity::Mathematics::int4  xzxz;

 __declspec(property(get=get_xzy, put=set_xzy)) ::Unity::Mathematics::int3  xzy;

 __declspec(property(get=get_xzyw, put=set_xzyw)) ::Unity::Mathematics::int4  xzyw;

 __declspec(property(get=get_xzyx)) ::Unity::Mathematics::int4  xzyx;

 __declspec(property(get=get_xzyy)) ::Unity::Mathematics::int4  xzyy;

 __declspec(property(get=get_xzyz)) ::Unity::Mathematics::int4  xzyz;

 __declspec(property(get=get_xzz)) ::Unity::Mathematics::int3  xzz;

 __declspec(property(get=get_xzzw)) ::Unity::Mathematics::int4  xzzw;

 __declspec(property(get=get_xzzx)) ::Unity::Mathematics::int4  xzzx;

 __declspec(property(get=get_xzzy)) ::Unity::Mathematics::int4  xzzy;

 __declspec(property(get=get_xzzz)) ::Unity::Mathematics::int4  xzzz;

 __declspec(property(get=get_yw, put=set_yw)) ::Unity::Mathematics::int2  yw;

 __declspec(property(get=get_yww)) ::Unity::Mathematics::int3  yww;

 __declspec(property(get=get_ywww)) ::Unity::Mathematics::int4  ywww;

 __declspec(property(get=get_ywwx)) ::Unity::Mathematics::int4  ywwx;

 __declspec(property(get=get_ywwy)) ::Unity::Mathematics::int4  ywwy;

 __declspec(property(get=get_ywwz)) ::Unity::Mathematics::int4  ywwz;

 __declspec(property(get=get_ywx, put=set_ywx)) ::Unity::Mathematics::int3  ywx;

 __declspec(property(get=get_ywxw)) ::Unity::Mathematics::int4  ywxw;

 __declspec(property(get=get_ywxx)) ::Unity::Mathematics::int4  ywxx;

 __declspec(property(get=get_ywxy)) ::Unity::Mathematics::int4  ywxy;

 __declspec(property(get=get_ywxz, put=set_ywxz)) ::Unity::Mathematics::int4  ywxz;

 __declspec(property(get=get_ywy)) ::Unity::Mathematics::int3  ywy;

 __declspec(property(get=get_ywyw)) ::Unity::Mathematics::int4  ywyw;

 __declspec(property(get=get_ywyx)) ::Unity::Mathematics::int4  ywyx;

 __declspec(property(get=get_ywyy)) ::Unity::Mathematics::int4  ywyy;

 __declspec(property(get=get_ywyz)) ::Unity::Mathematics::int4  ywyz;

 __declspec(property(get=get_ywz, put=set_ywz)) ::Unity::Mathematics::int3  ywz;

 __declspec(property(get=get_ywzw)) ::Unity::Mathematics::int4  ywzw;

 __declspec(property(get=get_ywzx, put=set_ywzx)) ::Unity::Mathematics::int4  ywzx;

 __declspec(property(get=get_ywzy)) ::Unity::Mathematics::int4  ywzy;

 __declspec(property(get=get_ywzz)) ::Unity::Mathematics::int4  ywzz;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::int2  yx;

 __declspec(property(get=get_yxw, put=set_yxw)) ::Unity::Mathematics::int3  yxw;

 __declspec(property(get=get_yxww)) ::Unity::Mathematics::int4  yxww;

 __declspec(property(get=get_yxwx)) ::Unity::Mathematics::int4  yxwx;

 __declspec(property(get=get_yxwy)) ::Unity::Mathematics::int4  yxwy;

 __declspec(property(get=get_yxwz, put=set_yxwz)) ::Unity::Mathematics::int4  yxwz;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::int3  yxx;

 __declspec(property(get=get_yxxw)) ::Unity::Mathematics::int4  yxxw;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::int4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::int4  yxxy;

 __declspec(property(get=get_yxxz)) ::Unity::Mathematics::int4  yxxz;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::int3  yxy;

 __declspec(property(get=get_yxyw)) ::Unity::Mathematics::int4  yxyw;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::int4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::int4  yxyy;

 __declspec(property(get=get_yxyz)) ::Unity::Mathematics::int4  yxyz;

 __declspec(property(get=get_yxz, put=set_yxz)) ::Unity::Mathematics::int3  yxz;

 __declspec(property(get=get_yxzw, put=set_yxzw)) ::Unity::Mathematics::int4  yxzw;

 __declspec(property(get=get_yxzx)) ::Unity::Mathematics::int4  yxzx;

 __declspec(property(get=get_yxzy)) ::Unity::Mathematics::int4  yxzy;

 __declspec(property(get=get_yxzz)) ::Unity::Mathematics::int4  yxzz;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::int2  yy;

 __declspec(property(get=get_yyw)) ::Unity::Mathematics::int3  yyw;

 __declspec(property(get=get_yyww)) ::Unity::Mathematics::int4  yyww;

 __declspec(property(get=get_yywx)) ::Unity::Mathematics::int4  yywx;

 __declspec(property(get=get_yywy)) ::Unity::Mathematics::int4  yywy;

 __declspec(property(get=get_yywz)) ::Unity::Mathematics::int4  yywz;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::int3  yyx;

 __declspec(property(get=get_yyxw)) ::Unity::Mathematics::int4  yyxw;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::int4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::int4  yyxy;

 __declspec(property(get=get_yyxz)) ::Unity::Mathematics::int4  yyxz;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::int3  yyy;

 __declspec(property(get=get_yyyw)) ::Unity::Mathematics::int4  yyyw;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::int4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::int4  yyyy;

 __declspec(property(get=get_yyyz)) ::Unity::Mathematics::int4  yyyz;

 __declspec(property(get=get_yyz)) ::Unity::Mathematics::int3  yyz;

 __declspec(property(get=get_yyzw)) ::Unity::Mathematics::int4  yyzw;

 __declspec(property(get=get_yyzx)) ::Unity::Mathematics::int4  yyzx;

 __declspec(property(get=get_yyzy)) ::Unity::Mathematics::int4  yyzy;

 __declspec(property(get=get_yyzz)) ::Unity::Mathematics::int4  yyzz;

 __declspec(property(get=get_yz, put=set_yz)) ::Unity::Mathematics::int2  yz;

 __declspec(property(get=get_yzw, put=set_yzw)) ::Unity::Mathematics::int3  yzw;

 __declspec(property(get=get_yzww)) ::Unity::Mathematics::int4  yzww;

 __declspec(property(get=get_yzwx, put=set_yzwx)) ::Unity::Mathematics::int4  yzwx;

 __declspec(property(get=get_yzwy)) ::Unity::Mathematics::int4  yzwy;

 __declspec(property(get=get_yzwz)) ::Unity::Mathematics::int4  yzwz;

 __declspec(property(get=get_yzx, put=set_yzx)) ::Unity::Mathematics::int3  yzx;

 __declspec(property(get=get_yzxw, put=set_yzxw)) ::Unity::Mathematics::int4  yzxw;

 __declspec(property(get=get_yzxx)) ::Unity::Mathematics::int4  yzxx;

 __declspec(property(get=get_yzxy)) ::Unity::Mathematics::int4  yzxy;

 __declspec(property(get=get_yzxz)) ::Unity::Mathematics::int4  yzxz;

 __declspec(property(get=get_yzy)) ::Unity::Mathematics::int3  yzy;

 __declspec(property(get=get_yzyw)) ::Unity::Mathematics::int4  yzyw;

 __declspec(property(get=get_yzyx)) ::Unity::Mathematics::int4  yzyx;

 __declspec(property(get=get_yzyy)) ::Unity::Mathematics::int4  yzyy;

 __declspec(property(get=get_yzyz)) ::Unity::Mathematics::int4  yzyz;

 __declspec(property(get=get_yzz)) ::Unity::Mathematics::int3  yzz;

 __declspec(property(get=get_yzzw)) ::Unity::Mathematics::int4  yzzw;

 __declspec(property(get=get_yzzx)) ::Unity::Mathematics::int4  yzzx;

 __declspec(property(get=get_yzzy)) ::Unity::Mathematics::int4  yzzy;

 __declspec(property(get=get_yzzz)) ::Unity::Mathematics::int4  yzzz;

/// @brief Field zero, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int4  zero;

 __declspec(property(get=get_zw, put=set_zw)) ::Unity::Mathematics::int2  zw;

 __declspec(property(get=get_zww)) ::Unity::Mathematics::int3  zww;

 __declspec(property(get=get_zwww)) ::Unity::Mathematics::int4  zwww;

 __declspec(property(get=get_zwwx)) ::Unity::Mathematics::int4  zwwx;

 __declspec(property(get=get_zwwy)) ::Unity::Mathematics::int4  zwwy;

 __declspec(property(get=get_zwwz)) ::Unity::Mathematics::int4  zwwz;

 __declspec(property(get=get_zwx, put=set_zwx)) ::Unity::Mathematics::int3  zwx;

 __declspec(property(get=get_zwxw)) ::Unity::Mathematics::int4  zwxw;

 __declspec(property(get=get_zwxx)) ::Unity::Mathematics::int4  zwxx;

 __declspec(property(get=get_zwxy, put=set_zwxy)) ::Unity::Mathematics::int4  zwxy;

 __declspec(property(get=get_zwxz)) ::Unity::Mathematics::int4  zwxz;

 __declspec(property(get=get_zwy, put=set_zwy)) ::Unity::Mathematics::int3  zwy;

 __declspec(property(get=get_zwyw)) ::Unity::Mathematics::int4  zwyw;

 __declspec(property(get=get_zwyx, put=set_zwyx)) ::Unity::Mathematics::int4  zwyx;

 __declspec(property(get=get_zwyy)) ::Unity::Mathematics::int4  zwyy;

 __declspec(property(get=get_zwyz)) ::Unity::Mathematics::int4  zwyz;

 __declspec(property(get=get_zwz)) ::Unity::Mathematics::int3  zwz;

 __declspec(property(get=get_zwzw)) ::Unity::Mathematics::int4  zwzw;

 __declspec(property(get=get_zwzx)) ::Unity::Mathematics::int4  zwzx;

 __declspec(property(get=get_zwzy)) ::Unity::Mathematics::int4  zwzy;

 __declspec(property(get=get_zwzz)) ::Unity::Mathematics::int4  zwzz;

 __declspec(property(get=get_zx, put=set_zx)) ::Unity::Mathematics::int2  zx;

 __declspec(property(get=get_zxw, put=set_zxw)) ::Unity::Mathematics::int3  zxw;

 __declspec(property(get=get_zxww)) ::Unity::Mathematics::int4  zxww;

 __declspec(property(get=get_zxwx)) ::Unity::Mathematics::int4  zxwx;

 __declspec(property(get=get_zxwy, put=set_zxwy)) ::Unity::Mathematics::int4  zxwy;

 __declspec(property(get=get_zxwz)) ::Unity::Mathematics::int4  zxwz;

 __declspec(property(get=get_zxx)) ::Unity::Mathematics::int3  zxx;

 __declspec(property(get=get_zxxw)) ::Unity::Mathematics::int4  zxxw;

 __declspec(property(get=get_zxxx)) ::Unity::Mathematics::int4  zxxx;

 __declspec(property(get=get_zxxy)) ::Unity::Mathematics::int4  zxxy;

 __declspec(property(get=get_zxxz)) ::Unity::Mathematics::int4  zxxz;

 __declspec(property(get=get_zxy, put=set_zxy)) ::Unity::Mathematics::int3  zxy;

 __declspec(property(get=get_zxyw, put=set_zxyw)) ::Unity::Mathematics::int4  zxyw;

 __declspec(property(get=get_zxyx)) ::Unity::Mathematics::int4  zxyx;

 __declspec(property(get=get_zxyy)) ::Unity::Mathematics::int4  zxyy;

 __declspec(property(get=get_zxyz)) ::Unity::Mathematics::int4  zxyz;

 __declspec(property(get=get_zxz)) ::Unity::Mathematics::int3  zxz;

 __declspec(property(get=get_zxzw)) ::Unity::Mathematics::int4  zxzw;

 __declspec(property(get=get_zxzx)) ::Unity::Mathematics::int4  zxzx;

 __declspec(property(get=get_zxzy)) ::Unity::Mathematics::int4  zxzy;

 __declspec(property(get=get_zxzz)) ::Unity::Mathematics::int4  zxzz;

 __declspec(property(get=get_zy, put=set_zy)) ::Unity::Mathematics::int2  zy;

 __declspec(property(get=get_zyw, put=set_zyw)) ::Unity::Mathematics::int3  zyw;

 __declspec(property(get=get_zyww)) ::Unity::Mathematics::int4  zyww;

 __declspec(property(get=get_zywx, put=set_zywx)) ::Unity::Mathematics::int4  zywx;

 __declspec(property(get=get_zywy)) ::Unity::Mathematics::int4  zywy;

 __declspec(property(get=get_zywz)) ::Unity::Mathematics::int4  zywz;

 __declspec(property(get=get_zyx, put=set_zyx)) ::Unity::Mathematics::int3  zyx;

 __declspec(property(get=get_zyxw, put=set_zyxw)) ::Unity::Mathematics::int4  zyxw;

 __declspec(property(get=get_zyxx)) ::Unity::Mathematics::int4  zyxx;

 __declspec(property(get=get_zyxy)) ::Unity::Mathematics::int4  zyxy;

 __declspec(property(get=get_zyxz)) ::Unity::Mathematics::int4  zyxz;

 __declspec(property(get=get_zyy)) ::Unity::Mathematics::int3  zyy;

 __declspec(property(get=get_zyyw)) ::Unity::Mathematics::int4  zyyw;

 __declspec(property(get=get_zyyx)) ::Unity::Mathematics::int4  zyyx;

 __declspec(property(get=get_zyyy)) ::Unity::Mathematics::int4  zyyy;

 __declspec(property(get=get_zyyz)) ::Unity::Mathematics::int4  zyyz;

 __declspec(property(get=get_zyz)) ::Unity::Mathematics::int3  zyz;

 __declspec(property(get=get_zyzw)) ::Unity::Mathematics::int4  zyzw;

 __declspec(property(get=get_zyzx)) ::Unity::Mathematics::int4  zyzx;

 __declspec(property(get=get_zyzy)) ::Unity::Mathematics::int4  zyzy;

 __declspec(property(get=get_zyzz)) ::Unity::Mathematics::int4  zyzz;

 __declspec(property(get=get_zz)) ::Unity::Mathematics::int2  zz;

 __declspec(property(get=get_zzw)) ::Unity::Mathematics::int3  zzw;

 __declspec(property(get=get_zzww)) ::Unity::Mathematics::int4  zzww;

 __declspec(property(get=get_zzwx)) ::Unity::Mathematics::int4  zzwx;

 __declspec(property(get=get_zzwy)) ::Unity::Mathematics::int4  zzwy;

 __declspec(property(get=get_zzwz)) ::Unity::Mathematics::int4  zzwz;

 __declspec(property(get=get_zzx)) ::Unity::Mathematics::int3  zzx;

 __declspec(property(get=get_zzxw)) ::Unity::Mathematics::int4  zzxw;

 __declspec(property(get=get_zzxx)) ::Unity::Mathematics::int4  zzxx;

 __declspec(property(get=get_zzxy)) ::Unity::Mathematics::int4  zzxy;

 __declspec(property(get=get_zzxz)) ::Unity::Mathematics::int4  zzxz;

 __declspec(property(get=get_zzy)) ::Unity::Mathematics::int3  zzy;

 __declspec(property(get=get_zzyw)) ::Unity::Mathematics::int4  zzyw;

 __declspec(property(get=get_zzyx)) ::Unity::Mathematics::int4  zzyx;

 __declspec(property(get=get_zzyy)) ::Unity::Mathematics::int4  zzyy;

 __declspec(property(get=get_zzyz)) ::Unity::Mathematics::int4  zzyz;

 __declspec(property(get=get_zzz)) ::Unity::Mathematics::int3  zzz;

 __declspec(property(get=get_zzzw)) ::Unity::Mathematics::int4  zzzw;

 __declspec(property(get=get_zzzx)) ::Unity::Mathematics::int4  zzzx;

 __declspec(property(get=get_zzzy)) ::Unity::Mathematics::int4  zzzy;

 __declspec(property(get=get_zzzz)) ::Unity::Mathematics::int4  zzzz;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x462a8a0, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x462a85c, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int4  rhs) ;

/// @brief Method GetHashCode, addr 0x462a948, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x462a9a4, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x462ab50, size 0x1b54, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x4627dac, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4  v) ;

/// @brief Method .ctor, addr 0x4627e94, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4  v) ;

/// @brief Method .ctor, addr 0x4627e28, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  v) ;

/// @brief Method .ctor, addr 0x4627df0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4  v) ;

/// @brief Method .ctor, addr 0x4627d9c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x4627e70, size 0x24, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x4627e04, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x4627d90, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x4627de4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x4627d0c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method .ctor, addr 0x4627d18, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, ::Unity::Mathematics::int2  zw) ;

/// @brief Method .ctor, addr 0x4627d28, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, ::Unity::Mathematics::int2  yz, int32_t  w) ;

/// @brief Method .ctor, addr 0x4627d38, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

/// @brief Method .ctor, addr 0x4627d48, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  xy, int32_t  z, int32_t  w) ;

/// @brief Method .ctor, addr 0x4627d58, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  xy, ::Unity::Mathematics::int2  zw) ;

/// @brief Method .ctor, addr 0x4627d6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3  xyz, int32_t  w) ;

/// @brief Method .ctor, addr 0x4627d7c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  xyzw) ;

static inline ::Unity::Mathematics::int4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x462a84c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_ww, addr 0x462a840, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_ww() ;

/// @brief Method get_www, addr 0x462a6b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_www() ;

/// @brief Method get_wwww, addr 0x462a0c4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwww() ;

/// @brief Method get_wwwx, addr 0x462a074, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwwx() ;

/// @brief Method get_wwwy, addr 0x462a090, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwwy() ;

/// @brief Method get_wwwz, addr 0x462a0ac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwwz() ;

/// @brief Method get_wwx, addr 0x462a678, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wwx() ;

/// @brief Method get_wwxw, addr 0x4629fbc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwxw() ;

/// @brief Method get_wwxx, addr 0x4629f80, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwxx() ;

/// @brief Method get_wwxy, addr 0x4629f94, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwxy() ;

/// @brief Method get_wwxz, addr 0x4629fa8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwxz() ;

/// @brief Method get_wwy, addr 0x462a68c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wwy() ;

/// @brief Method get_wwyw, addr 0x462a010, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwyw() ;

/// @brief Method get_wwyx, addr 0x4629fd4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwyx() ;

/// @brief Method get_wwyy, addr 0x4629fe8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwyy() ;

/// @brief Method get_wwyz, addr 0x4629ffc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwyz() ;

/// @brief Method get_wwz, addr 0x462a6a0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wwz() ;

/// @brief Method get_wwzw, addr 0x462a060, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwzw() ;

/// @brief Method get_wwzx, addr 0x462a028, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwzx() ;

/// @brief Method get_wwzy, addr 0x462a03c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwzy() ;

/// @brief Method get_wwzz, addr 0x462a050, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wwzz() ;

/// @brief Method get_wx, addr 0x462a7dc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_wx() ;

/// @brief Method get_wxw, addr 0x462a58c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wxw() ;

/// @brief Method get_wxww, addr 0x4629c28, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxww() ;

/// @brief Method get_wxwx, addr 0x4629bdc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxwx() ;

/// @brief Method get_wxwy, addr 0x4629bf0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxwy() ;

/// @brief Method get_wxwz, addr 0x4629c0c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxwz() ;

/// @brief Method get_wxx, addr 0x462a530, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wxx() ;

/// @brief Method get_wxxw, addr 0x4629ae4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxxw() ;

/// @brief Method get_wxxx, addr 0x4629a9c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxxx() ;

/// @brief Method get_wxxy, addr 0x4629ab4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxxy() ;

/// @brief Method get_wxxz, addr 0x4629acc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxxz() ;

/// @brief Method get_wxy, addr 0x462a544, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wxy() ;

/// @brief Method get_wxyw, addr 0x4629b54, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxyw() ;

/// @brief Method get_wxyx, addr 0x4629afc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxyx() ;

/// @brief Method get_wxyy, addr 0x4629b10, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxyy() ;

/// @brief Method get_wxyz, addr 0x4629b28, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxyz() ;

/// @brief Method get_wxz, addr 0x462a568, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wxz() ;

/// @brief Method get_wxzw, addr 0x4629bc4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxzw() ;

/// @brief Method get_wxzx, addr 0x4629b6c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxzx() ;

/// @brief Method get_wxzy, addr 0x4629b80, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxzy() ;

/// @brief Method get_wxzz, addr 0x4629bac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wxzz() ;

/// @brief Method get_wy, addr 0x462a800, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_wy() ;

/// @brief Method get_wyw, addr 0x462a5fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wyw() ;

/// @brief Method get_wyww, addr 0x4629dd0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyww() ;

/// @brief Method get_wywx, addr 0x4629d84, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wywx() ;

/// @brief Method get_wywy, addr 0x4629da0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wywy() ;

/// @brief Method get_wywz, addr 0x4629db4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wywz() ;

/// @brief Method get_wyx, addr 0x462a5a0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wyx() ;

/// @brief Method get_wyxw, addr 0x4629c9c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyxw() ;

/// @brief Method get_wyxx, addr 0x4629c44, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyxx() ;

/// @brief Method get_wyxy, addr 0x4629c5c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyxy() ;

/// @brief Method get_wyxz, addr 0x4629c70, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyxz() ;

/// @brief Method get_wyy, addr 0x462a5c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wyy() ;

/// @brief Method get_wyyw, addr 0x4629cfc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyyw() ;

/// @brief Method get_wyyx, addr 0x4629cb4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyyx() ;

/// @brief Method get_wyyy, addr 0x4629ccc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyyy() ;

/// @brief Method get_wyyz, addr 0x4629ce4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyyz() ;

/// @brief Method get_wyz, addr 0x462a5d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wyz() ;

/// @brief Method get_wyzw, addr 0x4629d6c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyzw() ;

/// @brief Method get_wyzx, addr 0x4629d14, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyzx() ;

/// @brief Method get_wyzy, addr 0x4629d40, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyzy() ;

/// @brief Method get_wyzz, addr 0x4629d54, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wyzz() ;

/// @brief Method get_wz, addr 0x462a824, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_wz() ;

/// @brief Method get_wzw, addr 0x462a668, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wzw() ;

/// @brief Method get_wzww, addr 0x4629f68, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzww() ;

/// @brief Method get_wzwx, addr 0x4629f20, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzwx() ;

/// @brief Method get_wzwy, addr 0x4629f3c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzwy() ;

/// @brief Method get_wzwz, addr 0x4629f58, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzwz() ;

/// @brief Method get_wzx, addr 0x462a610, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wzx() ;

/// @brief Method get_wzxw, addr 0x4629e40, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzxw() ;

/// @brief Method get_wzxx, addr 0x4629dec, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzxx() ;

/// @brief Method get_wzxy, addr 0x4629e04, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzxy() ;

/// @brief Method get_wzxz, addr 0x4629e2c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzxz() ;

/// @brief Method get_wzy, addr 0x462a634, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wzy() ;

/// @brief Method get_wzyw, addr 0x4629eb0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzyw() ;

/// @brief Method get_wzyx, addr 0x4629e58, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzyx() ;

/// @brief Method get_wzyy, addr 0x4629e84, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzyy() ;

/// @brief Method get_wzyz, addr 0x4629e9c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzyz() ;

/// @brief Method get_wzz, addr 0x462a658, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_wzz() ;

/// @brief Method get_wzzw, addr 0x4629f0c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzzw() ;

/// @brief Method get_wzzx, addr 0x4629ec8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzzx() ;

/// @brief Method get_wzzy, addr 0x4629ee0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzzy() ;

/// @brief Method get_wzzz, addr 0x4629ef8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_wzzz() ;

/// @brief Method get_xw, addr 0x462a700, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xw() ;

/// @brief Method get_xww, addr 0x462a240, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xww() ;

/// @brief Method get_xwww, addr 0x4628e94, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwww() ;

/// @brief Method get_xwwx, addr 0x4628e4c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwwx() ;

/// @brief Method get_xwwy, addr 0x4628e64, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwwy() ;

/// @brief Method get_xwwz, addr 0x4628e7c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwwz() ;

/// @brief Method get_xwx, addr 0x462a1e4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xwx() ;

/// @brief Method get_xwxw, addr 0x4628d58, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwxw() ;

/// @brief Method get_xwxx, addr 0x4628d04, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwxx() ;

/// @brief Method get_xwxy, addr 0x4628d20, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwxy() ;

/// @brief Method get_xwxz, addr 0x4628d3c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwxz() ;

/// @brief Method get_xwy, addr 0x462a1f8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xwy() ;

/// @brief Method get_xwyw, addr 0x4628dc8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwyw() ;

/// @brief Method get_xwyx, addr 0x4628d6c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwyx() ;

/// @brief Method get_xwyy, addr 0x4628d84, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwyy() ;

/// @brief Method get_xwyz, addr 0x4628d9c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwyz() ;

/// @brief Method get_xwz, addr 0x462a21c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xwz() ;

/// @brief Method get_xwzw, addr 0x4628e38, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwzw() ;

/// @brief Method get_xwzx, addr 0x4628ddc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwzx() ;

/// @brief Method get_xwzy, addr 0x4628df4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwzy() ;

/// @brief Method get_xwzz, addr 0x4628e20, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xwzz() ;

/// @brief Method get_xx, addr 0x462a6c0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xx() ;

/// @brief Method get_xxw, addr 0x462a108, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxw() ;

/// @brief Method get_xxww, addr 0x46289dc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxww() ;

/// @brief Method get_xxwx, addr 0x462899c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxwx() ;

/// @brief Method get_xxwy, addr 0x46289b4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxwy() ;

/// @brief Method get_xxwz, addr 0x46289c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxwz() ;

/// @brief Method get_xxx, addr 0x462a0d4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxx() ;

/// @brief Method get_xxxw, addr 0x46288e0, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxw() ;

/// @brief Method get_xxxx, addr 0x462889c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x46288ac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxy() ;

/// @brief Method get_xxxz, addr 0x46288c4, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxxz() ;

/// @brief Method get_xxy, addr 0x462a0e4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxy() ;

/// @brief Method get_xxyw, addr 0x4628934, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyw() ;

/// @brief Method get_xxyx, addr 0x46288fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x4628910, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyy() ;

/// @brief Method get_xxyz, addr 0x4628920, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxyz() ;

/// @brief Method get_xxz, addr 0x462a0f4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xxz() ;

/// @brief Method get_xxzw, addr 0x4628988, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzw() ;

/// @brief Method get_xxzx, addr 0x4628948, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzx() ;

/// @brief Method get_xxzy, addr 0x4628960, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzy() ;

/// @brief Method get_xxzz, addr 0x4628974, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xxzz() ;

/// @brief Method get_xy, addr 0x462a6cc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xy() ;

/// @brief Method get_xyw, addr 0x462a158, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyw() ;

/// @brief Method get_xyww, addr 0x4628b4c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyww() ;

/// @brief Method get_xywx, addr 0x4628afc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xywx() ;

/// @brief Method get_xywy, addr 0x4628b14, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xywy() ;

/// @brief Method get_xywz, addr 0x4628b28, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xywz() ;

/// @brief Method get_xyx, addr 0x462a11c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyx() ;

/// @brief Method get_xyxw, addr 0x4628a30, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxw() ;

/// @brief Method get_xyxx, addr 0x46289f0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x4628a08, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxy() ;

/// @brief Method get_xyxz, addr 0x4628a14, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyxz() ;

/// @brief Method get_xyy, addr 0x462a12c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyy() ;

/// @brief Method get_xyyw, addr 0x4628a8c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyw() ;

/// @brief Method get_xyyx, addr 0x4628a4c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x4628a60, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyy() ;

/// @brief Method get_xyyz, addr 0x4628a74, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyyz() ;

/// @brief Method get_xyz, addr 0x462a13c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xyz() ;

/// @brief Method get_xyzw, addr 0x4628ae0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzw() ;

/// @brief Method get_xyzx, addr 0x4628aa4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzx() ;

/// @brief Method get_xyzy, addr 0x4628abc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzy() ;

/// @brief Method get_xyzz, addr 0x4628ad0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xyzz() ;

/// @brief Method get_xz, addr 0x462a6dc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_xz() ;

/// @brief Method get_xzw, addr 0x462a1c0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzw() ;

/// @brief Method get_xzww, addr 0x4628cec, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzww() ;

/// @brief Method get_xzwx, addr 0x4628c94, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzwx() ;

/// @brief Method get_xzwy, addr 0x4628cac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzwy() ;

/// @brief Method get_xzwz, addr 0x4628cd8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzwz() ;

/// @brief Method get_xzx, addr 0x462a174, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzx() ;

/// @brief Method get_xzxw, addr 0x4628ba8, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxw() ;

/// @brief Method get_xzxx, addr 0x4628b5c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxx() ;

/// @brief Method get_xzxy, addr 0x4628b78, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxy() ;

/// @brief Method get_xzxz, addr 0x4628b94, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzxz() ;

/// @brief Method get_xzy, addr 0x462a188, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzy() ;

/// @brief Method get_xzyw, addr 0x4628c08, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyw() ;

/// @brief Method get_xzyx, addr 0x4628bc4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyx() ;

/// @brief Method get_xzyy, addr 0x4628bdc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyy() ;

/// @brief Method get_xzyz, addr 0x4628bf4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzyz() ;

/// @brief Method get_xzz, addr 0x462a1ac, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_xzz() ;

/// @brief Method get_xzzw, addr 0x4628c7c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzw() ;

/// @brief Method get_xzzx, addr 0x4628c34, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzx() ;

/// @brief Method get_xzzy, addr 0x4628c4c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzy() ;

/// @brief Method get_xzzz, addr 0x4628c64, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_xzzz() ;

/// @brief Method get_yw, addr 0x462a75c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yw() ;

/// @brief Method get_yww, addr 0x462a3b0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yww() ;

/// @brief Method get_ywww, addr 0x4629494, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywww() ;

/// @brief Method get_ywwx, addr 0x462944c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywwx() ;

/// @brief Method get_ywwy, addr 0x4629464, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywwy() ;

/// @brief Method get_ywwz, addr 0x462947c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywwz() ;

/// @brief Method get_ywx, addr 0x462a354, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_ywx() ;

/// @brief Method get_ywxw, addr 0x4629360, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywxw() ;

/// @brief Method get_ywxx, addr 0x4629304, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywxx() ;

/// @brief Method get_ywxy, addr 0x462931c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywxy() ;

/// @brief Method get_ywxz, addr 0x4629334, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywxz() ;

/// @brief Method get_ywy, addr 0x462a378, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_ywy() ;

/// @brief Method get_ywyw, addr 0x46293c8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywyw() ;

/// @brief Method get_ywyx, addr 0x4629374, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywyx() ;

/// @brief Method get_ywyy, addr 0x4629390, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywyy() ;

/// @brief Method get_ywyz, addr 0x46293ac, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywyz() ;

/// @brief Method get_ywz, addr 0x462a38c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_ywz() ;

/// @brief Method get_ywzw, addr 0x4629438, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywzw() ;

/// @brief Method get_ywzx, addr 0x46293dc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywzx() ;

/// @brief Method get_ywzy, addr 0x4629408, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywzy() ;

/// @brief Method get_ywzz, addr 0x4629420, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_ywzz() ;

/// @brief Method get_yx, addr 0x462a724, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yx() ;

/// @brief Method get_yxw, addr 0x462a298, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxw() ;

/// @brief Method get_yxww, addr 0x4629028, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxww() ;

/// @brief Method get_yxwx, addr 0x4628fd0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxwx() ;

/// @brief Method get_yxwy, addr 0x4628fe4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxwy() ;

/// @brief Method get_yxwz, addr 0x4628ffc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxwz() ;

/// @brief Method get_yxx, addr 0x462a254, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxx() ;

/// @brief Method get_yxxw, addr 0x4628eec, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxw() ;

/// @brief Method get_yxxx, addr 0x4628eac, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x4628ec0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxy() ;

/// @brief Method get_yxxz, addr 0x4628ed4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxxz() ;

/// @brief Method get_yxy, addr 0x462a264, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxy() ;

/// @brief Method get_yxyw, addr 0x4628f48, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyw() ;

/// @brief Method get_yxyx, addr 0x4628f04, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x4628f14, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyy() ;

/// @brief Method get_yxyz, addr 0x4628f2c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxyz() ;

/// @brief Method get_yxz, addr 0x462a274, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yxz() ;

/// @brief Method get_yxzw, addr 0x4628fa8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzw() ;

/// @brief Method get_yxzx, addr 0x4628f64, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzx() ;

/// @brief Method get_yxzy, addr 0x4628f78, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzy() ;

/// @brief Method get_yxzz, addr 0x4628f90, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yxzz() ;

/// @brief Method get_yy, addr 0x462a740, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yy() ;

/// @brief Method get_yyw, addr 0x462a2ec, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyw() ;

/// @brief Method get_yyww, addr 0x4629174, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyww() ;

/// @brief Method get_yywx, addr 0x4629134, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yywx() ;

/// @brief Method get_yywy, addr 0x4629148, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yywy() ;

/// @brief Method get_yywz, addr 0x4629160, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yywz() ;

/// @brief Method get_yyx, addr 0x462a2bc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyx() ;

/// @brief Method get_yyxw, addr 0x4629078, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxw() ;

/// @brief Method get_yyxx, addr 0x4629040, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x4629050, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxy() ;

/// @brief Method get_yyxz, addr 0x4629064, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyxz() ;

/// @brief Method get_yyy, addr 0x462a2cc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyy() ;

/// @brief Method get_yyyw, addr 0x46290cc, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyw() ;

/// @brief Method get_yyyx, addr 0x462908c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x46290a4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyy() ;

/// @brief Method get_yyyz, addr 0x46290b4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyyz() ;

/// @brief Method get_yyz, addr 0x462a2dc, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yyz() ;

/// @brief Method get_yyzw, addr 0x4629120, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzw() ;

/// @brief Method get_yyzx, addr 0x46290e8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzx() ;

/// @brief Method get_yyzy, addr 0x46290fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzy() ;

/// @brief Method get_yyzz, addr 0x4629110, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yyzz() ;

/// @brief Method get_yz, addr 0x462a74c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_yz() ;

/// @brief Method get_yzw, addr 0x462a338, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzw() ;

/// @brief Method get_yzww, addr 0x46292f4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzww() ;

/// @brief Method get_yzwx, addr 0x46292a0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzwx() ;

/// @brief Method get_yzwy, addr 0x46292c8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzwy() ;

/// @brief Method get_yzwz, addr 0x46292e0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzwz() ;

/// @brief Method get_yzx, addr 0x462a300, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzx() ;

/// @brief Method get_yzxw, addr 0x46291c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxw() ;

/// @brief Method get_yzxx, addr 0x4629188, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxx() ;

/// @brief Method get_yzxy, addr 0x4629198, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxy() ;

/// @brief Method get_yzxz, addr 0x46291b0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzxz() ;

/// @brief Method get_yzy, addr 0x462a318, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzy() ;

/// @brief Method get_yzyw, addr 0x462922c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyw() ;

/// @brief Method get_yzyx, addr 0x46291ec, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyx() ;

/// @brief Method get_yzyy, addr 0x4629208, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyy() ;

/// @brief Method get_yzyz, addr 0x4629220, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzyz() ;

/// @brief Method get_yzz, addr 0x462a328, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_yzz() ;

/// @brief Method get_yzzw, addr 0x4629288, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzw() ;

/// @brief Method get_yzzx, addr 0x4629248, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzx() ;

/// @brief Method get_yzzy, addr 0x4629260, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzy() ;

/// @brief Method get_yzzz, addr 0x4629274, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_yzzz() ;

/// @brief Method get_zw, addr 0x462a7cc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zw() ;

/// @brief Method get_zww, addr 0x462a520, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zww() ;

/// @brief Method get_zwww, addr 0x4629a88, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwww() ;

/// @brief Method get_zwwx, addr 0x4629a44, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwwx() ;

/// @brief Method get_zwwy, addr 0x4629a5c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwwy() ;

/// @brief Method get_zwwz, addr 0x4629a74, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwwz() ;

/// @brief Method get_zwx, addr 0x462a4e0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zwx() ;

/// @brief Method get_zwxw, addr 0x4629978, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwxw() ;

/// @brief Method get_zwxx, addr 0x4629938, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwxx() ;

/// @brief Method get_zwxy, addr 0x4629948, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwxy() ;

/// @brief Method get_zwxz, addr 0x4629960, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwxz() ;

/// @brief Method get_zwy, addr 0x462a4f8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zwy() ;

/// @brief Method get_zwyw, addr 0x46299d4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwyw() ;

/// @brief Method get_zwyx, addr 0x462998c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwyx() ;

/// @brief Method get_zwyy, addr 0x46299ac, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwyy() ;

/// @brief Method get_zwyz, addr 0x46299bc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwyz() ;

/// @brief Method get_zwz, addr 0x462a510, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zwz() ;

/// @brief Method get_zwzw, addr 0x4629a38, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwzw() ;

/// @brief Method get_zwzx, addr 0x46299e8, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwzx() ;

/// @brief Method get_zwzy, addr 0x4629a04, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwzy() ;

/// @brief Method get_zwzz, addr 0x4629a20, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zwzz() ;

/// @brief Method get_zx, addr 0x462a780, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zx() ;

/// @brief Method get_zxw, addr 0x462a410, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxw() ;

/// @brief Method get_zxww, addr 0x462963c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxww() ;

/// @brief Method get_zxwx, addr 0x46295e4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxwx() ;

/// @brief Method get_zxwy, addr 0x46295f8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxwy() ;

/// @brief Method get_zxwz, addr 0x4629624, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxwz() ;

/// @brief Method get_zxx, addr 0x462a3c4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxx() ;

/// @brief Method get_zxxw, addr 0x46294f4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxw() ;

/// @brief Method get_zxxx, addr 0x46294ac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxx() ;

/// @brief Method get_zxxy, addr 0x46294c4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxy() ;

/// @brief Method get_zxxz, addr 0x46294dc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxxz() ;

/// @brief Method get_zxy, addr 0x462a3d8, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxy() ;

/// @brief Method get_zxyw, addr 0x4629550, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyw() ;

/// @brief Method get_zxyx, addr 0x462950c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyx() ;

/// @brief Method get_zxyy, addr 0x4629520, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyy() ;

/// @brief Method get_zxyz, addr 0x4629538, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxyz() ;

/// @brief Method get_zxz, addr 0x462a3fc, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zxz() ;

/// @brief Method get_zxzw, addr 0x46295c8, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzw() ;

/// @brief Method get_zxzx, addr 0x462957c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzx() ;

/// @brief Method get_zxzy, addr 0x4629590, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzy() ;

/// @brief Method get_zxzz, addr 0x46295ac, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zxzz() ;

/// @brief Method get_zy, addr 0x462a7a4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zy() ;

/// @brief Method get_zyw, addr 0x462a478, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyw() ;

/// @brief Method get_zyww, addr 0x46297d8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyww() ;

/// @brief Method get_zywx, addr 0x4629780, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zywx() ;

/// @brief Method get_zywy, addr 0x46297ac, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zywy() ;

/// @brief Method get_zywz, addr 0x46297c0, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zywz() ;

/// @brief Method get_zyx, addr 0x462a434, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyx() ;

/// @brief Method get_zyxw, addr 0x4629698, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxw() ;

/// @brief Method get_zyxx, addr 0x4629654, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxx() ;

/// @brief Method get_zyxy, addr 0x462966c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxy() ;

/// @brief Method get_zyxz, addr 0x4629680, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyxz() ;

/// @brief Method get_zyy, addr 0x462a458, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyy() ;

/// @brief Method get_zyyw, addr 0x4629708, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyw() ;

/// @brief Method get_zyyx, addr 0x46296c8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyx() ;

/// @brief Method get_zyyy, addr 0x46296e0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyy() ;

/// @brief Method get_zyyz, addr 0x46296f4, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyyz() ;

/// @brief Method get_zyz, addr 0x462a468, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zyz() ;

/// @brief Method get_zyzw, addr 0x4629764, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzw() ;

/// @brief Method get_zyzx, addr 0x4629720, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzx() ;

/// @brief Method get_zyzy, addr 0x462973c, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzy() ;

/// @brief Method get_zyzz, addr 0x462974c, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zyzz() ;

/// @brief Method get_zz, addr 0x462a7c0, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int2 get_zz() ;

/// @brief Method get_zzw, addr 0x462a4d0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzw() ;

/// @brief Method get_zzww, addr 0x4629928, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzww() ;

/// @brief Method get_zzwx, addr 0x46298ec, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzwx() ;

/// @brief Method get_zzwy, addr 0x4629900, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzwy() ;

/// @brief Method get_zzwz, addr 0x4629914, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzwz() ;

/// @brief Method get_zzx, addr 0x462a49c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzx() ;

/// @brief Method get_zzxw, addr 0x4629830, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxw() ;

/// @brief Method get_zzxx, addr 0x46297f0, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxx() ;

/// @brief Method get_zzxy, addr 0x4629804, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxy() ;

/// @brief Method get_zzxz, addr 0x4629818, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzxz() ;

/// @brief Method get_zzy, addr 0x462a4b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzy() ;

/// @brief Method get_zzyw, addr 0x462987c, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyw() ;

/// @brief Method get_zzyx, addr 0x4629844, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyx() ;

/// @brief Method get_zzyy, addr 0x4629858, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyy() ;

/// @brief Method get_zzyz, addr 0x4629868, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzyz() ;

/// @brief Method get_zzz, addr 0x462a4c0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_zzz() ;

/// @brief Method get_zzzw, addr 0x46298d4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzw() ;

/// @brief Method get_zzzx, addr 0x4629890, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzx() ;

/// @brief Method get_zzzy, addr 0x46298ac, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzy() ;

/// @brief Method get_zzzz, addr 0x46298c4, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int4 get_zzzz() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4>* i___System__IEquatable_1___Unity__Mathematics__int4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x46280a0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Addition(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Addition, addr 0x46280cc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Addition(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x46280f0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Addition(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x4628794, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseAnd(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x46287a0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseAnd(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x46287c4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x46287ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseOr(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x46287f8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseOr(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x462881c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Decrement, addr 0x46282d8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Decrement(::Unity::Mathematics::int4  val) ;

/// @brief Method op_Division, addr 0x4628190, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Division(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Division, addr 0x46281bc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Division(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x46281e0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Division(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Equality, addr 0x4628628, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Equality, addr 0x4628668, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Equality(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x46286a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Equality(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4628844, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_ExclusiveOr(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4628850, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_ExclusiveOr(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x4628874, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Explicit, addr 0x4627f04, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::bool4  v) ;

/// @brief Method op_Explicit, addr 0x4627fd4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::double4  v) ;

/// @brief Method op_Explicit, addr 0x4627f5c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::float4  v) ;

/// @brief Method op_Explicit, addr 0x4627f34, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::uint4  v) ;

/// @brief Method op_Explicit, addr 0x4627eec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(bool  v) ;

/// @brief Method op_Explicit, addr 0x4627fb0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x4627f38, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x4627f24, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Explicit___Unity__Mathematics__int4(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x4628460, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x46284a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThan(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x46284d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4628510, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4628550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4628588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Implicit, addr 0x4627edc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Implicit___Unity__Mathematics__int4(int32_t  v) ;

/// @brief Method op_Increment, addr 0x46282b0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Increment(::Unity::Mathematics::int4  val) ;

/// @brief Method op_Inequality, addr 0x46286d8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Inequality, addr 0x4628718, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Inequality(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x4628750, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_LeftShift, addr 0x46285e0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_LeftShift(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x4628300, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_LessThan, addr 0x4628340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThan(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x4628378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46283b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46283f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4628428, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Modulus, addr 0x4628208, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Modulus(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Modulus, addr 0x4628244, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Modulus(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x4628278, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Multiply, addr 0x4628028, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Multiply(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Multiply, addr 0x4628054, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Multiply(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x4628078, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x4628788, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_OnesComplement(::Unity::Mathematics::int4  val) ;

/// @brief Method op_RightShift, addr 0x4628604, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_RightShift(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x4628118, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Subtraction(::Unity::Mathematics::int4  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_Subtraction, addr 0x4628144, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Subtraction(::Unity::Mathematics::int4  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x4628168, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x46285c0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_UnaryNegation(::Unity::Mathematics::int4  val) ;

/// @brief Method op_UnaryPlus, addr 0x46285dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 op_UnaryPlus(::Unity::Mathematics::int4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int4  value) ;

/// @brief Method set_Item, addr 0x462a854, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, int32_t  value) ;

/// @brief Method set_wx, addr 0x462a7f0, size 0x10, virtual false, abstract: false, final false
inline void set_wx(::Unity::Mathematics::int2  value) ;

/// @brief Method set_wxy, addr 0x462a558, size 0x10, virtual false, abstract: false, final false
inline void set_wxy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wxyz, addr 0x4629b40, size 0x14, virtual false, abstract: false, final false
inline void set_wxyz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_wxz, addr 0x462a57c, size 0x10, virtual false, abstract: false, final false
inline void set_wxz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wxzy, addr 0x4629b98, size 0x14, virtual false, abstract: false, final false
inline void set_wxzy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_wy, addr 0x462a814, size 0x10, virtual false, abstract: false, final false
inline void set_wy(::Unity::Mathematics::int2  value) ;

/// @brief Method set_wyx, addr 0x462a5b4, size 0x10, virtual false, abstract: false, final false
inline void set_wyx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wyxz, addr 0x4629c88, size 0x14, virtual false, abstract: false, final false
inline void set_wyxz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_wyz, addr 0x462a5ec, size 0x10, virtual false, abstract: false, final false
inline void set_wyz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wyzx, addr 0x4629d2c, size 0x14, virtual false, abstract: false, final false
inline void set_wyzx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_wz, addr 0x462a834, size 0xc, virtual false, abstract: false, final false
inline void set_wz(::Unity::Mathematics::int2  value) ;

/// @brief Method set_wzx, addr 0x462a624, size 0x10, virtual false, abstract: false, final false
inline void set_wzx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wzxy, addr 0x4629e18, size 0x14, virtual false, abstract: false, final false
inline void set_wzxy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_wzy, addr 0x462a648, size 0x10, virtual false, abstract: false, final false
inline void set_wzy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_wzyx, addr 0x4629e70, size 0x14, virtual false, abstract: false, final false
inline void set_wzyx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xw, addr 0x462a714, size 0x10, virtual false, abstract: false, final false
inline void set_xw(::Unity::Mathematics::int2  value) ;

/// @brief Method set_xwy, addr 0x462a20c, size 0x10, virtual false, abstract: false, final false
inline void set_xwy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xwyz, addr 0x4628db4, size 0x14, virtual false, abstract: false, final false
inline void set_xwyz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xwz, addr 0x462a230, size 0x10, virtual false, abstract: false, final false
inline void set_xwz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xwzy, addr 0x4628e0c, size 0x14, virtual false, abstract: false, final false
inline void set_xwzy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xy, addr 0x462a6d4, size 0x8, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::int2  value) ;

/// @brief Method set_xyw, addr 0x462a164, size 0x10, virtual false, abstract: false, final false
inline void set_xyw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xywz, addr 0x4628b38, size 0x14, virtual false, abstract: false, final false
inline void set_xywz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xyz, addr 0x462a148, size 0x10, virtual false, abstract: false, final false
inline void set_xyz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xyzw, addr 0x4628ae8, size 0x14, virtual false, abstract: false, final false
inline void set_xyzw(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xz, addr 0x462a6f0, size 0x10, virtual false, abstract: false, final false
inline void set_xz(::Unity::Mathematics::int2  value) ;

/// @brief Method set_xzw, addr 0x462a1d4, size 0x10, virtual false, abstract: false, final false
inline void set_xzw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xzwy, addr 0x4628cc4, size 0x14, virtual false, abstract: false, final false
inline void set_xzwy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_xzy, addr 0x462a19c, size 0x10, virtual false, abstract: false, final false
inline void set_xzy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_xzyw, addr 0x4628c20, size 0x14, virtual false, abstract: false, final false
inline void set_xzyw(::Unity::Mathematics::int4  value) ;

/// @brief Method set_yw, addr 0x462a770, size 0x10, virtual false, abstract: false, final false
inline void set_yw(::Unity::Mathematics::int2  value) ;

/// @brief Method set_ywx, addr 0x462a368, size 0x10, virtual false, abstract: false, final false
inline void set_ywx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_ywxz, addr 0x462934c, size 0x14, virtual false, abstract: false, final false
inline void set_ywxz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_ywz, addr 0x462a3a0, size 0x10, virtual false, abstract: false, final false
inline void set_ywz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_ywzx, addr 0x46293f4, size 0x14, virtual false, abstract: false, final false
inline void set_ywzx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_yx, addr 0x462a734, size 0xc, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::int2  value) ;

/// @brief Method set_yxw, addr 0x462a2ac, size 0x10, virtual false, abstract: false, final false
inline void set_yxw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yxwz, addr 0x4629014, size 0x14, virtual false, abstract: false, final false
inline void set_yxwz(::Unity::Mathematics::int4  value) ;

/// @brief Method set_yxz, addr 0x462a288, size 0x10, virtual false, abstract: false, final false
inline void set_yxz(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yxzw, addr 0x4628fbc, size 0x14, virtual false, abstract: false, final false
inline void set_yxzw(::Unity::Mathematics::int4  value) ;

/// @brief Method set_yz, addr 0x462a754, size 0x8, virtual false, abstract: false, final false
inline void set_yz(::Unity::Mathematics::int2  value) ;

/// @brief Method set_yzw, addr 0x462a344, size 0x10, virtual false, abstract: false, final false
inline void set_yzw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yzwx, addr 0x46292b4, size 0x14, virtual false, abstract: false, final false
inline void set_yzwx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_yzx, addr 0x462a30c, size 0xc, virtual false, abstract: false, final false
inline void set_yzx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_yzxw, addr 0x46291d8, size 0x14, virtual false, abstract: false, final false
inline void set_yzxw(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zw, addr 0x462a7d4, size 0x8, virtual false, abstract: false, final false
inline void set_zw(::Unity::Mathematics::int2  value) ;

/// @brief Method set_zwx, addr 0x462a4ec, size 0xc, virtual false, abstract: false, final false
inline void set_zwx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zwxy, addr 0x4629950, size 0x10, virtual false, abstract: false, final false
inline void set_zwxy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zwy, addr 0x462a504, size 0xc, virtual false, abstract: false, final false
inline void set_zwy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zwyx, addr 0x462999c, size 0x10, virtual false, abstract: false, final false
inline void set_zwyx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zx, addr 0x462a794, size 0x10, virtual false, abstract: false, final false
inline void set_zx(::Unity::Mathematics::int2  value) ;

/// @brief Method set_zxw, addr 0x462a424, size 0x10, virtual false, abstract: false, final false
inline void set_zxw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zxwy, addr 0x4629610, size 0x14, virtual false, abstract: false, final false
inline void set_zxwy(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zxy, addr 0x462a3ec, size 0x10, virtual false, abstract: false, final false
inline void set_zxy(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zxyw, addr 0x4629568, size 0x14, virtual false, abstract: false, final false
inline void set_zxyw(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zy, addr 0x462a7b4, size 0xc, virtual false, abstract: false, final false
inline void set_zy(::Unity::Mathematics::int2  value) ;

/// @brief Method set_zyw, addr 0x462a48c, size 0x10, virtual false, abstract: false, final false
inline void set_zyw(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zywx, addr 0x4629798, size 0x14, virtual false, abstract: false, final false
inline void set_zywx(::Unity::Mathematics::int4  value) ;

/// @brief Method set_zyx, addr 0x462a448, size 0x10, virtual false, abstract: false, final false
inline void set_zyx(::Unity::Mathematics::int3  value) ;

/// @brief Method set_zyxw, addr 0x46296b0, size 0x18, virtual false, abstract: false, final false
inline void set_zyxw(::Unity::Mathematics::int4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int4() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }]
constexpr int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 int32_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 int32_t  w;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4, w) == 0xc, "Offset mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__int4__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__int4__DebuggerProxy*, "Unity.Mathematics", "int4/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4, "Unity.Mathematics", "int4");
