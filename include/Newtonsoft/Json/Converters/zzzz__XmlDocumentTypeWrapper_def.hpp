#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDocumentTypeWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentTypeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlDocumentType;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentTypeWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
// Type: Newtonsoft.Json.Converters::XmlDocumentTypeWrapper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XmlDocumentTypeWrapper*
class CORDL_TYPE XmlDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
 __declspec(property(get=get_InternalSubset)) ::StringW  InternalSubset;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Public)) ::StringW  Public;

 __declspec(property(get=get_System)) ::StringW  System;

/// @brief Field _documentType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__documentType, put=__cordl_internal_set__documentType)) ::System::Xml::XmlDocumentType*  _documentType;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlDocumentType*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

static inline ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper* New_ctor(::System::Xml::XmlDocumentType*  documentType) ;

constexpr ::System::Xml::XmlDocumentType*& __cordl_internal_get__documentType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocumentType*> const& __cordl_internal_get__documentType() const;

constexpr void __cordl_internal_set__documentType(::System::Xml::XmlDocumentType*  value) ;

/// @brief Method .ctor, addr 0x3eb298c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlDocumentType*  documentType) ;

/// @brief Method get_InternalSubset, addr 0x3eb2fa8, size 0x1c, virtual true, abstract: false, final true
inline ::StringW get_InternalSubset() ;

/// @brief Method get_LocalName, addr 0x3eb2fc4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x3eb2f50, size 0x20, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_Public, addr 0x3eb2f8c, size 0x1c, virtual true, abstract: false, final true
inline ::StringW get_Public() ;

/// @brief Method get_System, addr 0x3eb2f70, size 0x1c, virtual true, abstract: false, final true
inline ::StringW get_System() ;

/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr ::Newtonsoft::Json::Converters::IXmlDocumentType* i___Newtonsoft__Json__Converters__IXmlDocumentType() noexcept;

/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDocumentTypeWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDocumentTypeWrapper(XmlDocumentTypeWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDocumentTypeWrapper(XmlDocumentTypeWrapper const& ) = delete;

/// @brief Field _documentType, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlDocumentType*  ____documentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper, ____documentType) == 0x28, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
