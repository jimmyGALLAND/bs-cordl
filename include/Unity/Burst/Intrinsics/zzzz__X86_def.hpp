#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/Intrinsics/zzzz__X86_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
namespace GlobalNamespace {
struct __X86__Avx__CMP;
}
namespace GlobalNamespace {
struct __X86__Fma__Union;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__SIDD;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;
}
namespace System {
class IDisposable;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi2;
}
namespace Unity::Burst::Intrinsics {
class __X86__F16C;
}
namespace Unity::Burst::Intrinsics {
class __X86__Fma;
}
namespace Unity::Burst::Intrinsics {
struct __X86__MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
class __X86__Popcnt;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingMode;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingScope;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse3;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse;
}
namespace Unity::Burst::Intrinsics {
class __X86__Ssse3;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v256;
}
// Forward declare root types
namespace GlobalNamespace {
struct __X86__Avx__CMP;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__SIDD;
}
namespace Unity::Burst::Intrinsics {
struct __X86__MXCSRBits;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingMode;
}
namespace Unity::Burst::Intrinsics {
class X86;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx;
}
namespace Unity::Burst::Intrinsics {
class __X86__Avx2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Bmi2;
}
namespace Unity::Burst::Intrinsics {
class __X86__F16C;
}
namespace Unity::Burst::Intrinsics {
class __X86__Fma;
}
namespace Unity::Burst::Intrinsics {
class __X86__Popcnt;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse3;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_1;
}
namespace Unity::Burst::Intrinsics {
class __X86__Sse4_2;
}
namespace Unity::Burst::Intrinsics {
class __X86__Ssse3;
}
namespace GlobalNamespace {
struct __X86__Fma__Union;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray;
}
namespace GlobalNamespace {
struct __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;
}
namespace Unity::Burst::Intrinsics {
struct __X86__RoundingScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__X86__Avx__CMP);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__SIDD);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__MXCSRBits);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__RoundingMode);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::X86);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Avx);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Avx2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Bmi1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Bmi2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__F16C);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Fma);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Popcnt);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse3);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse4_1);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Sse4_2);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__X86__Ssse3);
MARK_VAL_T(::GlobalNamespace::__X86__Fma__Union);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__StrBoolArray);
MARK_VAL_T(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer);
MARK_VAL_T(::Unity::Burst::Intrinsics::__X86__RoundingScope);
// Type: ::CMP
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Avx::CMP
struct CORDL_TYPE __X86__Avx__CMP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____X86__Avx__CMP_Unwrapped
enum struct ____X86__Avx__CMP_Unwrapped : int32_t {
__E_EQ_OQ = static_cast<int32_t>(0x0),
__E_LT_OS = static_cast<int32_t>(0x1),
__E_LE_OS = static_cast<int32_t>(0x2),
__E_UNORD_Q = static_cast<int32_t>(0x3),
__E_NEQ_UQ = static_cast<int32_t>(0x4),
__E_NLT_US = static_cast<int32_t>(0x5),
__E_NLE_US = static_cast<int32_t>(0x6),
__E_ORD_Q = static_cast<int32_t>(0x7),
__E_EQ_UQ = static_cast<int32_t>(0x8),
__E_NGE_US = static_cast<int32_t>(0x9),
__E_NGT_US = static_cast<int32_t>(0xa),
__E_FALSE_OQ = static_cast<int32_t>(0xb),
__E_NEQ_OQ = static_cast<int32_t>(0xc),
__E_GE_OS = static_cast<int32_t>(0xd),
__E_GT_OS = static_cast<int32_t>(0xe),
__E_TRUE_UQ = static_cast<int32_t>(0xf),
__E_EQ_OS = static_cast<int32_t>(0x10),
__E_LT_OQ = static_cast<int32_t>(0x11),
__E_LE_OQ = static_cast<int32_t>(0x12),
__E_UNORD_S = static_cast<int32_t>(0x13),
__E_NEQ_US = static_cast<int32_t>(0x14),
__E_NLT_UQ = static_cast<int32_t>(0x15),
__E_NLE_UQ = static_cast<int32_t>(0x16),
__E_ORD_S = static_cast<int32_t>(0x17),
__E_EQ_US = static_cast<int32_t>(0x18),
__E_NGE_UQ = static_cast<int32_t>(0x19),
__E_NGT_UQ = static_cast<int32_t>(0x1a),
__E_FALSE_OS = static_cast<int32_t>(0x1b),
__E_NEQ_OS = static_cast<int32_t>(0x1c),
__E_GE_OQ = static_cast<int32_t>(0x1d),
__E_GT_OQ = static_cast<int32_t>(0x1e),
__E_TRUE_US = static_cast<int32_t>(0x1f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____X86__Avx__CMP_Unwrapped () const noexcept {
return static_cast<____X86__Avx__CMP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __X86__Avx__CMP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __X86__Avx__CMP(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field EQ_OQ value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Avx__CMP const EQ_OQ;

/// @brief Field EQ_OS value: static_cast<int32_t>(0x10)
static ::GlobalNamespace::__X86__Avx__CMP const EQ_OS;

/// @brief Field EQ_UQ value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__X86__Avx__CMP const EQ_UQ;

/// @brief Field EQ_US value: static_cast<int32_t>(0x18)
static ::GlobalNamespace::__X86__Avx__CMP const EQ_US;

/// @brief Field FALSE_OQ value: static_cast<int32_t>(0xb)
static ::GlobalNamespace::__X86__Avx__CMP const FALSE_OQ;

/// @brief Field FALSE_OS value: static_cast<int32_t>(0x1b)
static ::GlobalNamespace::__X86__Avx__CMP const FALSE_OS;

/// @brief Field GE_OQ value: static_cast<int32_t>(0x1d)
static ::GlobalNamespace::__X86__Avx__CMP const GE_OQ;

/// @brief Field GE_OS value: static_cast<int32_t>(0xd)
static ::GlobalNamespace::__X86__Avx__CMP const GE_OS;

/// @brief Field GT_OQ value: static_cast<int32_t>(0x1e)
static ::GlobalNamespace::__X86__Avx__CMP const GT_OQ;

/// @brief Field GT_OS value: static_cast<int32_t>(0xe)
static ::GlobalNamespace::__X86__Avx__CMP const GT_OS;

/// @brief Field LE_OQ value: static_cast<int32_t>(0x12)
static ::GlobalNamespace::__X86__Avx__CMP const LE_OQ;

/// @brief Field LE_OS value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__X86__Avx__CMP const LE_OS;

/// @brief Field LT_OQ value: static_cast<int32_t>(0x11)
static ::GlobalNamespace::__X86__Avx__CMP const LT_OQ;

/// @brief Field LT_OS value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__X86__Avx__CMP const LT_OS;

/// @brief Field NEQ_OQ value: static_cast<int32_t>(0xc)
static ::GlobalNamespace::__X86__Avx__CMP const NEQ_OQ;

/// @brief Field NEQ_OS value: static_cast<int32_t>(0x1c)
static ::GlobalNamespace::__X86__Avx__CMP const NEQ_OS;

/// @brief Field NEQ_UQ value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__X86__Avx__CMP const NEQ_UQ;

/// @brief Field NEQ_US value: static_cast<int32_t>(0x14)
static ::GlobalNamespace::__X86__Avx__CMP const NEQ_US;

/// @brief Field NGE_UQ value: static_cast<int32_t>(0x19)
static ::GlobalNamespace::__X86__Avx__CMP const NGE_UQ;

/// @brief Field NGE_US value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::__X86__Avx__CMP const NGE_US;

/// @brief Field NGT_UQ value: static_cast<int32_t>(0x1a)
static ::GlobalNamespace::__X86__Avx__CMP const NGT_UQ;

/// @brief Field NGT_US value: static_cast<int32_t>(0xa)
static ::GlobalNamespace::__X86__Avx__CMP const NGT_US;

/// @brief Field NLE_UQ value: static_cast<int32_t>(0x16)
static ::GlobalNamespace::__X86__Avx__CMP const NLE_UQ;

/// @brief Field NLE_US value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__X86__Avx__CMP const NLE_US;

/// @brief Field NLT_UQ value: static_cast<int32_t>(0x15)
static ::GlobalNamespace::__X86__Avx__CMP const NLT_UQ;

/// @brief Field NLT_US value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__X86__Avx__CMP const NLT_US;

/// @brief Field ORD_Q value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__X86__Avx__CMP const ORD_Q;

/// @brief Field ORD_S value: static_cast<int32_t>(0x17)
static ::GlobalNamespace::__X86__Avx__CMP const ORD_S;

/// @brief Field TRUE_UQ value: static_cast<int32_t>(0xf)
static ::GlobalNamespace::__X86__Avx__CMP const TRUE_UQ;

/// @brief Field TRUE_US value: static_cast<int32_t>(0x1f)
static ::GlobalNamespace::__X86__Avx__CMP const TRUE_US;

/// @brief Field UNORD_Q value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__X86__Avx__CMP const UNORD_Q;

/// @brief Field UNORD_S value: static_cast<int32_t>(0x13)
static ::GlobalNamespace::__X86__Avx__CMP const UNORD_S;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Avx__CMP, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Avx__CMP, value__) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Avx
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Avx*
class CORDL_TYPE __X86__Avx : public ::System::Object {
public:
// Declarations
using CMP = ::GlobalNamespace::__X86__Avx__CMP;

/// @brief Method Select4, addr 0x44999d8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 Select4(::Unity::Burst::Intrinsics::v256  src1, ::Unity::Burst::Intrinsics::v256  src2, int32_t  control) ;

/// @brief Method broadcast_ss, addr 0x4499bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcast_ss(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method cmp_pd, addr 0x44989f8, size 0x300, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_ps, addr 0x4498d5c, size 0x27c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_sd, addr 0x44993f4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmp_ss, addr 0x449940c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmp_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method get_IsAvxSupported, addr 0x4497ae0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsAvxSupported() ;

/// @brief Method maskload_pd, addr 0x4499d98, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskload_ps, addr 0x4499e7c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskstore_pd, addr 0x4499e14, size 0x1c, virtual false, abstract: false, final false
static inline void maskstore_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method maskstore_ps, addr 0x4499f1c, size 0x40, virtual false, abstract: false, final false
static inline void maskstore_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_add_pd, addr 0x4497ae8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_ps, addr 0x4497b48, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_addsub_pd, addr 0x4497be8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_addsub_ps, addr 0x4497c48, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_addsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_and_pd, addr 0x4497ca8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_and_ps, addr 0x4497d08, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_pd, addr 0x4497d2c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_ps, addr 0x4497d8c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_blend_pd, addr 0x4497db0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blend_ps, addr 0x4497e20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blendv_pd, addr 0x4497e90, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_blendv_ps, addr 0x4497efc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_broadcast_pd, addr 0x4499bfc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_pd(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_broadcast_ps, addr 0x4499be0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ps(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_broadcast_sd, addr 0x4499bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_sd(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_broadcast_ss, addr 0x4499bb4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcast_ss(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_castpd128_pd256, addr 0x449b150, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd128_pd256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castpd256_pd128, addr 0x449b120, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castpd256_pd128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castpd_ps, addr 0x449b0cc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castpd_si256, addr 0x449b0f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castpd_si256(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps128_ps256, addr 0x449b138, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps128_ps256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castps256_ps128, addr 0x449b114, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castps256_ps128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps_pd, addr 0x449b0d8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castps_si256, addr 0x449b0e4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castps_si256(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi128_si256, addr 0x449b15c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_castsi256_pd, addr 0x449b108, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi256_ps, addr 0x449b0fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_castsi256_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_castsi256_si128, addr 0x449b12c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_castsi256_si128(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_ceil_pd, addr 0x449a2fc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_pd(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_ceil_ps, addr 0x449a424, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_ceil_ps(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_cmp_pd, addr 0x4498cf8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_cmp_ps, addr 0x4499390, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmp_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_cvtepi32_pd, addr 0x4499438, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi32_ps, addr 0x449945c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtpd_epi32, addr 0x44995a4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtpd_ps, addr 0x44994a8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtpd_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtps_epi32, addr 0x44994e4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtps_pd, addr 0x4499530, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtps_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtss_f32, addr 0x449962c, size 0x8, virtual false, abstract: false, final false
static inline float_t mm256_cvtss_f32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvttpd_epi32, addr 0x4499548, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvttpd_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvttps_epi32, addr 0x44995e0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvttps_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_div_pd, addr 0x4497f68, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_div_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_div_ps, addr 0x4497fc8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_div_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_dp_ps, addr 0x4498068, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_dp_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_extract_epi32, addr 0x449b320, size 0x10, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extract_epi64, addr 0x449b330, size 0x10, virtual false, abstract: false, final false
static inline int64_t mm256_extract_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extractf128_pd, addr 0x4499658, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_extractf128_ps, addr 0x4499634, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_extractf128_si256, addr 0x449967c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extractf128_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_floor_pd, addr 0x449a360, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_pd(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_floor_ps, addr 0x449a488, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_floor_ps(::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_hadd_pd, addr 0x44980d4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadd_ps, addr 0x4498134, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_pd, addr 0x4498194, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_ps, addr 0x44981f4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_insert_epi16, addr 0x449b224, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi32, addr 0x449b278, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi64, addr 0x449b2cc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi64(::Unity::Burst::Intrinsics::v256  a, int64_t  i, int32_t  index) ;

/// @brief Method mm256_insert_epi8, addr 0x449b1d4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insert_epi8(::Unity::Burst::Intrinsics::v256  a, int32_t  i, int32_t  index) ;

/// @brief Method mm256_insertf128_pd, addr 0x4499c38, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_insertf128_ps, addr 0x4499c0c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_insertf128_si256, addr 0x4499c60, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_insertf128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_lddqu_si256, addr 0x4499ff4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_lddqu_si256(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method mm256_load_pd, addr 0x4499ca0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_pd(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_load_ps, addr 0x4499c88, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_ps(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_load_si256, addr 0x4499ce8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_load_si256(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_loadu2_m128, addr 0x4499d18, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr) ;

/// @brief Method mm256_loadu2_m128d, addr 0x4499d34, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128d(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr) ;

/// @brief Method mm256_loadu2_m128i, addr 0x4499d44, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu2_m128i(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr) ;

/// @brief Method mm256_loadu_pd, addr 0x4499cb8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_pd(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_loadu_ps, addr 0x4499cd0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_ps(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_loadu_si256, addr 0x4499d00, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_loadu_si256(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method mm256_maskload_pd, addr 0x4499dc0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskload_ps, addr 0x4499ecc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskstore_pd, addr 0x4499e30, size 0x4c, virtual false, abstract: false, final false
static inline void mm256_maskstore_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_maskstore_ps, addr 0x4499f5c, size 0x3c, virtual false, abstract: false, final false
static inline void mm256_maskstore_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_max_pd, addr 0x4498254, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_ps, addr 0x44982b4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_pd, addr 0x44983fc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_ps, addr 0x449845c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_movedup_pd, addr 0x4499fe0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_movedup_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movehdup_ps, addr 0x4499f98, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_movehdup_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_moveldup_ps, addr 0x4499fbc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_moveldup_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movemask_pd, addr 0x449ac50, size 0x38, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_movemask_ps, addr 0x449ac88, size 0x58, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_mul_pd, addr 0x44985a4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mul_ps, addr 0x4498604, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_pd, addr 0x44986a4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_ps, addr 0x4498704, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permute2f128_pd, addr 0x4499aac, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute2f128_ps, addr 0x4499a28, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute2f128_si256, addr 0x4499b30, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2f128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute_pd, addr 0x44998d8, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permute_ps, addr 0x449977c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permutevar_pd, addr 0x4499840, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permutevar_ps, addr 0x449971c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_rcp_ps, addr 0x449a024, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_rcp_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_round_pd, addr 0x449a29c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_round_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

/// @brief Method mm256_round_ps, addr 0x449a3c4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_round_ps(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

/// @brief Method mm256_rsqrt_ps, addr 0x449a0a4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_rsqrt_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_set1_epi16, addr 0x449b0a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi16(int16_t  a) ;

/// @brief Method mm256_set1_epi32, addr 0x449b0b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi32(int32_t  a) ;

/// @brief Method mm256_set1_epi64x, addr 0x449b0c0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi64x(int64_t  a) ;

/// @brief Method mm256_set1_epi8, addr 0x449b090, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_epi8(uint8_t  a) ;

/// @brief Method mm256_set1_pd, addr 0x449b078, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_pd(double_t  a) ;

/// @brief Method mm256_set1_ps, addr 0x449b084, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set1_ps(float_t  a) ;

/// @brief Method mm256_set_epi16, addr 0x449ae30, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi16(int16_t  e15_, int16_t  e14_, int16_t  e13_, int16_t  e12_, int16_t  e11_, int16_t  e10_, int16_t  e9_, int16_t  e8_, int16_t  e7_, int16_t  e6_, int16_t  e5_, int16_t  e4_, int16_t  e3_, int16_t  e2_, int16_t  e1_, int16_t  e0_) ;

/// @brief Method mm256_set_epi32, addr 0x449ae94, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi32(int32_t  e7, int32_t  e6, int32_t  e5, int32_t  e4, int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method mm256_set_epi64x, addr 0x449aea8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi64x(int64_t  e3, int64_t  e2, int64_t  e1, int64_t  e0) ;

/// @brief Method mm256_set_epi8, addr 0x449ad4c, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_epi8(uint8_t  e31_, uint8_t  e30_, uint8_t  e29_, uint8_t  e28_, uint8_t  e27_, uint8_t  e26_, uint8_t  e25_, uint8_t  e24_, uint8_t  e23_, uint8_t  e22_, uint8_t  e21_, uint8_t  e20_, uint8_t  e19_, uint8_t  e18_, uint8_t  e17_, uint8_t  e16_, uint8_t  e15_, uint8_t  e14_, uint8_t  e13_, uint8_t  e12_, uint8_t  e11_, uint8_t  e10_, uint8_t  e9_, uint8_t  e8_, uint8_t  e7_, uint8_t  e6_, uint8_t  e5_, uint8_t  e4_, uint8_t  e3_, uint8_t  e2_, uint8_t  e1_, uint8_t  e0_) ;

/// @brief Method mm256_set_m128, addr 0x4499d28, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_m128d, addr 0x449aeb4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128d(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_m128i, addr 0x449aec0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_m128i(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_set_pd, addr 0x449ad2c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_pd(double_t  d, double_t  c, double_t  b, double_t  a) ;

/// @brief Method mm256_set_ps, addr 0x449ad38, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_set_ps(float_t  e7, float_t  e6, float_t  e5, float_t  e4, float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method mm256_setr_epi16, addr 0x449afd0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi16(int16_t  e15_, int16_t  e14_, int16_t  e13_, int16_t  e12_, int16_t  e11_, int16_t  e10_, int16_t  e9_, int16_t  e8_, int16_t  e7_, int16_t  e6_, int16_t  e5_, int16_t  e4_, int16_t  e3_, int16_t  e2_, int16_t  e1_, int16_t  e0_) ;

/// @brief Method mm256_setr_epi32, addr 0x449b034, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi32(int32_t  e7, int32_t  e6, int32_t  e5, int32_t  e4, int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method mm256_setr_epi64x, addr 0x449b048, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi64x(int64_t  e3, int64_t  e2, int64_t  e1, int64_t  e0) ;

/// @brief Method mm256_setr_epi8, addr 0x449aeec, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_epi8(uint8_t  e31_, uint8_t  e30_, uint8_t  e29_, uint8_t  e28_, uint8_t  e27_, uint8_t  e26_, uint8_t  e25_, uint8_t  e24_, uint8_t  e23_, uint8_t  e22_, uint8_t  e21_, uint8_t  e20_, uint8_t  e19_, uint8_t  e18_, uint8_t  e17_, uint8_t  e16_, uint8_t  e15_, uint8_t  e14_, uint8_t  e13_, uint8_t  e12_, uint8_t  e11_, uint8_t  e10_, uint8_t  e9_, uint8_t  e8_, uint8_t  e7_, uint8_t  e6_, uint8_t  e5_, uint8_t  e4_, uint8_t  e3_, uint8_t  e2_, uint8_t  e1_, uint8_t  e0_) ;

/// @brief Method mm256_setr_m128, addr 0x449b054, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_m128d, addr 0x449b060, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128d(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_m128i, addr 0x449b06c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_m128i(::Unity::Burst::Intrinsics::v128  hi, ::Unity::Burst::Intrinsics::v128  lo) ;

/// @brief Method mm256_setr_pd, addr 0x449aecc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_pd(double_t  d, double_t  c, double_t  b, double_t  a) ;

/// @brief Method mm256_setr_ps, addr 0x449aed8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setr_ps(float_t  e7, float_t  e6, float_t  e5, float_t  e4, float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method mm256_setzero_pd, addr 0x449ad08, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_pd() ;

/// @brief Method mm256_setzero_ps, addr 0x449ad14, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_ps() ;

/// @brief Method mm256_setzero_si256, addr 0x449ad20, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_setzero_si256() ;

/// @brief Method mm256_shuffle_pd, addr 0x4498728, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_shuffle_ps, addr 0x4498798, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_sqrt_pd, addr 0x449a180, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_pd(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_sqrt_ps, addr 0x449a1cc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sqrt_ps(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_store_pd, addr 0x4499cac, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_pd(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_store_ps, addr 0x4499c94, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_ps(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_store_si256, addr 0x4499cf4, size 0xc, virtual false, abstract: false, final false
static inline void mm256_store_si256(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  v) ;

/// @brief Method mm256_storeu2_m128, addr 0x4499d54, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu2_m128d, addr 0x4499d70, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128d(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu2_m128i, addr 0x4499d84, size 0x14, virtual false, abstract: false, final false
static inline void mm256_storeu2_m128i(::cordl_internals::Ptr<void>  hiaddr, ::cordl_internals::Ptr<void>  loaddr, ::Unity::Burst::Intrinsics::v256  val) ;

/// @brief Method mm256_storeu_pd, addr 0x4499cc4, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_pd(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_storeu_ps, addr 0x4499cdc, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_ps(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_storeu_si256, addr 0x4499d0c, size 0xc, virtual false, abstract: false, final false
static inline void mm256_storeu_si256(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v256  v) ;

/// @brief Method mm256_stream_pd, addr 0x449a00c, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_stream_ps, addr 0x449a018, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_stream_si256, addr 0x449a000, size 0xc, virtual false, abstract: false, final false
static inline void mm256_stream_si256(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_sub_pd, addr 0x4498874, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_ps, addr 0x44988d4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_pd, addr 0x449a794, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testc_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_ps, addr 0x449aa28, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testc_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testc_si256, addr 0x449a684, size 0x4c, virtual false, abstract: false, final false
static inline int32_t mm256_testc_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_pd, addr 0x449a7c4, size 0xc4, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_ps, addr 0x449aa58, size 0xc4, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testnzc_si256, addr 0x449a6d0, size 0x94, virtual false, abstract: false, final false
static inline int32_t mm256_testnzc_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_pd, addr 0x449a764, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testz_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_ps, addr 0x449a9f8, size 0x30, virtual false, abstract: false, final false
static inline int32_t mm256_testz_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_testz_si256, addr 0x449a638, size 0x4c, virtual false, abstract: false, final false
static inline int32_t mm256_testz_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_undefined_pd, addr 0x449b198, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_pd() ;

/// @brief Method mm256_undefined_ps, addr 0x449b18c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_ps() ;

/// @brief Method mm256_undefined_si256, addr 0x449b1a4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_undefined_si256() ;

/// @brief Method mm256_unpackhi_pd, addr 0x449a4ec, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_ps, addr 0x449a5ac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_pd, addr 0x449a54c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_ps, addr 0x449a5f4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_pd, addr 0x4498974, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_ps, addr 0x44989d4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_zeroall, addr 0x44996a0, size 0x4, virtual false, abstract: false, final false
static inline void mm256_zeroall() ;

/// @brief Method mm256_zeroupper, addr 0x44996a4, size 0x4, virtual false, abstract: false, final false
static inline void mm256_zeroupper() ;

/// @brief Method mm256_zextpd128_pd256, addr 0x449b1bc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextpd128_pd256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_zextps128_ps256, addr 0x449b1b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextps128_ps256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_zextsi128_si256, addr 0x449b1c8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_zextsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method permute_pd, addr 0x4499978, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permute_pd(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method permute_ps, addr 0x4499774, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permute_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method permutevar_pd, addr 0x44997dc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permutevar_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method permutevar_ps, addr 0x44996a8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 permutevar_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testc_pd, addr 0x449a8fc, size 0x74, virtual false, abstract: false, final false
static inline int32_t testc_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testc_ps, addr 0x449ab8c, size 0x70, virtual false, abstract: false, final false
static inline int32_t testc_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_pd, addr 0x449a970, size 0x88, virtual false, abstract: false, final false
static inline int32_t testnzc_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_ps, addr 0x449abfc, size 0x54, virtual false, abstract: false, final false
static inline int32_t testnzc_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_pd, addr 0x449a888, size 0x74, virtual false, abstract: false, final false
static inline int32_t testz_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_ps, addr 0x449ab1c, size 0x70, virtual false, abstract: false, final false
static inline int32_t testz_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method undefined_pd, addr 0x449b174, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_pd() ;

/// @brief Method undefined_ps, addr 0x449b168, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_ps() ;

/// @brief Method undefined_si128, addr 0x449b180, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 undefined_si128() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Avx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Avx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Avx(__X86__Avx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Avx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Avx(__X86__Avx const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Avx, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Avx2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Avx2*
class CORDL_TYPE __X86__Avx2 : public ::System::Object {
public:
// Declarations
/// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void EmulatedGather(::cordl_internals::Ptr<T>  dptr, ::cordl_internals::Ptr<void>  base_addr, ::cordl_internals::Ptr<int32_t>  indexPtr, int32_t  scale, int32_t  n, ::cordl_internals::Ptr<U>  mask) ;

/// @brief Method EmulatedGather, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void EmulatedGather(::cordl_internals::Ptr<T>  dptr, ::cordl_internals::Ptr<void>  base_addr, ::cordl_internals::Ptr<int64_t>  indexPtr, int32_t  scale, int32_t  n, ::cordl_internals::Ptr<U>  mask) ;

/// @brief Method blend_epi32, addr 0x449d884, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method broadcastb_epi8, addr 0x449e0c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastb_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastd_epi32, addr 0x449e0f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastq_epi64, addr 0x449e100, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastq_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastsd_pd, addr 0x449e0ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastsd_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastss_ps, addr 0x449e088, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastss_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method broadcastw_epi16, addr 0x449e0d4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 broadcastw_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method get_IsAvx2Supported, addr 0x449b340, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsAvx2Supported() ;

/// @brief Method i32gather_epi32, addr 0x449f39c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi32(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_epi64, addr 0x449f43c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_epi64(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_pd, addr 0x449ef0c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_pd(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i32gather_ps, addr 0x449efac, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i32gather_ps(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_epi32, addr 0x449f4dc, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi32(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_epi64, addr 0x449f57c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_epi64(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_pd, addr 0x449f04c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_pd(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method i64gather_ps, addr 0x449f0ec, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 i64gather_ps(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mask_i32gather_epi32, addr 0x449fef8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi32(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_epi64, addr 0x449ffac, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_epi64(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_pd, addr 0x449fc2c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_pd(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i32gather_ps, addr 0x449fce0, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i32gather_ps(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_epi32, addr 0x44a0060, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_epi64, addr 0x44a0110, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_epi64(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_pd, addr 0x449fd94, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_pd(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mask_i64gather_ps, addr 0x449fe48, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mask_i64gather_ps(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method maskload_epi32, addr 0x449e670, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_epi32(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskload_epi64, addr 0x449e6d8, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maskload_epi64(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method maskstore_epi32, addr 0x449e748, size 0x64, virtual false, abstract: false, final false
static inline void maskstore_epi32(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method maskstore_epi64, addr 0x449e7ac, size 0x6c, virtual false, abstract: false, final false
static inline void maskstore_epi64(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  mask, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_abs_epi16, addr 0x449bd48, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi16(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_abs_epi32, addr 0x449bd94, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_abs_epi8, addr 0x449bcfc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_abs_epi8(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_add_epi16, addr 0x449be40, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi32, addr 0x449bea0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi64, addr 0x449bf00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_add_epi8, addr 0x449bde0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_add_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epi16, addr 0x449bfc0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epi8, addr 0x449bf60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epu16, addr 0x449c080, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_adds_epu8, addr 0x449c020, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_adds_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_alignr_epi8, addr 0x449d8f8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_alignr_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_and_si256, addr 0x449bb7c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_and_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_andnot_si256, addr 0x449bbdc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_andnot_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_avg_epu16, addr 0x449c440, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_avg_epu8, addr 0x449c3e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_avg_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_blend_epi16, addr 0x449d9d0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blend_epi32, addr 0x449d88c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blend_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_blendv_epi8, addr 0x449d964, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_blendv_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_broadcastb_epi8, addr 0x449e108, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastb_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastd_epi32, addr 0x449e164, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastq_epi64, addr 0x449e178, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastq_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastsd_pd, addr 0x449e0b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsd_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastsi128_si256, addr 0x449e184, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastsi128_si256(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastss_ps, addr 0x449e098, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastss_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_broadcastw_epi16, addr 0x449e120, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_broadcastw_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_bslli_epi128, addr 0x449cc90, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_bslli_epi128(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_bsrli_epi128, addr 0x449cd50, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_bsrli_epi128(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_cmpeq_epi16, addr 0x449b410, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi32, addr 0x449b470, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi64, addr 0x449b4d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpeq_epi8, addr 0x449b3b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpeq_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi16, addr 0x449b590, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi32, addr 0x449b5f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi64, addr 0x449b650, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cmpgt_epi8, addr 0x449b530, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cmpgt_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_cvtepi16_epi32, addr 0x449e2c8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi16_epi64, addr 0x449e330, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi32_epi64, addr 0x449e398, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi16, addr 0x449e190, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi32, addr 0x449e1f8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepi8_epi64, addr 0x449e260, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepi8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu16_epi32, addr 0x449e538, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu16_epi64, addr 0x449e5a0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu32_epi64, addr 0x449e608, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi16, addr 0x449e400, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi32, addr 0x449e468, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtepu8_epi64, addr 0x449e4d0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtepu8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtsd_f64, addr 0x449b398, size 0x8, virtual false, abstract: false, final false
static inline double_t mm256_cvtsd_f64(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtsi256_si32, addr 0x449b3a0, size 0x8, virtual false, abstract: false, final false
static inline int32_t mm256_cvtsi256_si32(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_cvtsi256_si64, addr 0x449b3a8, size 0x8, virtual false, abstract: false, final false
static inline int64_t mm256_cvtsi256_si64(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_extract_epi16, addr 0x449b388, size 0x10, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extract_epi8, addr 0x449b37c, size 0xc, virtual false, abstract: false, final false
static inline int32_t mm256_extract_epi8(::Unity::Burst::Intrinsics::v256  a, int32_t  index) ;

/// @brief Method mm256_extracti128_si256, addr 0x449e03c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_extracti128_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_hadd_epi16, addr 0x449c4a0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadd_epi32, addr 0x449c500, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadd_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hadds_epi16, addr 0x449c560, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hadds_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_epi16, addr 0x449c5c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsub_epi32, addr 0x449c620, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsub_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_hsubs_epi16, addr 0x449c680, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_hsubs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_i32gather_epi32, addr 0x449eb94, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi32(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_epi64, addr 0x449f18c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_epi64(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_pd, addr 0x449ec48, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_pd(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, int32_t  scale) ;

/// @brief Method mm256_i32gather_ps, addr 0x449ecfc, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i32gather_ps(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_epi32, addr 0x449f240, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_epi32(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_epi64, addr 0x449f2e8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_epi64(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_pd, addr 0x449edb0, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_i64gather_pd(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_i64gather_ps, addr 0x449ee64, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_i64gather_ps(::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, int32_t  scale) ;

/// @brief Method mm256_inserti128_si256, addr 0x449e060, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_inserti128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mm256_madd_epi16, addr 0x449c6e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_madd_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_maddubs_epi16, addr 0x449c740, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maddubs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mask_i32gather_epi32, addr 0x449f924, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi32(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_epi64, addr 0x449f9e8, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_epi64(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_pd, addr 0x449f61c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_pd(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v128  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i32gather_ps, addr 0x449f6e0, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i32gather_ps(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_epi32, addr 0x449fb70, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_epi32(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_epi64, addr 0x449faac, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_epi64(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_pd, addr 0x449f7a4, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mask_i64gather_pd(::Unity::Burst::Intrinsics::v256  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v256  mask, int32_t  scale) ;

/// @brief Method mm256_mask_i64gather_ps, addr 0x449f868, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_mask_i64gather_ps(::Unity::Burst::Intrinsics::v128  src, ::cordl_internals::Ptr<void>  base_addr, ::Unity::Burst::Intrinsics::v256  vindex, ::Unity::Burst::Intrinsics::v128  mask, int32_t  scale) ;

/// @brief Method mm256_maskload_epi32, addr 0x449e818, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi32(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskload_epi64, addr 0x449e880, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_maskload_epi64(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask) ;

/// @brief Method mm256_maskstore_epi32, addr 0x449e8e8, size 0x24, virtual false, abstract: false, final false
static inline void mm256_maskstore_epi32(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_maskstore_epi64, addr 0x449e90c, size 0x24, virtual false, abstract: false, final false
static inline void mm256_maskstore_epi64(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v256  mask, ::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_max_epi16, addr 0x449b75c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epi32, addr 0x449b7bc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epi8, addr 0x449b6fc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu16, addr 0x449b87c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu32, addr 0x449b8dc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_max_epu8, addr 0x449b81c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_max_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi16, addr 0x449b99c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi32, addr 0x449b9fc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epi8, addr 0x449b93c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu16, addr 0x449babc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu32, addr 0x449bb1c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_min_epu8, addr 0x449ba5c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_min_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_movemask_epi8, addr 0x449b348, size 0x34, virtual false, abstract: false, final false
static inline int32_t mm256_movemask_epi8(::Unity::Burst::Intrinsics::v256  a) ;

/// @brief Method mm256_mpsadbw_epu8, addr 0x449cbc0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mpsadbw_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_mul_epi32, addr 0x449c980, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mul_epu32, addr 0x449c920, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mul_epu32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhi_epi16, addr 0x449c7a0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhi_epu16, addr 0x449c800, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhi_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mulhrs_epi16, addr 0x449cb00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mulhrs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mullo_epi16, addr 0x449c860, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_mullo_epi32, addr 0x449c8c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_mullo_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_or_si256, addr 0x449bc3c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_or_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packs_epi16, addr 0x449da3c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packs_epi32, addr 0x449da9c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packs_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packus_epi16, addr 0x449dafc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_packus_epi32, addr 0x449db5c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_packus_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_permute2x128_si256, addr 0x449eb04, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute2x128_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, int32_t  imm8) ;

/// @brief Method mm256_permute4x64_epi64, addr 0x449ea20, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permute4x64_pd, addr 0x449ea8c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permute4x64_pd(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_permutevar8x32_epi32, addr 0x449e930, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  idx) ;

/// @brief Method mm256_permutevar8x32_ps, addr 0x449e99c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_permutevar8x32_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  idx) ;

/// @brief Method mm256_sad_epu8, addr 0x449cb60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sad_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_shuffle_epi32, addr 0x449df1c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_shuffle_epi8, addr 0x449debc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shuffle_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_shufflehi_epi16, addr 0x449df7c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflehi_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_shufflelo_epi16, addr 0x449dfdc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_shufflelo_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_sign_epi16, addr 0x449ca40, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sign_epi32, addr 0x449caa0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sign_epi8, addr 0x449c9e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sign_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sll_epi16, addr 0x449cdb0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sll_epi32, addr 0x449ce1c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sll_epi64, addr 0x449ce88, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sll_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_slli_epi16, addr 0x449cef4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_epi32, addr 0x449cf54, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_epi64, addr 0x449cfb4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_slli_si256, addr 0x449cc30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_slli_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_sllv_epi32, addr 0x449d014, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_sllv_epi64, addr 0x449d0ec, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sllv_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_sra_epi16, addr 0x449d1ac, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_sra_epi32, addr 0x449d218, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sra_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srai_epi16, addr 0x449d284, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srai_epi32, addr 0x449d2e4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srai_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srav_epi32, addr 0x449d344, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srav_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_srl_epi16, addr 0x449d488, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srl_epi32, addr 0x449d4f4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srl_epi64, addr 0x449d560, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srl_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method mm256_srli_epi16, addr 0x449d5cc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi16(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_epi32, addr 0x449d62c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi32(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_epi64, addr 0x449d68c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_epi64(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srli_si256, addr 0x449ccf0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srli_si256(::Unity::Burst::Intrinsics::v256  a, int32_t  imm8) ;

/// @brief Method mm256_srlv_epi32, addr 0x449d6ec, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_srlv_epi64, addr 0x449d7c4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_srlv_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  count) ;

/// @brief Method mm256_stream_load_si256, addr 0x449eb88, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_stream_load_si256(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method mm256_sub_epi16, addr 0x449c140, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi32, addr 0x449c1a0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi64, addr 0x449c200, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_sub_epi8, addr 0x449c0e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_sub_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epi16, addr 0x449c2c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epi8, addr 0x449c260, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epu16, addr 0x449c380, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_subs_epu8, addr 0x449c320, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_subs_epu8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi16, addr 0x449dc1c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi32, addr 0x449dc7c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi64, addr 0x449dcdc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpackhi_epi8, addr 0x449dbbc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpackhi_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi16, addr 0x449dd9c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi16(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi32, addr 0x449ddfc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi32(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi64, addr 0x449de5c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi64(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_unpacklo_epi8, addr 0x449dd3c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_unpacklo_epi8(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method mm256_xor_si256, addr 0x449bc9c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_xor_si256(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b) ;

/// @brief Method sllv_epi32, addr 0x449d06c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sllv_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sllv_epi64, addr 0x449d144, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sllv_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srav_epi32, addr 0x449d39c, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srav_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srlv_epi32, addr 0x449d744, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srlv_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srlv_epi64, addr 0x449d81c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srlv_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Avx2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Avx2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Avx2(__X86__Avx2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Avx2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Avx2(__X86__Avx2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Avx2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Bmi1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Bmi1*
class CORDL_TYPE __X86__Bmi1 : public ::System::Object {
public:
// Declarations
/// @brief Method andn_u32, addr 0x44a01cc, size 0x8, virtual false, abstract: false, final false
static inline uint32_t andn_u32(uint32_t  a, uint32_t  b) ;

/// @brief Method andn_u64, addr 0x44a01d4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t andn_u64(uint64_t  a, uint64_t  b) ;

/// @brief Method bextr2_u32, addr 0x44a023c, size 0x34, virtual false, abstract: false, final false
static inline uint32_t bextr2_u32(uint32_t  a, uint32_t  control) ;

/// @brief Method bextr2_u64, addr 0x44a0270, size 0x34, virtual false, abstract: false, final false
static inline uint64_t bextr2_u64(uint64_t  a, uint64_t  control) ;

/// @brief Method bextr_u32, addr 0x44a01dc, size 0x30, virtual false, abstract: false, final false
static inline uint32_t bextr_u32(uint32_t  a, uint32_t  start, uint32_t  len) ;

/// @brief Method bextr_u64, addr 0x44a020c, size 0x30, virtual false, abstract: false, final false
static inline uint64_t bextr_u64(uint64_t  a, uint32_t  start, uint32_t  len) ;

/// @brief Method blsi_u32, addr 0x44a02a4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsi_u32(uint32_t  a) ;

/// @brief Method blsi_u64, addr 0x44a02b0, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsi_u64(uint64_t  a) ;

/// @brief Method blsmsk_u32, addr 0x44a02bc, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsmsk_u32(uint32_t  a) ;

/// @brief Method blsmsk_u64, addr 0x44a02c8, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsmsk_u64(uint64_t  a) ;

/// @brief Method blsr_u32, addr 0x44a02d4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t blsr_u32(uint32_t  a) ;

/// @brief Method blsr_u64, addr 0x44a02e0, size 0xc, virtual false, abstract: false, final false
static inline uint64_t blsr_u64(uint64_t  a) ;

/// @brief Method get_IsBmi1Supported, addr 0x44a01c4, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsBmi1Supported() ;

/// @brief Method tzcnt_u32, addr 0x44a02ec, size 0x58, virtual false, abstract: false, final false
static inline uint32_t tzcnt_u32(uint32_t  a) ;

/// @brief Method tzcnt_u64, addr 0x44a0344, size 0x64, virtual false, abstract: false, final false
static inline uint64_t tzcnt_u64(uint64_t  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Bmi1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Bmi1(__X86__Bmi1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Bmi1(__X86__Bmi1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Bmi1, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Bmi2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Bmi2*
class CORDL_TYPE __X86__Bmi2 : public ::System::Object {
public:
// Declarations
/// @brief Method bzhi_u32, addr 0x44a03b0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t bzhi_u32(uint32_t  a, uint32_t  index) ;

/// @brief Method bzhi_u64, addr 0x44a03c8, size 0x18, virtual false, abstract: false, final false
static inline uint64_t bzhi_u64(uint64_t  a, uint64_t  index) ;

/// @brief Method get_IsBmi2Supported, addr 0x44a03a8, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsBmi2Supported() ;

/// @brief Method mulx_u32, addr 0x44a03e0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t mulx_u32(uint32_t  a, uint32_t  b, ByRef<uint32_t>  hi) ;

/// @brief Method mulx_u64, addr 0x44a03f0, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t mulx_u64(uint64_t  a, uint64_t  b, ByRef<uint64_t>  hi) ;

/// @brief Method pdep_u32, addr 0x44a042c, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t pdep_u32(uint32_t  a, uint32_t  mask) ;

/// @brief Method pdep_u64, addr 0x44a0468, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t pdep_u64(uint64_t  a, uint64_t  mask) ;

/// @brief Method pext_u32, addr 0x44a04a4, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t pext_u32(uint32_t  a, uint32_t  mask) ;

/// @brief Method pext_u64, addr 0x44a04e0, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t pext_u64(uint64_t  a, uint64_t  mask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Bmi2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Bmi2(__X86__Bmi2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Bmi2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Bmi2(__X86__Bmi2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Bmi2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::MXCSRBits
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::MXCSRBits
struct CORDL_TYPE __X86__MXCSRBits {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____X86__MXCSRBits_Unwrapped
enum struct ____X86__MXCSRBits_Unwrapped : int32_t {
__E_FlushToZero = static_cast<int32_t>(0x8000),
__E_RoundingControlMask = static_cast<int32_t>(0x6000),
__E_RoundToNearest = static_cast<int32_t>(0x0),
__E_RoundDown = static_cast<int32_t>(0x2000),
__E_RoundUp = static_cast<int32_t>(0x4000),
__E_RoundTowardZero = static_cast<int32_t>(0x6000),
__E_PrecisionMask = static_cast<int32_t>(0x1000),
__E_UnderflowMask = static_cast<int32_t>(0x800),
__E_OverflowMask = static_cast<int32_t>(0x400),
__E_DivideByZeroMask = static_cast<int32_t>(0x200),
__E_DenormalOperationMask = static_cast<int32_t>(0x100),
__E_InvalidOperationMask = static_cast<int32_t>(0x80),
__E_ExceptionMask = static_cast<int32_t>(0x1f80),
__E_DenormalsAreZeroes = static_cast<int32_t>(0x40),
__E_PrecisionFlag = static_cast<int32_t>(0x20),
__E_UnderflowFlag = static_cast<int32_t>(0x10),
__E_OverflowFlag = static_cast<int32_t>(0x8),
__E_DivideByZeroFlag = static_cast<int32_t>(0x4),
__E_DenormalFlag = static_cast<int32_t>(0x2),
__E_InvalidOperationFlag = static_cast<int32_t>(0x1),
__E_FlagMask = static_cast<int32_t>(0x3f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____X86__MXCSRBits_Unwrapped () const noexcept {
return static_cast<____X86__MXCSRBits_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __X86__MXCSRBits() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __X86__MXCSRBits(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field DenormalFlag value: static_cast<int32_t>(0x2)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalFlag;

/// @brief Field DenormalOperationMask value: static_cast<int32_t>(0x100)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalOperationMask;

/// @brief Field DenormalsAreZeroes value: static_cast<int32_t>(0x40)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DenormalsAreZeroes;

/// @brief Field DivideByZeroFlag value: static_cast<int32_t>(0x4)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DivideByZeroFlag;

/// @brief Field DivideByZeroMask value: static_cast<int32_t>(0x200)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const DivideByZeroMask;

/// @brief Field ExceptionMask value: static_cast<int32_t>(0x1f80)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const ExceptionMask;

/// @brief Field FlagMask value: static_cast<int32_t>(0x3f)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const FlagMask;

/// @brief Field FlushToZero value: static_cast<int32_t>(0x8000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const FlushToZero;

/// @brief Field InvalidOperationFlag value: static_cast<int32_t>(0x1)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const InvalidOperationFlag;

/// @brief Field InvalidOperationMask value: static_cast<int32_t>(0x80)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const InvalidOperationMask;

/// @brief Field OverflowFlag value: static_cast<int32_t>(0x8)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const OverflowFlag;

/// @brief Field OverflowMask value: static_cast<int32_t>(0x400)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const OverflowMask;

/// @brief Field PrecisionFlag value: static_cast<int32_t>(0x20)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const PrecisionFlag;

/// @brief Field PrecisionMask value: static_cast<int32_t>(0x1000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const PrecisionMask;

/// @brief Field RoundDown value: static_cast<int32_t>(0x2000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundDown;

/// @brief Field RoundToNearest value: static_cast<int32_t>(0x0)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundToNearest;

/// @brief Field RoundTowardZero value: static_cast<int32_t>(0x6000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundTowardZero;

/// @brief Field RoundUp value: static_cast<int32_t>(0x4000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundUp;

/// @brief Field RoundingControlMask value: static_cast<int32_t>(0x6000)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const RoundingControlMask;

/// @brief Field UnderflowFlag value: static_cast<int32_t>(0x10)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const UnderflowFlag;

/// @brief Field UnderflowMask value: static_cast<int32_t>(0x800)
static ::Unity::Burst::Intrinsics::__X86__MXCSRBits const UnderflowMask;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__MXCSRBits, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__MXCSRBits, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::RoundingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::RoundingMode
struct CORDL_TYPE __X86__RoundingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____X86__RoundingMode_Unwrapped
enum struct ____X86__RoundingMode_Unwrapped : int32_t {
__E_FROUND_TO_NEAREST_INT = static_cast<int32_t>(0x0),
__E_FROUND_TO_NEG_INF = static_cast<int32_t>(0x1),
__E_FROUND_TO_POS_INF = static_cast<int32_t>(0x2),
__E_FROUND_TO_ZERO = static_cast<int32_t>(0x3),
__E_FROUND_CUR_DIRECTION = static_cast<int32_t>(0x4),
__E_FROUND_RAISE_EXC = static_cast<int32_t>(0x0),
__E_FROUND_NO_EXC = static_cast<int32_t>(0x8),
__E_FROUND_NINT = static_cast<int32_t>(0x0),
__E_FROUND_FLOOR = static_cast<int32_t>(0x1),
__E_FROUND_CEIL = static_cast<int32_t>(0x2),
__E_FROUND_TRUNC = static_cast<int32_t>(0x3),
__E_FROUND_RINT = static_cast<int32_t>(0x4),
__E_FROUND_NEARBYINT = static_cast<int32_t>(0xc),
__E_FROUND_NINT_NOEXC = static_cast<int32_t>(0x8),
__E_FROUND_FLOOR_NOEXC = static_cast<int32_t>(0x9),
__E_FROUND_CEIL_NOEXC = static_cast<int32_t>(0xa),
__E_FROUND_TRUNC_NOEXC = static_cast<int32_t>(0xb),
__E_FROUND_RINT_NOEXC = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____X86__RoundingMode_Unwrapped () const noexcept {
return static_cast<____X86__RoundingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __X86__RoundingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __X86__RoundingMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field FROUND_CEIL value: static_cast<int32_t>(0x2)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CEIL;

/// @brief Field FROUND_CEIL_NOEXC value: static_cast<int32_t>(0xa)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CEIL_NOEXC;

/// @brief Field FROUND_CUR_DIRECTION value: static_cast<int32_t>(0x4)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_CUR_DIRECTION;

/// @brief Field FROUND_FLOOR value: static_cast<int32_t>(0x1)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_FLOOR;

/// @brief Field FROUND_FLOOR_NOEXC value: static_cast<int32_t>(0x9)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_FLOOR_NOEXC;

/// @brief Field FROUND_NEARBYINT value: static_cast<int32_t>(0xc)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NEARBYINT;

/// @brief Field FROUND_NINT value: static_cast<int32_t>(0x0)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NINT;

/// @brief Field FROUND_NINT_NOEXC value: static_cast<int32_t>(0x8)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NINT_NOEXC;

/// @brief Field FROUND_NO_EXC value: static_cast<int32_t>(0x8)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_NO_EXC;

/// @brief Field FROUND_RAISE_EXC value: static_cast<int32_t>(0x0)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RAISE_EXC;

/// @brief Field FROUND_RINT value: static_cast<int32_t>(0x4)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RINT;

/// @brief Field FROUND_RINT_NOEXC value: static_cast<int32_t>(0xc)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_RINT_NOEXC;

/// @brief Field FROUND_TO_NEAREST_INT value: static_cast<int32_t>(0x0)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_NEAREST_INT;

/// @brief Field FROUND_TO_NEG_INF value: static_cast<int32_t>(0x1)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_NEG_INF;

/// @brief Field FROUND_TO_POS_INF value: static_cast<int32_t>(0x2)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_POS_INF;

/// @brief Field FROUND_TO_ZERO value: static_cast<int32_t>(0x3)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TO_ZERO;

/// @brief Field FROUND_TRUNC value: static_cast<int32_t>(0x3)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TRUNC;

/// @brief Field FROUND_TRUNC_NOEXC value: static_cast<int32_t>(0xb)
static ::Unity::Burst::Intrinsics::__X86__RoundingMode const FROUND_TRUNC_NOEXC;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__RoundingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__RoundingMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::RoundingScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::X86::RoundingScope
struct CORDL_TYPE __X86__RoundingScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x44a0524, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x44a051c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Burst::Intrinsics::__X86__MXCSRBits  roundingMode) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr __X86__RoundingScope() ;

// Ctor Parameters [CppParam { name: "OldBits", ty: "::Unity::Burst::Intrinsics::__X86__MXCSRBits", modifiers: "", def_value: None }]
constexpr __X86__RoundingScope(::Unity::Burst::Intrinsics::__X86__MXCSRBits  OldBits) noexcept;

/// @brief Field OldBits, offset: 0x0, size: 0x4, def value: None
 ::Unity::Burst::Intrinsics::__X86__MXCSRBits  OldBits;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__RoundingScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::__X86__RoundingScope, OldBits) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::F16C
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::F16C*
class CORDL_TYPE __X86__F16C : public ::System::Object {
public:
// Declarations
/// @brief Field BaseTable, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_BaseTable, put=setStaticF_BaseTable)) ::ArrayW<uint16_t,::Array<uint16_t>*>  BaseTable;

/// @brief Field ShiftTable, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ShiftTable, put=setStaticF_ShiftTable)) ::ArrayW<int8_t,::Array<int8_t>*>  ShiftTable;

/// @brief Method FloatToHalf, addr 0x44a0724, size 0x1d0, virtual false, abstract: false, final false
static inline uint16_t FloatToHalf(uint32_t  f, int32_t  rounding) ;

/// @brief Method HalfToFloat, addr 0x44a0530, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t HalfToFloat(uint16_t  h) ;

/// @brief Method cvtph_ps, addr 0x44a058c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtph_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_ph, addr 0x44a08f4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_ph(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

static inline ::ArrayW<uint16_t,::Array<uint16_t>*> getStaticF_BaseTable() ;

static inline ::ArrayW<int8_t,::Array<int8_t>*> getStaticF_ShiftTable() ;

/// @brief Method get_IsF16CSupported, addr 0x44a0528, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsF16CSupported() ;

/// @brief Method mm256_cvtph_ps, addr 0x44a0630, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_cvtph_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mm256_cvtps_ph, addr 0x44a09c0, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mm256_cvtps_ph(::Unity::Burst::Intrinsics::v256  a, int32_t  rounding) ;

static inline void setStaticF_BaseTable(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

static inline void setStaticF_ShiftTable(::ArrayW<int8_t,::Array<int8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__F16C() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__F16C", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__F16C(__X86__F16C && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__F16C", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__F16C(__X86__F16C const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__F16C, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Union
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Fma::Union
struct CORDL_TYPE __X86__Fma__Union {
public:
// Declarations
/// @brief Field f, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_f, put=__cordl_internal_set_f)) float_t  f;

/// @brief Field u, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_u, put=__cordl_internal_set_u)) uint32_t  u;

constexpr float_t const& __cordl_internal_get_f() const;

constexpr float_t& __cordl_internal_get_f() ;

constexpr uint32_t const& __cordl_internal_get_u() const;

constexpr uint32_t& __cordl_internal_get_u() ;

constexpr void __cordl_internal_set_f(float_t  value) ;

constexpr void __cordl_internal_set_u(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __X86__Fma__Union() ;

// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "u", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __X86__Fma__Union(float_t  f, uint32_t  u) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___f_padding[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___f_padding_forAlignment[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___u_padding[0x0];
/// @brief Field u, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___u;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___u_padding_forAlignment[0x0];
/// @brief Field u, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___u_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Fma__Union, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Fma
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Fma*
class CORDL_TYPE __X86__Fma : public ::System::Object {
public:
// Declarations
using Union = ::GlobalNamespace::__X86__Fma__Union;

/// @brief Method FmaHelper, addr 0x44a0bf8, size 0x1c, virtual false, abstract: false, final false
static inline float_t FmaHelper(float_t  a, float_t  b, float_t  c) ;

/// @brief Method FnmaHelper, addr 0x44a0c14, size 0x1c, virtual false, abstract: false, final false
static inline float_t FnmaHelper(float_t  a, float_t  b, float_t  c) ;

/// @brief Method fmadd_pd, addr 0x44a0c30, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_ps, addr 0x44a0cc8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_sd, addr 0x44a0dcc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmadd_ss, addr 0x44a0e18, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmadd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmaddsub_pd, addr 0x44a0e4c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmaddsub_ps, addr 0x44a0ee4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmaddsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_pd, addr 0x44a1020, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_ps, addr 0x44a10b8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_sd, addr 0x44a11bc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsub_ss, addr 0x44a1208, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsubadd_pd, addr 0x44a123c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fmsubadd_ps, addr 0x44a12d4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fmsubadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_pd, addr 0x44a1400, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_ps, addr 0x44a1498, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_sd, addr 0x44a159c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmadd_ss, addr 0x44a15e8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmadd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_pd, addr 0x44a161c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_ps, addr 0x44a16b4, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_sd, addr 0x44a17c8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method fnmsub_ss, addr 0x44a1814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 fnmsub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  c) ;

/// @brief Method get_IsFmaSupported, addr 0x44a0bf0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsFmaSupported() ;

/// @brief Method mm256_fmadd_pd, addr 0x44a0c7c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmadd_ps, addr 0x44a0d4c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmaddsub_pd, addr 0x44a0e98, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmaddsub_ps, addr 0x44a0f68, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmaddsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsub_pd, addr 0x44a106c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsub_ps, addr 0x44a113c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsubadd_pd, addr 0x44a1288, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fmsubadd_ps, addr 0x44a1358, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fmsubadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmadd_pd, addr 0x44a144c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmadd_ps, addr 0x44a151c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmadd_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmsub_pd, addr 0x44a1668, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_pd(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

/// @brief Method mm256_fnmsub_ps, addr 0x44a1740, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v256 mm256_fnmsub_ps(::Unity::Burst::Intrinsics::v256  a, ::Unity::Burst::Intrinsics::v256  b, ::Unity::Burst::Intrinsics::v256  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Fma() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Fma", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Fma(__X86__Fma && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Fma", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Fma(__X86__Fma const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Fma, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Popcnt
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Popcnt*
class CORDL_TYPE __X86__Popcnt : public ::System::Object {
public:
// Declarations
/// @brief Method get_IsPopcntSupported, addr 0x44a184c, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsPopcntSupported() ;

/// @brief Method popcnt_u32, addr 0x44a189c, size 0x20, virtual false, abstract: false, final false
static inline int32_t popcnt_u32(uint32_t  v) ;

/// @brief Method popcnt_u64, addr 0x44a18bc, size 0x20, virtual false, abstract: false, final false
static inline int32_t popcnt_u64(uint64_t  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Popcnt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Popcnt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Popcnt(__X86__Popcnt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Popcnt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Popcnt(__X86__Popcnt const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Popcnt, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Sse
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse*
class CORDL_TYPE __X86__Sse : public ::System::Object {
public:
// Declarations
/// @brief Method SHUFFLE, addr 0x44a208c, size 0x14, virtual false, abstract: false, final false
static inline int32_t SHUFFLE(int32_t  d, int32_t  c, int32_t  b, int32_t  a) ;

/// @brief Method TRANSPOSE4_PS, addr 0x44a20b0, size 0x100, virtual false, abstract: false, final false
static inline void TRANSPOSE4_PS(ByRef<::Unity::Burst::Intrinsics::v128>  row0, ByRef<::Unity::Burst::Intrinsics::v128>  row1, ByRef<::Unity::Burst::Intrinsics::v128>  row2, ByRef<::Unity::Burst::Intrinsics::v128>  row3) ;

/// @brief Method add_ps, addr 0x4497ba0, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_ss, addr 0x44a1920, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_ps, addr 0x4497d20, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_ps, addr 0x4497da4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_ps, addr 0x4498fd8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_ss, addr 0x44a1b9c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_ps, addr 0x4499358, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_ss, addr 0x44a1c20, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_ps, addr 0x4499374, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_ss, addr 0x44a1bfc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_ps, addr 0x44990b0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_ss, addr 0x44a1bdc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_ps, addr 0x4499044, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_ss, addr 0x44a1bbc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_ps, addr 0x449917c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_ss, addr 0x44a1c44, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_ps, addr 0x4499320, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_ss, addr 0x44a1cc8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_ps, addr 0x449933c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_ss, addr 0x44a1ca4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_ps, addr 0x4499254, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_ss, addr 0x44a1c84, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_ps, addr 0x44991e8, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_ss, addr 0x44a1c64, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_ps, addr 0x44992c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_ss, addr 0x44a1cec, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_ps, addr 0x449911c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_ss, addr 0x44a1d28, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comieq_ss, addr 0x44a1d64, size 0x14, virtual false, abstract: false, final false
static inline int32_t comieq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comige_ss, addr 0x44a1db4, size 0x14, virtual false, abstract: false, final false
static inline int32_t comige_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comigt_ss, addr 0x44a1da0, size 0x14, virtual false, abstract: false, final false
static inline int32_t comigt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comile_ss, addr 0x44a1d8c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comile_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comilt_ss, addr 0x44a1d78, size 0x14, virtual false, abstract: false, final false
static inline int32_t comilt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comineq_ss, addr 0x44a1dc8, size 0x14, virtual false, abstract: false, final false
static inline int32_t comineq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvt_ss2si, addr 0x44a1e58, size 0xb0, virtual false, abstract: false, final false
static inline int32_t cvt_ss2si(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi32_ss, addr 0x44a18f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_ss(::Unity::Burst::Intrinsics::v128  a, int32_t  b) ;

/// @brief Method cvtsi64_ss, addr 0x44a190c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_ss(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtss_f32, addr 0x44a1fb8, size 0x8, virtual false, abstract: false, final false
static inline float_t cvtss_f32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtss_si32, addr 0x44a1e54, size 0x4, virtual false, abstract: false, final false
static inline int32_t cvtss_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtss_si64, addr 0x44a1f08, size 0xb0, virtual false, abstract: false, final false
static inline int64_t cvtss_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtt_ss2si, addr 0x44a1fe0, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvtt_ss2si(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttss_si32, addr 0x44a1fc0, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvttss_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttss_si64, addr 0x44a2000, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttss_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method div_ps, addr 0x4498020, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method div_ss, addr 0x44a1974, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSseSupported, addr 0x4497acc, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSseSupported() ;

/// @brief Method load_ps, addr 0x44a18dc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 load_ps(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method loadu_ps, addr 0x4499bf0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_ps(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method loadu_si16, addr 0x44a21b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si16(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method loadu_si64, addr 0x44a21c4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si64(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method max_ps, addr 0x449830c, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_ss, addr 0x44a1b1c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_ps, addr 0x44984b4, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_ss, addr 0x44a1a9c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method move_ss, addr 0x44a2084, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movehl_ps, addr 0x44a20a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movehl_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movelh_ps, addr 0x44a20a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movelh_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movemask_ps, addr 0x449ace0, size 0x28, virtual false, abstract: false, final false
static inline int32_t movemask_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mul_ps, addr 0x449865c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_ss, addr 0x44a1958, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_ps, addr 0x449871c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method rcp_ps, addr 0x449a06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rcp_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rcp_ss, addr 0x44a1a04, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rcp_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rsqrt_ps, addr 0x449a0e8, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method rsqrt_ss, addr 0x44a1a20, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 rsqrt_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method set1_ps, addr 0x44a202c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_ps(float_t  a) ;

/// @brief Method set_ps, addr 0x44a204c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ps(float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method set_ps1, addr 0x44a203c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ps1(float_t  a) ;

/// @brief Method set_ss, addr 0x44a2020, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_ss(float_t  a) ;

/// @brief Method setr_ps, addr 0x44a2068, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_ps(float_t  e3, float_t  e2, float_t  e1, float_t  e0) ;

/// @brief Method setzero_ps, addr 0x449b144, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setzero_ps() ;

/// @brief Method shuffle_ps, addr 0x44987fc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method sqrt_ps, addr 0x449a210, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sqrt_ss, addr 0x44a1990, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_ss(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method store_ps, addr 0x44a18e8, size 0x8, virtual false, abstract: false, final false
static inline void store_ps(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_ps, addr 0x4499d68, size 0x8, virtual false, abstract: false, final false
static inline void storeu_ps(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si16, addr 0x44a21bc, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si16(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method storeu_si64, addr 0x44a21d0, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si64(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_ps, addr 0x44a18f0, size 0x8, virtual false, abstract: false, final false
static inline void stream_ps(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sub_ps, addr 0x449892c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_ss, addr 0x44a193c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomieq_ss, addr 0x44a1ddc, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomieq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomige_ss, addr 0x44a1e2c, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomige_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomigt_ss, addr 0x44a1e18, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomigt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomile_ss, addr 0x44a1e04, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomile_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomilt_ss, addr 0x44a1df0, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomilt_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomineq_ss, addr 0x44a1e40, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomineq_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_ps, addr 0x449a5e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_ps, addr 0x449a628, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_ps, addr 0x44989ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Sse(__X86__Sse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Sse(__X86__Sse const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Sse2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse2*
class CORDL_TYPE __X86__Sse2 : public ::System::Object {
public:
// Declarations
/// @brief Method SHUFFLE2, addr 0x44a21e0, size 0x8, virtual false, abstract: false, final false
static inline int32_t SHUFFLE2(int32_t  x, int32_t  y) ;

/// @brief Method add_epi16, addr 0x44a2278, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi32, addr 0x44a22e8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi64, addr 0x44a2314, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_epi8, addr 0x44a2208, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_pd, addr 0x44a4d30, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method add_sd, addr 0x44a4d1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 add_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epi16, addr 0x44a23a8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epi8, addr 0x44a2320, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epu16, addr 0x44a24b8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method adds_epu8, addr 0x44a2430, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 adds_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_pd, addr 0x44a50fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method and_si128, addr 0x44a4024, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 and_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_pd, addr 0x44a5108, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method andnot_si128, addr 0x44a4030, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 andnot_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method avg_epu16, addr 0x44a25b8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 avg_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method avg_epu8, addr 0x44a2540, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 avg_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method bslli_si128, addr 0x44a31a0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 bslli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method bsrli_si128, addr 0x44a31a4, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 bsrli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method clflush, addr 0x44a5ed0, size 0x4, virtual false, abstract: false, final false
static inline void clflush(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method cmpeq_epi16, addr 0x44a40c8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi32, addr 0x44a413c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi8, addr 0x44a4054, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_pd, addr 0x44a5294, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_sd, addr 0x44a512c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_pd, addr 0x44a5324, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpge_sd, addr 0x44a5180, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpge_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi16, addr 0x44a4224, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi32, addr 0x44a4298, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_epi8, addr 0x44a41b0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_pd, addr 0x44a5300, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpgt_sd, addr 0x44a5168, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_pd, addr 0x44a52dc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmple_sd, addr 0x44a5154, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmple_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi16, addr 0x44a4328, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi32, addr 0x44a4344, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_epi8, addr 0x44a430c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_pd, addr 0x44a52b8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmplt_sd, addr 0x44a5140, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmplt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_pd, addr 0x44a5498, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpneq_sd, addr 0x44a5228, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpneq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_pd, addr 0x44a5528, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnge_sd, addr 0x44a527c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnge_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_pd, addr 0x44a5504, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpngt_sd, addr 0x44a5264, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpngt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_pd, addr 0x44a54e0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnle_sd, addr 0x44a5250, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnle_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_pd, addr 0x44a54bc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpnlt_sd, addr 0x44a523c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpnlt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_pd, addr 0x44a5348, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpord_sd, addr 0x44a5198, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpord_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_pd, addr 0x44a53f4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpunord_sd, addr 0x44a51e0, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpunord_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comieq_sd, addr 0x44a554c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comieq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comige_sd, addr 0x44a559c, size 0x14, virtual false, abstract: false, final false
static inline int32_t comige_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comigt_sd, addr 0x44a5588, size 0x14, virtual false, abstract: false, final false
static inline int32_t comigt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comile_sd, addr 0x44a5574, size 0x14, virtual false, abstract: false, final false
static inline int32_t comile_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comilt_sd, addr 0x44a5560, size 0x14, virtual false, abstract: false, final false
static inline int32_t comilt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method comineq_sd, addr 0x44a55b0, size 0x14, virtual false, abstract: false, final false
static inline int32_t comineq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtepi32_pd, addr 0x44a4360, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi32_ps, addr 0x44a439c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtpd_epi32, addr 0x44a5680, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtpd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtpd_ps, addr 0x44a563c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtpd_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_epi32, addr 0x44a5a88, size 0x294, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtps_pd, addr 0x44a5660, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtps_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_f64, addr 0x44a59c4, size 0x8, virtual false, abstract: false, final false
static inline double_t cvtsd_f64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si32, addr 0x44a57f0, size 0xdc, virtual false, abstract: false, final false
static inline int32_t cvtsd_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si64, addr 0x44a58cc, size 0xdc, virtual false, abstract: false, final false
static inline int64_t cvtsd_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_si64x, addr 0x44a59a8, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsd_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsd_ss, addr 0x44a59ac, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsd_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtsi128_si32, addr 0x44a43ec, size 0x4, virtual false, abstract: false, final false
static inline int32_t cvtsi128_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi128_si64, addr 0x44a43f0, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsi128_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi128_si64x, addr 0x44a43f4, size 0x4, virtual false, abstract: false, final false
static inline int64_t cvtsi128_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtsi32_sd, addr 0x44a4378, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_sd(::Unity::Burst::Intrinsics::v128  a, int32_t  b) ;

/// @brief Method cvtsi32_si128, addr 0x44a43d0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi32_si128(int32_t  a) ;

/// @brief Method cvtsi64_sd, addr 0x44a4384, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_sd(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtsi64_si128, addr 0x44a43dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64_si128(int64_t  a) ;

/// @brief Method cvtsi64x_sd, addr 0x44a4390, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_sd(::Unity::Burst::Intrinsics::v128  a, int64_t  b) ;

/// @brief Method cvtsi64x_si128, addr 0x44a43e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtsi64x_si128(int64_t  a) ;

/// @brief Method cvtss_sd, addr 0x44a59cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtss_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvttpd_epi32, addr 0x44a59e8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvttpd_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttps_epi32, addr 0x44a5d1c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvttps_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si32, addr 0x44a5a28, size 0x20, virtual false, abstract: false, final false
static inline int32_t cvttsd_si32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si64, addr 0x44a5a48, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttsd_si64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvttsd_si64x, addr 0x44a5a68, size 0x20, virtual false, abstract: false, final false
static inline int64_t cvttsd_si64x(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method div_pd, addr 0x44a4d68, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method div_sd, addr 0x44a4d54, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 div_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method extract_epi16, addr 0x44a485c, size 0x48, virtual false, abstract: false, final false
static inline uint16_t extract_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method get_IsSse2Supported, addr 0x44a21d8, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse2Supported() ;

/// @brief Method insert_epi16, addr 0x44a48a4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  i, int32_t  imm8) ;

/// @brief Method load_si128, addr 0x44a5eb0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 load_si128(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method loadu_si128, addr 0x44a5eb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si128(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method loadu_si32, addr 0x44a5e50, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 loadu_si32(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method madd_epi16, addr 0x44a2630, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 madd_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epi16, addr 0x44a26b4, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu8, addr 0x44a2788, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_pd, addr 0x44a4e04, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_sd, addr 0x44a4d8c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi16, addr 0x44a285c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu8, addr 0x44a2930, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_pd, addr 0x44a4f14, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_sd, addr 0x44a4e9c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method move_epi64, addr 0x44a465c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method move_sd, addr 0x44a5e48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 move_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movemask_epi8, addr 0x44a48f0, size 0x6c, virtual false, abstract: false, final false
static inline int32_t movemask_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method movemask_pd, addr 0x44a5dd8, size 0x14, virtual false, abstract: false, final false
static inline int32_t movemask_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mul_epu32, addr 0x44a2b5c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_pd, addr 0x44a4fc0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mul_sd, addr 0x44a4fac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhi_epi16, addr 0x44a2a04, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhi_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhi_epu16, addr 0x44a2a78, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhi_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mullo_epi16, addr 0x44a2aec, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mullo_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_pd, addr 0x44a5114, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method or_si128, addr 0x44a403c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 or_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packs_epi16, addr 0x44a4664, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packs_epi32, addr 0x44a470c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packus_epi16, addr 0x44a47b4, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sad_epu8, addr 0x44a2b68, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sad_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method set1_epi16, addr 0x44a44e8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi16(int16_t  a) ;

/// @brief Method set1_epi32, addr 0x44a44d8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi32(int32_t  a) ;

/// @brief Method set1_epi64x, addr 0x44a44d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi64x(int64_t  a) ;

/// @brief Method set1_epi8, addr 0x44a453c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_epi8(int8_t  a) ;

/// @brief Method set1_pd, addr 0x44a5d94, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set1_pd(double_t  a) ;

/// @brief Method set_epi16, addr 0x44a4420, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi16(int16_t  e7, int16_t  e6, int16_t  e5, int16_t  e4, int16_t  e3, int16_t  e2, int16_t  e1, int16_t  e0) ;

/// @brief Method set_epi32, addr 0x44a4408, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi32(int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method set_epi64x, addr 0x44a43f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi64x(int64_t  e1, int64_t  e0) ;

/// @brief Method set_epi8, addr 0x44a4454, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_epi8(int8_t  e15_, int8_t  e14_, int8_t  e13_, int8_t  e12_, int8_t  e11_, int8_t  e10_, int8_t  e9_, int8_t  e8_, int8_t  e7_, int8_t  e6_, int8_t  e5_, int8_t  e4_, int8_t  e3_, int8_t  e2_, int8_t  e1_, int8_t  e0_) ;

/// @brief Method set_pd, addr 0x44a5dac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_pd(double_t  e1, double_t  e0) ;

/// @brief Method set_pd1, addr 0x44a5da0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_pd1(double_t  a) ;

/// @brief Method set_sd, addr 0x44a5d88, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 set_sd(double_t  a) ;

/// @brief Method setr_epi16, addr 0x44a45a8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi16(int16_t  e7, int16_t  e6, int16_t  e5, int16_t  e4, int16_t  e3, int16_t  e2, int16_t  e1, int16_t  e0) ;

/// @brief Method setr_epi32, addr 0x44a4590, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi32(int32_t  e3, int32_t  e2, int32_t  e1, int32_t  e0) ;

/// @brief Method setr_epi8, addr 0x44a45d8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_epi8(int8_t  e15_, int8_t  e14_, int8_t  e13_, int8_t  e12_, int8_t  e11_, int8_t  e10_, int8_t  e9_, int8_t  e8_, int8_t  e7_, int8_t  e6_, int8_t  e5_, int8_t  e4_, int8_t  e3_, int8_t  e2_, int8_t  e1_, int8_t  e0_) ;

/// @brief Method setr_pd, addr 0x44a5db8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setr_pd(double_t  e1, double_t  e0) ;

/// @brief Method setzero_si128, addr 0x44a4650, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 setzero_si128() ;

/// @brief Method shuffle_epi32, addr 0x44a495c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method shuffle_pd, addr 0x44a5dec, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method shufflehi_epi16, addr 0x44a49dc, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shufflehi_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method shufflelo_epi16, addr 0x44a4a70, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shufflelo_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method sll_epi16, addr 0x44a3350, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sll_epi32, addr 0x44a34f8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sll_epi64, addr 0x44a36a8, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sll_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method slli_epi16, addr 0x44a32d8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_epi32, addr 0x44a3424, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_epi64, addr 0x44a35cc, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method slli_si128, addr 0x44a3070, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 slli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method sqrt_pd, addr 0x44a5050, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method sqrt_sd, addr 0x44a4fe4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sqrt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sra_epi16, addr 0x44a3864, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sra_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method sra_epi32, addr 0x44a3a24, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sra_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srai_epi16, addr 0x44a3784, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srai_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srai_epi32, addr 0x44a3944, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srai_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srl_epi16, addr 0x44a3be8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srl_epi32, addr 0x44a3da8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srl_epi64, addr 0x44a3f54, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srl_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  count) ;

/// @brief Method srli_epi16, addr 0x44a3b08, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi16(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_epi32, addr 0x44a3cc8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_epi64, addr 0x44a3e88, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method srli_si128, addr 0x44a3b04, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 srli_si128(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method store_si128, addr 0x44a5ec0, size 0x8, virtual false, abstract: false, final false
static inline void store_si128(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si128, addr 0x44a5ec8, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si128(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method storeu_si32, addr 0x44a5ea8, size 0x8, virtual false, abstract: false, final false
static inline void storeu_si32(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_pd, addr 0x44a21f8, size 0x8, virtual false, abstract: false, final false
static inline void stream_pd(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_si128, addr 0x44a2200, size 0x8, virtual false, abstract: false, final false
static inline void stream_si128(::cordl_internals::Ptr<void>  mem_addr, ::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method stream_si32, addr 0x44a21e8, size 0x8, virtual false, abstract: false, final false
static inline void stream_si32(::cordl_internals::Ptr<int32_t>  mem_addr, int32_t  a) ;

/// @brief Method stream_si64, addr 0x44a21f0, size 0x8, virtual false, abstract: false, final false
static inline void stream_si64(::cordl_internals::Ptr<int64_t>  mem_addr, int64_t  a) ;

/// @brief Method sub_epi16, addr 0x44a2d2c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi32, addr 0x44a2d9c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi64, addr 0x44a2e0c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_epi8, addr 0x44a2cbc, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_pd, addr 0x44a50d8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sub_sd, addr 0x44a50c4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sub_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epi16, addr 0x44a2ed8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epi8, addr 0x44a2e50, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epu16, addr 0x44a2fe8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method subs_epu8, addr 0x44a2f60, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 subs_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomieq_sd, addr 0x44a55c4, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomieq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomige_sd, addr 0x44a5614, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomige_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomigt_sd, addr 0x44a5600, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomigt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomile_sd, addr 0x44a55ec, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomile_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomilt_sd, addr 0x44a55d8, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomilt_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ucomineq_sd, addr 0x44a5628, size 0x14, virtual false, abstract: false, final false
static inline int32_t ucomineq_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi16, addr 0x44a4b80, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi32, addr 0x44a4bfc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi64, addr 0x44a4c10, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_epi8, addr 0x44a4b04, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpackhi_pd, addr 0x44a5dc4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpackhi_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi16, addr 0x44a4c90, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi32, addr 0x44a4d04, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi64, addr 0x44a4d14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_epi8, addr 0x44a4c1c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method unpacklo_pd, addr 0x44a5dd0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 unpacklo_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_pd, addr 0x44a5120, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method xor_si128, addr 0x44a4048, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 xor_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Sse2(__X86__Sse2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Sse2(__X86__Sse2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Sse3
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse3*
class CORDL_TYPE __X86__Sse3 : public ::System::Object {
public:
// Declarations
/// @brief Method addsub_pd, addr 0x44a5f24, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 addsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method addsub_ps, addr 0x44a5edc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 addsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSse3Supported, addr 0x44a5ed4, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse3Supported() ;

/// @brief Method hadd_pd, addr 0x44a5f48, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadd_ps, addr 0x44a5f6c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_pd, addr 0x44a5fb4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_ps, addr 0x44a5fd8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method movedup_pd, addr 0x44a6020, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movedup_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method movehdup_ps, addr 0x44a6028, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 movehdup_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method moveldup_ps, addr 0x44a6034, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 moveldup_ps(::Unity::Burst::Intrinsics::v128  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Sse3(__X86__Sse3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Sse3(__X86__Sse3 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse3, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Sse4_1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse4_1*
class CORDL_TYPE __X86__Sse4_1 : public ::System::Object {
public:
// Declarations
/// @brief Method MK_INSERTPS_NDX, addr 0x44a7a1c, size 0x10, virtual false, abstract: false, final false
static inline int32_t MK_INSERTPS_NDX(int32_t  srcField, int32_t  dstField, int32_t  zeroMask) ;

/// @brief Method RoundDImpl, addr 0x44a73f4, size 0x200, virtual false, abstract: false, final false
static inline double_t RoundDImpl(double_t  d, int32_t  roundingMode) ;

/// @brief Method blend_epi16, addr 0x44a62cc, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blend_pd, addr 0x44a6058, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blend_ps, addr 0x44a60d4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blend_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method blendv_epi8, addr 0x44a6250, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method blendv_pd, addr 0x44a6150, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method blendv_ps, addr 0x44a61d4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 blendv_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method ceil_pd, addr 0x44a7670, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method ceil_ps, addr 0x44a7758, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method ceil_sd, addr 0x44a77a8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method ceil_ss, addr 0x44a7844, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 ceil_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cmpeq_epi64, addr 0x44a6ebc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpeq_epi64(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method cvtepi16_epi32, addr 0x44a6fd0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi16_epi64, addr 0x44a7030, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi32_epi64, addr 0x44a7070, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi16, addr 0x44a6ed0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi32, addr 0x44a6f30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepi8_epi64, addr 0x44a6f90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepi8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu16_epi32, addr 0x44a71b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu16_epi64, addr 0x44a7210, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu16_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu32_epi64, addr 0x44a7250, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu32_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi16, addr 0x44a70b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi32, addr 0x44a7110, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method cvtepu8_epi64, addr 0x44a7170, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cvtepu8_epi64(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method dp_pd, addr 0x44a6348, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 dp_pd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method dp_ps, addr 0x44a6390, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 dp_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method extract_epi32, addr 0x44a6518, size 0x48, virtual false, abstract: false, final false
static inline int32_t extract_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_epi64, addr 0x44a6560, size 0x48, virtual false, abstract: false, final false
static inline int64_t extract_epi64(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_epi8, addr 0x44a64d4, size 0x44, virtual false, abstract: false, final false
static inline uint8_t extract_epi8(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extract_ps, addr 0x44a6444, size 0x48, virtual false, abstract: false, final false
static inline int32_t extract_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method extractf_ps, addr 0x44a648c, size 0x48, virtual false, abstract: false, final false
static inline float_t extractf_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  imm8) ;

/// @brief Method floor_pd, addr 0x44a7634, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_pd(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method floor_ps, addr 0x44a7750, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_ps(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method floor_sd, addr 0x44a7784, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method floor_ss, addr 0x44a7808, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 floor_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method get_IsSse41Supported, addr 0x44a6048, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse41Supported() ;

/// @brief Method insert_epi32, addr 0x44a66a4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi32(::Unity::Burst::Intrinsics::v128  a, int32_t  i, int32_t  imm8) ;

/// @brief Method insert_epi64, addr 0x44a66f0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi64(::Unity::Burst::Intrinsics::v128  a, int64_t  i, int32_t  imm8) ;

/// @brief Method insert_epi8, addr 0x44a665c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_epi8(::Unity::Burst::Intrinsics::v128  a, uint8_t  i, int32_t  imm8) ;

/// @brief Method insert_ps, addr 0x44a65a8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 insert_ps(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method max_epi32, addr 0x44a6810, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epi8, addr 0x44a673c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu16, addr 0x44a69b8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method max_epu32, addr 0x44a68e4, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 max_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi32, addr 0x44a6b60, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epi8, addr 0x44a6a8c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu16, addr 0x44a6d08, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method min_epu32, addr 0x44a6c34, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 min_epu32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method minpos_epu16, addr 0x44a7880, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 minpos_epu16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method mpsadbw_epu8, addr 0x44a78f4, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mpsadbw_epu8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method mul_epi32, addr 0x44a7290, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mul_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mullo_epi32, addr 0x44a729c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mullo_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method packus_epi32, addr 0x44a6ddc, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packus_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method round_pd, addr 0x44a75f4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_pd(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

/// @brief Method round_ps, addr 0x44a76ac, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_ps(::Unity::Burst::Intrinsics::v128  a, int32_t  rounding) ;

/// @brief Method round_sd, addr 0x44a7760, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_sd(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  rounding) ;

/// @brief Method round_ss, addr 0x44a77cc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 round_ss(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  rounding) ;

/// @brief Method stream_load_si128, addr 0x44a6050, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 stream_load_si128(::cordl_internals::Ptr<void>  mem_addr) ;

/// @brief Method test_all_ones, addr 0x44a73b8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t test_all_ones(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method test_all_zeros, addr 0x44a7370, size 0x18, virtual false, abstract: false, final false
static inline int32_t test_all_zeros(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method test_mix_ones_zeroes, addr 0x44a7388, size 0x30, virtual false, abstract: false, final false
static inline int32_t test_mix_ones_zeroes(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  mask) ;

/// @brief Method testc_si128, addr 0x44a7324, size 0x1c, virtual false, abstract: false, final false
static inline int32_t testc_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testnzc_si128, addr 0x44a7340, size 0x30, virtual false, abstract: false, final false
static inline int32_t testnzc_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method testz_si128, addr 0x44a730c, size 0x18, virtual false, abstract: false, final false
static inline int32_t testz_si128(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse4_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Sse4_1(__X86__Sse4_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Sse4_1(__X86__Sse4_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse4_1, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::SIDD
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::SIDD
struct CORDL_TYPE __X86__Sse4_2__SIDD {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____X86__Sse4_2__SIDD_Unwrapped
enum struct ____X86__Sse4_2__SIDD_Unwrapped : int32_t {
__E_UBYTE_OPS = static_cast<int32_t>(0x0),
__E_UWORD_OPS = static_cast<int32_t>(0x1),
__E_SBYTE_OPS = static_cast<int32_t>(0x2),
__E_SWORD_OPS = static_cast<int32_t>(0x3),
__E_CMP_EQUAL_ANY = static_cast<int32_t>(0x0),
__E_CMP_RANGES = static_cast<int32_t>(0x4),
__E_CMP_EQUAL_EACH = static_cast<int32_t>(0x8),
__E_CMP_EQUAL_ORDERED = static_cast<int32_t>(0xc),
__E_POSITIVE_POLARITY = static_cast<int32_t>(0x0),
__E_NEGATIVE_POLARITY = static_cast<int32_t>(0x10),
__E_MASKED_POSITIVE_POLARITY = static_cast<int32_t>(0x20),
__E_MASKED_NEGATIVE_POLARITY = static_cast<int32_t>(0x30),
__E_LEAST_SIGNIFICANT = static_cast<int32_t>(0x0),
__E_MOST_SIGNIFICANT = static_cast<int32_t>(0x40),
__E_BIT_MASK = static_cast<int32_t>(0x0),
__E_UNIT_MASK = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____X86__Sse4_2__SIDD_Unwrapped () const noexcept {
return static_cast<____X86__Sse4_2__SIDD_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse4_2__SIDD() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __X86__Sse4_2__SIDD(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field BIT_MASK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const BIT_MASK;

/// @brief Field CMP_EQUAL_ANY value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_ANY;

/// @brief Field CMP_EQUAL_EACH value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_EACH;

/// @brief Field CMP_EQUAL_ORDERED value: static_cast<int32_t>(0xc)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_EQUAL_ORDERED;

/// @brief Field CMP_RANGES value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const CMP_RANGES;

/// @brief Field LEAST_SIGNIFICANT value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const LEAST_SIGNIFICANT;

/// @brief Field MASKED_NEGATIVE_POLARITY value: static_cast<int32_t>(0x30)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const MASKED_NEGATIVE_POLARITY;

/// @brief Field MASKED_POSITIVE_POLARITY value: static_cast<int32_t>(0x20)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const MASKED_POSITIVE_POLARITY;

/// @brief Field MOST_SIGNIFICANT value: static_cast<int32_t>(0x40)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const MOST_SIGNIFICANT;

/// @brief Field NEGATIVE_POLARITY value: static_cast<int32_t>(0x10)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const NEGATIVE_POLARITY;

/// @brief Field POSITIVE_POLARITY value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const POSITIVE_POLARITY;

/// @brief Field SBYTE_OPS value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const SBYTE_OPS;

/// @brief Field SWORD_OPS value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const SWORD_OPS;

/// @brief Field UBYTE_OPS value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const UBYTE_OPS;

/// @brief Field UNIT_MASK value: static_cast<int32_t>(0x40)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const UNIT_MASK;

/// @brief Field UWORD_OPS value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__X86__Sse4_2__SIDD const UWORD_OPS;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__SIDD, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__SIDD, value__) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Bits>e__FixedBuffer
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::StrBoolArray::<Bits>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr __X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer(uint16_t  FixedElementField) noexcept;

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 uint16_t  FixedElementField;

/// @brief Size padding 0x20 - 0x2 = 0x1e, packed as 0x1e
 uint8_t  _cordl_size_padding[0x1e];

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StrBoolArray
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::X86::Sse4_2::StrBoolArray
struct CORDL_TYPE __X86__Sse4_2__StrBoolArray {
public:
// Declarations
using _Bits_e__FixedBuffer = ::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer;

/// @brief Method GetBit, addr 0x44a8e14, size 0x10, virtual false, abstract: false, final false
inline bool GetBit(int32_t  aindex, int32_t  bindex) ;

/// @brief Method SetBit, addr 0x44a8df0, size 0x24, virtual false, abstract: false, final false
inline void SetBit(int32_t  aindex, int32_t  bindex, bool  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse4_2__StrBoolArray() ;

// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr __X86__Sse4_2__StrBoolArray(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer  Bits) noexcept;

/// @brief Field Bits, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer  Bits;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__X86__Sse4_2__StrBoolArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__X86__Sse4_2__StrBoolArray, Bits) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Sse4_2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Sse4_2*
class CORDL_TYPE __X86__Sse4_2 : public ::System::Object {
public:
// Declarations
using SIDD = ::GlobalNamespace::__X86__Sse4_2__SIDD;

using StrBoolArray = ::GlobalNamespace::__X86__Sse4_2__StrBoolArray;

/// @brief Field crctab, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_crctab, put=setStaticF_crctab)) ::ArrayW<uint32_t,::Array<uint32_t>*>  crctab;

/// @brief Method ComputeStrCmpIntRes2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t ComputeStrCmpIntRes2(::cordl_internals::Ptr<T>  a, int32_t  alen, ::cordl_internals::Ptr<T>  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes) ;

/// @brief Method ComputeStriOutput, addr 0x44a7a34, size 0x48, virtual false, abstract: false, final false
static inline int32_t ComputeStriOutput(int32_t  len, int32_t  imm8, int32_t  intRes2) ;

/// @brief Method ComputeStringLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t ComputeStringLength(::cordl_internals::Ptr<T>  ptr, int32_t  max) ;

/// @brief Method ComputeStrmOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 ComputeStrmOutput(int32_t  len, int32_t  imm8, T  allOnesT, int32_t  intRes2) ;

/// @brief Method cmpestra, addr 0x44a8a00, size 0xc4, virtual false, abstract: false, final false
static inline int32_t cmpestra(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrc, addr 0x44a8698, size 0x1a8, virtual false, abstract: false, final false
static inline int32_t cmpestrc(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestri, addr 0x44a7f3c, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t cmpestri(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t cmpestri_emulation(::cordl_internals::Ptr<T>  a, int32_t  alen, ::cordl_internals::Ptr<T>  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpestrm, addr 0x44a7d7c, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpestrm(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 cmpestrm_emulation(::cordl_internals::Ptr<T>  a, int32_t  alen, ::cordl_internals::Ptr<T>  b, int32_t  blen, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpestro, addr 0x44a885c, size 0x1a4, virtual false, abstract: false, final false
static inline int32_t cmpestro(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrs, addr 0x44a8840, size 0x1c, virtual false, abstract: false, final false
static inline int32_t cmpestrs(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpestrz, addr 0x44a867c, size 0x1c, virtual false, abstract: false, final false
static inline int32_t cmpestrz(::Unity::Burst::Intrinsics::v128  a, int32_t  la, ::Unity::Burst::Intrinsics::v128  b, int32_t  lb, int32_t  imm8) ;

/// @brief Method cmpgt_epi64, addr 0x44a8ac4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpgt_epi64(::Unity::Burst::Intrinsics::v128  val1, ::Unity::Burst::Intrinsics::v128  val2) ;

/// @brief Method cmpistra, addr 0x44a85d4, size 0xa8, virtual false, abstract: false, final false
static inline int32_t cmpistra(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrc, addr 0x44a81ec, size 0xac, virtual false, abstract: false, final false
static inline int32_t cmpistrc(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistri, addr 0x44a7bfc, size 0x180, virtual false, abstract: false, final false
static inline int32_t cmpistri(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistri_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t cmpistri_emulation(::cordl_internals::Ptr<T>  a, ::cordl_internals::Ptr<T>  b, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpistrm, addr 0x44a7a7c, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 cmpistrm(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrm_emulation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Burst::Intrinsics::v128 cmpistrm_emulation(::cordl_internals::Ptr<T>  a, ::cordl_internals::Ptr<T>  b, int32_t  len, int32_t  imm8, int32_t  allOnes, T  allOnesT) ;

/// @brief Method cmpistro, addr 0x44a8388, size 0x24c, virtual false, abstract: false, final false
static inline int32_t cmpistro(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrs, addr 0x44a8298, size 0xf0, virtual false, abstract: false, final false
static inline int32_t cmpistrs(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method cmpistrz, addr 0x44a80fc, size 0xf0, virtual false, abstract: false, final false
static inline int32_t cmpistrz(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  imm8) ;

/// @brief Method crc32_u16, addr 0x44a8be8, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t crc32_u16(uint32_t  crc, uint16_t  v) ;

/// @brief Method crc32_u32, addr 0x44a8ad8, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t crc32_u32(uint32_t  crc, uint32_t  v) ;

/// @brief Method crc32_u64, addr 0x44a8c54, size 0x64, virtual false, abstract: false, final false
static inline uint64_t crc32_u64(uint64_t  crc_ul, int64_t  v) ;

/// @brief Method crc32_u64, addr 0x44a8cb8, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t crc32_u64(uint64_t  crc_ul, uint64_t  v) ;

/// @brief Method crc32_u8, addr 0x44a8b54, size 0x94, virtual false, abstract: false, final false
static inline uint32_t crc32_u8(uint32_t  crc, uint8_t  v) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_crctab() ;

/// @brief Method get_IsSse42Supported, addr 0x44a7a2c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse42Supported() ;

static inline void setStaticF_crctab(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Sse4_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Sse4_2(__X86__Sse4_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Sse4_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Sse4_2(__X86__Sse4_2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Sse4_2, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: ::Ssse3
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::X86::Ssse3*
class CORDL_TYPE __X86__Ssse3 : public ::System::Object {
public:
// Declarations
/// @brief Method abs_epi16, addr 0x44a8ee4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi16(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method abs_epi32, addr 0x44a8f9c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi32(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method abs_epi8, addr 0x44a8e2c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 abs_epi8(::Unity::Burst::Intrinsics::v128  a) ;

/// @brief Method alignr_epi8, addr 0x44a90d4, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 alignr_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b, int32_t  count) ;

/// @brief Method get_IsSsse3Supported, addr 0x44a8e24, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSsse3Supported() ;

/// @brief Method hadd_epi16, addr 0x44a9174, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadd_epi32, addr 0x44a92ac, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadd_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hadds_epi16, addr 0x44a9200, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hadds_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_epi16, addr 0x44a92d8, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsub_epi32, addr 0x44a9410, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsub_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method hsubs_epi16, addr 0x44a9364, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 hsubs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method maddubs_epi16, addr 0x44a943c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 maddubs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method mulhrs_epi16, addr 0x44a94d8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 mulhrs_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method shuffle_epi8, addr 0x44a9054, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 shuffle_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi16, addr 0x44a95d4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi32, addr 0x44a9654, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// @brief Method sign_epi8, addr 0x44a9554, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 sign_epi8(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __X86__Ssse3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__X86__Ssse3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__X86__Ssse3(__X86__Ssse3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__X86__Ssse3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__X86__Ssse3(__X86__Ssse3 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__X86__Ssse3, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: Unity.Burst.Intrinsics::X86
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::Unity.Burst.Intrinsics::X86*
class CORDL_TYPE X86 : public ::System::Object {
public:
// Declarations
using Avx = ::Unity::Burst::Intrinsics::__X86__Avx;

using Avx2 = ::Unity::Burst::Intrinsics::__X86__Avx2;

using Bmi1 = ::Unity::Burst::Intrinsics::__X86__Bmi1;

using Bmi2 = ::Unity::Burst::Intrinsics::__X86__Bmi2;

using F16C = ::Unity::Burst::Intrinsics::__X86__F16C;

using Fma = ::Unity::Burst::Intrinsics::__X86__Fma;

using MXCSRBits = ::Unity::Burst::Intrinsics::__X86__MXCSRBits;

using Popcnt = ::Unity::Burst::Intrinsics::__X86__Popcnt;

using RoundingMode = ::Unity::Burst::Intrinsics::__X86__RoundingMode;

using RoundingScope = ::Unity::Burst::Intrinsics::__X86__RoundingScope;

using Sse = ::Unity::Burst::Intrinsics::__X86__Sse;

using Sse2 = ::Unity::Burst::Intrinsics::__X86__Sse2;

using Sse3 = ::Unity::Burst::Intrinsics::__X86__Sse3;

using Sse4_1 = ::Unity::Burst::Intrinsics::__X86__Sse4_1;

using Sse4_2 = ::Unity::Burst::Intrinsics::__X86__Sse4_2;

using Ssse3 = ::Unity::Burst::Intrinsics::__X86__Ssse3;

/// @brief Method BurstIntrinsicGetCSRFromManaged, addr 0x4497aac, size 0x8, virtual false, abstract: false, final false
static inline int32_t BurstIntrinsicGetCSRFromManaged() ;

/// @brief Method BurstIntrinsicSetCSRFromManaged, addr 0x4497aa8, size 0x4, virtual false, abstract: false, final false
static inline void BurstIntrinsicSetCSRFromManaged(int32_t  _) ;

/// @brief Method DoGetCSRTrampoline, addr 0x4497abc, size 0x8, virtual false, abstract: false, final false
static inline int32_t DoGetCSRTrampoline() ;

/// @brief Method DoSetCSRTrampoline, addr 0x4497ac8, size 0x4, virtual false, abstract: false, final false
static inline void DoSetCSRTrampoline(int32_t  bits) ;

/// @brief Method GenericCSharpLoad, addr 0x44979f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 GenericCSharpLoad(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method GenericCSharpStore, addr 0x4497a04, size 0x8, virtual false, abstract: false, final false
static inline void GenericCSharpStore(::cordl_internals::Ptr<void>  ptr, ::Unity::Burst::Intrinsics::v128  val) ;

/// @brief Method IsNaN, addr 0x4497a80, size 0x14, virtual false, abstract: false, final false
static inline bool IsNaN(uint32_t  v) ;

/// @brief Method IsNaN, addr 0x4497a94, size 0x14, virtual false, abstract: false, final false
static inline bool IsNaN(uint64_t  v) ;

/// @brief Method Saturate_To_Int16, addr 0x4497a44, size 0x24, virtual false, abstract: false, final false
static inline int16_t Saturate_To_Int16(int32_t  val) ;

/// @brief Method Saturate_To_Int8, addr 0x4497a0c, size 0x20, virtual false, abstract: false, final false
static inline int8_t Saturate_To_Int8(int32_t  val) ;

/// @brief Method Saturate_To_UnsignedInt16, addr 0x4497a68, size 0x18, virtual false, abstract: false, final false
static inline uint16_t Saturate_To_UnsignedInt16(int32_t  val) ;

/// @brief Method Saturate_To_UnsignedInt8, addr 0x4497a2c, size 0x18, virtual false, abstract: false, final false
static inline uint8_t Saturate_To_UnsignedInt8(int32_t  val) ;

/// @brief Method get_MXCSR, addr 0x4497ad4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::__X86__MXCSRBits get_MXCSR() ;

/// @brief Method getcsr_raw, addr 0x4497ab4, size 0x8, virtual false, abstract: false, final false
static inline int32_t getcsr_raw() ;

/// @brief Method set_MXCSR, addr 0x4497adc, size 0x4, virtual false, abstract: false, final false
static inline void set_MXCSR(::Unity::Burst::Intrinsics::__X86__MXCSRBits  value) ;

/// @brief Method setcsr_raw, addr 0x4497ac4, size 0x4, virtual false, abstract: false, final false
static inline void setcsr_raw(int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X86(X86 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86(X86 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::X86, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Avx__CMP, "Unity.Burst.Intrinsics", "X86/Avx/CMP");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__SIDD, "Unity.Burst.Intrinsics", "X86/Sse4_2/SIDD");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__MXCSRBits, "Unity.Burst.Intrinsics", "X86/MXCSRBits");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__RoundingMode, "Unity.Burst.Intrinsics", "X86/RoundingMode");
NEED_NO_BOX(::Unity::Burst::Intrinsics::X86);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::X86*, "Unity.Burst.Intrinsics", "X86");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Avx);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Avx*, "Unity.Burst.Intrinsics", "X86/Avx");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Avx2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Avx2*, "Unity.Burst.Intrinsics", "X86/Avx2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Bmi1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Bmi1*, "Unity.Burst.Intrinsics", "X86/Bmi1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Bmi2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Bmi2*, "Unity.Burst.Intrinsics", "X86/Bmi2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__F16C);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__F16C*, "Unity.Burst.Intrinsics", "X86/F16C");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Fma);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Fma*, "Unity.Burst.Intrinsics", "X86/Fma");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Popcnt);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Popcnt*, "Unity.Burst.Intrinsics", "X86/Popcnt");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse*, "Unity.Burst.Intrinsics", "X86/Sse");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse2*, "Unity.Burst.Intrinsics", "X86/Sse2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse3*, "Unity.Burst.Intrinsics", "X86/Sse3");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse4_1);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse4_1*, "Unity.Burst.Intrinsics", "X86/Sse4_1");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Sse4_2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Sse4_2*, "Unity.Burst.Intrinsics", "X86/Sse4_2");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__X86__Ssse3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__Ssse3*, "Unity.Burst.Intrinsics", "X86/Ssse3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Fma__Union, "Unity.Burst.Intrinsics", "X86/Fma/Union");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__StrBoolArray, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__X86__Sse4_2__StrBoolArray___Bits_e__FixedBuffer, "Unity.Burst.Intrinsics", "X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__X86__RoundingScope, "Unity.Burst.Intrinsics", "X86/RoundingScope");
