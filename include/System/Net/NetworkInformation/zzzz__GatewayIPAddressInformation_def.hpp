#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GatewayIPAddressInformation)
// Forward declare root types
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::GatewayIPAddressInformation);
// Type: System.Net.NetworkInformation::GatewayIPAddressInformation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9245))
// CS Name: ::System.Net.NetworkInformation::GatewayIPAddressInformation*
class CORDL_TYPE GatewayIPAddressInformation : public ::System::Object {
public:
  // Declarations
  static inline ::System::Net::NetworkInformation::GatewayIPAddressInformation* New_ctor();

  /// @brief Method .ctor addr 0x29eafc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GatewayIPAddressInformation(GatewayIPAddressInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GatewayIPAddressInformation(GatewayIPAddressInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GatewayIPAddressInformation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::GatewayIPAddressInformation, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::GatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::GatewayIPAddressInformation*, "System.Net.NetworkInformation", "GatewayIPAddressInformation");
