#pragma once
// IWYU pragma private; include "System/ComponentModel/ExtenderProvidedPropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtenderProvidedPropertyAttribute)
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Object;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ExtenderProvidedPropertyAttribute*
class CORDL_TYPE ExtenderProvidedPropertyAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ExtenderProperty, put=set_ExtenderProperty)) ::System::ComponentModel::PropertyDescriptor*  ExtenderProperty;

 __declspec(property(get=get_Provider, put=set_Provider)) ::System::ComponentModel::IExtenderProvider*  Provider;

 __declspec(property(get=get_ReceiverType, put=set_ReceiverType)) ::System::Type*  ReceiverType;

/// @brief Field <ExtenderProperty>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ExtenderProperty_k__BackingField, put=__cordl_internal_set__ExtenderProperty_k__BackingField)) ::System::ComponentModel::PropertyDescriptor*  _ExtenderProperty_k__BackingField;

/// @brief Field <Provider>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Provider_k__BackingField, put=__cordl_internal_set__Provider_k__BackingField)) ::System::ComponentModel::IExtenderProvider*  _Provider_k__BackingField;

/// @brief Field <ReceiverType>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReceiverType_k__BackingField, put=__cordl_internal_set__ReceiverType_k__BackingField)) ::System::Type*  _ReceiverType_k__BackingField;

/// @brief Method Create, addr 0x43c1898, size 0x78, virtual false, abstract: false, final false
static inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* Create(::System::ComponentModel::PropertyDescriptor*  extenderProperty, ::System::Type*  receiverType, ::System::ComponentModel::IExtenderProvider*  provider) ;

/// @brief Method Equals, addr 0x43c1d30, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x43c1e04, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0x43c1e0c, size 0x60, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* New_ctor() ;

constexpr ::System::ComponentModel::PropertyDescriptor*& __cordl_internal_get__ExtenderProperty_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const& __cordl_internal_get__ExtenderProperty_k__BackingField() const;

constexpr ::System::ComponentModel::IExtenderProvider*& __cordl_internal_get__Provider_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IExtenderProvider*> const& __cordl_internal_get__Provider_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ReceiverType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ReceiverType_k__BackingField() const;

constexpr void __cordl_internal_set__ExtenderProperty_k__BackingField(::System::ComponentModel::PropertyDescriptor*  value) ;

constexpr void __cordl_internal_set__Provider_k__BackingField(::System::ComponentModel::IExtenderProvider*  value) ;

constexpr void __cordl_internal_set__ReceiverType_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x43c1cf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExtenderProperty, addr 0x43c1d00, size 0x8, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptor* get_ExtenderProperty() ;

/// @brief Method get_Provider, addr 0x43c1d10, size 0x8, virtual false, abstract: false, final false
inline ::System::ComponentModel::IExtenderProvider* get_Provider() ;

/// @brief Method get_ReceiverType, addr 0x43c1d20, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ReceiverType() ;

/// @brief Method set_ExtenderProperty, addr 0x43c1d08, size 0x8, virtual false, abstract: false, final false
inline void set_ExtenderProperty(::System::ComponentModel::PropertyDescriptor*  value) ;

/// @brief Method set_Provider, addr 0x43c1d18, size 0x8, virtual false, abstract: false, final false
inline void set_Provider(::System::ComponentModel::IExtenderProvider*  value) ;

/// @brief Method set_ReceiverType, addr 0x43c1d28, size 0x8, virtual false, abstract: false, final false
inline void set_ReceiverType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtenderProvidedPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute const& ) = delete;

/// @brief Field <ExtenderProperty>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::PropertyDescriptor*  ____ExtenderProperty_k__BackingField;

/// @brief Field <Provider>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::IExtenderProvider*  ____Provider_k__BackingField;

/// @brief Field <ReceiverType>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____ReceiverType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExtenderProvidedPropertyAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtenderProvidedPropertyAttribute, ____ExtenderProperty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtenderProvidedPropertyAttribute, ____Provider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtenderProvidedPropertyAttribute, ____ReceiverType_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExtenderProvidedPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtenderProvidedPropertyAttribute*, "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
