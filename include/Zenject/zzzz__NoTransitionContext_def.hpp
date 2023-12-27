#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionContext)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class NoTransitionInstaller;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class NoTransitionContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NoTransitionContext);
// Type: Zenject::NoTransitionContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11175))
// CS Name: ::Zenject::NoTransitionContext*
class CORDL_TYPE NoTransitionContext : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noScenesTransitionInstaller, offset 0x18, size 0x8
  __declspec(property(get = __get__noScenesTransitionInstaller, put = __set__noScenesTransitionInstaller))::Zenject::NoTransitionInstaller* _noScenesTransitionInstaller;

  __declspec(property(get = get_installMethod))::System::Action_1<::Zenject::DiContainer*>* installMethod;

  __declspec(property(get = get_postInstallMethod))::System::Action_1<::Zenject::DiContainer*>* postInstallMethod;

  constexpr ::Zenject::NoTransitionInstaller*& __get__noScenesTransitionInstaller();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::NoTransitionInstaller*> const& __get__noScenesTransitionInstaller() const;

  constexpr void __set__noScenesTransitionInstaller(::Zenject::NoTransitionInstaller* value);

  /// @brief Method get_installMethod addr 0x2f049d0 size 0x74 virtual false final false
  inline ::System::Action_1<::Zenject::DiContainer*>* get_installMethod();

  /// @brief Method get_postInstallMethod addr 0x2f04a44 size 0x74 virtual false final false
  inline ::System::Action_1<::Zenject::DiContainer*>* get_postInstallMethod();

  /// @brief Method Awake addr 0x2f04ab8 size 0x78 virtual false final false
  inline void Awake();

  static inline ::Zenject::NoTransitionContext* New_ctor();

  /// @brief Method .ctor addr 0x2f04b30 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f04b38 size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionContext(NoTransitionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionContext(NoTransitionContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionContext();

public:
  /// @brief Field _noScenesTransitionInstaller, offset: 0x18, size: 0x8, def value: None
  ::Zenject::NoTransitionInstaller* ____noScenesTransitionInstaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NoTransitionContext, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NoTransitionContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoTransitionContext*, "Zenject", "NoTransitionContext");
