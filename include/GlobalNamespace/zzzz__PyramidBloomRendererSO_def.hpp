#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PyramidBloomRendererSO)
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Pass;
}
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Level;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Pass;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Level;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PyramidBloomRendererSO__Pass);
MARK_REF_PTR_T(::GlobalNamespace::PyramidBloomRendererSO);
MARK_VAL_T(::GlobalNamespace::__PyramidBloomRendererSO__Level);
// Type: ::Pass
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14446))
// CS Name: ::PyramidBloomRendererSO::Pass
struct CORDL_TYPE __PyramidBloomRendererSO__Pass {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PyramidBloomRendererSO__Pass_Unwrapped
  enum struct ____PyramidBloomRendererSO__Pass_Unwrapped : int32_t {
    __E_Prefilter13 = static_cast<int32_t>(0x0),
    __E_Prefilter4 = static_cast<int32_t>(0x1),
    __E_Downsample13 = static_cast<int32_t>(0x2),
    __E_Downsample4 = static_cast<int32_t>(0x3),
    __E_DownsampleBilinearGamma = static_cast<int32_t>(0x4),
    __E_UpsampleTent = static_cast<int32_t>(0x5),
    __E_UpsampleBox = static_cast<int32_t>(0x6),
    __E_UpsampleTentGamma = static_cast<int32_t>(0x7),
    __E_UpsampleBoxGamma = static_cast<int32_t>(0x8),
    __E_Bilinear = static_cast<int32_t>(0x9),
    __E_BilinearGamma = static_cast<int32_t>(0xa),
    __E_UpsampleTentAndReinhardToneMapping = static_cast<int32_t>(0xb),
    __E_UpsampleTentAndACESToneMapping = static_cast<int32_t>(0xc),
    __E_UpsampleTentAndACESToneMappingGlobalIntensity = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PyramidBloomRendererSO__Pass_Unwrapped() const noexcept {
    return static_cast<____PyramidBloomRendererSO__Pass_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PyramidBloomRendererSO__Pass(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PyramidBloomRendererSO__Pass();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Prefilter13 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const Prefilter13;

  /// @brief Field Prefilter4 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const Prefilter4;

  /// @brief Field Downsample13 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const Downsample13;

  /// @brief Field Downsample4 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const Downsample4;

  /// @brief Field DownsampleBilinearGamma value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const DownsampleBilinearGamma;

  /// @brief Field UpsampleTent value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleTent;

  /// @brief Field UpsampleBox value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleBox;

  /// @brief Field UpsampleTentGamma value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleTentGamma;

  /// @brief Field UpsampleBoxGamma value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleBoxGamma;

  /// @brief Field Bilinear value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const Bilinear;

  /// @brief Field BilinearGamma value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const BilinearGamma;

  /// @brief Field UpsampleTentAndReinhardToneMapping value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleTentAndReinhardToneMapping;

  /// @brief Field UpsampleTentAndACESToneMapping value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleTentAndACESToneMapping;

  /// @brief Field UpsampleTentAndACESToneMappingGlobalIntensity value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__PyramidBloomRendererSO__Pass const UpsampleTentAndACESToneMappingGlobalIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Level
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14447))
// CS Name: ::PyramidBloomRendererSO::Level
struct CORDL_TYPE __PyramidBloomRendererSO__Level {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "down", ty: "::UnityEngine::RenderTexture*", modifiers: "", def_value: None }, CppParam { name: "up", ty: "::UnityEngine::RenderTexture*", modifiers: "",
  // def_value: None }]
  constexpr __PyramidBloomRendererSO__Level(::UnityEngine::RenderTexture* down, ::UnityEngine::RenderTexture* up) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PyramidBloomRendererSO__Level();

  /// @brief Field down, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* down;

  /// @brief Field up, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* up;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PyramidBloomRendererSO__Level, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PyramidBloomRendererSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14448))
// CS Name: ::PyramidBloomRendererSO*
class CORDL_TYPE PyramidBloomRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Level = ::GlobalNamespace::__PyramidBloomRendererSO__Level;

  using Pass = ::GlobalNamespace::__PyramidBloomRendererSO__Pass;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __get__shader, put = __set__shader))::UnityEngine::Shader* _shader;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _pyramid, offset 0x28, size 0x8
  __declspec(property(get = __get__pyramid, put = __set__pyramid))::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level, ::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*> _pyramid;

  /// @brief Field kIsScreenspaceEffectKeyword, offset 0x30, size 0x8
  __declspec(property(get = __get_kIsScreenspaceEffectKeyword, put = __set_kIsScreenspaceEffectKeyword))::StringW kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset 0x38, size 0x8
  __declspec(property(get = __get_kLegacyAutoExposureKeyword, put = __set_kLegacyAutoExposureKeyword))::StringW kLegacyAutoExposureKeyword;

