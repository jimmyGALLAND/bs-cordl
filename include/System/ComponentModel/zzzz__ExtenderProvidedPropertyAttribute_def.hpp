#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtenderProvidedPropertyAttribute)
namespace System {
class Object;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ExtenderProvidedPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ExtenderProvidedPropertyAttribute);
// Type: System.ComponentModel::ExtenderProvidedPropertyAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9428))
// CS Name: ::System.ComponentModel::ExtenderProvidedPropertyAttribute*
class CORDL_TYPE ExtenderProvidedPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ExtenderProperty>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__ExtenderProperty_k__BackingField, put = __set__ExtenderProperty_k__BackingField))::System::ComponentModel::PropertyDescriptor* _ExtenderProperty_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Provider_k__BackingField, put = __set__Provider_k__BackingField))::System::ComponentModel::IExtenderProvider* _Provider_k__BackingField;

  /// @brief Field <ReceiverType>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__ReceiverType_k__BackingField, put = __set__ReceiverType_k__BackingField))::System::Type* _ReceiverType_k__BackingField;

  __declspec(property(get = get_ExtenderProperty, put = set_ExtenderProperty))::System::ComponentModel::PropertyDescriptor* ExtenderProperty;

  __declspec(property(get = get_Provider, put = set_Provider))::System::ComponentModel::IExtenderProvider* Provider;

  __declspec(property(get = get_ReceiverType, put = set_ReceiverType))::System::Type* ReceiverType;

  constexpr ::System::ComponentModel::PropertyDescriptor*& __get__ExtenderProperty_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const& __get__ExtenderProperty_k__BackingField() const;

  constexpr void __set__ExtenderProperty_k__BackingField(::System::ComponentModel::PropertyDescriptor* value);

  constexpr ::System::ComponentModel::IExtenderProvider*& __get__Provider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IExtenderProvider*> const& __get__Provider_k__BackingField() const;

  constexpr void __set__Provider_k__BackingField(::System::ComponentModel::IExtenderProvider* value);

  constexpr ::System::Type*& __get__ReceiverType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ReceiverType_k__BackingField() const;

  constexpr void __set__ReceiverType_k__BackingField(::System::Type* value);

  /// @brief Method Create addr 0x29102d4 size 0x78 virtual false final false
  static inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* Create(::System::ComponentModel::PropertyDescriptor* extenderProperty, ::System::Type* receiverType,
                                                                                    ::System::ComponentModel::IExtenderProvider* provider);

  static inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2910734 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_ExtenderProperty addr 0x291073c size 0x8 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptor* get_ExtenderProperty();

  /// @brief Method set_ExtenderProperty addr 0x2910744 size 0x8 virtual false final false
  inline void set_ExtenderProperty(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method get_Provider addr 0x291074c size 0x8 virtual false final false
  inline ::System::ComponentModel::IExtenderProvider* get_Provider();

  /// @brief Method set_Provider addr 0x2910754 size 0x8 virtual false final false
  inline void set_Provider(::System::ComponentModel::IExtenderProvider* value);

  /// @brief Method get_ReceiverType addr 0x291075c size 0x8 virtual false final false
  inline ::System::Type* get_ReceiverType();

  /// @brief Method set_ReceiverType addr 0x2910764 size 0x8 virtual false final false
  inline void set_ReceiverType(::System::Type* value);

  /// @brief Method Equals addr 0x291076c size 0xd4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2910840 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute addr 0x2910848 size 0x60 virtual true final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtenderProvidedPropertyAttribute();

public:
  /// @brief Field <ExtenderProperty>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptor* ____ExtenderProperty_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::IExtenderProvider* ____Provider_k__BackingField;

  /// @brief Field <ReceiverType>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____ReceiverType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExtenderProvidedPropertyAttribute, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExtenderProvidedPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtenderProvidedPropertyAttribute*, "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
