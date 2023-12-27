#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviourCallbackHooks)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MonoBehaviourCallbackHooks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MonoBehaviourCallbackHooks);
// Type: ::MonoBehaviourCallbackHooks
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13966)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13966), inst: 1062 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13948))
// CS Name: ::MonoBehaviourCallbackHooks*
class CORDL_TYPE MonoBehaviourCallbackHooks : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::GlobalNamespace::MonoBehaviourCallbackHooks*> {
public:
  // Declarations
  /// @brief Field m_OnUpdateDelegate, offset 0x18, size 0x8
  __declspec(property(get = __get_m_OnUpdateDelegate, put = __set_m_OnUpdateDelegate))::System::Action_1<float_t>* m_OnUpdateDelegate;

  constexpr ::System::Action_1<float_t>*& __get_m_OnUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_m_OnUpdateDelegate() const;

  constexpr void __set_m_OnUpdateDelegate(::System::Action_1<float_t>* value);

  /// @brief Method add_OnUpdateDelegate addr 0x2bc994c size 0xa8 virtual false final false
  inline void add_OnUpdateDelegate(::System::Action_1<float_t>* value);

  /// @brief Method remove_OnUpdateDelegate addr 0x2bc99f4 size 0xa8 virtual false final false
  inline void remove_OnUpdateDelegate(::System::Action_1<float_t>* value);

  /// @brief Method GetGameObjectName addr 0x2bc9a9c size 0x40 virtual true final false
  inline ::StringW GetGameObjectName();

  /// @brief Method Update addr 0x2bc9adc size 0x30 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::MonoBehaviourCallbackHooks* New_ctor();

  /// @brief Method .ctor addr 0x2bc9b0c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviourCallbackHooks();

public:
  /// @brief Field m_OnUpdateDelegate, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___m_OnUpdateDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MonoBehaviourCallbackHooks, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MonoBehaviourCallbackHooks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonoBehaviourCallbackHooks*, "", "MonoBehaviourCallbackHooks");
