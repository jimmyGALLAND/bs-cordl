#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaAttDef)
namespace System::Xml::Schema {
struct __SchemaAttDef__Reserve;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System {
class Object;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class IValidationEventHandling;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __SchemaAttDef__Reserve;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__SchemaAttDef__Reserve);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaAttDef);
// Type: ::Reserve
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11700))
// CS Name: ::SchemaAttDef::Reserve
struct CORDL_TYPE __SchemaAttDef__Reserve {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SchemaAttDef__Reserve_Unwrapped
  enum struct ____SchemaAttDef__Reserve_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_XmlSpace = static_cast<int32_t>(0x1),
    __E_XmlLang = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SchemaAttDef__Reserve_Unwrapped() const noexcept {
    return static_cast<____SchemaAttDef__Reserve_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SchemaAttDef__Reserve(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SchemaAttDef__Reserve();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const None;

  /// @brief Field XmlSpace value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const XmlSpace;

  /// @brief Field XmlLang value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const XmlLang;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__SchemaAttDef__Reserve, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::SchemaAttDef
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11703)), TypeDefinitionIndex(TypeDefinitionIndex(11700))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11701))
// CS Name: ::System.Xml.Schema::SchemaAttDef*
class CORDL_TYPE SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase {
public:
  // Declarations
  using Reserve = ::System::Xml::Schema::__SchemaAttDef__Reserve;

  /// @brief Field defExpanded, offset 0x60, size 0x8
  __declspec(property(get = __get_defExpanded, put = __set_defExpanded))::StringW defExpanded;

  /// @brief Field lineNum, offset 0x68, size 0x4
  __declspec(property(get = __get_lineNum, put = __set_lineNum)) int32_t lineNum;

  /// @brief Field linePos, offset 0x6c, size 0x4
  __declspec(property(get = __get_linePos, put = __set_linePos)) int32_t linePos;

  /// @brief Field valueLineNum, offset 0x70, size 0x4
  __declspec(property(get = __get_valueLineNum, put = __set_valueLineNum)) int32_t valueLineNum;

  /// @brief Field valueLinePos, offset 0x74, size 0x4
  __declspec(property(get = __get_valueLinePos, put = __set_valueLinePos)) int32_t valueLinePos;