  /// @brief Field _initialized, offset 0x40, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _globalIntensityTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__globalIntensityTex, put = setStaticF__globalIntensityTex)) int32_t _globalIntensityTex;

  /// @brief Field _autoExposureLimitID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__autoExposureLimitID, put = setStaticF__autoExposureLimitID)) int32_t _autoExposureLimitID;

  /// @brief Field _sampleScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sampleScaleID, put = setStaticF__sampleScaleID)) int32_t _sampleScaleID;

  /// @brief Field _combineSrcID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__combineSrcID, put = setStaticF__combineSrcID)) int32_t _combineSrcID;

  /// @brief Field _combineDstID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__combineDstID, put = setStaticF__combineDstID)) int32_t _combineDstID;

  /// @brief Field _alphaWeightsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaWeightsID, put = setStaticF__alphaWeightsID)) int32_t _alphaWeightsID;

  constexpr ::UnityEngine::Shader*& __get__shader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__shader() const;

  constexpr void __set__shader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  constexpr ::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level, ::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>& __get__pyramid();

  constexpr ::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level, ::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*> const& __get__pyramid() const;

  constexpr void __set__pyramid(::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level, ::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*> value);

  constexpr ::StringW& __get_kIsScreenspaceEffectKeyword();

  constexpr ::StringW const& __get_kIsScreenspaceEffectKeyword() const;

  constexpr void __set_kIsScreenspaceEffectKeyword(::StringW value);

  constexpr ::StringW& __get_kLegacyAutoExposureKeyword();

  constexpr ::StringW const& __get_kLegacyAutoExposureKeyword() const;

  constexpr void __set_kLegacyAutoExposureKeyword(::StringW value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline int32_t getStaticF__bloomTexID();

  static inline void setStaticF__globalIntensityTex(int32_t value);

  static inline int32_t getStaticF__globalIntensityTex();

  static inline void setStaticF__autoExposureLimitID(int32_t value);

  static inline int32_t getStaticF__autoExposureLimitID();

  static inline void setStaticF__sampleScaleID(int32_t value);

  static inline int32_t getStaticF__sampleScaleID();

  static inline void setStaticF__combineSrcID(int32_t value);

  static inline int32_t getStaticF__combineSrcID();

  static inline void setStaticF__combineDstID(int32_t value);

  static inline int32_t getStaticF__combineDstID();

  static inline void setStaticF__alphaWeightsID(int32_t value);

  static inline int32_t getStaticF__alphaWeightsID();

  /// @brief Method OnEnable addr 0x2101298 size 0x110 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x21013a8 size 0x24 virtual false final false
  inline void OnDisable();

  /// @brief Method RenderBloom addr 0x21013cc size 0x90 virtual false final false
  inline void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, bool alphaWeights, bool betterQuality, bool gammaCorrection, bool legacyAutoExposure);

  /// @brief Method RenderBloom addr 0x210145c size 0x81c virtual false final false
  inline void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, float_t intensity, float_t autoExposureLimit, float_t downIntensityOffset,
                          bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness,
                          ::GlobalNamespace::__PyramidBloomRendererSO__Pass preFilterPass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass downsamplePass,
                          ::GlobalNamespace::__PyramidBloomRendererSO__Pass upsamplePass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass finalUpsamplePass, bool legacyAutoExposure,
                          bool isScreenspaceEffect);

  static inline ::GlobalNamespace::PyramidBloomRendererSO* New_ctor();

  /// @brief Method .ctor addr 0x2101c78 size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PyramidBloomRendererSO(PyramidBloomRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PyramidBloomRendererSO(PyramidBloomRendererSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomRendererSO();

public:
  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Shader* ____shader;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field _pyramid, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level, ::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*> ____pyramid;

  /// @brief Field kIsScreenspaceEffectKeyword, offset: 0x30, size: 0x8, def value: None
  ::StringW ___kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset: 0x38, size: 0x8, def value: None
  ::StringW ___kLegacyAutoExposureKeyword;

  /// @brief Field _initialized, offset: 0x40, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field kMaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPyramidSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomRendererSO, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PyramidBloomRendererSO__Pass, "", "PyramidBloomRendererSO/Pass");
NEED_NO_BOX(::GlobalNamespace::PyramidBloomRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO*, "", "PyramidBloomRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PyramidBloomRendererSO__Level, "", "PyramidBloomRendererSO/Level");
