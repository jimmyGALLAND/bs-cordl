#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelParamsPanel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelParamsPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelParamsPanel);
// Type: ::LevelParamsPanel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5794))
// CS Name: ::LevelParamsPanel*
class CORDL_TYPE LevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _notesPerSecondText, offset 0x18, size 0x8
  __declspec(property(get = __get__notesPerSecondText, put = __set__notesPerSecondText))::TMPro::TextMeshProUGUI* _notesPerSecondText;

  /// @brief Field _notesCountText, offset 0x20, size 0x8
  __declspec(property(get = __get__notesCountText, put = __set__notesCountText))::TMPro::TextMeshProUGUI* _notesCountText;

  /// @brief Field _obstaclesCountText, offset 0x28, size 0x8
  __declspec(property(get = __get__obstaclesCountText, put = __set__obstaclesCountText))::TMPro::TextMeshProUGUI* _obstaclesCountText;

  /// @brief Field _bombsCountText, offset 0x30, size 0x8
  __declspec(property(get = __get__bombsCountText, put = __set__bombsCountText))::TMPro::TextMeshProUGUI* _bombsCountText;

  __declspec(property(put = set_notesPerSecond)) float_t notesPerSecond;

  __declspec(property(put = set_notesCount)) int32_t notesCount;

  __declspec(property(put = set_obstaclesCount)) int32_t obstaclesCount;

  __declspec(property(put = set_bombsCount)) int32_t bombsCount;

  constexpr ::TMPro::TextMeshProUGUI*& __get__notesPerSecondText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__notesPerSecondText() const;

  constexpr void __set__notesPerSecondText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__notesCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__notesCountText() const;

  constexpr void __set__notesCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__obstaclesCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__obstaclesCountText() const;

  constexpr void __set__obstaclesCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__bombsCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__bombsCountText() const;

  constexpr void __set__bombsCountText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method set_notesPerSecond addr 0x22e6ddc size 0x80 virtual false final false
  inline void set_notesPerSecond(float_t value);

  /// @brief Method set_notesCount addr 0x22e6e5c size 0x48 virtual false final false
  inline void set_notesCount(int32_t value);

  /// @brief Method set_obstaclesCount addr 0x22e6ea4 size 0x48 virtual false final false
  inline void set_obstaclesCount(int32_t value);

  /// @brief Method set_bombsCount addr 0x22e6eec size 0x48 virtual false final false
  inline void set_bombsCount(int32_t value);

  static inline ::GlobalNamespace::LevelParamsPanel* New_ctor();

  /// @brief Method .ctor addr 0x22e6f34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelParamsPanel(LevelParamsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelParamsPanel(LevelParamsPanel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelParamsPanel();

public:
  /// @brief Field _notesPerSecondText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____notesPerSecondText;

  /// @brief Field _notesCountText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____notesCountText;

  /// @brief Field _obstaclesCountText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____obstaclesCountText;

  /// @brief Field _bombsCountText, offset: 0x30, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____bombsCountText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelParamsPanel, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelParamsPanel*, "", "LevelParamsPanel");
