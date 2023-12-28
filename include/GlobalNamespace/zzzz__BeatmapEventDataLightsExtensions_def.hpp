#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataLightsExtensions)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataLightsExtensions;
}
namespace GlobalNamespace {
class __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataLightsExtensions);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues);
// Type: ::LightSwitchEventEffectDataValues
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14722))
// CS Name: ::BeatmapEventDataLightsExtensions::LightSwitchEventEffectDataValues*
class CORDL_TYPE __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues(__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues(__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues();

public:
  /// @brief Field kOff offset 0xffffffff size 0x4
  static constexpr int32_t kOff{ static_cast<int32_t>(0x0) };

  /// @brief Field kOnA offset 0xffffffff size 0x4
  static constexpr int32_t kOnA{ static_cast<int32_t>(0x1) };

  /// @brief Field kOnB offset 0xffffffff size 0x4
  static constexpr int32_t kOnB{ static_cast<int32_t>(0x5) };

  /// @brief Field kOnW offset 0xffffffff size 0x4
  static constexpr int32_t kOnW{ static_cast<int32_t>(0x9) };

  /// @brief Field kHighlightA offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightA{ static_cast<int32_t>(0x2) };

  /// @brief Field kHighlightB offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightB{ static_cast<int32_t>(0x6) };

  /// @brief Field kHighlightW offset 0xffffffff size 0x4
  static constexpr int32_t kHighlightW{ static_cast<int32_t>(0xa) };

  /// @brief Field kFlashAndFadeToBlack offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlack{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kFlashAndFadeToBlackA offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackA{ static_cast<int32_t>(0x3) };

  /// @brief Field kFlashAndFadeToBlackB offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackB{ static_cast<int32_t>(0x7) };

  /// @brief Field kFlashAndFadeToBlackW offset 0xffffffff size 0x4
  static constexpr int32_t kFlashAndFadeToBlackW{ static_cast<int32_t>(0xb) };

  /// @brief Field kFadeA offset 0xffffffff size 0x4
  static constexpr int32_t kFadeA{ static_cast<int32_t>(0x4) };

  /// @brief Field kFadeB offset 0xffffffff size 0x4
  static constexpr int32_t kFadeB{ static_cast<int32_t>(0x8) };

  /// @brief Field kFadeW offset 0xffffffff size 0x4
  static constexpr int32_t kFadeW{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataLightsExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14723))
// CS Name: ::BeatmapEventDataLightsExtensions*
class CORDL_TYPE BeatmapEventDataLightsExtensions : public ::System::Object {
public:
  // Declarations
  using LightSwitchEventEffectDataValues = ::GlobalNamespace::__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues;

  /// @brief Method LightColorTypeFromEventDataValue addr 0xdfdf2c size 0x18 virtual false final false
  static inline ::GlobalNamespace::EnvironmentColorType LightColorTypeFromEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method GetLightColorTypeFromEventDataValue addr 0xdfdf44 size 0x2c virtual false final false
  static inline ::GlobalNamespace::EnvironmentColorType GetLightColorTypeFromEventDataValue(int32_t beatmapEventValue);

  /// @brief Method HasLightFadeEventDataValue addr 0xdfdf70 size 0x34 virtual false final false
  static inline bool HasLightFadeEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HasFixedDurationLightSwitchEventDataValue addr 0xdfdfa4 size 0x4c virtual false final false
  static inline bool HasFixedDurationLightSwitchEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HasFixedDurationLightSwitchEventDataValue addr 0xdfdff0 size 0x3c virtual false final false
  static inline bool HasFixedDurationLightSwitchEventDataValue(int32_t beatmapEventValue);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataLightsExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataLightsExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataLightsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataLightsExtensions*, "", "BeatmapEventDataLightsExtensions");
NEED_NO_BOX(::GlobalNamespace::__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues*, "", "BeatmapEventDataLightsExtensions/LightSwitchEventEffectDataValues");
