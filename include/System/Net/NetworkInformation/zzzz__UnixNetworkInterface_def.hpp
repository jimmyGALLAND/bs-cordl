#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnixNetworkInterface)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterface);
// Type: System.Net.NetworkInformation::UnixNetworkInterface
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9258)), TypeDefinitionIndex(TypeDefinitionIndex(9252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9292))
// CS Name: ::System.Net.NetworkInformation::UnixNetworkInterface*
class CORDL_TYPE UnixNetworkInterface : public ::System::Net::NetworkInformation::NetworkInterface {
public:
  // Declarations
  /// @brief Field ipproperties, offset 0x10, size 0x8
  __declspec(property(get = __get_ipproperties, put = __set_ipproperties))::System::Net::NetworkInformation::IPInterfaceProperties* ipproperties;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field addresses, offset 0x20, size 0x8
  __declspec(property(get = __get_addresses, put = __set_addresses))::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses;

  /// @brief Field macAddress, offset 0x28, size 0x8
  __declspec(property(get = __get_macAddress, put = __set_macAddress))::ArrayW<uint8_t, ::Array<uint8_t>*> macAddress;

  /// @brief Field type, offset 0x30, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::System::Net::NetworkInformation::NetworkInterfaceType type;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NetworkInterfaceType))::System::Net::NetworkInformation::NetworkInterfaceType NetworkInterfaceType;

  constexpr ::System::Net::NetworkInformation::IPInterfaceProperties*& __get_ipproperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::NetworkInformation::IPInterfaceProperties*> const& __get_ipproperties() const;

  constexpr void __set_ipproperties(::System::Net::NetworkInformation::IPInterfaceProperties* value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& __get_addresses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*> const& __get_addresses() const;

  constexpr void __set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macAddress();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macAddress() const;

  constexpr void __set_macAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Net::NetworkInformation::NetworkInterfaceType& __get_type();

  constexpr ::System::Net::NetworkInformation::NetworkInterfaceType const& __get_type() const;

  constexpr void __set_type(::System::Net::NetworkInformation::NetworkInterfaceType value);

  static inline ::System::Net::NetworkInformation::UnixNetworkInterface* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x29ed864 size 0x90 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method AddAddress addr 0x29ed7a0 size 0xa8 virtual false final false
  inline void AddAddress(::System::Net::IPAddress* address);

  /// @brief Method SetLinkLayerInfo addr 0x29ed848 size 0xc virtual false final false
  inline void SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> macAddress, ::System::Net::NetworkInformation::NetworkInterfaceType type);

  /// @brief Method get_Name addr 0x29f0bcc size 0x8 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_NetworkInterfaceType addr 0x29f0bd4 size 0x8 virtual true final false
  inline ::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNetworkInterface(UnixNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNetworkInterface(UnixNetworkInterface const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNetworkInterface();

public:
  /// @brief Field ipproperties, offset: 0x10, size: 0x8, def value: None
  ::System::Net::NetworkInformation::IPInterfaceProperties* ___ipproperties;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field addresses, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* ___addresses;

  /// @brief Field macAddress, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macAddress;

  /// @brief Field type, offset: 0x30, size: 0x4, def value: None
  ::System::Net::NetworkInformation::NetworkInterfaceType ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterface, 0x38>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterface*, "System.Net.NetworkInformation", "UnixNetworkInterface");
