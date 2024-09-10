#pragma once
// IWYU pragma private; include "System/Configuration/IgnoreSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IgnoreSection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Configuration {
class IgnoreSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::IgnoreSection);
// Type: System.Configuration::IgnoreSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::IgnoreSection*
class CORDL_TYPE IgnoreSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

/// @brief Method DeserializeSection, addr 0x3ff9728, size 0x38, virtual true, abstract: false, final false
inline void DeserializeSection(::System::Xml::XmlReader*  xmlReader) ;

/// @brief Method IsModified, addr 0x3ff9760, size 0x38, virtual true, abstract: false, final false
inline bool IsModified() ;

static inline ::System::Configuration::IgnoreSection* New_ctor() ;

/// @brief Method Reset, addr 0x3ff9798, size 0x38, virtual true, abstract: false, final false
inline void Reset(::System::Configuration::ConfigurationElement*  parentSection) ;

/// @brief Method ResetModified, addr 0x3ff97d0, size 0x38, virtual true, abstract: false, final false
inline void ResetModified() ;

/// @brief Method SerializeSection, addr 0x3ff9808, size 0x38, virtual true, abstract: false, final false
inline ::StringW SerializeSection(::System::Configuration::ConfigurationElement*  parentSection, ::StringW  name, ::System::Configuration::ConfigurationSaveMode  saveMode) ;

/// @brief Method .ctor, addr 0x3ff96b8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0x3ff96f0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IgnoreSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IgnoreSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoreSection(IgnoreSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoreSection(IgnoreSection const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::IgnoreSection, 0x10>, "Size mismatch!");

} // namespace end def System::Configuration
NEED_NO_BOX(::System::Configuration::IgnoreSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IgnoreSection*, "System.Configuration", "IgnoreSection");
