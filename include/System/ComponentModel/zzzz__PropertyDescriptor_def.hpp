#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyDescriptor)
namespace System {
class Type;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System {
class Object;
}
namespace System {
class Attribute;
}
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Collections {
class IList;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyDescriptor);
// Type: System.ComponentModel::PropertyDescriptor
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9444))
// CS Name: ::System.ComponentModel::PropertyDescriptor*
class CORDL_TYPE PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor {
public:
  // Declarations
  /// @brief Field _converter, offset 0x60, size 0x8
  __declspec(property(get = __get__converter, put = __set__converter))::System::ComponentModel::TypeConverter* _converter;

  /// @brief Field _valueChangedHandlers, offset 0x68, size 0x8
  __declspec(property(get = __get__valueChangedHandlers, put = __set__valueChangedHandlers))::System::Collections::Hashtable* _valueChangedHandlers;

  /// @brief Field _editors, offset 0x70, size 0x8
  __declspec(property(get = __get__editors, put = __set__editors))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _editors;

  /// @brief Field _editorTypes, offset 0x78, size 0x8
  __declspec(property(get = __get__editorTypes, put = __set__editorTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _editorTypes;

  /// @brief Field _editorCount, offset 0x80, size 0x4
  __declspec(property(get = __get__editorCount, put = __set__editorCount)) int32_t _editorCount;

  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  constexpr ::System::ComponentModel::TypeConverter*& __get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeConverter*> const& __get__converter() const;

  constexpr void __set__converter(::System::ComponentModel::TypeConverter* value);

  constexpr ::System::Collections::Hashtable*& __get__valueChangedHandlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__valueChangedHandlers() const;

  constexpr void __set__valueChangedHandlers(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__editors();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__editors() const;

  constexpr void __set__editors(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get__editorTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get__editorTypes() const;

  constexpr void __set__editorTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr int32_t& __get__editorCount();

  constexpr int32_t const& __get__editorCount() const;

  constexpr void __set__editorCount(int32_t value);

  static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method .ctor addr 0x2912154 size 0x8 virtual false final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method .ctor addr 0x29102cc size 0x8 virtual false final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method get_ComponentType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method CanResetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method Equals addr 0x291215c size 0x200 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FillAttributes addr 0x291235c size 0x14 virtual true final false
  inline void FillAttributes(::System::Collections::IList* attributeList);

  /// @brief Method GetHashCode addr 0x2912370 size 0x54 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetInvocationTarget addr 0x29123c4 size 0xe8 virtual true final false
  inline ::System::Object* GetInvocationTarget(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetValue(::System::Object* component);

  /// @brief Method OnValueChanged addr 0x29124ac size 0xb0 virtual true final false
  inline void OnValueChanged(::System::Object* component, ::System::EventArgs* e);

  /// @brief Method ResetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool ShouldSerializeValue(::System::Object* component);

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyDescriptor(PropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyDescriptor(PropertyDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyDescriptor();

public:
  /// @brief Field _converter, offset: 0x60, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter* ____converter;

  /// @brief Field _valueChangedHandlers, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____valueChangedHandlers;

  /// @brief Field _editors, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____editors;

  /// @brief Field _editorTypes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____editorTypes;

  /// @brief Field _editorCount, offset: 0x80, size: 0x4, def value: None
  int32_t ____editorCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyDescriptor, 0x88>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptor*, "System.ComponentModel", "PropertyDescriptor");
