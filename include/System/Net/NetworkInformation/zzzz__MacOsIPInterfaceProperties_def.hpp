#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MacOsIPInterfaceProperties)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class MacOsNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MacOsIPInterfaceProperties);
// Type: System.Net.NetworkInformation::MacOsIPInterfaceProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::MacOsIPInterfaceProperties*
class CORDL_TYPE MacOsIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
  // Declarations
  __declspec(property(get = get_GatewayAddresses))::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* GatewayAddresses;

  static inline ::System::Net::NetworkInformation::MacOsIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                                        ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method ParseRouteInfo_icall, addr 0x2f24ba8, size 0x4, virtual false, abstract: false, final false
  static inline bool ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> gw_addr_list);

  /// @brief Method .ctor, addr 0x2f24b38, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method get_GatewayAddresses, addr 0x2f24bac, size 0x22c, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsIPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacOsIPInterfaceProperties(MacOsIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacOsIPInterfaceProperties(MacOsIPInterfaceProperties const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsIPInterfaceProperties, 0x20>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsIPInterfaceProperties*, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
