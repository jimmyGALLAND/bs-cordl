#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/IPAddressInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IPAddressInformation)
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPAddressInformation);
// Type: System.Net.NetworkInformation::IPAddressInformation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::IPAddressInformation*
class CORDL_TYPE IPAddressInformation : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Address)) ::System::Net::IPAddress*  Address;

static inline ::System::Net::NetworkInformation::IPAddressInformation* New_ctor() ;

/// @brief Method .ctor, addr 0x43577f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Address, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Net::IPAddress* get_Address() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IPAddressInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IPAddressInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPAddressInformation(IPAddressInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPAddressInformation(IPAddressInformation const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPAddressInformation, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPAddressInformation*, "System.Net.NetworkInformation", "IPAddressInformation");
