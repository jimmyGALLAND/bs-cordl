#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataStrobeFilterTransform)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class __BeatmapDataStrobeFilterTransform__StrobeStreakData;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataStrobeFilterTransform;
}
namespace GlobalNamespace {
class __BeatmapDataStrobeFilterTransform__StrobeStreakData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataStrobeFilterTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData);
// Type: ::StrobeStreakData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14754)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4131))
// CS Name: ::BeatmapDataStrobeFilterTransform::StrobeStreakData*
class CORDL_TYPE __BeatmapDataStrobeFilterTransform__StrobeStreakData : public ::System::Object {
public:
  // Declarations
  /// @brief Field isActive, offset 0x10, size 0x1
  __declspec(property(get = __get_isActive, put = __set_isActive)) bool isActive;

  /// @brief Field strobeStartTime, offset 0x14, size 0x4
  __declspec(property(get = __get_strobeStartTime, put = __set_strobeStartTime)) float_t strobeStartTime;

  /// @brief Field startColorType, offset 0x18, size 0x4
  __declspec(property(get = __get_startColorType, put = __set_startColorType))::GlobalNamespace::EnvironmentColorType startColorType;

  /// @brief Field lastSwitchTime, offset 0x1c, size 0x4
  __declspec(property(get = __get_lastSwitchTime, put = __set_lastSwitchTime)) float_t lastSwitchTime;

  /// @brief Field lastColorType, offset 0x20, size 0x4
  __declspec(property(get = __get_lastColorType, put = __set_lastColorType))::GlobalNamespace::EnvironmentColorType lastColorType;

  /// @brief Field lastIsOn, offset 0x24, size 0x1
  __declspec(property(get = __get_lastIsOn, put = __set_lastIsOn)) bool lastIsOn;

  /// @brief Field originalBasicBeatmapEventData, offset 0x28, size 0x8
  __declspec(property(get = __get_originalBasicBeatmapEventData, put = __set_originalBasicBeatmapEventData))::GlobalNamespace::BasicBeatmapEventData* originalBasicBeatmapEventData;

  /// @brief Field _foundFirstColoredEventData, offset 0x30, size 0x1
  __declspec(property(get = __get__foundFirstColoredEventData, put = __set__foundFirstColoredEventData)) bool _foundFirstColoredEventData;

  constexpr bool& __get_isActive();

  constexpr bool const& __get_isActive() const;

  constexpr void __set_isActive(bool value);

  constexpr float_t& __get_strobeStartTime();

  constexpr float_t const& __get_strobeStartTime() const;

  constexpr void __set_strobeStartTime(float_t value);

  constexpr ::GlobalNamespace::EnvironmentColorType& __get_startColorType();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __get_startColorType() const;

  constexpr void __set_startColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr float_t& __get_lastSwitchTime();

  constexpr float_t const& __get_lastSwitchTime() const;

  constexpr void __set_lastSwitchTime(float_t value);

  constexpr ::GlobalNamespace::EnvironmentColorType& __get_lastColorType();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __get_lastColorType() const;

  constexpr void __set_lastColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr bool& __get_lastIsOn();

  constexpr bool const& __get_lastIsOn() const;

  constexpr void __set_lastIsOn(bool value);

  constexpr ::GlobalNamespace::BasicBeatmapEventData*& __get_originalBasicBeatmapEventData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicBeatmapEventData*> const& __get_originalBasicBeatmapEventData() const;

  constexpr void __set_originalBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* value);

  constexpr bool& __get__foundFirstColoredEventData();

  constexpr bool const& __get__foundFirstColoredEventData() const;

  constexpr void __set__foundFirstColoredEventData(bool value);

  /// @brief Method StartPotentialStrobe addr 0x223b940 size 0x98 virtual false final false
  inline void StartPotentialStrobe(::GlobalNamespace::BasicBeatmapEventData* startBasicBeatmapEventData);

  /// @brief Method AddStrobeData addr 0x223b868 size 0x94 virtual false final false
  inline void AddStrobeData(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData* New_ctor();

  /// @brief Method .ctor addr 0x223b860 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataStrobeFilterTransform__StrobeStreakData(__BeatmapDataStrobeFilterTransform__StrobeStreakData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataStrobeFilterTransform__StrobeStreakData(__BeatmapDataStrobeFilterTransform__StrobeStreakData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataStrobeFilterTransform__StrobeStreakData();

public:
  /// @brief Field isActive, offset: 0x10, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field strobeStartTime, offset: 0x14, size: 0x4, def value: None
  float_t ___strobeStartTime;

  /// @brief Field startColorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___startColorType;

  /// @brief Field lastSwitchTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___lastSwitchTime;

  /// @brief Field lastColorType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___lastColorType;

  /// @brief Field lastIsOn, offset: 0x24, size: 0x1, def value: None
  bool ___lastIsOn;

  /// @brief Field originalBasicBeatmapEventData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BasicBeatmapEventData* ___originalBasicBeatmapEventData;

  /// @brief Field _foundFirstColoredEventData, offset: 0x30, size: 0x1, def value: None
  bool ____foundFirstColoredEventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataStrobeFilterTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4132))
// CS Name: ::BeatmapDataStrobeFilterTransform*
class CORDL_TYPE BeatmapDataStrobeFilterTransform : public ::System::Object {
public:
  // Declarations
  using StrobeStreakData = ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData;

  /// @brief Method CreateTransformedData addr 0x223ac28 size 0xc38 virtual false final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                               ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions);

  /// @brief Method GetOnEventDataValue addr 0x223b8fc size 0x24 virtual false final false
  static inline int32_t GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);

  /// @brief Method GetFlashAndFadeToBlackEventDataValue addr 0x223b920 size 0x20 virtual false final false
  static inline int32_t GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataStrobeFilterTransform();

public:
  /// @brief Field kMaxSecondsToConsiderStrobe offset 0xffffffff size 0x4
  static constexpr float_t kMaxSecondsToConsiderStrobe{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataStrobeFilterTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataStrobeFilterTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStrobeFilterTransform*, "", "BeatmapDataStrobeFilterTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*, "", "BeatmapDataStrobeFilterTransform/StrobeStreakData");
