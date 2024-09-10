#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlBooleanConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlBooleanConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlBooleanConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlBooleanConverter);
// Type: System.Xml.Schema::XmlBooleanConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlBooleanConverter*
class CORDL_TYPE XmlBooleanConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0x42514fc, size 0x334, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x4251830, size 0x58c, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x42511dc, size 0x320, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(bool  value, ::System::Type*  destinationType) ;

/// @brief Method Create, addr 0x4250af0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlBooleanConverter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToBoolean, addr 0x4250b48, size 0xa4, virtual true, abstract: false, final false
inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x4250bec, size 0x2e0, virtual true, abstract: false, final false
inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToString, addr 0x4250f24, size 0x2b8, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0x4250ecc, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString(bool  value) ;

/// @brief Method .ctor, addr 0x4250a88, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlBooleanConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlBooleanConverter(XmlBooleanConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlBooleanConverter(XmlBooleanConverter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlBooleanConverter, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlBooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlBooleanConverter*, "System.Xml.Schema", "XmlBooleanConverter");
