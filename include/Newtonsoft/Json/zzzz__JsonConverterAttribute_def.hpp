#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(JsonConverterAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverterAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConverterAttribute);
// Type: Newtonsoft.Json::JsonConverterAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonConverterAttribute*
class CORDL_TYPE JsonConverterAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ConverterParameters))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ConverterParameters;

  __declspec(property(get = get_ConverterType))::System::Type* ConverterType;

  /// @brief Field <ConverterParameters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ConverterParameters_k__BackingField,
                      put = __cordl_internal_set__ConverterParameters_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _ConverterParameters_k__BackingField;

  /// @brief Field _converterType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__converterType, put = __cordl_internal_set__converterType))::System::Type* _converterType;

  static inline ::Newtonsoft::Json::JsonConverterAttribute* New_ctor(::System::Type* converterType);

  static inline ::Newtonsoft::Json::JsonConverterAttribute* New_ctor(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__ConverterParameters_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__ConverterParameters_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__converterType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__converterType() const;

  constexpr void __cordl_internal_set__ConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__converterType(::System::Type* value);

  /// @brief Method .ctor, addr 0x28c7838, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* converterType);

  /// @brief Method .ctor, addr 0x28c7904, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters);

  /// @brief Method get_ConverterParameters, addr 0x28c7830, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ConverterParameters();

  /// @brief Method get_ConverterType, addr 0x28c7828, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ConverterType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConverterAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonConverterAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConverterAttribute(JsonConverterAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverterAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConverterAttribute(JsonConverterAttribute const&) = delete;

  /// @brief Field _converterType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____converterType;

  /// @brief Field <ConverterParameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____ConverterParameters_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConverterAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonConverterAttribute, ____converterType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonConverterAttribute, ____ConverterParameters_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverterAttribute*, "Newtonsoft.Json", "JsonConverterAttribute");
