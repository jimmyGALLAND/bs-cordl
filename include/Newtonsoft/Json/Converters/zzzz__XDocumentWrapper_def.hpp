#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XDocumentWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocumentWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml::Linq {
class XDocument;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDocumentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XDocumentWrapper);
// Type: Newtonsoft.Json.Converters::XDocumentWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XDocumentWrapper*
class CORDL_TYPE XDocumentWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper {
public:
// Declarations
 __declspec(property(get=get_ChildNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  ChildNodes;

 __declspec(property(get=get_Document)) ::System::Xml::Linq::XDocument*  Document;

 __declspec(property(get=get_DocumentElement)) ::Newtonsoft::Json::Converters::IXmlElement*  DocumentElement;

 __declspec(property(get=get_HasChildNodes)) bool  HasChildNodes;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

/// @brief Method AppendChild, addr 0x3eb4d7c, size 0xa0, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode*  newChild) ;

/// @brief Method CreateAttribute, addr 0x3eb4b48, size 0xac, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW  name, ::StringW  value) ;

/// @brief Method CreateAttribute, addr 0x3eb4c1c, size 0xc4, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW  qualifiedName, ::StringW  namespaceUri, ::StringW  value) ;

/// @brief Method CreateCDataSection, addr 0x3eb4600, size 0x90, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW  data) ;

/// @brief Method CreateComment, addr 0x3eb44e0, size 0x90, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW  text) ;

/// @brief Method CreateElement, addr 0x3eb49c8, size 0xa4, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW  elementName) ;

/// @brief Method CreateElement, addr 0x3eb4a94, size 0xb4, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW  qualifiedName, ::StringW  namespaceUri) ;

/// @brief Method CreateProcessingInstruction, addr 0x3eb4908, size 0x98, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW  target, ::StringW  data) ;

/// @brief Method CreateSignificantWhitespace, addr 0x3eb4720, size 0x90, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW  text) ;

/// @brief Method CreateTextNode, addr 0x3eb4570, size 0x90, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW  text) ;

/// @brief Method CreateWhitespace, addr 0x3eb4690, size 0x90, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW  text) ;

/// @brief Method CreateXmlDeclaration, addr 0x3eb47b0, size 0xa8, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW  version, ::StringW  encoding, ::StringW  standalone) ;

/// @brief Method CreateXmlDocumentType, addr 0x3eb4858, size 0xb0, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW  name, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset) ;

static inline ::Newtonsoft::Json::Converters::XDocumentWrapper* New_ctor(::System::Xml::Linq::XDocument*  document) ;

/// @brief Method .ctor, addr 0x3eb3eb8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Linq::XDocument*  document) ;

/// @brief Method get_ChildNodes, addr 0x3eb3f08, size 0x170, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes() ;

/// @brief Method get_Document, addr 0x3eb3e40, size 0x78, virtual false, abstract: false, final false
inline ::System::Xml::Linq::XDocument* get_Document() ;

/// @brief Method get_DocumentElement, addr 0x3eb4ce0, size 0x9c, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement() ;

/// @brief Method get_HasChildNodes, addr 0x3eb447c, size 0x3c, virtual true, abstract: false, final false
inline bool get_HasChildNodes() ;

/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr ::Newtonsoft::Json::Converters::IXmlDocument* i___Newtonsoft__Json__Converters__IXmlDocument() noexcept;

/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XDocumentWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XDocumentWrapper(XDocumentWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XDocumentWrapper(XDocumentWrapper const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XDocumentWrapper, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDocumentWrapper*, "Newtonsoft.Json.Converters", "XDocumentWrapper");
