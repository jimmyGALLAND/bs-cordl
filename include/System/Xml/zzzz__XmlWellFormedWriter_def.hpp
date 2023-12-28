#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter)
namespace System {
class Object;
}
namespace System::Xml {
class XmlException;
}
namespace System::Xml {
struct __XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
class __XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
class __XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Token;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Namespace;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
struct __XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct __XmlWellFormedWriter__State;
}
namespace System {
class Exception;
}
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
struct __XmlWellFormedWriter__AttrName;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml {
struct __XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__Item;
}
namespace GlobalNamespace {
struct __XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace GlobalNamespace {
struct __XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace System::Xml {
struct __XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
struct __XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
struct __XmlWellFormedWriter__State;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Token;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
class __XmlWellFormedWriter__AttributeValueCache__Item;
}
namespace System::Xml {
class XmlWellFormedWriter;
}
namespace System::Xml {
class __XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
class __XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
struct __XmlWellFormedWriter__AttrName;
}
namespace System::Xml {
struct __XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct __XmlWellFormedWriter__Namespace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__NamespaceKind);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__SpecialAttribute);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__State);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__Token);
MARK_REF_PTR_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk);
MARK_REF_PTR_T(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item);
MARK_REF_PTR_T(::System::Xml::XmlWellFormedWriter);
MARK_REF_PTR_T(::System::Xml::__XmlWellFormedWriter__AttributeValueCache);
MARK_REF_PTR_T(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__AttrName);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__ElementScope);
MARK_VAL_T(::System::Xml::__XmlWellFormedWriter__Namespace);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11477))
// CS Name: ::XmlWellFormedWriter::State
struct CORDL_TYPE __XmlWellFormedWriter__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__State_Unwrapped
  enum struct ____XmlWellFormedWriter__State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_TopLevel = static_cast<int32_t>(0x1),
    __E_Document = static_cast<int32_t>(0x2),
    __E_Element = static_cast<int32_t>(0x3),
    __E_Content = static_cast<int32_t>(0x4),
    __E_B64Content = static_cast<int32_t>(0x5),
    __E_B64Attribute = static_cast<int32_t>(0x6),
    __E_AfterRootEle = static_cast<int32_t>(0x7),
    __E_Attribute = static_cast<int32_t>(0x8),
    __E_SpecialAttr = static_cast<int32_t>(0x9),
    __E_EndDocument = static_cast<int32_t>(0xa),
    __E_RootLevelAttr = static_cast<int32_t>(0xb),
    __E_RootLevelSpecAttr = static_cast<int32_t>(0xc),
    __E_RootLevelB64Attr = static_cast<int32_t>(0xd),
    __E_AfterRootLevelAttr = static_cast<int32_t>(0xe),
    __E_Closed = static_cast<int32_t>(0xf),
    __E_Error = static_cast<int32_t>(0x10),
    __E_StartContent = static_cast<int32_t>(0x65),
    __E_StartContentEle = static_cast<int32_t>(0x66),
    __E_StartContentB64 = static_cast<int32_t>(0x67),
    __E_StartDoc = static_cast<int32_t>(0x68),
    __E_StartDocEle = static_cast<int32_t>(0x6a),
    __E_EndAttrSEle = static_cast<int32_t>(0x6b),
    __E_EndAttrEEle = static_cast<int32_t>(0x6c),
    __E_EndAttrSCont = static_cast<int32_t>(0x6d),
    __E_EndAttrSAttr = static_cast<int32_t>(0x6f),
    __E_PostB64Cont = static_cast<int32_t>(0x70),
    __E_PostB64Attr = static_cast<int32_t>(0x71),
    __E_PostB64RootAttr = static_cast<int32_t>(0x72),
    __E_StartFragEle = static_cast<int32_t>(0x73),
    __E_StartFragCont = static_cast<int32_t>(0x74),
    __E_StartFragB64 = static_cast<int32_t>(0x75),
    __E_StartRootLevelAttr = static_cast<int32_t>(0x76),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__State_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__State const Start;

  /// @brief Field TopLevel value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__State const TopLevel;

  /// @brief Field Document value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__State const Document;

  /// @brief Field Element value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__State const Element;

  /// @brief Field Content value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__State const Content;

  /// @brief Field B64Content value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlWellFormedWriter__State const B64Content;

  /// @brief Field B64Attribute value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlWellFormedWriter__State const B64Attribute;

  /// @brief Field AfterRootEle value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlWellFormedWriter__State const AfterRootEle;

  /// @brief Field Attribute value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlWellFormedWriter__State const Attribute;

  /// @brief Field SpecialAttr value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlWellFormedWriter__State const SpecialAttr;

  /// @brief Field EndDocument value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlWellFormedWriter__State const EndDocument;

  /// @brief Field RootLevelAttr value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelAttr;

  /// @brief Field RootLevelSpecAttr value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelSpecAttr;

  /// @brief Field RootLevelB64Attr value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlWellFormedWriter__State const RootLevelB64Attr;

  /// @brief Field AfterRootLevelAttr value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlWellFormedWriter__State const AfterRootLevelAttr;

  /// @brief Field Closed value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlWellFormedWriter__State const Closed;

  /// @brief Field Error value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlWellFormedWriter__State const Error;

  /// @brief Field StartContent value: static_cast<int32_t>(0x65)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContent;

  /// @brief Field StartContentEle value: static_cast<int32_t>(0x66)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContentEle;

  /// @brief Field StartContentB64 value: static_cast<int32_t>(0x67)
  static ::System::Xml::__XmlWellFormedWriter__State const StartContentB64;

  /// @brief Field StartDoc value: static_cast<int32_t>(0x68)
  static ::System::Xml::__XmlWellFormedWriter__State const StartDoc;

  /// @brief Field StartDocEle value: static_cast<int32_t>(0x6a)
  static ::System::Xml::__XmlWellFormedWriter__State const StartDocEle;

  /// @brief Field EndAttrSEle value: static_cast<int32_t>(0x6b)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSEle;

  /// @brief Field EndAttrEEle value: static_cast<int32_t>(0x6c)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrEEle;

  /// @brief Field EndAttrSCont value: static_cast<int32_t>(0x6d)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSCont;

  /// @brief Field EndAttrSAttr value: static_cast<int32_t>(0x6f)
  static ::System::Xml::__XmlWellFormedWriter__State const EndAttrSAttr;

  /// @brief Field PostB64Cont value: static_cast<int32_t>(0x70)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64Cont;

  /// @brief Field PostB64Attr value: static_cast<int32_t>(0x71)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64Attr;

  /// @brief Field PostB64RootAttr value: static_cast<int32_t>(0x72)
  static ::System::Xml::__XmlWellFormedWriter__State const PostB64RootAttr;

  /// @brief Field StartFragEle value: static_cast<int32_t>(0x73)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragEle;

  /// @brief Field StartFragCont value: static_cast<int32_t>(0x74)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragCont;

  /// @brief Field StartFragB64 value: static_cast<int32_t>(0x75)
  static ::System::Xml::__XmlWellFormedWriter__State const StartFragB64;

  /// @brief Field StartRootLevelAttr value: static_cast<int32_t>(0x76)
  static ::System::Xml::__XmlWellFormedWriter__State const StartRootLevelAttr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__State, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Type: ::Token
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11478))
// CS Name: ::XmlWellFormedWriter::Token
struct CORDL_TYPE __XmlWellFormedWriter__Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__Token_Unwrapped
  enum struct ____XmlWellFormedWriter__Token_Unwrapped : int32_t {
    __E_StartDocument = static_cast<int32_t>(0x0),
    __E_EndDocument = static_cast<int32_t>(0x1),
    __E_PI = static_cast<int32_t>(0x2),
    __E_Comment = static_cast<int32_t>(0x3),
    __E_Dtd = static_cast<int32_t>(0x4),
    __E_StartElement = static_cast<int32_t>(0x5),
    __E_EndElement = static_cast<int32_t>(0x6),
    __E_StartAttribute = static_cast<int32_t>(0x7),
    __E_EndAttribute = static_cast<int32_t>(0x8),
    __E_Text = static_cast<int32_t>(0x9),
    __E_CData = static_cast<int32_t>(0xa),
    __E_AtomicValue = static_cast<int32_t>(0xb),
    __E_Base64 = static_cast<int32_t>(0xc),
    __E_RawData = static_cast<int32_t>(0xd),
    __E_Whitespace = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__Token_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__Token_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__Token(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__Token();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field StartDocument value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartDocument;

  /// @brief Field EndDocument value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndDocument;

  /// @brief Field PI value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__Token const PI;

  /// @brief Field Comment value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__Token const Comment;

  /// @brief Field Dtd value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__Token const Dtd;

  /// @brief Field StartElement value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartElement;

  /// @brief Field EndElement value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndElement;

  /// @brief Field StartAttribute value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlWellFormedWriter__Token const StartAttribute;

  /// @brief Field EndAttribute value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlWellFormedWriter__Token const EndAttribute;

  /// @brief Field Text value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlWellFormedWriter__Token const Text;

  /// @brief Field CData value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlWellFormedWriter__Token const CData;

  /// @brief Field AtomicValue value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlWellFormedWriter__Token const AtomicValue;

  /// @brief Field Base64 value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlWellFormedWriter__Token const Base64;

  /// @brief Field RawData value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlWellFormedWriter__Token const RawData;

  /// @brief Field Whitespace value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlWellFormedWriter__Token const Whitespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__Token, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Type: ::NamespaceResolverProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11479))
// CS Name: ::XmlWellFormedWriter::NamespaceResolverProxy*
class CORDL_TYPE __XmlWellFormedWriter__NamespaceResolverProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field wfWriter, offset 0x10, size 0x8
  __declspec(property(get = __get_wfWriter, put = __set_wfWriter))::System::Xml::XmlWellFormedWriter* wfWriter;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  constexpr ::System::Xml::XmlWellFormedWriter*& __get_wfWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWellFormedWriter*> const& __get_wfWriter() const;

  constexpr void __set_wfWriter(::System::Xml::XmlWellFormedWriter* value);

  static inline ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy* New_ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Method .ctor addr 0x2878ec0 size 0x28 virtual false final false
  inline void _ctor(::System::Xml::XmlWellFormedWriter* wfWriter);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace addr 0x2880230 size 0x18 virtual true final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix addr 0x2880248 size 0x24 virtual true final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__NamespaceResolverProxy(__XmlWellFormedWriter__NamespaceResolverProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__NamespaceResolverProxy(__XmlWellFormedWriter__NamespaceResolverProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__NamespaceResolverProxy();

public:
  /// @brief Field wfWriter, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWellFormedWriter* ___wfWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Type: ::ElementScope
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11480))
// CS Name: ::XmlWellFormedWriter::ElementScope
struct CORDL_TYPE __XmlWellFormedWriter__ElementScope {
public:
  // Declarations
  /// @brief Method Set addr 0x2878ef8 size 0x1c virtual false final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop);

  /// @brief Method WriteEndElement addr 0x287a6d8 size 0x30 virtual false final false
  inline void WriteEndElement(::System::Xml::XmlRawWriter* rawWriter);

  /// @brief Method WriteFullEndElement addr 0x287a9c8 size 0x30 virtual false final false
  inline void WriteFullEndElement(::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xmlSpace", ty:
  // "::System::Xml::XmlSpace", modifiers: "", def_value: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__ElementScope();

  /// @brief Field prevNSTop, offset: 0x0, size: 0x4, def value: None
  int32_t prevNSTop;

  /// @brief Field prefix, offset: 0x8, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW localName;

  /// @brief Field namespaceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field xmlSpace, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::XmlSpace xmlSpace;

  /// @brief Field xmlLang, offset: 0x28, size: 0x8, def value: None
  ::StringW xmlLang;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__ElementScope, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Type: ::NamespaceKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11481))
// CS Name: ::XmlWellFormedWriter::NamespaceKind
struct CORDL_TYPE __XmlWellFormedWriter__NamespaceKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__NamespaceKind_Unwrapped
  enum struct ____XmlWellFormedWriter__NamespaceKind_Unwrapped : int32_t {
    __E_Written = static_cast<int32_t>(0x0),
    __E_NeedToWrite = static_cast<int32_t>(0x1),
    __E_Implied = static_cast<int32_t>(0x2),
    __E_Special = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__NamespaceKind_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__NamespaceKind_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__NamespaceKind(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__NamespaceKind();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Written value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Written;

  /// @brief Field NeedToWrite value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const NeedToWrite;

  /// @brief Field Implied value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Implied;

  /// @brief Field Special value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__NamespaceKind const Special;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__NamespaceKind, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Type: ::Namespace
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11482))
// CS Name: ::XmlWellFormedWriter::Namespace
struct CORDL_TYPE __XmlWellFormedWriter__Namespace {
public:
  // Declarations
  /// @brief Method Set addr 0x2878ee8 size 0x10 virtual false final false
  inline void Set(::StringW prefix, ::StringW namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind);

  /// @brief Method WriteDecl addr 0x287f46c size 0x12c virtual false final false
  inline void WriteDecl(::System::Xml::XmlWriter* writer, ::System::Xml::XmlRawWriter* rawWriter);

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "kind", ty: "::System::Xml::__XmlWellFormedWriter__NamespaceKind", modifiers: "", def_value: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__Namespace(::StringW prefix, ::StringW namespaceUri, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind, int32_t prevNsIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__Namespace();

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field kind, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind;

  /// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
  int32_t prevNsIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__Namespace, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Type: ::AttrName
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11483))
// CS Name: ::XmlWellFormedWriter::AttrName
struct CORDL_TYPE __XmlWellFormedWriter__AttrName {
public:
  // Declarations
  /// @brief Method Set addr 0x287f718 size 0x10 virtual false final false
  inline void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method IsDuplicate addr 0x287f728 size 0x6c virtual false final false
  inline bool IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttrName();

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
  ::StringW namespaceUri;

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW localName;

  /// @brief Field prev, offset: 0x18, size: 0x4, def value: None
  int32_t prev;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__AttrName, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Type: ::SpecialAttribute
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11484))
// CS Name: ::XmlWellFormedWriter::SpecialAttribute
struct CORDL_TYPE __XmlWellFormedWriter__SpecialAttribute {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__SpecialAttribute_Unwrapped
  enum struct ____XmlWellFormedWriter__SpecialAttribute_Unwrapped : int32_t {
    __E_No = static_cast<int32_t>(0x0),
    __E_DefaultXmlns = static_cast<int32_t>(0x1),
    __E_PrefixedXmlns = static_cast<int32_t>(0x2),
    __E_XmlSpace = static_cast<int32_t>(0x3),
    __E_XmlLang = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__SpecialAttribute_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__SpecialAttribute_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__SpecialAttribute(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__SpecialAttribute();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field No value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const No;

  /// @brief Field DefaultXmlns value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const DefaultXmlns;

  /// @brief Field PrefixedXmlns value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const PrefixedXmlns;

  /// @brief Field XmlSpace value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const XmlSpace;

  /// @brief Field XmlLang value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const XmlLang;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__SpecialAttribute, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Type: ::ItemType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11485))
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::ItemType
struct CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__ItemType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped
  enum struct ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped : int32_t {
    __E_EntityRef = static_cast<int32_t>(0x0),
    __E_CharEntity = static_cast<int32_t>(0x1),
    __E_SurrogateCharEntity = static_cast<int32_t>(0x2),
    __E_Whitespace = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_StringChars = static_cast<int32_t>(0x5),
    __E_Raw = static_cast<int32_t>(0x6),
    __E_RawChars = static_cast<int32_t>(0x7),
    __E_ValueString = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped() const noexcept {
    return static_cast<____XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlWellFormedWriter__AttributeValueCache__ItemType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__ItemType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EntityRef value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const EntityRef;

  /// @brief Field CharEntity value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const CharEntity;

  /// @brief Field SurrogateCharEntity value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const SurrogateCharEntity;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const Whitespace;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const String;

  /// @brief Field StringChars value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const StringChars;

  /// @brief Field Raw value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const Raw;

  /// @brief Field RawChars value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const RawChars;

  /// @brief Field ValueString value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const ValueString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Item
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11486))
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::Item*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__Item : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::Object* data;

  constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType& __get_type();

  constexpr ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType const& __get_type() const;

  constexpr void __set_type(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType value);

  constexpr ::System::Object*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_data() const;

  constexpr void __set_data(::System::Object* value);

  static inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item* New_ctor();

  /// @brief Method .ctor addr 0x2880458 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Set addr 0x2880460 size 0xc virtual false final false
  inline void Set(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::System::Object* data);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache__Item(__XmlWellFormedWriter__AttributeValueCache__Item&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache__Item(__XmlWellFormedWriter__AttributeValueCache__Item const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__Item();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType ___type;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BufferChunk
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11487))
// CS Name: ::XmlWellFormedWriter::AttributeValueCache::BufferChunk*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache__BufferChunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<char16_t, ::Array<char16_t>*> buffer;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_buffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  static inline ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method .ctor addr 0x288041c size 0x3c virtual false final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache__BufferChunk(__XmlWellFormedWriter__AttributeValueCache__BufferChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache__BufferChunk(__XmlWellFormedWriter__AttributeValueCache__BufferChunk const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache__BufferChunk();

public:
  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buffer;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AttributeValueCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11488))
// CS Name: ::XmlWellFormedWriter::AttributeValueCache*
class CORDL_TYPE __XmlWellFormedWriter__AttributeValueCache : public ::System::Object {
public:
  // Declarations
  using BufferChunk = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk;

  using Item = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item;

  using ItemType = ::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType;

  /// @brief Field stringValue, offset 0x10, size 0x8
  __declspec(property(get = __get_stringValue, put = __set_stringValue))::System::Text::StringBuilder* stringValue;

  /// @brief Field singleStringValue, offset 0x18, size 0x8
  __declspec(property(get = __get_singleStringValue, put = __set_singleStringValue))::StringW singleStringValue;

  /// @brief Field items, offset 0x20, size 0x8
  __declspec(
      property(get = __get_items,
               put = __set_items))::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> items;

  /// @brief Field firstItem, offset 0x28, size 0x4
  __declspec(property(get = __get_firstItem, put = __set_firstItem)) int32_t firstItem;

  /// @brief Field lastItem, offset 0x2c, size 0x4
  __declspec(property(get = __get_lastItem, put = __set_lastItem)) int32_t lastItem;

  __declspec(property(get = get_StringValue))::StringW StringValue;

  constexpr ::System::Text::StringBuilder*& __get_stringValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_stringValue() const;

  constexpr void __set_stringValue(::System::Text::StringBuilder* value);

  constexpr ::StringW& __get_singleStringValue();

  constexpr ::StringW const& __get_singleStringValue() const;

  constexpr void __set_singleStringValue(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*>& __get_items();

  constexpr ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> const& __get_items() const;

  constexpr void __set_items(::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> value);

  constexpr int32_t& __get_firstItem();

  constexpr int32_t const& __get_firstItem() const;

  constexpr void __set_firstItem(int32_t value);

  constexpr int32_t& __get_lastItem();

  constexpr int32_t const& __get_lastItem() const;

  constexpr void __set_lastItem(int32_t value);

  /// @brief Method get_StringValue addr 0x287be00 size 0x34 virtual false final false
  inline ::StringW get_StringValue();

  /// @brief Method WriteEntityRef addr 0x287d0f8 size 0x19c virtual false final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity addr 0x287d440 size 0x94 virtual false final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity addr 0x287d678 size 0xc4 virtual false final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace addr 0x287d8fc size 0x50 virtual false final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString addr 0x287da3c size 0x70 virtual false final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteChars addr 0x287dd28 size 0xb0 virtual false final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x287e054 size 0xb0 virtual false final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x287e1f4 size 0x50 virtual false final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteValue addr 0x287eab0 size 0x50 virtual false final false
  inline void WriteValue(::StringW value);

  /// @brief Method Replay addr 0x287c310 size 0x324 virtual false final false
  inline void Replay(::System::Xml::XmlWriter* writer);

  /// @brief Method Trim addr 0x287c634 size 0x454 virtual false final false
  inline void Trim();

  /// @brief Method Clear addr 0x287ca88 size 0x30 virtual false final false
  inline void Clear();

  /// @brief Method StartComplexValue addr 0x288026c size 0x3c virtual false final false
  inline void StartComplexValue();

  /// @brief Method AddItem addr 0x28802a8 size 0x174 virtual false final false
  inline void AddItem(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::System::Object* data);

  static inline ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* New_ctor();

  /// @brief Method .ctor addr 0x287ec68 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlWellFormedWriter__AttributeValueCache(__XmlWellFormedWriter__AttributeValueCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlWellFormedWriter__AttributeValueCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlWellFormedWriter__AttributeValueCache(__XmlWellFormedWriter__AttributeValueCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlWellFormedWriter__AttributeValueCache();

public:
  /// @brief Field stringValue, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringValue;

  /// @brief Field singleStringValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___singleStringValue;

  /// @brief Field items, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, ::Array<::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*>*> ___items;

  /// @brief Field firstItem, offset: 0x28, size: 0x4, def value: None
  int32_t ___firstItem;

  /// @brief Field lastItem, offset: 0x2c, size: 0x4, def value: None
  int32_t ___lastItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlWellFormedWriter__AttributeValueCache, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlWellFormedWriter
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11413)), TypeDefinitionIndex(TypeDefinitionIndex(11544)), TypeDefinitionIndex(TypeDefinitionIndex(11491)),
// TypeDefinitionIndex(TypeDefinitionIndex(11484)), TypeDefinitionIndex(TypeDefinitionIndex(11477))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11489)) CS Name: ::System.Xml::XmlWellFormedWriter*
class CORDL_TYPE XmlWellFormedWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  using AttributeValueCache = ::System::Xml::__XmlWellFormedWriter__AttributeValueCache;

  using SpecialAttribute = ::System::Xml::__XmlWellFormedWriter__SpecialAttribute;

  using AttrName = ::System::Xml::__XmlWellFormedWriter__AttrName;

  using Namespace = ::System::Xml::__XmlWellFormedWriter__Namespace;

  using NamespaceKind = ::System::Xml::__XmlWellFormedWriter__NamespaceKind;

  using ElementScope = ::System::Xml::__XmlWellFormedWriter__ElementScope;

  using NamespaceResolverProxy = ::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy;

  using Token = ::System::Xml::__XmlWellFormedWriter__Token;

  using State = ::System::Xml::__XmlWellFormedWriter__State;

  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __get_writer, put = __set_writer))::System::Xml::XmlWriter* writer;

  /// @brief Field rawWriter, offset 0x18, size 0x8
  __declspec(property(get = __get_rawWriter, put = __set_rawWriter))::System::Xml::XmlRawWriter* rawWriter;

  /// @brief Field predefinedNamespaces, offset 0x20, size 0x8
  __declspec(property(get = __get_predefinedNamespaces, put = __set_predefinedNamespaces))::System::Xml::IXmlNamespaceResolver* predefinedNamespaces;

  /// @brief Field nsStack, offset 0x28, size 0x8
  __declspec(property(get = __get_nsStack, put = __set_nsStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> nsStack;

  /// @brief Field nsTop, offset 0x30, size 0x4
  __declspec(property(get = __get_nsTop, put = __set_nsTop)) int32_t nsTop;

  /// @brief Field nsHashtable, offset 0x38, size 0x8
  __declspec(property(get = __get_nsHashtable, put = __set_nsHashtable))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* nsHashtable;

  /// @brief Field useNsHashtable, offset 0x40, size 0x1
  __declspec(property(get = __get_useNsHashtable, put = __set_useNsHashtable)) bool useNsHashtable;

  /// @brief Field elemScopeStack, offset 0x48, size 0x8
  __declspec(property(get = __get_elemScopeStack,
                      put = __set_elemScopeStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> elemScopeStack;

  /// @brief Field elemTop, offset 0x50, size 0x4
  __declspec(property(get = __get_elemTop, put = __set_elemTop)) int32_t elemTop;

  /// @brief Field attrStack, offset 0x58, size 0x8
  __declspec(property(get = __get_attrStack, put = __set_attrStack))::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> attrStack;

  /// @brief Field attrCount, offset 0x60, size 0x4
  __declspec(property(get = __get_attrCount, put = __set_attrCount)) int32_t attrCount;

  /// @brief Field attrHashTable, offset 0x68, size 0x8
  __declspec(property(get = __get_attrHashTable, put = __set_attrHashTable))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* attrHashTable;

  /// @brief Field specAttr, offset 0x70, size 0x4
  __declspec(property(get = __get_specAttr, put = __set_specAttr))::System::Xml::__XmlWellFormedWriter__SpecialAttribute specAttr;

  /// @brief Field attrValueCache, offset 0x78, size 0x8
  __declspec(property(get = __get_attrValueCache, put = __set_attrValueCache))::System::Xml::__XmlWellFormedWriter__AttributeValueCache* attrValueCache;

  /// @brief Field curDeclPrefix, offset 0x80, size 0x8
  __declspec(property(get = __get_curDeclPrefix, put = __set_curDeclPrefix))::StringW curDeclPrefix;

  /// @brief Field stateTable, offset 0x88, size 0x8
  __declspec(property(get = __get_stateTable, put = __set_stateTable))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> stateTable;

  /// @brief Field currentState, offset 0x90, size 0x4
  __declspec(property(get = __get_currentState, put = __set_currentState))::System::Xml::__XmlWellFormedWriter__State currentState;

  /// @brief Field checkCharacters, offset 0x94, size 0x1
  __declspec(property(get = __get_checkCharacters, put = __set_checkCharacters)) bool checkCharacters;

  /// @brief Field omitDuplNamespaces, offset 0x95, size 0x1
  __declspec(property(get = __get_omitDuplNamespaces, put = __set_omitDuplNamespaces)) bool omitDuplNamespaces;

  /// @brief Field writeEndDocumentOnClose, offset 0x96, size 0x1
  __declspec(property(get = __get_writeEndDocumentOnClose, put = __set_writeEndDocumentOnClose)) bool writeEndDocumentOnClose;

  /// @brief Field conformanceLevel, offset 0x98, size 0x4
  __declspec(property(get = __get_conformanceLevel, put = __set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field dtdWritten, offset 0x9c, size 0x1
  __declspec(property(get = __get_dtdWritten, put = __set_dtdWritten)) bool dtdWritten;

  /// @brief Field xmlDeclFollows, offset 0x9d, size 0x1
  __declspec(property(get = __get_xmlDeclFollows, put = __set_xmlDeclFollows)) bool xmlDeclFollows;

  /// @brief Field xmlCharType, offset 0xa0, size 0x8
  __declspec(property(get = __get_xmlCharType, put = __set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field hasher, offset 0xa8, size 0x8
  __declspec(property(get = __get_hasher, put = __set_hasher))::System::Xml::SecureStringHasher* hasher;

  /// @brief Field stateName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stateName, put = setStaticF_stateName))::ArrayW<::StringW, ::Array<::StringW>*> stateName;

  /// @brief Field tokenName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tokenName, put = setStaticF_tokenName))::ArrayW<::StringW, ::Array<::StringW>*> tokenName;

  /// @brief Field state2WriteState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_state2WriteState, put = setStaticF_state2WriteState))::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> state2WriteState;

  /// @brief Field StateTableDocument, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateTableDocument,
                             put = setStaticF_StateTableDocument))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> StateTableDocument;

  /// @brief Field StateTableAuto, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateTableAuto,
                             put = setStaticF_StateTableAuto))::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> StateTableAuto;

  __declspec(property(get = get_WriteState))::System::Xml::WriteState WriteState;

  __declspec(property(get = get_RawWriter))::System::Xml::XmlRawWriter* RawWriter;

  __declspec(property(get = get_SaveAttrValue)) bool SaveAttrValue;

  __declspec(property(get = get_InBase64)) bool InBase64;

  __declspec(property(get = get_IsClosedOrErrorState)) bool IsClosedOrErrorState;

  constexpr ::System::Xml::XmlWriter*& __get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& __get_writer() const;

  constexpr void __set_writer(::System::Xml::XmlWriter* value);

  constexpr ::System::Xml::XmlRawWriter*& __get_rawWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> const& __get_rawWriter() const;

  constexpr void __set_rawWriter(::System::Xml::XmlRawWriter* value);

  constexpr ::System::Xml::IXmlNamespaceResolver*& __get_predefinedNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> const& __get_predefinedNamespaces() const;

  constexpr void __set_predefinedNamespaces(::System::Xml::IXmlNamespaceResolver* value);

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*>& __get_nsStack();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> const& __get_nsStack() const;

  constexpr void __set_nsStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> value);

  constexpr int32_t& __get_nsTop();

  constexpr int32_t const& __get_nsTop() const;

  constexpr void __set_nsTop(int32_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get_nsHashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get_nsHashtable() const;

  constexpr void __set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr bool& __get_useNsHashtable();

  constexpr bool const& __get_useNsHashtable() const;

  constexpr void __set_useNsHashtable(bool value);

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*>& __get_elemScopeStack();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> const& __get_elemScopeStack() const;

  constexpr void __set_elemScopeStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> value);

  constexpr int32_t& __get_elemTop();

  constexpr int32_t const& __get_elemTop() const;

  constexpr void __set_elemTop(int32_t value);

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*>& __get_attrStack();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> const& __get_attrStack() const;

  constexpr void __set_attrStack(::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> value);

  constexpr int32_t& __get_attrCount();

  constexpr int32_t const& __get_attrCount() const;

  constexpr void __set_attrCount(int32_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get_attrHashTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get_attrHashTable() const;

  constexpr void __set_attrHashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute& __get_specAttr();

  constexpr ::System::Xml::__XmlWellFormedWriter__SpecialAttribute const& __get_specAttr() const;

  constexpr void __set_specAttr(::System::Xml::__XmlWellFormedWriter__SpecialAttribute value);

  constexpr ::System::Xml::__XmlWellFormedWriter__AttributeValueCache*& __get_attrValueCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlWellFormedWriter__AttributeValueCache*> const& __get_attrValueCache() const;

  constexpr void __set_attrValueCache(::System::Xml::__XmlWellFormedWriter__AttributeValueCache* value);

  constexpr ::StringW& __get_curDeclPrefix();

  constexpr ::StringW const& __get_curDeclPrefix() const;

  constexpr void __set_curDeclPrefix(::StringW value);

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*>& __get_stateTable();

  constexpr ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> const& __get_stateTable() const;

  constexpr void __set_stateTable(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

  constexpr ::System::Xml::__XmlWellFormedWriter__State& __get_currentState();

  constexpr ::System::Xml::__XmlWellFormedWriter__State const& __get_currentState() const;

  constexpr void __set_currentState(::System::Xml::__XmlWellFormedWriter__State value);

  constexpr bool& __get_checkCharacters();

  constexpr bool const& __get_checkCharacters() const;

  constexpr void __set_checkCharacters(bool value);

  constexpr bool& __get_omitDuplNamespaces();

  constexpr bool const& __get_omitDuplNamespaces() const;

  constexpr void __set_omitDuplNamespaces(bool value);

  constexpr bool& __get_writeEndDocumentOnClose();

  constexpr bool const& __get_writeEndDocumentOnClose() const;

  constexpr void __set_writeEndDocumentOnClose(bool value);

  constexpr ::System::Xml::ConformanceLevel& __get_conformanceLevel();

  constexpr ::System::Xml::ConformanceLevel const& __get_conformanceLevel() const;

  constexpr void __set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr bool& __get_dtdWritten();

  constexpr bool const& __get_dtdWritten() const;

  constexpr void __set_dtdWritten(bool value);

  constexpr bool& __get_xmlDeclFollows();

  constexpr bool const& __get_xmlDeclFollows() const;

  constexpr void __set_xmlDeclFollows(bool value);

  constexpr ::System::Xml::XmlCharType& __get_xmlCharType();

  constexpr ::System::Xml::XmlCharType const& __get_xmlCharType() const;

  constexpr void __set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr ::System::Xml::SecureStringHasher*& __get_hasher();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::SecureStringHasher*> const& __get_hasher() const;

  constexpr void __set_hasher(::System::Xml::SecureStringHasher* value);

  static inline void setStaticF_stateName(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_stateName();

  static inline void setStaticF_tokenName(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_tokenName();

  static inline void setStaticF_state2WriteState(::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> value);

  static inline ::ArrayW<::System::Xml::WriteState, ::Array<::System::Xml::WriteState>*> getStaticF_state2WriteState();

  static inline void setStaticF_StateTableDocument(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

  static inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> getStaticF_StateTableDocument();

  static inline void setStaticF_StateTableAuto(::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> value);

  static inline ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> getStaticF_StateTableAuto();

  static inline ::System::Xml::XmlWellFormedWriter* New_ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method .ctor addr 0x2878ad4 size 0x3e4 virtual false final false
  inline void _ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method get_WriteState addr 0x2878f14 size 0x94 virtual true final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method WriteStartDocument addr 0x2878fa8 size 0x8 virtual true final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument addr 0x2879164 size 0x1c virtual true final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteEndDocument addr 0x2879180 size 0x15c virtual true final false
  inline void WriteEndDocument();

  /// @brief Method WriteDocType addr 0x28795e8 size 0x4ec virtual true final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement addr 0x2879ad4 size 0x3b8 virtual true final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndElement addr 0x287a4ec size 0x1ec virtual true final false
  inline void WriteEndElement();

  /// @brief Method WriteFullEndElement addr 0x287a7dc size 0x1ec virtual true final false
  inline void WriteFullEndElement();

  /// @brief Method WriteStartAttribute addr 0x287a9f8 size 0x6d4 virtual true final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method WriteEndAttribute addr 0x287b5d4 size 0x82c virtual true final false
  inline void WriteEndAttribute();

  /// @brief Method WriteCData addr 0x287cab8 size 0x104 virtual true final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment addr 0x287cbbc size 0x104 virtual true final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction addr 0x287ccc0 size 0x2bc virtual true final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteEntityRef addr 0x287cf7c size 0x16c virtual true final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity addr 0x287d294 size 0x1ac virtual true final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity addr 0x287d4d4 size 0x1a4 virtual true final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace addr 0x287d73c size 0x1c0 virtual true final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString addr 0x287d94c size 0xf0 virtual true final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteChars addr 0x287daac size 0x27c virtual true final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x287ddd8 size 0x27c virtual true final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x287e104 size 0xf0 virtual true final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteBase64 addr 0x287e244 size 0x250 virtual true final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Close addr 0x287e494 size 0x1bc virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0x287e67c size 0xb4 virtual true final false
  inline void Flush();

  /// @brief Method LookupPrefix addr 0x287e730 size 0x280 virtual true final false
  inline ::StringW LookupPrefix(::StringW ns);

  /// @brief Method WriteValue addr 0x287e9b0 size 0x100 virtual true final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteBinHex addr 0x287eb00 size 0x134 virtual true final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method get_RawWriter addr 0x287ec60 size 0x8 virtual false final false
  inline ::System::Xml::XmlRawWriter* get_RawWriter();

  /// @brief Method get_SaveAttrValue addr 0x287d0e8 size 0x10 virtual false final false
  inline bool get_SaveAttrValue();

  /// @brief Method get_InBase64 addr 0x287e650 size 0x2c virtual false final false
  inline bool get_InBase64();

  /// @brief Method SetSpecialAttribute addr 0x287b0cc size 0x90 virtual false final false
  inline void SetSpecialAttribute(::System::Xml::__XmlWellFormedWriter__SpecialAttribute special);

  /// @brief Method WriteStartDocumentImpl addr 0x2878fb0 size 0x1b4 virtual false final false
  inline void WriteStartDocumentImpl(::System::Xml::XmlStandalone standalone);

  /// @brief Method StartFragment addr 0x287ecd8 size 0xc virtual false final false
  inline void StartFragment();

  /// @brief Method PushNamespaceImplicit addr 0x287a0c0 size 0x42c virtual false final false
  inline void PushNamespaceImplicit(::StringW prefix, ::StringW ns);

  /// @brief Method PushNamespaceExplicit addr 0x287be34 size 0x4dc virtual false final false
  inline bool PushNamespaceExplicit(::StringW prefix, ::StringW ns);

  /// @brief Method AddNamespace addr 0x287edc0 size 0x17c virtual false final false
  inline void AddNamespace(::StringW prefix, ::StringW ns, ::System::Xml::__XmlWellFormedWriter__NamespaceKind kind);

  /// @brief Method AddToNamespaceHashtable addr 0x287f048 size 0xe8 virtual false final false
  inline void AddToNamespaceHashtable(int32_t namespaceIndex);

  /// @brief Method LookupNamespaceIndex addr 0x287ece4 size 0xdc virtual false final false
  inline int32_t LookupNamespaceIndex(::StringW prefix);

  /// @brief Method PopNamespaces addr 0x287a708 size 0xd4 virtual false final false
  inline void PopNamespaces(int32_t indexFrom, int32_t indexTo);

  /// @brief Method DupAttrException addr 0x287ef3c size 0x10c virtual false final false
  static inline ::System::Xml::XmlException* DupAttrException(::StringW prefix, ::StringW localName);

  /// @brief Method AdvanceState addr 0x28792dc size 0x30c virtual false final false
  inline void AdvanceState(::System::Xml::__XmlWellFormedWriter__Token token);

  /// @brief Method StartElementContent addr 0x287f3a4 size 0xc8 virtual false final false
  inline void StartElementContent();

  /// @brief Method GetStateName addr 0x287f130 size 0xa0 virtual false final false
  static inline ::StringW GetStateName(::System::Xml::__XmlWellFormedWriter__State state);

  /// @brief Method LookupNamespace addr 0x2879f8c size 0x134 virtual false final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupLocalNamespace addr 0x287b290 size 0xd0 virtual false final false
  inline ::StringW LookupLocalNamespace(::StringW prefix);

  /// @brief Method GeneratePrefix addr 0x287b15c size 0x134 virtual false final false
  inline ::StringW GeneratePrefix();

  /// @brief Method CheckNCName addr 0x2879e8c size 0x100 virtual false final false
  inline void CheckNCName(::StringW ncname);

  /// @brief Method InvalidCharsException addr 0x287f598 size 0x180 virtual false final false
  static inline ::System::Exception* InvalidCharsException(::StringW name, int32_t badCharIndex);

  /// @brief Method ThrowInvalidStateTransition addr 0x287f1d0 size 0x1d4 virtual false final false
  inline void ThrowInvalidStateTransition(::System::Xml::__XmlWellFormedWriter__Token token, ::System::Xml::__XmlWellFormedWriter__State currentState);

  /// @brief Method get_IsClosedOrErrorState addr 0x287ec34 size 0x10 virtual false final false
  inline bool get_IsClosedOrErrorState();

  /// @brief Method AddAttribute addr 0x287b360 size 0x274 virtual false final false
  inline void AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName);

  /// @brief Method AddToAttrHashTable addr 0x287f794 size 0x13c virtual false final false
  inline void AddToAttrHashTable(int32_t attributeIndex);

  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWellFormedWriter(XmlWellFormedWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWellFormedWriter(XmlWellFormedWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWellFormedWriter();

public:
  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field rawWriter, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___rawWriter;

  /// @brief Field predefinedNamespaces, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___predefinedNamespaces;

  /// @brief Field nsStack, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__Namespace, ::Array<::System::Xml::__XmlWellFormedWriter__Namespace>*> ___nsStack;

  /// @brief Field nsTop, offset: 0x30, size: 0x4, def value: None
  int32_t ___nsTop;

  /// @brief Field nsHashtable, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___nsHashtable;

  /// @brief Field useNsHashtable, offset: 0x40, size: 0x1, def value: None
  bool ___useNsHashtable;

  /// @brief Field elemScopeStack, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__ElementScope, ::Array<::System::Xml::__XmlWellFormedWriter__ElementScope>*> ___elemScopeStack;

  /// @brief Field elemTop, offset: 0x50, size: 0x4, def value: None
  int32_t ___elemTop;

  /// @brief Field attrStack, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__AttrName, ::Array<::System::Xml::__XmlWellFormedWriter__AttrName>*> ___attrStack;

  /// @brief Field attrCount, offset: 0x60, size: 0x4, def value: None
  int32_t ___attrCount;

  /// @brief Field attrHashTable, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___attrHashTable;

  /// @brief Field specAttr, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__SpecialAttribute ___specAttr;

  /// @brief Field attrValueCache, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::__XmlWellFormedWriter__AttributeValueCache* ___attrValueCache;

  /// @brief Field curDeclPrefix, offset: 0x80, size: 0x8, def value: None
  ::StringW ___curDeclPrefix;

  /// @brief Field stateTable, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlWellFormedWriter__State, ::Array<::System::Xml::__XmlWellFormedWriter__State>*> ___stateTable;

  /// @brief Field currentState, offset: 0x90, size: 0x4, def value: None
  ::System::Xml::__XmlWellFormedWriter__State ___currentState;

  /// @brief Field checkCharacters, offset: 0x94, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field omitDuplNamespaces, offset: 0x95, size: 0x1, def value: None
  bool ___omitDuplNamespaces;

  /// @brief Field writeEndDocumentOnClose, offset: 0x96, size: 0x1, def value: None
  bool ___writeEndDocumentOnClose;

  /// @brief Field conformanceLevel, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  /// @brief Field dtdWritten, offset: 0x9c, size: 0x1, def value: None
  bool ___dtdWritten;

  /// @brief Field xmlDeclFollows, offset: 0x9d, size: 0x1, def value: None
  bool ___xmlDeclFollows;

  /// @brief Field xmlCharType, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field hasher, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::SecureStringHasher* ___hasher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWellFormedWriter, 0xb0>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__NamespaceKind, "System.Xml", "XmlWellFormedWriter/NamespaceKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__SpecialAttribute, "System.Xml", "XmlWellFormedWriter/SpecialAttribute");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__State, "System.Xml", "XmlWellFormedWriter/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__Token, "System.Xml", "XmlWellFormedWriter/Token");
NEED_NO_BOX(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
NEED_NO_BOX(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlWellFormedWriter__AttributeValueCache__Item*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/Item");
NEED_NO_BOX(::System::Xml::XmlWellFormedWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWellFormedWriter*, "System.Xml", "XmlWellFormedWriter");
NEED_NO_BOX(::System::Xml::__XmlWellFormedWriter__AttributeValueCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
NEED_NO_BOX(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__NamespaceResolverProxy*, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlWellFormedWriter__Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
