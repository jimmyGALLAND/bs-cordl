#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(DefaultProxySection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
class ConfigurationElement;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::DefaultProxySection);
// Type: System.Net.Configuration::DefaultProxySection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9570))
// CS Name: ::System.Net.Configuration::DefaultProxySection*
class CORDL_TYPE DefaultProxySection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::DefaultProxySection* New_ctor();

  /// @brief Method .ctor addr 0x2944d54 size 0x38 virtual false final false
  inline void _ctor();

  /// @brief Method get_Properties addr 0x2944d8c size 0x38 virtual true final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method Reset addr 0x2944dc4 size 0x38 virtual true final false
  inline void Reset(::System::Configuration::ConfigurationElement* parentElement);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultProxySection(DefaultProxySection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultProxySection(DefaultProxySection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultProxySection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::DefaultProxySection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySection*, "System.Net.Configuration", "DefaultProxySection");
