#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayable)
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IPlayable);
// Type: UnityEngine.Playables::IPlayable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10436))
// CS Name: ::UnityEngine.Playables::IPlayable*
class CORDL_TYPE IPlayable {
public:
  // Declarations
  /// @brief Method GetHandle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlayable(IPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayable(IPlayable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IPlayable*, "UnityEngine.Playables", "IPlayable");
