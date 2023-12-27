#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonUnixIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class CommonUnixIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
// Type: System.Net.NetworkInformation::CommonUnixIPGlobalProperties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9285))
// CS Name: ::System.Net.NetworkInformation::CommonUnixIPGlobalProperties*
class CORDL_TYPE CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
public:
  // Declarations
  __declspec(property(get = get_DomainName))::StringW DomainName;

  /// @brief Method getdomainname addr 0x29f03e0 size 0x8c virtual false final false
  static inline int32_t getdomainname(::ArrayW<uint8_t, ::Array<uint8_t>*> name, int32_t len);

  /// @brief Method get_DomainName addr 0x29f046c size 0x17c virtual true final false
  inline ::StringW get_DomainName();

  static inline ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties* New_ctor();

  /// @brief Method .ctor addr 0x29f05e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonUnixIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonUnixIPGlobalProperties(CommonUnixIPGlobalProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonUnixIPGlobalProperties();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::CommonUnixIPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties*, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
