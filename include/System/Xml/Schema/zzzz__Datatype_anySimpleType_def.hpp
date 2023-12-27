#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_anySimpleType)
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_anySimpleType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_anySimpleType);
// Type: System.Xml.Schema::Datatype_anySimpleType
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11621))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11624))
// CS Name: ::System.Xml.Schema::Datatype_anySimpleType*
class CORDL_TYPE Datatype_anySimpleType : public ::System::Xml::Schema::DatatypeImplementation {
public:
  // Declarations
  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType))::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType))::System::Type* listValueType;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline void setStaticF_listValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method CreateValueConverter addr 0x28b7540 size 0x58 virtual true final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method get_FacetsChecker addr 0x28b7598 size 0x58 virtual true final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ValueType addr 0x28b75f0 size 0x58 virtual true final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_TypeCode addr 0x28b7648 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ListValueType addr 0x28b7650 size 0x58 virtual true final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TokenizedType addr 0x28b76a8 size 0x8 virtual true final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_BuiltInWhitespaceFacet addr 0x28b76b0 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method Compare addr 0x28b76b8 size 0x58 virtual true final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method TryParseValue addr 0x28b7710 size 0x24 virtual true final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  static inline ::System::Xml::Schema::Datatype_anySimpleType* New_ctor();

  /// @brief Method .ctor addr 0x28b7734 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_anySimpleType(Datatype_anySimpleType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_anySimpleType(Datatype_anySimpleType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_anySimpleType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_anySimpleType, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_anySimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_anySimpleType*, "System.Xml.Schema", "Datatype_anySimpleType");
