#pragma once
// IWYU pragma private; include "UnityEngine/Mathf.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mathf)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Mathf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Mathf);
// Type: UnityEngine::Mathf
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::Mathf
#pragma pack(push, 0)
struct CORDL_TYPE Mathf {
public:
// Declarations
/// @brief Field Epsilon, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) float_t  Epsilon;

/// @brief Method Abs, addr 0x4810094, size 0x5c, virtual false, abstract: false, final false
static inline float_t Abs(float_t  f) ;

/// @brief Method Abs, addr 0x48100f0, size 0x58, virtual false, abstract: false, final false
static inline int32_t Abs(int32_t  value) ;

/// @brief Method Acos, addr 0x480ff04, size 0x64, virtual false, abstract: false, final false
static inline float_t Acos(float_t  f) ;

/// @brief Method Approximately, addr 0x48107c4, size 0x90, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method Asin, addr 0x480fea0, size 0x64, virtual false, abstract: false, final false
static inline float_t Asin(float_t  f) ;

/// @brief Method Atan, addr 0x480ff68, size 0x64, virtual false, abstract: false, final false
static inline float_t Atan(float_t  f) ;

/// @brief Method Atan2, addr 0x480ffcc, size 0x6c, virtual false, abstract: false, final false
static inline float_t Atan2(float_t  y, float_t  x) ;

/// @brief Method Ceil, addr 0x48103c0, size 0x5c, virtual false, abstract: false, final false
static inline float_t Ceil(float_t  f) ;

/// @brief Method CeilToInt, addr 0x4810540, size 0x74, virtual false, abstract: false, final false
static inline int32_t CeilToInt(float_t  f) ;

/// @brief Method Clamp, addr 0x4810718, size 0x1c, virtual false, abstract: false, final false
static inline float_t Clamp(float_t  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x4810734, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Clamp01, addr 0x4810750, size 0x1c, virtual false, abstract: false, final false
static inline float_t Clamp01(float_t  value) ;

/// @brief Method ClampToFloat, addr 0x48109c4, size 0x6c, virtual false, abstract: false, final false
static inline float_t ClampToFloat(double_t  value) ;

/// @brief Method ClampToInt, addr 0x4810a30, size 0x28, virtual false, abstract: false, final false
static inline int32_t ClampToInt(int64_t  value) ;

/// @brief Method ClampToUInt, addr 0x4810a58, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t ClampToUInt(int64_t  value) ;

/// @brief Method CorrelatedColorTemperatureToRGB, addr 0x480fcd0, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t  kelvin) ;

/// @brief Method CorrelatedColorTemperatureToRGB_Injected, addr 0x480fd28, size 0x4c, virtual false, abstract: false, final false
static inline void CorrelatedColorTemperatureToRGB_Injected(float_t  kelvin, ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method Cos, addr 0x480fdd8, size 0x64, virtual false, abstract: false, final false
static inline float_t Cos(float_t  f) ;

/// @brief Method DeltaAngle, addr 0x4810978, size 0x4c, virtual false, abstract: false, final false
static inline float_t DeltaAngle(float_t  current, float_t  target) ;

/// @brief Method DiscardLeastSignificantDecimal, addr 0x4810b8c, size 0x160, virtual false, abstract: false, final false
static inline double_t DiscardLeastSignificantDecimal(double_t  v) ;

/// @brief Method Floor, addr 0x481041c, size 0x5c, virtual false, abstract: false, final false
static inline float_t Floor(float_t  f) ;

/// @brief Method FloorToInt, addr 0x48105b4, size 0x74, virtual false, abstract: false, final false
static inline int32_t FloorToInt(float_t  f) ;

/// @brief Method GammaToLinearSpace, addr 0x480fc60, size 0x38, virtual false, abstract: false, final false
static inline float_t GammaToLinearSpace(float_t  value) ;

/// @brief Method GetNumberOfDecimalsForMinimumDifference, addr 0x4810a74, size 0x8c, virtual false, abstract: false, final false
static inline int32_t GetNumberOfDecimalsForMinimumDifference(double_t  minDifference) ;

/// @brief Method InverseLerp, addr 0x4810948, size 0x30, virtual false, abstract: false, final false
static inline float_t InverseLerp(float_t  a, float_t  b, float_t  value) ;

/// @brief Method IsPowerOfTwo, addr 0x480fbe8, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPowerOfTwo(int32_t  value) ;

/// @brief Method Lerp, addr 0x481076c, size 0x24, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x4810790, size 0x10, virtual false, abstract: false, final false
static inline float_t LerpUnclamped(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LinearToGammaSpace, addr 0x480fc98, size 0x38, virtual false, abstract: false, final false
static inline float_t LinearToGammaSpace(float_t  value) ;

/// @brief Method Log, addr 0x48102f8, size 0x64, virtual false, abstract: false, final false
static inline float_t Log(float_t  f) ;

/// @brief Method Log, addr 0x4810288, size 0x70, virtual false, abstract: false, final false
static inline float_t Log(float_t  f, float_t  p) ;

/// @brief Method Log10, addr 0x481035c, size 0x64, virtual false, abstract: false, final false
static inline float_t Log10(float_t  f) ;

/// @brief Method Max, addr 0x48101b0, size 0xc, virtual false, abstract: false, final false
static inline float_t Max(float_t  a, float_t  b) ;

/// @brief Method Max, addr 0x48101bc, size 0x50, virtual false, abstract: false, final false
static inline float_t Max(::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method Max, addr 0x481020c, size 0xc, virtual false, abstract: false, final false
static inline int32_t Max(int32_t  a, int32_t  b) ;

/// @brief Method Min, addr 0x4810148, size 0xc, virtual false, abstract: false, final false
static inline float_t Min(float_t  a, float_t  b) ;

/// @brief Method Min, addr 0x4810154, size 0x50, virtual false, abstract: false, final false
static inline float_t Min(::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method Min, addr 0x48101a4, size 0xc, virtual false, abstract: false, final false
static inline int32_t Min(int32_t  a, int32_t  b) ;

/// @brief Method MoveTowards, addr 0x48107a0, size 0x24, virtual false, abstract: false, final false
static inline float_t MoveTowards(float_t  current, float_t  target, float_t  maxDelta) ;

/// @brief Method NextPowerOfTwo, addr 0x480fc24, size 0x3c, virtual false, abstract: false, final false
static inline int32_t NextPowerOfTwo(int32_t  value) ;

/// @brief Method Pow, addr 0x4810218, size 0x70, virtual false, abstract: false, final false
static inline float_t Pow(float_t  f, float_t  p) ;

/// @brief Method Repeat, addr 0x4810920, size 0x28, virtual false, abstract: false, final false
static inline float_t Repeat(float_t  t, float_t  length) ;

/// @brief Method Round, addr 0x4810478, size 0xc8, virtual false, abstract: false, final false
static inline float_t Round(float_t  f) ;

/// @brief Method RoundBasedOnMinimumDifference, addr 0x4810b00, size 0x8c, virtual false, abstract: false, final false
static inline double_t RoundBasedOnMinimumDifference(double_t  valueToRound, double_t  minDifference) ;

/// @brief Method RoundToInt, addr 0x4810628, size 0xdc, virtual false, abstract: false, final false
static inline int32_t RoundToInt(float_t  f) ;

/// @brief Method Sign, addr 0x4810704, size 0x14, virtual false, abstract: false, final false
static inline float_t Sign(float_t  f) ;

/// @brief Method Sin, addr 0x480fd74, size 0x64, virtual false, abstract: false, final false
static inline float_t Sin(float_t  f) ;

/// @brief Method SmoothDamp, addr 0x4810854, size 0xcc, virtual false, abstract: false, final false
static inline float_t SmoothDamp(float_t  current, float_t  target, ByRef<float_t>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method Sqrt, addr 0x4810038, size 0x5c, virtual false, abstract: false, final false
static inline float_t Sqrt(float_t  f) ;

/// @brief Method Tan, addr 0x480fe3c, size 0x64, virtual false, abstract: false, final false
static inline float_t Tan(float_t  f) ;

static inline float_t getStaticF_Epsilon() ;

static inline void setStaticF_Epsilon(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mathf() ;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mathf, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mathf, "UnityEngine", "Mathf");
