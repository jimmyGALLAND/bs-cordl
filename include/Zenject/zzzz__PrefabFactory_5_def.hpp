#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PrefabFactory_5)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue> class IFactory_6;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename P1, typename P2, typename P3, typename P4, typename T> class PrefabFactory_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PrefabFactory_5);
// Type: Zenject::PrefabFactory`5
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename P1, typename P2, typename P3, typename P4, typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11104))
// CS Name: ::Zenject::PrefabFactory`5<P1,P2,P3,P4,T>*
class CORDL_TYPE PrefabFactory_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  /// @brief Convert operator to "::Zenject::IFactory_6<::UnityEngine::Object*,P1,P2,P3,P4,T>"
  constexpr operator ::Zenject::IFactory_6<::UnityEngine::Object*, P1, P2, P3, P4, T>*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  /// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T Create(::UnityEngine::Object* prefab, P1 param, P2 param2, P3 param3, P4 param4);

  static inline ::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabFactory_5(PrefabFactory_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabFactory_5(PrefabFactory_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabFactory_5();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabFactory_5, "Zenject", "PrefabFactory`5");
