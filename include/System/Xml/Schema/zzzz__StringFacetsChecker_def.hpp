#pragma once
// IWYU pragma private; include "System/Xml/Schema/StringFacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class StringFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::StringFacetsChecker);
// Type: System.Xml.Schema::StringFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::StringFacetsChecker*
class CORDL_TYPE StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief Field languagePattern, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_languagePattern, put=setStaticF_languagePattern)) ::System::Text::RegularExpressions::Regex*  languagePattern;

/// @brief Method CheckBuiltInFacets, addr 0x4327c28, size 0x248, virtual false, abstract: false, final false
inline ::System::Exception* CheckBuiltInFacets(::StringW  s, ::System::Xml::Schema::XmlTypeCode  typeCode, bool  verifyUri) ;

/// @brief Method CheckValueFacets, addr 0x4327c20, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::StringW  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x431ad8c, size 0x234, virtual false, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::StringW  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype, bool  verifyUri) ;

/// @brief Method CheckValueFacets, addr 0x4327bc0, size 0x60, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Object*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method MatchEnumeration, addr 0x4327e70, size 0x1dc, virtual false, abstract: false, final false
inline bool MatchEnumeration(::StringW  value, ::System::Collections::ArrayList*  enumeration, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method MatchEnumeration, addr 0x432804c, size 0x5c, virtual true, abstract: false, final false
inline bool MatchEnumeration(::System::Object*  value, ::System::Collections::ArrayList*  enumeration, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

static inline ::System::Xml::Schema::StringFacetsChecker* New_ctor() ;

/// @brief Method .ctor, addr 0x4312f7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_languagePattern() ;

/// @brief Method get_LanguagePattern, addr 0x4327b10, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::Regex* get_LanguagePattern() ;

static inline void setStaticF_languagePattern(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringFacetsChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringFacetsChecker(StringFacetsChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringFacetsChecker(StringFacetsChecker const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::StringFacetsChecker, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::StringFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::StringFacetsChecker*, "System.Xml.Schema", "StringFacetsChecker");
