#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsServer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1173))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsServer*
class CORDL_TYPE AbstractTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
  // Declarations
  /// @brief Field mCipherFactory, offset 0x18, size 0x8
  __declspec(property(get = __get_mCipherFactory, put = __set_mCipherFactory))::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __get_mContext, put = __set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsServerContext* mContext;

  /// @brief Field mClientVersion, offset 0x28, size 0x8
  __declspec(property(get = __get_mClientVersion, put = __set_mClientVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mClientVersion;

  /// @brief Field mOfferedCipherSuites, offset 0x30, size 0x8
  __declspec(property(get = __get_mOfferedCipherSuites, put = __set_mOfferedCipherSuites))::ArrayW<int32_t, ::Array<int32_t>*> mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset 0x38, size 0x8
  __declspec(property(get = __get_mOfferedCompressionMethods, put = __set_mOfferedCompressionMethods))::ArrayW<uint8_t, ::Array<uint8_t>*> mOfferedCompressionMethods;

  /// @brief Field mClientExtensions, offset 0x40, size 0x8
  __declspec(property(get = __get_mClientExtensions, put = __set_mClientExtensions))::System::Collections::IDictionary* mClientExtensions;

  /// @brief Field mEncryptThenMacOffered, offset 0x48, size 0x1
  __declspec(property(get = __get_mEncryptThenMacOffered, put = __set_mEncryptThenMacOffered)) bool mEncryptThenMacOffered;

  /// @brief Field mMaxFragmentLengthOffered, offset 0x4a, size 0x2
  __declspec(property(get = __get_mMaxFragmentLengthOffered, put = __set_mMaxFragmentLengthOffered)) int16_t mMaxFragmentLengthOffered;

  /// @brief Field mTruncatedHMacOffered, offset 0x4c, size 0x1
  __declspec(property(get = __get_mTruncatedHMacOffered, put = __set_mTruncatedHMacOffered)) bool mTruncatedHMacOffered;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x50, size 0x8
  __declspec(property(get = __get_mSupportedSignatureAlgorithms, put = __set_mSupportedSignatureAlgorithms))::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Field mEccCipherSuitesOffered, offset 0x58, size 0x1
  __declspec(property(get = __get_mEccCipherSuitesOffered, put = __set_mEccCipherSuitesOffered)) bool mEccCipherSuitesOffered;

  /// @brief Field mNamedCurves, offset 0x60, size 0x8
  __declspec(property(get = __get_mNamedCurves, put = __set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mClientECPointFormats, offset 0x68, size 0x8
  __declspec(property(get = __get_mClientECPointFormats, put = __set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset 0x70, size 0x8
  __declspec(property(get = __get_mServerECPointFormats, put = __set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mServerVersion, offset 0x78, size 0x8
  __declspec(property(get = __get_mServerVersion, put = __set_mServerVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mServerVersion;

  /// @brief Field mSelectedCipherSuite, offset 0x80, size 0x4
  __declspec(property(get = __get_mSelectedCipherSuite, put = __set_mSelectedCipherSuite)) int32_t mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset 0x84, size 0x1
  __declspec(property(get = __get_mSelectedCompressionMethod, put = __set_mSelectedCompressionMethod)) uint8_t mSelectedCompressionMethod;

  /// @brief Field mServerExtensions, offset 0x88, size 0x8
  __declspec(property(get = __get_mServerExtensions, put = __set_mServerExtensions))::System::Collections::IDictionary* mServerExtensions;

  __declspec(property(get = get_AllowEncryptThenMac)) bool AllowEncryptThenMac;

  __declspec(property(get = get_AllowTruncatedHMac)) bool AllowTruncatedHMac;

  __declspec(property(get = get_MaximumVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MaximumVersion;

  __declspec(property(get = get_MinimumVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MinimumVersion;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsServer*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*& __get_mCipherFactory();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*> const& __get_mCipherFactory() const;

  constexpr void __set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*& __get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*> const& __get_mContext() const;

  constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContext* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __get_mClientVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __get_mClientVersion() const;

  constexpr void __set_mClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mOfferedCipherSuites();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mOfferedCipherSuites() const;

  constexpr void __set_mOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mOfferedCompressionMethods();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mOfferedCompressionMethods() const;

  constexpr void __set_mOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::IDictionary*& __get_mClientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_mClientExtensions() const;

  constexpr void __set_mClientExtensions(::System::Collections::IDictionary* value);

  constexpr bool& __get_mEncryptThenMacOffered();

  constexpr bool const& __get_mEncryptThenMacOffered() const;

  constexpr void __set_mEncryptThenMacOffered(bool value);

  constexpr int16_t& __get_mMaxFragmentLengthOffered();

  constexpr int16_t const& __get_mMaxFragmentLengthOffered() const;

  constexpr void __set_mMaxFragmentLengthOffered(int16_t value);

  constexpr bool& __get_mTruncatedHMacOffered();

  constexpr bool const& __get_mTruncatedHMacOffered() const;

  constexpr void __set_mTruncatedHMacOffered(bool value);

  constexpr ::System::Collections::IList*& __get_mSupportedSignatureAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_mSupportedSignatureAlgorithms() const;

  constexpr void __set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  constexpr bool& __get_mEccCipherSuitesOffered();

  constexpr bool const& __get_mEccCipherSuitesOffered() const;

  constexpr void __set_mEccCipherSuitesOffered(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mNamedCurves() const;

  constexpr void __set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mClientECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mClientECPointFormats() const;

  constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mServerECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mServerECPointFormats() const;

  constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __get_mServerVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __get_mServerVersion() const;

  constexpr void __set_mServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr int32_t& __get_mSelectedCipherSuite();

  constexpr int32_t const& __get_mSelectedCipherSuite() const;

  constexpr void __set_mSelectedCipherSuite(int32_t value);

  constexpr uint8_t& __get_mSelectedCompressionMethod();

  constexpr uint8_t const& __get_mSelectedCompressionMethod() const;

  constexpr void __set_mSelectedCompressionMethod(uint8_t value);

  constexpr ::System::Collections::IDictionary*& __get_mServerExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_mServerExtensions() const;

  constexpr void __set_mServerExtensions(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer* New_ctor();

  /// @brief Method .ctor addr 0xf5bb54 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method .ctor addr 0xf5bbc0 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method get_AllowEncryptThenMac addr 0xf5bbe8 size 0x8 virtual true final false
  inline bool get_AllowEncryptThenMac();

  /// @brief Method get_AllowTruncatedHMac addr 0xf5bbf0 size 0x8 virtual true final false
  inline bool get_AllowTruncatedHMac();

  /// @brief Method CheckServerExtensions addr 0xf5bbf8 size 0x20 virtual true final false
  inline ::System::Collections::IDictionary* CheckServerExtensions();

  /// @brief Method GetCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCompressionMethods addr 0xf5bc18 size 0x44 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method get_MaximumVersion addr 0xf5bc5c size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MaximumVersion();

  /// @brief Method get_MinimumVersion addr 0xf5bcb4 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();

  /// @brief Method SupportsClientEccCapabilities addr 0xf5bd0c size 0xf4 virtual true final false
  inline bool SupportsClientEccCapabilities(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  /// @brief Method Init addr 0xf5be00 size 0x8 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsServerContext* context);

  /// @brief Method NotifyClientVersion addr 0xf5be08 size 0x8 virtual true final false
  inline void NotifyClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method NotifyFallback addr 0xf5be10 size 0x7c virtual true final false
  inline void NotifyFallback(bool isFallback);

  /// @brief Method NotifyOfferedCipherSuites addr 0xf5be8c size 0x74 virtual true final false
  inline void NotifyOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites);

  /// @brief Method NotifyOfferedCompressionMethods addr 0xf5bf00 size 0x8 virtual true final false
  inline void NotifyOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> offeredCompressionMethods);

  /// @brief Method ProcessClientExtensions addr 0xf5bf08 size 0x168 virtual true final false
  inline void ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions);

  /// @brief Method GetServerVersion addr 0xf5c070 size 0xe0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetServerVersion();

  /// @brief Method GetSelectedCipherSuite addr 0xf5c150 size 0x200 virtual true final false
  inline int32_t GetSelectedCipherSuite();

  /// @brief Method GetSelectedCompressionMethod addr 0xf5c350 size 0x118 virtual true final false
  inline uint8_t GetSelectedCompressionMethod();

  /// @brief Method GetServerExtensions addr 0xf5c468 size 0x20c virtual true final false
  inline ::System::Collections::IDictionary* GetServerExtensions();

  /// @brief Method GetServerSupplementalData addr 0xf5c674 size 0x8 virtual true final false
  inline ::System::Collections::IList* GetServerSupplementalData();

  /// @brief Method GetCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetCertificateStatus addr 0xf5c67c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* GetCertificateStatus();

  /// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetCertificateRequest addr 0xf5c684 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* GetCertificateRequest();

  /// @brief Method ProcessClientSupplementalData addr 0xf5c68c size 0x4c virtual true final false
  inline void ProcessClientSupplementalData(::System::Collections::IList* clientSupplementalData);

  /// @brief Method NotifyClientCertificate addr 0xf5c6d8 size 0x44 virtual true final false
  inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method GetCompression addr 0xf5c71c size 0xa8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCipher addr 0xf5c7c4 size 0x104 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method GetNewSessionTicket addr 0xf5c8c8 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* GetNewSessionTicket();

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsServer(AbstractTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsServer(AbstractTlsServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsServer();

public:
  /// @brief Field mCipherFactory, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* ___mCipherFactory;

  /// @brief Field mContext, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* ___mContext;

  /// @brief Field mClientVersion, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mClientVersion;

  /// @brief Field mOfferedCipherSuites, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mOfferedCompressionMethods;

  /// @brief Field mClientExtensions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mClientExtensions;

  /// @brief Field mEncryptThenMacOffered, offset: 0x48, size: 0x1, def value: None
  bool ___mEncryptThenMacOffered;

  /// @brief Field mMaxFragmentLengthOffered, offset: 0x4a, size: 0x2, def value: None
  int16_t ___mMaxFragmentLengthOffered;

  /// @brief Field mTruncatedHMacOffered, offset: 0x4c, size: 0x1, def value: None
  bool ___mTruncatedHMacOffered;

  /// @brief Field mSupportedSignatureAlgorithms, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IList* ___mSupportedSignatureAlgorithms;

  /// @brief Field mEccCipherSuitesOffered, offset: 0x58, size: 0x1, def value: None
  bool ___mEccCipherSuitesOffered;

  /// @brief Field mNamedCurves, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mNamedCurves;

  /// @brief Field mClientECPointFormats, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mServerECPointFormats;

  /// @brief Field mServerVersion, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mServerVersion;

  /// @brief Field mSelectedCipherSuite, offset: 0x80, size: 0x4, def value: None
  int32_t ___mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset: 0x84, size: 0x1, def value: None
  uint8_t ___mSelectedCompressionMethod;

  /// @brief Field mServerExtensions, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mServerExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsServer");
