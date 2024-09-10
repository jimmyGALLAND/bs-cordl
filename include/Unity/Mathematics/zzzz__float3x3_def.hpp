#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x3)
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
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x3);
// Type: Unity.Mathematics::float3x3
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float3x3
struct CORDL_TYPE float3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x24 
static __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x24 
static __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method AxisAngle, addr 0x4601c20, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method Equals, addr 0x46013b4, size 0xf8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x4601318, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method Euler, addr 0x4602a50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(float_t  x, float_t  y, float_t  z, ::Unity::Mathematics::__math__RotationOrder  order) ;

/// @brief Method Euler, addr 0x4602628, size 0x428, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3  xyz, ::Unity::Mathematics::__math__RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x46021c8, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXYZ, addr 0x4601d68, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerXZY, addr 0x4602284, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXZY, addr 0x4601e24, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYXZ, addr 0x4602338, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYXZ, addr 0x4601ed8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYZX, addr 0x46023f8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYZX, addr 0x4601f98, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZXY, addr 0x46024ac, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZXY, addr 0x460204c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZYX, addr 0x460256c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZYX, addr 0x460210c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method GetHashCode, addr 0x46014ac, size 0x9c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method LookRotation, addr 0x4602d5c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method LookRotationSafe, addr 0x4602e68, size 0x338, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method RotateX, addr 0x4602a88, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateX(float_t  angle) ;

/// @brief Method RotateY, addr 0x4602b50, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateY(float_t  angle) ;

/// @brief Method RotateZ, addr 0x4602c28, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateZ(float_t  angle) ;

/// @brief Method Scale, addr 0x4602cf0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  s) ;

/// @brief Method Scale, addr 0x4602d38, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3  v) ;

/// @brief Method Scale, addr 0x4602d14, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  x, float_t  y, float_t  z) ;

/// @brief Method ToString, addr 0x4601548, size 0x2ec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x4601834, size 0x2d4, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x45fff24, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method .ctor, addr 0x4601b08, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method .ctor, addr 0x45fff44, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method .ctor, addr 0x4601b3c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::quaternion  q) ;

/// @brief Method .ctor, addr 0x45fff98, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x4600104, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x3  v) ;

/// @brief Method .ctor, addr 0x460002c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x3  v) ;

/// @brief Method .ctor, addr 0x4600098, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x45fff70, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x46000f0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x45fff60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x4600018, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x4600084, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::float3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x460130c, size 0xc, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::float3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x4600378, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Addition, addr 0x46003a0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x46003c4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x46007f8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Division, addr 0x4600458, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Division, addr 0x4600480, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x46004a4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x4600f7c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x4601024, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x46010b4, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x46031a0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method op_Explicit, addr 0x4600188, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x46002e4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method op_Explicit, addr 0x4600160, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x46002d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x4600bb8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4600c60, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x4600cf0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4600d80, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4600e28, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x4600eb8, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x460021c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method op_Implicit, addr 0x4600280, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Implicit, addr 0x4600150, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x4600208, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x460026c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x46007c8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Inequality, addr 0x4601144, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x46011ec, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x460127c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x4600828, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x46008d0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x4600960, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x46009f0, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4600a98, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x4600b28, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x46004c8, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x46005dc, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x46006d8, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x4600310, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x4600338, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x4600358, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x46003e8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x4600410, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x4600434, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x4600f48, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x4600f68, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryPlus(::Unity::Mathematics::float3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::float3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) noexcept;

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x3, 0x24>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");
