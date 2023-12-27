#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class TransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10919))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10918))
// CS Name: ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method .ctor addr 0x2ecc408 size 0x28 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method WithGameObjectName addr 0x2eda0a8 size 0x1c virtual false final false
  inline ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* WithGameObjectName(::StringW gameObjectName);

  // Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder");