  /// @brief Field reserved, offset 0x78, size 0x4
  __declspec(property(get = __get_reserved, put = __set_reserved))::System::Xml::Schema::__SchemaAttDef__Reserve reserved;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::SchemaAttDef* Empty;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_Prefix))::StringW System_Xml_IDtdAttributeInfo_Prefix;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LocalName))::StringW System_Xml_IDtdAttributeInfo_LocalName;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LineNumber)) int32_t System_Xml_IDtdAttributeInfo_LineNumber;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LinePosition)) int32_t System_Xml_IDtdAttributeInfo_LinePosition;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsNonCDataType)) bool System_Xml_IDtdAttributeInfo_IsNonCDataType;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)) bool System_Xml_IDtdAttributeInfo_IsDeclaredInExternal;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)) bool System_Xml_IDtdAttributeInfo_IsXmlAttribute;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded))::StringW System_Xml_IDtdDefaultAttributeInfo_DefaultValueExpanded;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped))::System::Object* System_Xml_IDtdDefaultAttributeInfo_DefaultValueTyped;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)) int32_t System_Xml_IDtdDefaultAttributeInfo_ValueLineNumber;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)) int32_t System_Xml_IDtdDefaultAttributeInfo_ValueLinePosition;

  __declspec(property(get = get_LinePosition, put = set_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LineNumber, put = set_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_ValueLinePosition, put = set_ValueLinePosition)) int32_t ValueLinePosition;

  __declspec(property(get = get_ValueLineNumber, put = set_ValueLineNumber)) int32_t ValueLineNumber;

  __declspec(property(get = get_DefaultValueExpanded, put = set_DefaultValueExpanded))::StringW DefaultValueExpanded;

  __declspec(property(get = get_TokenizedType, put = set_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_Reserved, put = set_Reserved))::System::Xml::Schema::__SchemaAttDef__Reserve Reserved;

  /// @brief Convert operator to "::System::Xml::IDtdDefaultAttributeInfo"
  constexpr operator ::System::Xml::IDtdDefaultAttributeInfo*() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
  constexpr operator ::System::Xml::IDtdAttributeInfo*() noexcept;

  constexpr ::StringW& __get_defExpanded();

  constexpr ::StringW const& __get_defExpanded() const;

  constexpr void __set_defExpanded(::StringW value);

  constexpr int32_t& __get_lineNum();

  constexpr int32_t const& __get_lineNum() const;

  constexpr void __set_lineNum(int32_t value);

  constexpr int32_t& __get_linePos();

  constexpr int32_t const& __get_linePos() const;

  constexpr void __set_linePos(int32_t value);

  constexpr int32_t& __get_valueLineNum();

  constexpr int32_t const& __get_valueLineNum() const;

  constexpr void __set_valueLineNum(int32_t value);

  constexpr int32_t& __get_valueLinePos();

  constexpr int32_t const& __get_valueLinePos() const;

  constexpr void __set_valueLinePos(int32_t value);

  constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve& __get_reserved();

  constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve const& __get_reserved() const;

  constexpr void __set_reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value);

  static inline void setStaticF_Empty(::System::Xml::Schema::SchemaAttDef* value);

  static inline ::System::Xml::Schema::SchemaAttDef* getStaticF_Empty();

  static inline ::System::Xml::Schema::SchemaAttDef* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method .ctor addr 0x28c4358 size 0x4 virtual false final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  static inline ::System::Xml::Schema::SchemaAttDef* New_ctor();

  /// @brief Method .ctor addr 0x28c43e4 size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_Prefix addr 0x28c4450 size 0x54 virtual true final true
  inline ::StringW System_Xml_IDtdAttributeInfo_get_Prefix();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LocalName addr 0x28c44f8 size 0x1c virtual true final true
  inline ::StringW System_Xml_IDtdAttributeInfo_get_LocalName();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LineNumber addr 0x28c4514 size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdAttributeInfo_get_LineNumber();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LinePosition addr 0x28c451c size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdAttributeInfo_get_LinePosition();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsNonCDataType addr 0x28c4524 size 0x2c virtual true final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsNonCDataType();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal addr 0x28c4570 size 0x8 virtual true final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsXmlAttribute addr 0x28c4578 size 0x10 virtual true final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsXmlAttribute();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded addr 0x28c4588 size 0x54 virtual true final true
  inline ::StringW System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped addr 0x28c45dc size 0x8 virtual true final true
  inline ::System::Object* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber addr 0x28c45e4 size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition addr 0x28c45ec size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition();

  /// @brief Method get_LinePosition addr 0x28c45f4 size 0x8 virtual false final false
  inline int32_t get_LinePosition();

  /// @brief Method set_LinePosition addr 0x28c45fc size 0x8 virtual false final false
  inline void set_LinePosition(int32_t value);

  /// @brief Method get_LineNumber addr 0x28c4604 size 0x8 virtual false final false
  inline int32_t get_LineNumber();

  /// @brief Method set_LineNumber addr 0x28c460c size 0x8 virtual false final false
  inline void set_LineNumber(int32_t value);

  /// @brief Method get_ValueLinePosition addr 0x28c4614 size 0x8 virtual false final false
  inline int32_t get_ValueLinePosition();

  /// @brief Method set_ValueLinePosition addr 0x28c461c size 0x8 virtual false final false
  inline void set_ValueLinePosition(int32_t value);

  /// @brief Method get_ValueLineNumber addr 0x28c4624 size 0x8 virtual false final false
  inline int32_t get_ValueLineNumber();

  /// @brief Method set_ValueLineNumber addr 0x28c462c size 0x8 virtual false final false
  inline void set_ValueLineNumber(int32_t value);

  /// @brief Method get_DefaultValueExpanded addr 0x28c0858 size 0x54 virtual false final false
  inline ::StringW get_DefaultValueExpanded();

  /// @brief Method set_DefaultValueExpanded addr 0x28c4634 size 0x8 virtual false final false
  inline void set_DefaultValueExpanded(::StringW value);

  /// @brief Method get_TokenizedType addr 0x28c4550 size 0x20 virtual false final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method set_TokenizedType addr 0x28c463c size 0x1c virtual false final false
  inline void set_TokenizedType(::System::Xml::XmlTokenizedType value);

  /// @brief Method get_Reserved addr 0x28c46b0 size 0x8 virtual false final false
  inline ::System::Xml::Schema::__SchemaAttDef__Reserve get_Reserved();

  /// @brief Method set_Reserved addr 0x28c46b8 size 0x8 virtual false final false
  inline void set_Reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value);

  /// @brief Method CheckXmlSpace addr 0x28c46c0 size 0x264 virtual false final false
  inline void CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling);

  // Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaAttDef(SchemaAttDef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaAttDef(SchemaAttDef const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaAttDef();

public:
  /// @brief Field defExpanded, offset: 0x60, size: 0x8, def value: None
  ::StringW ___defExpanded;

  /// @brief Field lineNum, offset: 0x68, size: 0x4, def value: None
  int32_t ___lineNum;

  /// @brief Field linePos, offset: 0x6c, size: 0x4, def value: None
  int32_t ___linePos;

  /// @brief Field valueLineNum, offset: 0x70, size: 0x4, def value: None
  int32_t ___valueLineNum;

  /// @brief Field valueLinePos, offset: 0x74, size: 0x4, def value: None
  int32_t ___valueLinePos;

  /// @brief Field reserved, offset: 0x78, size: 0x4, def value: None
  ::System::Xml::Schema::__SchemaAttDef__Reserve ___reserved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaAttDef, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__SchemaAttDef__Reserve, "System.Xml.Schema", "SchemaAttDef/Reserve");
NEED_NO_BOX(::System::Xml::Schema::SchemaAttDef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaAttDef*, "System.Xml.Schema", "SchemaAttDef");
