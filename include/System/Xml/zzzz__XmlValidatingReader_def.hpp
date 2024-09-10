#pragma once
// IWYU pragma private; include "System/Xml/XmlValidatingReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlValidatingReader)
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlValidatingReaderImpl;
}
// Forward declare root types
namespace System::Xml {
class XmlValidatingReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlValidatingReader);
// Type: System.Xml::XmlValidatingReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlValidatingReader*
class CORDL_TYPE XmlValidatingReader : public ::System::Xml::XmlReader {
public:
// Declarations
 __declspec(property(get=get_AttributeCount)) int32_t  AttributeCount;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_IsEmptyElement)) bool  IsEmptyElement;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

 __declspec(property(get=get_NamespaceURI)) ::StringW  NamespaceURI;

 __declspec(property(get=get_Namespaces)) bool  Namespaces;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_ReadState)) ::System::Xml::ReadState  ReadState;

 __declspec(property(get=get_Value)) ::StringW  Value;

 __declspec(property(get=get_EOF)) bool  _cordl_EOF;

/// @brief Field impl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_impl, put=__cordl_internal_set_impl)) ::System::Xml::XmlValidatingReaderImpl*  impl;

/// @brief Method GetAttribute, addr 0x429118c, size 0x24, virtual true, abstract: false, final false
inline ::StringW GetAttribute(int32_t  i) ;

/// @brief Method GetAttribute, addr 0x4291168, size 0x24, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  localName, ::StringW  namespaceURI) ;

/// @brief Method GetAttribute, addr 0x4291144, size 0x24, virtual true, abstract: false, final false
inline ::StringW GetAttribute(::StringW  name) ;

/// @brief Method LookupNamespace, addr 0x42912f4, size 0x38, virtual true, abstract: false, final false
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method MoveToAttribute, addr 0x42911b0, size 0x24, virtual true, abstract: false, final false
inline bool MoveToAttribute(::StringW  name) ;

/// @brief Method MoveToElement, addr 0x429121c, size 0x24, virtual true, abstract: false, final false
inline bool MoveToElement() ;

/// @brief Method MoveToFirstAttribute, addr 0x42911d4, size 0x24, virtual true, abstract: false, final false
inline bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute, addr 0x42911f8, size 0x24, virtual true, abstract: false, final false
inline bool MoveToNextAttribute() ;

/// @brief Method Read, addr 0x4291264, size 0x24, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAttributeValue, addr 0x4291240, size 0x24, virtual true, abstract: false, final false
inline bool ReadAttributeValue() ;

/// @brief Method ResolveEntity, addr 0x429132c, size 0x24, virtual true, abstract: false, final false
inline void ResolveEntity() ;

constexpr ::System::Xml::XmlValidatingReaderImpl*& __cordl_internal_get_impl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlValidatingReaderImpl*> const& __cordl_internal_get_impl() const;

constexpr void __cordl_internal_set_impl(::System::Xml::XmlValidatingReaderImpl*  value) ;

/// @brief Method get_AttributeCount, addr 0x4291120, size 0x24, virtual true, abstract: false, final false
inline int32_t get_AttributeCount() ;

/// @brief Method get_BaseURI, addr 0x42910d8, size 0x24, virtual true, abstract: false, final false
inline ::StringW get_BaseURI() ;

/// @brief Method get_Depth, addr 0x42910b8, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_EOF, addr 0x4291288, size 0x24, virtual true, abstract: false, final false
inline bool get_EOF() ;

/// @brief Method get_IsEmptyElement, addr 0x42910fc, size 0x24, virtual true, abstract: false, final false
inline bool get_IsEmptyElement() ;

/// @brief Method get_LocalName, addr 0x4291038, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_NameTable, addr 0x42912d0, size 0x24, virtual true, abstract: false, final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method get_NamespaceURI, addr 0x4291058, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_NamespaceURI() ;

/// @brief Method get_Namespaces, addr 0x4291350, size 0x24, virtual false, abstract: false, final false
inline bool get_Namespaces() ;

/// @brief Method get_NodeType, addr 0x4291018, size 0x20, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Prefix, addr 0x4291078, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_ReadState, addr 0x42912ac, size 0x24, virtual true, abstract: false, final false
inline ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_Value, addr 0x4291098, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlValidatingReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlValidatingReader(XmlValidatingReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlValidatingReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlValidatingReader(XmlValidatingReader const& ) = delete;

/// @brief Field impl, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlValidatingReaderImpl*  ___impl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlValidatingReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlValidatingReader, ___impl) == 0x10, "Offset mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlValidatingReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlValidatingReader*, "System.Xml", "XmlValidatingReader");
