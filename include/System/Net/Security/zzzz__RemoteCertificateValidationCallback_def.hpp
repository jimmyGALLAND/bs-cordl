#pragma once
// IWYU pragma private; include "System/Net/Security/RemoteCertificateValidationCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteCertificateValidationCallback)
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::RemoteCertificateValidationCallback);
// Type: System.Net.Security::RemoteCertificateValidationCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// CS Name: ::System.Net.Security::RemoteCertificateValidationCallback*
class CORDL_TYPE RemoteCertificateValidationCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x43743dc, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

static inline ::System::Net::Security::RemoteCertificateValidationCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x43742d8, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteCertificateValidationCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteCertificateValidationCallback(RemoteCertificateValidationCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteCertificateValidationCallback(RemoteCertificateValidationCallback const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::RemoteCertificateValidationCallback, 0x80>, "Size mismatch!");

} // namespace end def System::Net::Security
NEED_NO_BOX(::System::Net::Security::RemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::RemoteCertificateValidationCallback*, "System.Net.Security", "RemoteCertificateValidationCallback");
