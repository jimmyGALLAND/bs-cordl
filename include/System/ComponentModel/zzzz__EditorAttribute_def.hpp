#pragma once
// IWYU pragma private; include "System/ComponentModel/EditorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EditorAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class EditorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EditorAttribute);
// Type: System.ComponentModel::EditorAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::EditorAttribute*
class CORDL_TYPE EditorAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_EditorBaseTypeName)) ::StringW  EditorBaseTypeName;

 __declspec(property(get=get_EditorTypeName)) ::StringW  EditorTypeName;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Field <EditorBaseTypeName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__EditorBaseTypeName_k__BackingField, put=__cordl_internal_set__EditorBaseTypeName_k__BackingField)) ::StringW  _EditorBaseTypeName_k__BackingField;

/// @brief Field <EditorTypeName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__EditorTypeName_k__BackingField, put=__cordl_internal_set__EditorTypeName_k__BackingField)) ::StringW  _EditorTypeName_k__BackingField;

/// @brief Field _typeId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeId, put=__cordl_internal_set__typeId)) ::StringW  _typeId;

/// @brief Method Equals, addr 0x43c0414, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x43c04b8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::EditorAttribute* New_ctor(::StringW  typeName, ::StringW  baseTypeName) ;

constexpr ::StringW const& __cordl_internal_get__EditorBaseTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__EditorBaseTypeName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__EditorTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__EditorTypeName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__typeId() const;

constexpr ::StringW& __cordl_internal_get__typeId() ;

constexpr void __cordl_internal_set__EditorBaseTypeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__EditorTypeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__typeId(::StringW  value) ;

/// @brief Method .ctor, addr 0x43c02e8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName, ::StringW  baseTypeName) ;

/// @brief Method get_EditorBaseTypeName, addr 0x43c0378, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_EditorBaseTypeName() ;

/// @brief Method get_EditorTypeName, addr 0x43c0380, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_EditorTypeName() ;

/// @brief Method get_TypeId, addr 0x43c0388, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorAttribute(EditorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorAttribute(EditorAttribute const& ) = delete;

/// @brief Field _typeId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____typeId;

/// @brief Field <EditorBaseTypeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____EditorBaseTypeName_k__BackingField;

/// @brief Field <EditorTypeName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____EditorTypeName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EditorAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EditorAttribute, ____typeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EditorAttribute, ____EditorBaseTypeName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EditorAttribute, ____EditorTypeName_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EditorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorAttribute*, "System.ComponentModel", "EditorAttribute");
