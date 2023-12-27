#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableOnNonQuest)
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonQuest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableOnNonQuest);
// Type: ::DisableOnNonQuest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5363))
// CS Name: ::DisableOnNonQuest*
class CORDL_TYPE DisableOnNonQuest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::DisableOnNonQuest* New_ctor();

  /// @brief Method .ctor addr 0x226c530 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonQuest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableOnNonQuest(DisableOnNonQuest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonQuest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableOnNonQuest(DisableOnNonQuest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableOnNonQuest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableOnNonQuest, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableOnNonQuest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableOnNonQuest*, "", "DisableOnNonQuest");
