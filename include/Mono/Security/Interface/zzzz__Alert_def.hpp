#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Alert)
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Security::Interface {
struct AlertLevel;
}
// Forward declare root types
namespace Mono::Security::Interface {
class Alert;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::Alert);
// Type: Mono.Security.Interface::Alert
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13773)), TypeDefinitionIndex(TypeDefinitionIndex(13772)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13774))
// CS Name: ::Mono.Security.Interface::Alert*
class CORDL_TYPE Alert : public ::System::Object {
public:
  // Declarations
  /// @brief Field level, offset 0x10, size 0x1
  __declspec(property(get = __get_level, put = __set_level))::Mono::Security::Interface::AlertLevel level;

  /// @brief Field description, offset 0x11, size 0x1
  __declspec(property(get = __get_description, put = __set_description))::Mono::Security::Interface::AlertDescription description;

  __declspec(property(get = get_Level))::Mono::Security::Interface::AlertLevel Level;

  __declspec(property(get = get_Description))::Mono::Security::Interface::AlertDescription Description;

  constexpr ::Mono::Security::Interface::AlertLevel& __get_level();

  constexpr ::Mono::Security::Interface::AlertLevel const& __get_level() const;

  constexpr void __set_level(::Mono::Security::Interface::AlertLevel value);

  constexpr ::Mono::Security::Interface::AlertDescription& __get_description();

  constexpr ::Mono::Security::Interface::AlertDescription const& __get_description() const;

  constexpr void __set_description(::Mono::Security::Interface::AlertDescription value);

  /// @brief Method get_Level addr 0x24028f0 size 0x8 virtual false final false
  inline ::Mono::Security::Interface::AlertLevel get_Level();

  /// @brief Method get_Description addr 0x24028f8 size 0x8 virtual false final false
  inline ::Mono::Security::Interface::AlertDescription get_Description();

  static inline ::Mono::Security::Interface::Alert* New_ctor(::Mono::Security::Interface::AlertDescription description);

  /// @brief Method .ctor addr 0x2402900 size 0x6c virtual false final false
  inline void _ctor(::Mono::Security::Interface::AlertDescription description);

  /// @brief Method inferAlertLevel addr 0x240296c size 0x40 virtual false final false
  inline void inferAlertLevel();

  /// @brief Method ToString addr 0x24029ac size 0xbc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Alert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Alert(Alert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Alert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Alert(Alert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Alert();

public:
  /// @brief Field level, offset: 0x10, size: 0x1, def value: None
  ::Mono::Security::Interface::AlertLevel ___level;

  /// @brief Field description, offset: 0x11, size: 0x1, def value: None
  ::Mono::Security::Interface::AlertDescription ___description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::Alert, 0x18>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::Alert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::Alert*, "Mono.Security.Interface", "Alert");
