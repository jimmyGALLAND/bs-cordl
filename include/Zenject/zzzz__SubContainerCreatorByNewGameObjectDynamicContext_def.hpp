#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectDynamicContext)
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext);
// Type: Zenject::SubContainerCreatorByNewGameObjectDynamicContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11255))
// CS Name: ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*
class CORDL_TYPE SubContainerCreatorByNewGameObjectDynamicContext : public ::Zenject::SubContainerCreatorDynamicContext {
public:
  // Declarations
  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method .ctor addr 0x2f0b8a0 size 0x2c virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method CreateGameObject addr 0x2f0b8f4 size 0x4c virtual true final false
  inline ::UnityEngine::GameObject* CreateGameObject(ByRef<bool> shouldMakeActive);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectDynamicContext();

public:
  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*, "Zenject", "SubContainerCreatorByNewGameObjectDynamicContext");
