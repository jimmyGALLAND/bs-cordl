#pragma once
// IWYU pragma private; include "System/ComponentModel/ProvidePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProvidePropertyAttribute)
// Forward declare root types
namespace System::ComponentModel {
class ProvidePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ProvidePropertyAttribute);
// Type: System.ComponentModel::ProvidePropertyAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ProvidePropertyAttribute*
class CORDL_TYPE ProvidePropertyAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_PropertyName)) ::StringW  PropertyName;

 __declspec(property(get=get_ReceiverTypeName)) ::StringW  ReceiverTypeName;

/// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field <ReceiverTypeName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReceiverTypeName_k__BackingField, put=__cordl_internal_set__ReceiverTypeName_k__BackingField)) ::StringW  _ReceiverTypeName_k__BackingField;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ReceiverTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ReceiverTypeName_k__BackingField() ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ReceiverTypeName_k__BackingField(::StringW  value) ;

/// @brief Method get_PropertyName, addr 0x43c6b0c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PropertyName() ;

/// @brief Method get_ReceiverTypeName, addr 0x43c6b14, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ReceiverTypeName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProvidePropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProvidePropertyAttribute(ProvidePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProvidePropertyAttribute(ProvidePropertyAttribute const& ) = delete;

/// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// @brief Field <ReceiverTypeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ReceiverTypeName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ProvidePropertyAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ProvidePropertyAttribute, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ProvidePropertyAttribute, ____ReceiverTypeName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ProvidePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProvidePropertyAttribute*, "System.ComponentModel", "ProvidePropertyAttribute");
