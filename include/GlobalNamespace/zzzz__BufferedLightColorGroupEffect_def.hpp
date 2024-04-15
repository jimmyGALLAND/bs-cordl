#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedLightColorGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class __BufferedLightColorGroupEffect__InitData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
namespace GlobalNamespace {
class __BufferedLightColorGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedLightColorGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BufferedLightColorGroupEffect::InitData*
class CORDL_TYPE __BufferedLightColorGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightGroup, put = __cordl_internal_set_lightGroup))::UnityW<::GlobalNamespace::LightGroup> lightGroup;

  /// @brief Field materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_materialPropertyBlockController,
                      put = __cordl_internal_set_materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> materialPropertyBlockController;

  static inline ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* New_ctor(::GlobalNamespace::LightGroup* lightGroup,
                                                                                       ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController);

  constexpr ::UnityW<::GlobalNamespace::LightGroup> const& __cordl_internal_get_lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroup>& __cordl_internal_get_lightGroup();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get_materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get_materialPropertyBlockController();

  constexpr void __cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroup> value);

  constexpr void __cordl_internal_set_materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  /// @brief Method .ctor, addr 0x25c9a6c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroup* lightGroup, ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedLightColorGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BufferedLightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BufferedLightColorGroupEffect__InitData(__BufferedLightColorGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedLightColorGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BufferedLightColorGroupEffect__InitData(__BufferedLightColorGroupEffect__InitData const&) = delete;

  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroup> ___lightGroup;

  /// @brief Field materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ___materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData, ___lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData, ___materialPropertyBlockController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BufferedLightColorGroupEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BufferedLightColorGroupEffect*
class CORDL_TYPE BufferedLightColorGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _colorBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorBufferPropertyId, put = setStaticF__colorBufferPropertyId)) int32_t _colorBufferPropertyId;

  /// @brief Field _colorManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _colorsBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorsBuffer, put = __cordl_internal_set__colorsBuffer))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colorsBuffer;

  /// @brief Field _didReceiveEventThisFrame, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__didReceiveEventThisFrame, put = __cordl_internal_set__didReceiveEventThisFrame)) bool _didReceiveEventThisFrame;

  /// @brief Field _elementIdBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__elementIdBufferPropertyId, put = setStaticF__elementIdBufferPropertyId)) int32_t _elementIdBufferPropertyId;

  /// @brief Field _elementIdsBuffer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__elementIdsBuffer, put = __cordl_internal_set__elementIdsBuffer))::ArrayW<float_t, ::Array<float_t>*> _elementIdsBuffer;

  /// @brief Field _lastIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lastIndex, put = __cordl_internal_set__lastIndex)) int32_t _lastIndex;

  /// @brief Field _lightColorBeatmapEventCallbackWrappers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColorBeatmapEventCallbackWrappers,
                      put = __cordl_internal_set__lightColorBeatmapEventCallbackWrappers))::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,
                                                                                                   ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> _lightColorBeatmapEventCallbackWrappers;

  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _timesBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__timesBuffer, put = __cordl_internal_set__timesBuffer))::ArrayW<float_t, ::Array<float_t>*> _timesBuffer;

  /// @brief Field _timesBufferPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__timesBufferPropertyId, put = setStaticF__timesBufferPropertyId)) int32_t _timesBufferPropertyId;

  /// @brief Field _useBoostColors, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__useBoostColors, put = __cordl_internal_set__useBoostColors)) bool _useBoostColors;

  /// @brief Method Cleanup, addr 0x25c9654, size 0x11c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetColor, addr 0x25c9970, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  /// @brief Method HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame, addr 0x25c9868, size 0x108, virtual false, abstract: false, final false
  inline void HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame();

  /// @brief Method HandleColorBoostBeatmapEvent, addr 0x25c9770, size 0x1c, virtual false, abstract: false, final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* colorBoost);

  /// @brief Method HandleColorChangeBeatmapEvent, addr 0x25c978c, size 0xdc, virtual false, abstract: false, final false
  inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEvent);

  static inline ::GlobalNamespace::BufferedLightColorGroupEffect* New_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                                                                           ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__colorsBuffer() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__colorsBuffer();

  constexpr bool const& __cordl_internal_get__didReceiveEventThisFrame() const;

  constexpr bool& __cordl_internal_get__didReceiveEventThisFrame();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__elementIdsBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__elementIdsBuffer();

  constexpr int32_t const& __cordl_internal_get__lastIndex() const;

  constexpr int32_t& __cordl_internal_get__lastIndex();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> const&
  __cordl_internal_get__lightColorBeatmapEventCallbackWrappers() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>& __cordl_internal_get__lightColorBeatmapEventCallbackWrappers();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__timesBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__timesBuffer();

  constexpr bool const& __cordl_internal_get__useBoostColors() const;

  constexpr bool& __cordl_internal_get__useBoostColors();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__colorsBuffer(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__didReceiveEventThisFrame(bool value);

  constexpr void __cordl_internal_set__elementIdsBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__lastIndex(int32_t value);

  constexpr void __cordl_internal_set__lightColorBeatmapEventCallbackWrappers(::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__timesBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__useBoostColors(bool value);

  /// @brief Method .ctor, addr 0x25c930c, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  static inline int32_t getStaticF__colorBufferPropertyId();

  static inline int32_t getStaticF__elementIdBufferPropertyId();

  static inline int32_t getStaticF__timesBufferPropertyId();

  static inline void setStaticF__colorBufferPropertyId(int32_t value);

  static inline void setStaticF__elementIdBufferPropertyId(int32_t value);

  static inline void setStaticF__timesBufferPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedLightColorGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedLightColorGroupEffect(BufferedLightColorGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedLightColorGroupEffect(BufferedLightColorGroupEffect const&) = delete;

  /// @brief Field _colorManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _lightColorBeatmapEventCallbackWrappers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> ____lightColorBeatmapEventCallbackWrappers;

  /// @brief Field _lastIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastIndex;

  /// @brief Field _timesBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____timesBuffer;

  /// @brief Field _colorsBuffer, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colorsBuffer;

  /// @brief Field _elementIdsBuffer, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____elementIdsBuffer;

  /// @brief Field _useBoostColors, offset: 0x58, size: 0x1, def value: None
  bool ____useBoostColors;

  /// @brief Field _didReceiveEventThisFrame, offset: 0x59, size: 0x1, def value: None
  bool ____didReceiveEventThisFrame;

  /// @brief Field kBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kBufferSize{ static_cast<int32_t>(0x18) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedLightColorGroupEffect, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____colorManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____colorBoostBeatmapDataCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____lightColorBeatmapEventCallbackWrappers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____lastIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____timesBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____colorsBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____elementIdsBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____useBoostColors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffect, ____didReceiveEventThisFrame) == 0x59, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedLightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedLightColorGroupEffect*, "", "BufferedLightColorGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*, "", "BufferedLightColorGroupEffect/InitData");
