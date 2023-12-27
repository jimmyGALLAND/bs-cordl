#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocument)
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System {
class WeakReference;
}
namespace System::Xml {
class EmptyEnumerator;
}
namespace System::Xml {
class XmlText;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlComment;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System {
class Object;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlSignificantWhitespace;
}
namespace System::Xml {
class XmlCDataSection;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml {
class XmlWhitespace;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlProcessingInstruction;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class XmlImplementation;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class DomNameTable;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
namespace System::Xml {
class XmlDocumentFragment;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
class XmlTextReader;
}
// Forward declare root types
namespace System::Xml {
class XmlDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocument);
// Type: System.Xml::XmlDocument
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11505))
// CS Name: ::System.Xml::XmlDocument*
class CORDL_TYPE XmlDocument : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field implementation, offset 0x18, size 0x8
  __declspec(property(get = __get_implementation, put = __set_implementation))::System::Xml::XmlImplementation* implementation;

  /// @brief Field domNameTable, offset 0x20, size 0x8
  __declspec(property(get = __get_domNameTable, put = __set_domNameTable))::System::Xml::DomNameTable* domNameTable;

  /// @brief Field lastChild, offset 0x28, size 0x8
  __declspec(property(get = __get_lastChild, put = __set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field entities, offset 0x30, size 0x8
  __declspec(property(get = __get_entities, put = __set_entities))::System::Xml::XmlNamedNodeMap* entities;

  /// @brief Field htElementIdMap, offset 0x38, size 0x8
  __declspec(property(get = __get_htElementIdMap, put = __set_htElementIdMap))::System::Collections::Hashtable* htElementIdMap;

  /// @brief Field htElementIDAttrDecl, offset 0x40, size 0x8
  __declspec(property(get = __get_htElementIDAttrDecl, put = __set_htElementIDAttrDecl))::System::Collections::Hashtable* htElementIDAttrDecl;

  /// @brief Field schemaInfo, offset 0x48, size 0x8
  __declspec(property(get = __get_schemaInfo, put = __set_schemaInfo))::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field schemas, offset 0x50, size 0x8
  __declspec(property(get = __get_schemas, put = __set_schemas))::System::Xml::Schema::XmlSchemaSet* schemas;

  /// @brief Field reportValidity, offset 0x58, size 0x1
  __declspec(property(get = __get_reportValidity, put = __set_reportValidity)) bool reportValidity;

  /// @brief Field actualLoadingStatus, offset 0x59, size 0x1
  __declspec(property(get = __get_actualLoadingStatus, put = __set_actualLoadingStatus)) bool actualLoadingStatus;

  /// @brief Field onNodeInsertingDelegate, offset 0x60, size 0x8
  __declspec(property(get = __get_onNodeInsertingDelegate, put = __set_onNodeInsertingDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate;

  /// @brief Field onNodeInsertedDelegate, offset 0x68, size 0x8
  __declspec(property(get = __get_onNodeInsertedDelegate, put = __set_onNodeInsertedDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate;

  /// @brief Field onNodeRemovingDelegate, offset 0x70, size 0x8
  __declspec(property(get = __get_onNodeRemovingDelegate, put = __set_onNodeRemovingDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate;

  /// @brief Field onNodeRemovedDelegate, offset 0x78, size 0x8
  __declspec(property(get = __get_onNodeRemovedDelegate, put = __set_onNodeRemovedDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate;

  /// @brief Field onNodeChangingDelegate, offset 0x80, size 0x8
  __declspec(property(get = __get_onNodeChangingDelegate, put = __set_onNodeChangingDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate;

  /// @brief Field onNodeChangedDelegate, offset 0x88, size 0x8
  __declspec(property(get = __get_onNodeChangedDelegate, put = __set_onNodeChangedDelegate))::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate;

  /// @brief Field fEntRefNodesPresent, offset 0x90, size 0x1
  __declspec(property(get = __get_fEntRefNodesPresent, put = __set_fEntRefNodesPresent)) bool fEntRefNodesPresent;

  /// @brief Field fCDataNodesPresent, offset 0x91, size 0x1
  __declspec(property(get = __get_fCDataNodesPresent, put = __set_fCDataNodesPresent)) bool fCDataNodesPresent;

  /// @brief Field preserveWhitespace, offset 0x92, size 0x1
  __declspec(property(get = __get_preserveWhitespace, put = __set_preserveWhitespace)) bool preserveWhitespace;

  /// @brief Field isLoading, offset 0x93, size 0x1
  __declspec(property(get = __get_isLoading, put = __set_isLoading)) bool isLoading;

  /// @brief Field strDocumentName, offset 0x98, size 0x8
  __declspec(property(get = __get_strDocumentName, put = __set_strDocumentName))::StringW strDocumentName;

  /// @brief Field strDocumentFragmentName, offset 0xa0, size 0x8
  __declspec(property(get = __get_strDocumentFragmentName, put = __set_strDocumentFragmentName))::StringW strDocumentFragmentName;

  /// @brief Field strCommentName, offset 0xa8, size 0x8
  __declspec(property(get = __get_strCommentName, put = __set_strCommentName))::StringW strCommentName;

  /// @brief Field strTextName, offset 0xb0, size 0x8
  __declspec(property(get = __get_strTextName, put = __set_strTextName))::StringW strTextName;

  /// @brief Field strCDataSectionName, offset 0xb8, size 0x8
  __declspec(property(get = __get_strCDataSectionName, put = __set_strCDataSectionName))::StringW strCDataSectionName;

  /// @brief Field strEntityName, offset 0xc0, size 0x8
  __declspec(property(get = __get_strEntityName, put = __set_strEntityName))::StringW strEntityName;

  /// @brief Field strID, offset 0xc8, size 0x8
  __declspec(property(get = __get_strID, put = __set_strID))::StringW strID;

  /// @brief Field strXmlns, offset 0xd0, size 0x8
  __declspec(property(get = __get_strXmlns, put = __set_strXmlns))::StringW strXmlns;

  /// @brief Field strXml, offset 0xd8, size 0x8
  __declspec(property(get = __get_strXml, put = __set_strXml))::StringW strXml;

  /// @brief Field strSpace, offset 0xe0, size 0x8
  __declspec(property(get = __get_strSpace, put = __set_strSpace))::StringW strSpace;

  /// @brief Field strLang, offset 0xe8, size 0x8
  __declspec(property(get = __get_strLang, put = __set_strLang))::StringW strLang;

  /// @brief Field strEmpty, offset 0xf0, size 0x8
  __declspec(property(get = __get_strEmpty, put = __set_strEmpty))::StringW strEmpty;

  /// @brief Field strNonSignificantWhitespaceName, offset 0xf8, size 0x8
  __declspec(property(get = __get_strNonSignificantWhitespaceName, put = __set_strNonSignificantWhitespaceName))::StringW strNonSignificantWhitespaceName;

  /// @brief Field strSignificantWhitespaceName, offset 0x100, size 0x8
  __declspec(property(get = __get_strSignificantWhitespaceName, put = __set_strSignificantWhitespaceName))::StringW strSignificantWhitespaceName;

  /// @brief Field strReservedXmlns, offset 0x108, size 0x8
  __declspec(property(get = __get_strReservedXmlns, put = __set_strReservedXmlns))::StringW strReservedXmlns;

  /// @brief Field strReservedXml, offset 0x110, size 0x8
  __declspec(property(get = __get_strReservedXml, put = __set_strReservedXml))::StringW strReservedXml;

  /// @brief Field baseURI, offset 0x118, size 0x8
  __declspec(property(get = __get_baseURI, put = __set_baseURI))::StringW baseURI;

  /// @brief Field resolver, offset 0x120, size 0x8
  __declspec(property(get = __get_resolver, put = __set_resolver))::System::Xml::XmlResolver* resolver;

  /// @brief Field bSetResolver, offset 0x128, size 0x1
  __declspec(property(get = __get_bSetResolver, put = __set_bSetResolver)) bool bSetResolver;

  /// @brief Field objLock, offset 0x130, size 0x8
  __declspec(property(get = __get_objLock, put = __set_objLock))::System::Object* objLock;

  /// @brief Field EmptyEnumerator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyEnumerator, put = setStaticF_EmptyEnumerator))::System::Xml::EmptyEnumerator* EmptyEnumerator;

  /// @brief Field NotKnownSchemaInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NotKnownSchemaInfo, put = setStaticF_NotKnownSchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* NotKnownSchemaInfo;

  /// @brief Field ValidSchemaInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidSchemaInfo, put = setStaticF_ValidSchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* ValidSchemaInfo;

  /// @brief Field InvalidSchemaInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidSchemaInfo, put = setStaticF_InvalidSchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* InvalidSchemaInfo;

  __declspec(property(get = get_DtdSchemaInfo, put = set_DtdSchemaInfo))::System::Xml::Schema::SchemaInfo* DtdSchemaInfo;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_DocumentType))::System::Xml::XmlDocumentType* DocumentType;

  __declspec(property(get = get_Declaration))::System::Xml::XmlDeclaration* Declaration;

  __declspec(property(get = get_Implementation))::System::Xml::XmlImplementation* Implementation;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_DocumentElement))::System::Xml::XmlElement* DocumentElement;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(put = set_Schemas))::System::Xml::Schema::XmlSchemaSet* Schemas;

  __declspec(property(get = get_CanReportValidity)) bool CanReportValidity;

  __declspec(property(get = get_HasSetResolver)) bool HasSetResolver;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Entities, put = set_Entities))::System::Xml::XmlNamedNodeMap* Entities;

  __declspec(property(get = get_IsLoading, put = set_IsLoading)) bool IsLoading;

  __declspec(property(get = get_ActualLoadingStatus)) bool ActualLoadingStatus;

  __declspec(property(put = set_InnerText))::StringW InnerText;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  constexpr ::System::Xml::XmlImplementation*& __get_implementation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlImplementation*> const& __get_implementation() const;

  constexpr void __set_implementation(::System::Xml::XmlImplementation* value);

  constexpr ::System::Xml::DomNameTable*& __get_domNameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::DomNameTable*> const& __get_domNameTable() const;

  constexpr void __set_domNameTable(::System::Xml::DomNameTable* value);

  constexpr ::System::Xml::XmlLinkedNode*& __get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __get_lastChild() const;

  constexpr void __set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr ::System::Xml::XmlNamedNodeMap*& __get_entities();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamedNodeMap*> const& __get_entities() const;

  constexpr void __set_entities(::System::Xml::XmlNamedNodeMap* value);

  constexpr ::System::Collections::Hashtable*& __get_htElementIdMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_htElementIdMap() const;

  constexpr void __set_htElementIdMap(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get_htElementIDAttrDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_htElementIDAttrDecl() const;

  constexpr void __set_htElementIDAttrDecl(::System::Collections::Hashtable* value);

  constexpr ::System::Xml::Schema::SchemaInfo*& __get_schemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __get_schemaInfo() const;

  constexpr void __set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __get_schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& __get_schemas() const;

  constexpr void __set_schemas(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr bool& __get_reportValidity();

  constexpr bool const& __get_reportValidity() const;

  constexpr void __set_reportValidity(bool value);

  constexpr bool& __get_actualLoadingStatus();

  constexpr bool const& __get_actualLoadingStatus() const;

  constexpr void __set_actualLoadingStatus(bool value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeInsertingDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeInsertingDelegate() const;

  constexpr void __set_onNodeInsertingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeInsertedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeInsertedDelegate() const;

  constexpr void __set_onNodeInsertedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeRemovingDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeRemovingDelegate() const;

  constexpr void __set_onNodeRemovingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeRemovedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeRemovedDelegate() const;

  constexpr void __set_onNodeRemovedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeChangingDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeChangingDelegate() const;

  constexpr void __set_onNodeChangingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __get_onNodeChangedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& __get_onNodeChangedDelegate() const;

  constexpr void __set_onNodeChangedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr bool& __get_fEntRefNodesPresent();

  constexpr bool const& __get_fEntRefNodesPresent() const;

  constexpr void __set_fEntRefNodesPresent(bool value);

  constexpr bool& __get_fCDataNodesPresent();

  constexpr bool const& __get_fCDataNodesPresent() const;

  constexpr void __set_fCDataNodesPresent(bool value);

  constexpr bool& __get_preserveWhitespace();

  constexpr bool const& __get_preserveWhitespace() const;

  constexpr void __set_preserveWhitespace(bool value);

  constexpr bool& __get_isLoading();

  constexpr bool const& __get_isLoading() const;

  constexpr void __set_isLoading(bool value);

  constexpr ::StringW& __get_strDocumentName();

  constexpr ::StringW const& __get_strDocumentName() const;

  constexpr void __set_strDocumentName(::StringW value);

  constexpr ::StringW& __get_strDocumentFragmentName();

  constexpr ::StringW const& __get_strDocumentFragmentName() const;

  constexpr void __set_strDocumentFragmentName(::StringW value);

  constexpr ::StringW& __get_strCommentName();

  constexpr ::StringW const& __get_strCommentName() const;

  constexpr void __set_strCommentName(::StringW value);

  constexpr ::StringW& __get_strTextName();

  constexpr ::StringW const& __get_strTextName() const;

  constexpr void __set_strTextName(::StringW value);

  constexpr ::StringW& __get_strCDataSectionName();

  constexpr ::StringW const& __get_strCDataSectionName() const;

  constexpr void __set_strCDataSectionName(::StringW value);

  constexpr ::StringW& __get_strEntityName();

  constexpr ::StringW const& __get_strEntityName() const;

  constexpr void __set_strEntityName(::StringW value);

  constexpr ::StringW& __get_strID();

  constexpr ::StringW const& __get_strID() const;

  constexpr void __set_strID(::StringW value);

  constexpr ::StringW& __get_strXmlns();

  constexpr ::StringW const& __get_strXmlns() const;

  constexpr void __set_strXmlns(::StringW value);

  constexpr ::StringW& __get_strXml();

  constexpr ::StringW const& __get_strXml() const;

  constexpr void __set_strXml(::StringW value);

  constexpr ::StringW& __get_strSpace();

  constexpr ::StringW const& __get_strSpace() const;

  constexpr void __set_strSpace(::StringW value);

  constexpr ::StringW& __get_strLang();

  constexpr ::StringW const& __get_strLang() const;

  constexpr void __set_strLang(::StringW value);

  constexpr ::StringW& __get_strEmpty();

  constexpr ::StringW const& __get_strEmpty() const;

  constexpr void __set_strEmpty(::StringW value);

  constexpr ::StringW& __get_strNonSignificantWhitespaceName();

  constexpr ::StringW const& __get_strNonSignificantWhitespaceName() const;

  constexpr void __set_strNonSignificantWhitespaceName(::StringW value);

  constexpr ::StringW& __get_strSignificantWhitespaceName();

  constexpr ::StringW const& __get_strSignificantWhitespaceName() const;

  constexpr void __set_strSignificantWhitespaceName(::StringW value);

  constexpr ::StringW& __get_strReservedXmlns();

  constexpr ::StringW const& __get_strReservedXmlns() const;

  constexpr void __set_strReservedXmlns(::StringW value);

  constexpr ::StringW& __get_strReservedXml();

  constexpr ::StringW const& __get_strReservedXml() const;

  constexpr void __set_strReservedXml(::StringW value);

  constexpr ::StringW& __get_baseURI();

  constexpr ::StringW const& __get_baseURI() const;

  constexpr void __set_baseURI(::StringW value);

  constexpr ::System::Xml::XmlResolver*& __get_resolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __get_resolver() const;

  constexpr void __set_resolver(::System::Xml::XmlResolver* value);

  constexpr bool& __get_bSetResolver();

  constexpr bool const& __get_bSetResolver() const;

  constexpr void __set_bSetResolver(bool value);

  constexpr ::System::Object*& __get_objLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_objLock() const;

  constexpr void __set_objLock(::System::Object* value);

  static inline void setStaticF_EmptyEnumerator(::System::Xml::EmptyEnumerator* value);

  static inline ::System::Xml::EmptyEnumerator* getStaticF_EmptyEnumerator();

  static inline void setStaticF_NotKnownSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_NotKnownSchemaInfo();

  static inline void setStaticF_ValidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_ValidSchemaInfo();

  static inline void setStaticF_InvalidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_InvalidSchemaInfo();

  static inline ::System::Xml::XmlDocument* New_ctor();

  /// @brief Method .ctor addr 0x288486c size 0x64 virtual false final false
  inline void _ctor();

  static inline ::System::Xml::XmlDocument* New_ctor(::System::Xml::XmlImplementation* imp);

  /// @brief Method .ctor addr 0x28848d0 size 0x3c8 virtual false final false
  inline void _ctor(::System::Xml::XmlImplementation* imp);

  /// @brief Method get_DtdSchemaInfo addr 0x2884c98 size 0x8 virtual false final false
  inline ::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();

  /// @brief Method set_DtdSchemaInfo addr 0x2884ca0 size 0x8 virtual false final false
  inline void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value);

  /// @brief Method CheckName addr 0x2881ab4 size 0xd8 virtual false final false
  static inline void CheckName(::StringW name);

  /// @brief Method AddXmlName addr 0x2884ca8 size 0x18 virtual false final false
  inline ::System::Xml::XmlName* AddXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method GetXmlName addr 0x2884cc0 size 0x18 virtual false final false
  inline ::System::Xml::XmlName* GetXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method AddAttrXmlName addr 0x2881bc8 size 0x11c virtual false final false
  inline ::System::Xml::XmlName* AddAttrXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method AddIdInfo addr 0x2884cd8 size 0xc0 virtual false final false
  inline bool AddIdInfo(::System::Xml::XmlName* eleName, ::System::Xml::XmlName* attrName);

  /// @brief Method GetIDInfoByElement_ addr 0x2884d98 size 0xd4 virtual false final false
  inline ::System::Xml::XmlName* GetIDInfoByElement_(::System::Xml::XmlName* eleName);

  /// @brief Method GetIDInfoByElement addr 0x2883734 size 0x14 virtual false final false
  inline ::System::Xml::XmlName* GetIDInfoByElement(::System::Xml::XmlName* eleName);

  /// @brief Method GetElement addr 0x2884e6c size 0x650 virtual false final false
  inline ::System::WeakReference* GetElement(::System::Collections::ArrayList* elementList, ::System::Xml::XmlElement* elem);

  /// @brief Method AddElementWithId addr 0x2883748 size 0x1f4 virtual false final false
  inline void AddElementWithId(::StringW id, ::System::Xml::XmlElement* elem);

  /// @brief Method RemoveElementWithId addr 0x288393c size 0x138 virtual false final false
  inline void RemoveElementWithId(::StringW id, ::System::Xml::XmlElement* elem);

  /// @brief Method CloneNode addr 0x28854bc size 0x60 virtual true final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_NodeType addr 0x28855b8 size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode addr 0x28855c0 size 0x8 virtual true final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_DocumentType addr 0x28855c8 size 0x8c virtual true final false
  inline ::System::Xml::XmlDocumentType* get_DocumentType();

  /// @brief Method get_Declaration addr 0x2885654 size 0xa4 virtual true final false
  inline ::System::Xml::XmlDeclaration* get_Declaration();

  /// @brief Method get_Implementation addr 0x28856f8 size 0x8 virtual false final false
  inline ::System::Xml::XmlImplementation* get_Implementation();

  /// @brief Method get_Name addr 0x2885700 size 0x8 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName addr 0x2885708 size 0x8 virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_DocumentElement addr 0x2885710 size 0x8c virtual false final false
  inline ::System::Xml::XmlElement* get_DocumentElement();

  /// @brief Method get_IsContainer addr 0x288579c size 0x8 virtual true final false
  inline bool get_IsContainer();

  /// @brief Method get_LastNode addr 0x28857a4 size 0x8 virtual true final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode addr 0x28857ac size 0x8 virtual true final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method get_OwnerDocument addr 0x28857b4 size 0x8 virtual true final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method set_Schemas addr 0x28857bc size 0x8 virtual false final false
  inline void set_Schemas(::System::Xml::Schema::XmlSchemaSet* value);

  /// @brief Method get_CanReportValidity addr 0x28857c4 size 0x8 virtual false final false
  inline bool get_CanReportValidity();

  /// @brief Method get_HasSetResolver addr 0x28857cc size 0x8 virtual false final false
  inline bool get_HasSetResolver();

  /// @brief Method GetResolver addr 0x28857d4 size 0x8 virtual false final false
  inline ::System::Xml::XmlResolver* GetResolver();

  /// @brief Method set_XmlResolver addr 0x28857dc size 0x188 virtual true final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method IsValidChildType addr 0x2885964 size 0xf0 virtual true final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method HasNodeTypeInPrevSiblings addr 0x2885a54 size 0xb0 virtual false final false
  inline bool HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode);

  /// @brief Method HasNodeTypeInNextSiblings addr 0x2885b04 size 0x64 virtual false final false
  inline bool HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode);

  /// @brief Method CanInsertAfter addr 0x2885b68 size 0xf8 virtual true final false
  inline bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method CreateAttribute addr 0x2885c60 size 0xc0 virtual false final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW name);

  /// @brief Method SetDefaultNamespace addr 0x2885d20 size 0x90 virtual false final false
  inline void SetDefaultNamespace(::StringW prefix, ::StringW localName, ByRef<::StringW> namespaceURI);

  /// @brief Method CreateCDataSection addr 0x2885db0 size 0x7c virtual true final false
  inline ::System::Xml::XmlCDataSection* CreateCDataSection(::StringW data);

  /// @brief Method CreateComment addr 0x2885e2c size 0x74 virtual true final false
  inline ::System::Xml::XmlComment* CreateComment(::StringW data);

  /// @brief Method CreateDocumentType addr 0x2885ea0 size 0x94 virtual true final false
  inline ::System::Xml::XmlDocumentType* CreateDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method CreateDocumentFragment addr 0x2885f34 size 0x64 virtual true final false
  inline ::System::Xml::XmlDocumentFragment* CreateDocumentFragment();

  /// @brief Method CreateElement addr 0x2885f98 size 0xb0 virtual false final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW name);

  /// @brief Method AddDefaultAttributes addr 0x2886048 size 0x288 virtual false final false
  inline void AddDefaultAttributes(::System::Xml::XmlElement* elem);

  /// @brief Method GetSchemaElementDecl addr 0x28862d0 size 0x110 virtual false final false
  inline ::System::Xml::Schema::SchemaElementDecl* GetSchemaElementDecl(::System::Xml::XmlElement* elem);

  /// @brief Method PrepareDefaultAttribute addr 0x28863e0 size 0xfc virtual false final false
  inline ::System::Xml::XmlAttribute* PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI);

  /// @brief Method CreateEntityReference addr 0x28864dc size 0x74 virtual true final false
  inline ::System::Xml::XmlEntityReference* CreateEntityReference(::StringW name);

  /// @brief Method CreateProcessingInstruction addr 0x2886550 size 0x7c virtual true final false
  inline ::System::Xml::XmlProcessingInstruction* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateXmlDeclaration addr 0x28865cc size 0x88 virtual true final false
  inline ::System::Xml::XmlDeclaration* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method CreateTextNode addr 0x2886654 size 0x74 virtual true final false
  inline ::System::Xml::XmlText* CreateTextNode(::StringW text);

  /// @brief Method CreateSignificantWhitespace addr 0x28866c8 size 0x74 virtual true final false
  inline ::System::Xml::XmlSignificantWhitespace* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateWhitespace addr 0x288673c size 0x74 virtual true final false
  inline ::System::Xml::XmlWhitespace* CreateWhitespace(::StringW text);

  /// @brief Method CreateAttribute addr 0x28867b0 size 0xa4 virtual false final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW qualifiedName, ::StringW namespaceURI);

  /// @brief Method CreateElement addr 0x2886854 size 0xa4 virtual false final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceURI);

  /// @brief Method ImportNodeInternal addr 0x28868f8 size 0x4b0 virtual false final false
  inline ::System::Xml::XmlNode* ImportNodeInternal(::System::Xml::XmlNode* node, bool deep);

  /// @brief Method ImportAttributes addr 0x2886da8 size 0x114 virtual false final false
  inline void ImportAttributes(::System::Xml::XmlNode* fromElem, ::System::Xml::XmlNode* toElem);

  /// @brief Method ImportChildren addr 0x288551c size 0x9c virtual false final false
  inline void ImportChildren(::System::Xml::XmlNode* fromNode, ::System::Xml::XmlNode* toNode, bool deep);

  /// @brief Method get_NameTable addr 0x28814a4 size 0x1c virtual false final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method CreateAttribute addr 0x2886ebc size 0xa0 virtual true final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method CreateDefaultAttribute addr 0x2886f5c size 0x8c virtual true final false
  inline ::System::Xml::XmlAttribute* CreateDefaultAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method CreateElement addr 0x2886fe8 size 0xb8 virtual true final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method get_IsReadOnly addr 0x28870a0 size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Entities addr 0x28870a8 size 0x70 virtual false final false
  inline ::System::Xml::XmlNamedNodeMap* get_Entities();

  /// @brief Method set_Entities addr 0x2887118 size 0x8 virtual false final false
  inline void set_Entities(::System::Xml::XmlNamedNodeMap* value);

  /// @brief Method get_IsLoading addr 0x2887120 size 0x8 virtual false final false
  inline bool get_IsLoading();

  /// @brief Method set_IsLoading addr 0x2887128 size 0xc virtual false final false
  inline void set_IsLoading(bool value);

  /// @brief Method get_ActualLoadingStatus addr 0x2887134 size 0x8 virtual false final false
  inline bool get_ActualLoadingStatus();

  /// @brief Method SetupReader addr 0x288713c size 0x6c virtual false final false
  inline ::System::Xml::XmlTextReader* SetupReader(::System::Xml::XmlTextReader* tr);

  /// @brief Method Load addr 0x28871a8 size 0x114 virtual true final false
  inline void Load(::System::Xml::XmlReader* reader);

  /// @brief Method LoadXml addr 0x28872bc size 0x14c virtual true final false
  inline void LoadXml(::StringW xml);

  /// @brief Method set_InnerText addr 0x2887408 size 0x60 virtual true final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml addr 0x2887468 size 0x10 virtual true final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method GetEventArgs addr 0x2887478 size 0x100 virtual true final false
  inline ::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue,
                                                              ::StringW newValue, ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method GetInsertEventArgsForLoad addr 0x288232c size 0xbc virtual false final false
  inline ::System::Xml::XmlNodeChangedEventArgs* GetInsertEventArgsForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* newParent);

  /// @brief Method BeforeEvent addr 0x2887578 size 0x54 virtual true final false
  inline void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method AfterEvent addr 0x28875cc size 0x54 virtual true final false
  inline void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method GetDefaultAttribute addr 0x28834a0 size 0x294 virtual false final false
  inline ::System::Xml::XmlAttribute* GetDefaultAttribute(::System::Xml::XmlElement* elem, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI);

  /// @brief Method GetEntityNode addr 0x2887620 size 0xc8 virtual false final false
  inline ::System::Xml::XmlEntity* GetEntityNode(::StringW name);

  /// @brief Method get_BaseURI addr 0x28876e8 size 0x8 virtual true final false
  inline ::StringW get_BaseURI();

  /// @brief Method SetBaseURI addr 0x28876f0 size 0x8 virtual false final false
  inline void SetBaseURI(::StringW inBaseURI);

  /// @brief Method AppendChildForLoad addr 0x28876f8 size 0x1d4 virtual true final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocument(XmlDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocument(XmlDocument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocument();

public:
  /// @brief Field implementation, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlImplementation* ___implementation;

  /// @brief Field domNameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::DomNameTable* ___domNameTable;

  /// @brief Field lastChild, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  /// @brief Field entities, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlNamedNodeMap* ___entities;

  /// @brief Field htElementIdMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___htElementIdMap;

  /// @brief Field htElementIDAttrDecl, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___htElementIDAttrDecl;

  /// @brief Field schemaInfo, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  /// @brief Field schemas, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ___schemas;

  /// @brief Field reportValidity, offset: 0x58, size: 0x1, def value: None
  bool ___reportValidity;

  /// @brief Field actualLoadingStatus, offset: 0x59, size: 0x1, def value: None
  bool ___actualLoadingStatus;

  /// @brief Field onNodeInsertingDelegate, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeInsertingDelegate;

  /// @brief Field onNodeInsertedDelegate, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeInsertedDelegate;

  /// @brief Field onNodeRemovingDelegate, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeRemovingDelegate;

  /// @brief Field onNodeRemovedDelegate, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeRemovedDelegate;

  /// @brief Field onNodeChangingDelegate, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeChangingDelegate;

  /// @brief Field onNodeChangedDelegate, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeChangedDelegate;

  /// @brief Field fEntRefNodesPresent, offset: 0x90, size: 0x1, def value: None
  bool ___fEntRefNodesPresent;

  /// @brief Field fCDataNodesPresent, offset: 0x91, size: 0x1, def value: None
  bool ___fCDataNodesPresent;

  /// @brief Field preserveWhitespace, offset: 0x92, size: 0x1, def value: None
  bool ___preserveWhitespace;

  /// @brief Field isLoading, offset: 0x93, size: 0x1, def value: None
  bool ___isLoading;

  /// @brief Field strDocumentName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___strDocumentName;

  /// @brief Field strDocumentFragmentName, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___strDocumentFragmentName;

  /// @brief Field strCommentName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___strCommentName;

  /// @brief Field strTextName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___strTextName;

  /// @brief Field strCDataSectionName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___strCDataSectionName;

  /// @brief Field strEntityName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___strEntityName;

  /// @brief Field strID, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___strID;

  /// @brief Field strXmlns, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___strXmlns;

  /// @brief Field strXml, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___strXml;

  /// @brief Field strSpace, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___strSpace;

  /// @brief Field strLang, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___strLang;

  /// @brief Field strEmpty, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___strEmpty;

  /// @brief Field strNonSignificantWhitespaceName, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___strNonSignificantWhitespaceName;

  /// @brief Field strSignificantWhitespaceName, offset: 0x100, size: 0x8, def value: None
  ::StringW ___strSignificantWhitespaceName;

  /// @brief Field strReservedXmlns, offset: 0x108, size: 0x8, def value: None
  ::StringW ___strReservedXmlns;

  /// @brief Field strReservedXml, offset: 0x110, size: 0x8, def value: None
  ::StringW ___strReservedXml;

  /// @brief Field baseURI, offset: 0x118, size: 0x8, def value: None
  ::StringW ___baseURI;

  /// @brief Field resolver, offset: 0x120, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___resolver;

  /// @brief Field bSetResolver, offset: 0x128, size: 0x1, def value: None
  bool ___bSetResolver;

  /// @brief Field objLock, offset: 0x130, size: 0x8, def value: None
  ::System::Object* ___objLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocument, 0x138>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocument*, "System.Xml", "XmlDocument");
