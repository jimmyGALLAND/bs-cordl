#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(TutorialSceneSetupData)
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialSceneSetupData);
// Type: ::TutorialSceneSetupData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSceneSetupData*
class CORDL_TYPE TutorialSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field colorScheme, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field playerSpecificSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  static inline ::GlobalNamespace::TutorialSceneSetupData* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get_colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __cordl_internal_get_colorScheme() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method .ctor, addr 0x25a89ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSceneSetupData(TutorialSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSceneSetupData(TutorialSceneSetupData const&) = delete;

  /// @brief Field colorScheme, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___colorScheme;

  /// @brief Field playerSpecificSettings, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSceneSetupData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSceneSetupData, ___colorScheme) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSceneSetupData, ___playerSpecificSettings) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSceneSetupData*, "", "TutorialSceneSetupData");
