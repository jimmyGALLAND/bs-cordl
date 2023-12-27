#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConnectionFailedReasonMethods)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectionFailedReasonMethods);
// Type: ::ConnectionFailedReasonMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4485))
// CS Name: ::ConnectionFailedReasonMethods*
class CORDL_TYPE ConnectionFailedReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method LocalizedKey addr 0x2355918 size 0xb4 virtual false final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method ErrorCode addr 0x23559cc size 0x80 virtual false final false
  static inline ::StringW ErrorCode(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionFailedReasonMethods(ConnectionFailedReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionFailedReasonMethods(ConnectionFailedReasonMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionFailedReasonMethods();

public:
  /// @brief Field kConnectionFailedUnknown offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedUnknown{ u"SERVER_CONNECTION_FAILED_TRY_AGAIN" };

  /// @brief Field kConnectionFailedConnectionCanceled offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedConnectionCanceled{ u"SERVER_CONNECTION_FAILED_TRY_AGAIN" };

  /// @brief Field kConnectionFailedServerUnreachable offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedServerUnreachable{ u"SERVER_CONNECTION_FAILED_TRY_AGAIN" };

  /// @brief Field kConnectionFailedServerDoesNotExist offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedServerDoesNotExist{ u"CONNECTION_FAILED_SERVER_DOES_NOT_EXIST" };

  /// @brief Field kConnectionFailedServerAtCapacity offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedServerAtCapacity{ u"CONNECTION_FAILED_SERVER_AT_CAPACITY" };

  /// @brief Field kConnectionFailedVersionMismatch offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedVersionMismatch{ u"CONNECTION_FAILED_VERSION_MISMATCH" };

  /// @brief Field kConnectionFailedInvalidPassword offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedInvalidPassword{ u"CONNECTION_FAILED_INVALID_PASSWORD" };

  /// @brief Field kConnectionFailedMasterServerUnreachable offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedMasterServerUnreachable{ u"SERVER_CONNECTION_FAILED_TRY_AGAIN" };

  /// @brief Field kConnectionFailedMasterServerNotAuthenticated offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedMasterServerNotAuthenticated{ u"SERVER_CONNECTION_FAILED_TRY_AGAIN" };

  /// @brief Field kConnectionFailedNetworkNotConnected offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedNetworkNotConnected{ u"CONNECTION_FAILED_NETWORK_NOT_CONNECTED" };

  /// @brief Field kConnectionFailedMasterServerCertificateValidationFailed offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedMasterServerCertificateValidationFailed{ u"CONNECTION_FAILED_NETWORK_NOT_CONNECTED" };

  /// @brief Field kConnectionFailedServerIsTerminating offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedServerIsTerminating{ u"CONNECTION_FAILED_SERVER_DOES_NOT_EXIST" };

  /// @brief Field kConnectionFailedTimeout offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedTimeout{ u"CONNECTION_FAILED_TIMEOUT" };

  /// @brief Field kConnectionFailedFailedToFindMatch offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedFailedToFindMatch{ u"CONNECTION_FAILED_FAILED_TO_FIND_MATCH" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionFailedReasonMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionFailedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedReasonMethods*, "", "ConnectionFailedReasonMethods");
