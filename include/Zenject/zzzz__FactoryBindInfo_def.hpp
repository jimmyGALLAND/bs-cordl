#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FactoryBindInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class FactoryBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryBindInfo);
// Type: Zenject::FactoryBindInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10948))
// CS Name: ::Zenject::FactoryBindInfo*
class CORDL_TYPE FactoryBindInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <FactoryType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__FactoryType_k__BackingField, put = __set__FactoryType_k__BackingField))::System::Type* _FactoryType_k__BackingField;

  /// @brief Field <ProviderFunc>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ProviderFunc_k__BackingField,
                      put = __set__ProviderFunc_k__BackingField))::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* _ProviderFunc_k__BackingField;

  /// @brief Field <Arguments>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Arguments_k__BackingField, put = __set__Arguments_k__BackingField))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _Arguments_k__BackingField;

  __declspec(property(get = get_FactoryType, put = set_FactoryType))::System::Type* FactoryType;

  __declspec(property(get = get_ProviderFunc, put = set_ProviderFunc))::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ProviderFunc;

  __declspec(property(get = get_Arguments, put = set_Arguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Arguments;

  constexpr ::System::Type*& __get__FactoryType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__FactoryType_k__BackingField() const;

  constexpr void __set__FactoryType_k__BackingField(::System::Type* value);

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*& __get__ProviderFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*> const& __get__ProviderFunc_k__BackingField() const;

  constexpr void __set__ProviderFunc_k__BackingField(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get__Arguments_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get__Arguments_k__BackingField() const;

  constexpr void __set__Arguments_k__BackingField(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  static inline ::Zenject::FactoryBindInfo* New_ctor(::System::Type* factoryType);

  /// @brief Method .ctor addr 0x2edf0a0 size 0x90 virtual false final false
  inline void _ctor(::System::Type* factoryType);

  /// @brief Method get_FactoryType addr 0x2edf130 size 0x8 virtual false final false
  inline ::System::Type* get_FactoryType();

  /// @brief Method set_FactoryType addr 0x2edf138 size 0x8 virtual false final false
  inline void set_FactoryType(::System::Type* value);

  /// @brief Method get_ProviderFunc addr 0x2edf140 size 0x8 virtual false final false
  inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* get_ProviderFunc();

  /// @brief Method set_ProviderFunc addr 0x2edf148 size 0x8 virtual false final false
  inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

  /// @brief Method get_Arguments addr 0x2edf150 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_Arguments();

  /// @brief Method set_Arguments addr 0x2edf158 size 0x8 virtual false final false
  inline void set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryBindInfo(FactoryBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryBindInfo(FactoryBindInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryBindInfo();

public:
  /// @brief Field <FactoryType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____FactoryType_k__BackingField;

  /// @brief Field <ProviderFunc>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ____ProviderFunc_k__BackingField;

  /// @brief Field <Arguments>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____Arguments_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryBindInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
