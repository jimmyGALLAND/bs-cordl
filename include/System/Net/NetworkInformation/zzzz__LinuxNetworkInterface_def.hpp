#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LinuxNetworkInterface)
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxNetworkInterface);
// Type: System.Net.NetworkInformation::LinuxNetworkInterface
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9269))
// CS Name: ::System.Net.NetworkInformation::LinuxNetworkInterface*
class CORDL_TYPE LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
public:
  // Declarations
  /// @brief Field iface_path, offset 0x38, size 0x8
  __declspec(property(get = __get_iface_path, put = __set_iface_path))::StringW iface_path;

  /// @brief Field iface_operstate_path, offset 0x40, size 0x8
  __declspec(property(get = __get_iface_operstate_path, put = __set_iface_operstate_path))::StringW iface_operstate_path;

  /// @brief Field iface_flags_path, offset 0x48, size 0x8
  __declspec(property(get = __get_iface_flags_path, put = __set_iface_flags_path))::StringW iface_flags_path;

  __declspec(property(get = get_IfacePath))::StringW IfacePath;

  __declspec(property(get = get_OperationalStatus))::System::Net::NetworkInformation::OperationalStatus OperationalStatus;

  constexpr ::StringW& __get_iface_path();

  constexpr ::StringW const& __get_iface_path() const;

  constexpr void __set_iface_path(::StringW value);

  constexpr ::StringW& __get_iface_operstate_path();

  constexpr ::StringW const& __get_iface_operstate_path() const;

  constexpr void __set_iface_operstate_path(::StringW value);

  constexpr ::StringW& __get_iface_flags_path();

  constexpr ::StringW const& __get_iface_flags_path() const;

  constexpr void __set_iface_flags_path(::StringW value);

  /// @brief Method get_IfacePath addr 0x29eec88 size 0x8 virtual false final false
  inline ::StringW get_IfacePath();

  static inline ::System::Net::NetworkInformation::LinuxNetworkInterface* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x29eeba8 size 0xd8 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method GetIPProperties addr 0x29eec90 size 0x74 virtual true final false
  inline ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();

  /// @brief Method get_OperationalStatus addr 0x29eed04 size 0x2bc virtual true final false
  inline ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();

  /// @brief Method ReadLine addr 0x29eefc0 size 0x2ec virtual false final false
  static inline ::StringW ReadLine(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinuxNetworkInterface(LinuxNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinuxNetworkInterface(LinuxNetworkInterface const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxNetworkInterface();

public:
  /// @brief Field iface_path, offset: 0x38, size: 0x8, def value: None
  ::StringW ___iface_path;

  /// @brief Field iface_operstate_path, offset: 0x40, size: 0x8, def value: None
  ::StringW ___iface_operstate_path;

  /// @brief Field iface_flags_path, offset: 0x48, size: 0x8, def value: None
  ::StringW ___iface_flags_path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxNetworkInterface, 0x50>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterface*, "System.Net.NetworkInformation", "LinuxNetworkInterface");
