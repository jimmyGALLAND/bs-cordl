#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(noise)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Unity::Mathematics {
class noise;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::noise);
// Type: Unity.Mathematics::noise
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::Unity.Mathematics::noise*
class CORDL_TYPE noise : public ::System::Object {
public:
// Declarations
/// @brief Method cellular, addr 0x4635e54, size 0x658, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular, addr 0x463709c, size 0x1774, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float3  P) ;

/// @brief Method cellular2x2, addr 0x46365fc, size 0x354, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular2x2x2, addr 0x4636a00, size 0x638, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2x2(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x4638810, size 0x294, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float2  P) ;

/// @brief Method cnoise, addr 0x4638e60, size 0x6f8, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x4639d30, size 0x144c, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float4  P) ;

/// @brief Method fade, addr 0x4638b4c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fade(::Unity::Mathematics::float2  t) ;

/// @brief Method fade, addr 0x4639558, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fade(::Unity::Mathematics::float3  t) ;

/// @brief Method fade, addr 0x463b17c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fade(::Unity::Mathematics::float4  t) ;

/// @brief Method grad4, addr 0x463c76c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 grad4(float_t  j, ::Unity::Mathematics::float4  ip) ;

/// @brief Method mod289, addr 0x46364ac, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mod289(::Unity::Mathematics::float2  x) ;

/// @brief Method mod289, addr 0x4637038, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3  x) ;

/// @brief Method mod289, addr 0x4638aa4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4  x) ;

/// @brief Method mod289, addr 0x463c6c4, size 0x70, virtual false, abstract: false, final false
static inline float_t mod289(float_t  x) ;

/// @brief Method mod7, addr 0x463659c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod7(::Unity::Mathematics::float3  x) ;

/// @brief Method mod7, addr 0x4636990, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod7(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x4636568, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 permute(::Unity::Mathematics::float3  x) ;

/// @brief Method permute, addr 0x4636950, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x463c734, size 0x1c, virtual false, abstract: false, final false
static inline float_t permute(float_t  x) ;

/// @brief Method pnoise, addr 0x4638b80, size 0x2e0, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float2  P, ::Unity::Mathematics::float2  rep) ;

/// @brief Method pnoise, addr 0x46395b4, size 0x77c, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float3  P, ::Unity::Mathematics::float3  rep) ;

/// @brief Method pnoise, addr 0x463b1c0, size 0x1504, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float4  P, ::Unity::Mathematics::float4  rep) ;

/// @brief Method psrdnoise, addr 0x463e83c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrdnoise, addr 0x463e45c, size 0x3e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method psrnoise, addr 0x463eb70, size 0x8, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrnoise, addr 0x463e844, size 0x32c, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method rgrad2, addr 0x463c840, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rgrad2(::Unity::Mathematics::float2  p, float_t  rot) ;

/// @brief Method snoise, addr 0x463c980, size 0x2fc, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float2  v) ;

/// @brief Method snoise, addr 0x463cc7c, size 0x668, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v) ;

/// @brief Method snoise, addr 0x463d2e4, size 0x7d0, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v, ByRef<::Unity::Mathematics::float3>  gradient) ;

/// @brief Method snoise, addr 0x463dab4, size 0x9a8, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float4  v) ;

/// @brief Method srdnoise, addr 0x463ef1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srdnoise, addr 0x463eb78, size 0x3a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method srnoise, addr 0x463f210, size 0x1d0c, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srnoise, addr 0x463ef24, size 0x2ec, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method taylorInvSqrt, addr 0x4638b18, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4  r) ;

/// @brief Method taylorInvSqrt, addr 0x463c750, size 0x1c, virtual false, abstract: false, final false
static inline float_t taylorInvSqrt(float_t  r) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr noise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
noise(noise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
noise(noise const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::noise, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::noise);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");
