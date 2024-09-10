#pragma once
// IWYU pragma private; include "System/Data/DataRowView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowView)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataView;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataRowView;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowView);
// Type: System.Data::DataRowView
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRowView*
class CORDL_TYPE DataRowView : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DataView)) ::System::Data::DataView*  DataView;

 __declspec(property(get=get_IsNew)) bool  IsNew;

/// @brief Field PropertyChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyChanged, put=__cordl_internal_set_PropertyChanged)) ::System::ComponentModel::PropertyChangedEventHandler*  PropertyChanged;

 __declspec(property(get=get_Row)) ::System::Data::DataRow*  Row;

 __declspec(property(get=get_RowVersionDefault)) ::System::Data::DataRowVersion  RowVersionDefault;

/// @brief Field _dataView, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataView, put=__cordl_internal_set__dataView)) ::System::Data::DataView*  _dataView;

/// @brief Field _delayBeginEdit, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__delayBeginEdit, put=__cordl_internal_set__delayBeginEdit)) bool  _delayBeginEdit;

/// @brief Field _row, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__row, put=__cordl_internal_set__row)) ::System::Data::DataRow*  _row;

/// @brief Field s_zeroPropertyDescriptorCollection, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_zeroPropertyDescriptorCollection, put=setStaticF_s_zeroPropertyDescriptorCollection)) ::System::ComponentModel::PropertyDescriptorCollection*  s_zeroPropertyDescriptorCollection;

/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr operator  ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

/// @brief Method CreateChildView, addr 0x40d15bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataView* CreateChildView(::System::Data::DataRelation*  relation) ;

/// @brief Method CreateChildView, addr 0x40d54fc, size 0x198, virtual false, abstract: false, final false
inline ::System::Data::DataView* CreateChildView(::System::Data::DataRelation*  relation, bool  followParent) ;

/// @brief Method EndEdit, addr 0x40d569c, size 0x4c, virtual true, abstract: false, final true
inline void EndEdit() ;

/// @brief Method Equals, addr 0x40d5428, size 0xc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetColumnValue, addr 0x40ca14c, size 0x34, virtual false, abstract: false, final false
inline ::System::Object* GetColumnValue(::System::Data::DataColumn*  column) ;

/// @brief Method GetHashCode, addr 0x40d5434, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRecord, addr 0x40d54b4, size 0x24, virtual false, abstract: false, final false
inline int32_t GetRecord() ;

/// @brief Method HasRecord, addr 0x40d54d8, size 0x24, virtual false, abstract: false, final false
inline bool HasRecord() ;

static inline ::System::Data::DataRowView* New_ctor(::System::Data::DataView*  dataView, ::System::Data::DataRow*  row) ;

/// @brief Method RaisePropertyChangedEvent, addr 0x40d5710, size 0x90, virtual false, abstract: false, final false
inline void RaisePropertyChangedEvent(::StringW  propName) ;

/// @brief Method SetColumnValue, addr 0x40ca2cc, size 0x8c, virtual false, abstract: false, final false
inline void SetColumnValue(::System::Data::DataColumn*  column, ::System::Object*  value) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x40d57a0, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x40d57f8, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x40d5800, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x40d5808, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x40d5810, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x40d5818, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x40d5820, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x40d5828, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x40d5880, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x40d58d8, size 0x9c, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x40d5974, size 0x88, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x40d59fc, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

constexpr ::System::Data::DataView*& __cordl_internal_get__dataView() ;

constexpr ::cordl_internals::to_const_pointer<::System::Data::DataView*> const& __cordl_internal_get__dataView() const;

constexpr bool const& __cordl_internal_get__delayBeginEdit() const;

constexpr bool& __cordl_internal_get__delayBeginEdit() ;

constexpr ::System::Data::DataRow*& __cordl_internal_get__row() ;

constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRow*> const& __cordl_internal_get__row() const;

constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__dataView(::System::Data::DataView*  value) ;

constexpr void __cordl_internal_set__delayBeginEdit(bool  value) ;

constexpr void __cordl_internal_set__row(::System::Data::DataRow*  value) ;

/// @brief Method .ctor, addr 0x40d53fc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataView*  dataView, ::System::Data::DataRow*  row) ;

static inline ::System::ComponentModel::PropertyDescriptorCollection* getStaticF_s_zeroPropertyDescriptorCollection() ;

/// @brief Method get_DataView, addr 0x40d5454, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataView* get_DataView() ;

/// @brief Method get_IsNew, addr 0x40d56e8, size 0x28, virtual false, abstract: false, final false
inline bool get_IsNew() ;

/// @brief Method get_Row, addr 0x40d5694, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataRow* get_Row() ;

/// @brief Method get_RowVersionDefault, addr 0x40d545c, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::DataRowVersion get_RowVersionDefault() ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

static inline void setStaticF_s_zeroPropertyDescriptorCollection(::System::ComponentModel::PropertyDescriptorCollection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataRowView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataRowView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataRowView(DataRowView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataRowView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataRowView(DataRowView const& ) = delete;

/// @brief Field _dataView, offset: 0x10, size: 0x8, def value: None
 ::System::Data::DataView*  ____dataView;

/// @brief Field _row, offset: 0x18, size: 0x8, def value: None
 ::System::Data::DataRow*  ____row;

/// @brief Field _delayBeginEdit, offset: 0x20, size: 0x1, def value: None
 bool  ____delayBeginEdit;

/// @brief Field PropertyChanged, offset: 0x28, size: 0x8, def value: None
 ::System::ComponentModel::PropertyChangedEventHandler*  ___PropertyChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowView, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ____dataView) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ____row) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ____delayBeginEdit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ___PropertyChanged) == 0x28, "Offset mismatch!");

} // namespace end def System::Data
NEED_NO_BOX(::System::Data::DataRowView);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowView*, "System.Data", "DataRowView");
