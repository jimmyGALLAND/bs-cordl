#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerIntroCountdownTextController)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroCountdownTextController);
// Type: ::MultiplayerIntroCountdownTextController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5214))
// CS Name: ::MultiplayerIntroCountdownTextController*
class CORDL_TYPE MultiplayerIntroCountdownTextController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _texts, offset 0x18, size 0x8
  __declspec(property(get = __get__texts, put = __set__texts))::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> _texts;

  __declspec(property(put = set_hide)) bool hide;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  constexpr ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*>& __get__texts();

  constexpr ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> const& __get__texts() const;

  constexpr void __set__texts(::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> value);

  /// @brief Method SetText addr 0x224fc14 size 0x70 virtual false final false
  inline void SetText(::StringW text);

  /// @brief Method SetDistances addr 0x224f5f8 size 0x88 virtual false final false
  inline void SetDistances(float_t distance);

  /// @brief Method set_hide addr 0x224eb90 size 0x2c virtual false final false
  inline void set_hide(bool value);

  /// @brief Method set_fontSize addr 0x224f474 size 0x70 virtual false final false
  inline void set_fontSize(float_t value);

  /// @brief Method get_fontSize addr 0x224ebbc size 0x38 virtual false final false
  inline float_t get_fontSize();

  /// @brief Method set_alpha addr 0x224f4fc size 0x84 virtual false final false
  inline void set_alpha(float_t value);

  /// @brief Method get_alpha addr 0x224ebf4 size 0x40 virtual false final false
  inline float_t get_alpha();

  static inline ::GlobalNamespace::MultiplayerIntroCountdownTextController* New_ctor();

  /// @brief Method .ctor addr 0x224fcd4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerIntroCountdownTextController();

public:
  /// @brief Field _texts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> ____texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroCountdownTextController, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroCountdownTextController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroCountdownTextController*, "", "MultiplayerIntroCountdownTextController");
