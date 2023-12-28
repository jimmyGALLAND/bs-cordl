#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
CORDL_MODULE_EXPORT(BakedEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class BakedEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::BakedEvent);
// Type: HoudiniEngineUnity::BakedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 5233 }), TypeDefinitionIndex(TypeDefinitionIndex(10467)),
// TypeDefinitionIndex(TypeDefinitionIndex(9639)), TypeDefinitionIndex(TypeDefinitionIndex(3843)), TypeDefinitionIndex(TypeDefinitionIndex(10196)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3843), inst: 311 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(9604)) CS Name: ::HoudiniEngineUnity::BakedEvent*
class CORDL_TYPE BakedEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::BakedEvent* New_ctor();

  /// @brief Method .ctor addr 0x214e4d8 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedEvent(BakedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedEvent(BakedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::BakedEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::BakedEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::BakedEvent*, "HoudiniEngineUnity", "BakedEvent");
