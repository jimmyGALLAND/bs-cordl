#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAsyncCheckReader)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReader);
// Type: System.Xml::XmlAsyncCheckReader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlAsyncCheckReader*
class CORDL_TYPE XmlAsyncCheckReader : public ::System::Xml::XmlReader {
public:
// Declarations
 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_CanReadValueChunk)) bool  CanReadValueChunk;

 __declspec(property(get=get_CanResolveEntity)) bool  CanResolveEntity;

 __declspec(property(get=get_CoreReader)) ::System::Xml::XmlReader*  CoreReader;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_DtdInfo)) ::System::Xml::IDtdInfo*  DtdInfo;

 __declspec(property(get=get_HasAttributes)) bool  HasAttributes;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceManager)) ::System::Xml::XmlNamespaceManager*  NamespaceManager;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(get=get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo*  SchemaInfo;

 __declspec(property(get=get_Settings)) ::System::Xml::XmlReaderSettings*  Settings;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_XmlLang)) ::StringW  XmlLang;

 __declspec(property(get=get_XmlSpace)) ::System::Xml::XmlSpace  XmlSpace;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field coreReader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreReader, put=__cordl_internal_set_coreReader)) ::System::Xml::XmlReader*  coreReader;

/// @brief Field lastTask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTask, put=__cordl_internal_set_lastTask)) ::System::Threading::Tasks::Task*  lastTask;

/// @brief Method CheckAsync, addr 0x427b7b0, size 0x7c, virtual false, abstract: false, final false
inline void CheckAsync() ;

/// @brief Method Close, addr 0x427be98, size 0x2c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CreateAsyncCheckWrapper, addr 0x427b2f4, size 0x184, virtual false, abstract: false, final false
static inline ::System::Xml::XmlAsyncCheckReader* CreateAsyncCheckWrapper(::System::Xml::XmlReader*  reader) ;

/// @brief Method Dispose, addr 0x427c1d4, size 0x30, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetAttribute, addr 0x427bcdc, size 0x3c, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0x427bc5c, size 0x3c, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method GetAttribute, addr 0x427bc98, size 0x44, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name, ::StringW  namespaceURI) ;

/// @brief Method IsStartElement, addr 0x427c138, size 0x44, virtual true, abstract: false, final false
inline bool IsStartElement(::StringW  localname, ::StringW  ns) ;

/// @brief Method LookupNamespace, addr 0x427bf48, size 0x3c, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0x427bd18, size 0x3c, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToAttribute, addr 0x427bd54, size 0x3c, virtual true, abstract: false, final false
inline void MoveToAttribute(int32_t  i) ;

/// @brief Method MoveToContent, addr 0x427c088, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType MoveToContent() ;

/// @brief Method MoveToElement, addr 0x427bde8, size 0x2c, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0x427bd90, size 0x2c, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0x427bdbc, size 0x2c, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

static inline ::System::Xml::XmlAsyncCheckReader* New_ctor(::System::Xml::XmlReader*  reader) ;

/// @brief Method Read, addr 0x427be40, size 0x2c, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0x427be14, size 0x2c, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ReadElementString, addr 0x427c0e0, size 0x2c, virtual true, abstract: false, final false
inline ::StringW ReadElementString() ;

/// @brief Method ReadEndElement, addr 0x427c10c, size 0x2c, virtual true, abstract: false, final false
inline void ReadEndElement() ;

/// @brief Method ReadInnerXml, addr 0x427c17c, size 0x2c, virtual true, abstract: false, final false
inline ::StringW ReadInnerXml() ;

/// @brief Method ReadStartElement, addr 0x427c0b4, size 0x2c, virtual true, abstract: false, final false
inline void ReadStartElement() ;

/// @brief Method ReadString, addr 0x427c05c, size 0x2c, virtual true, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ReadValueChunk, addr 0x427c008, size 0x54, virtual true, abstract: false, final false
inline int32_t ReadValueChunk(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ResolveEntity, addr 0x427bfb0, size 0x2c, virtual true, abstract: false, final false
inline void ResolveEntity() ;

/// @brief Method Skip, addr 0x427bef0, size 0x2c, virtual true, abstract: false, final false
inline void Skip() ;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_coreReader() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get_coreReader() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_lastTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_lastTask() const;

constexpr void __cordl_internal_set_coreReader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_lastTask(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x427b708, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader) ;

/// @brief Method get_AttributeCount, addr 0x427bc30, size 0x2c, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0x427bad0, size 0x2c, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_CanReadValueChunk, addr 0x427bfdc, size 0x2c, virtual true, abstract: false, final false
inline bool get_CanReadValueChunk() ;

/// @brief Method get_CanResolveEntity, addr 0x427bf84, size 0x2c, virtual true, abstract: false, final false
inline bool get_CanResolveEntity() ;

/// @brief Method get_CoreReader, addr 0x427b2ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::XmlReader* get_CoreReader() ;

/// @brief Method get_Depth, addr 0x427baa8, size 0x28, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_DtdInfo, addr 0x427c244, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::IDtdInfo* get_DtdInfo() ;

/// @brief Method get_EOF, addr 0x427be6c, size 0x2c, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_HasAttributes, addr 0x427c1a8, size 0x2c, virtual true, abstract: false, final false
inline bool get_HasAttributes() ;

/// @brief Method get_IsDefault, addr 0x427bb28, size 0x2c, virtual true, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsEmptyElement, addr 0x427bafc, size 0x2c, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LocalName, addr 0x427ba08, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x427b9e0, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTable, addr 0x427bf1c, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceManager, addr 0x427c218, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager() ;

/// @brief Method get_NamespaceURI, addr 0x427ba30, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_NodeType, addr 0x427b9b8, size 0x28, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0x427ba58, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_QuoteChar, addr 0x427bb54, size 0x2c, virtual true, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_ReadState, addr 0x427bec4, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_SchemaInfo, addr 0x427bbd8, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() ;

/// @brief Method get_Settings, addr 0x427b82c, size 0xa4, virtual true, abstract: false, final false
inline ::System::Xml::XmlReaderSettings* get_Settings() ;

/// @brief Method get_Value, addr 0x427ba80, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_ValueType, addr 0x427bc04, size 0x2c, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_XmlLang, addr 0x427bbac, size 0x2c, virtual true, abstract: false, final false
inline ::StringW get_XmlLang() ;

/// @brief Method get_XmlSpace, addr 0x427bb80, size 0x2c, virtual true, abstract: false, final false
inline ::System::Xml::XmlSpace get_XmlSpace() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlAsyncCheckReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAsyncCheckReader(XmlAsyncCheckReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAsyncCheckReader(XmlAsyncCheckReader const& ) = delete;

/// @brief Field coreReader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___coreReader;

/// @brief Field lastTask, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___lastTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReader, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckReader, ___coreReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckReader, ___lastTask) == 0x18, "Offset mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReader*, "System.Xml", "XmlAsyncCheckReader");
