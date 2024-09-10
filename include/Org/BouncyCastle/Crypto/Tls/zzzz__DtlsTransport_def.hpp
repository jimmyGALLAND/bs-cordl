#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsTransport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsTransport)
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsTransport);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsTransport
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsTransport*
class CORDL_TYPE DtlsTransport : public ::System::Object {
public:
// Declarations
/// @brief Field mRecordLayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mRecordLayer, put=__cordl_internal_set_mRecordLayer)) ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  mRecordLayer;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

/// @brief Method Close, addr 0x23ca330, size 0x24, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetReceiveLimit, addr 0x23c9c30, size 0x24, virtual true, abstract: false, final false
inline int32_t GetReceiveLimit() ;

/// @brief Method GetSendLimit, addr 0x23c9c54, size 0x24, virtual true, abstract: false, final false
inline int32_t GetSendLimit() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer) ;

/// @brief Method Receive, addr 0x23c9c78, size 0x384, virtual true, abstract: false, final false
inline int32_t Receive(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, int32_t  waitMillis) ;

/// @brief Method Send, addr 0x23c9ffc, size 0x334, virtual true, abstract: false, final false
inline void Send(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*& __cordl_internal_get_mRecordLayer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*> const& __cordl_internal_get_mRecordLayer() const;

constexpr void __cordl_internal_set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  value) ;

/// @brief Method .ctor, addr 0x23c9c08, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer) ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* i___Org__BouncyCastle__Crypto__Tls__DatagramTransport() noexcept;

/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtlsTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtlsTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsTransport(DtlsTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsTransport(DtlsTransport const& ) = delete;

/// @brief Field mRecordLayer, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  ___mRecordLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsTransport, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsTransport, ___mRecordLayer) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsTransport);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, "Org.BouncyCastle.Crypto.Tls", "DtlsTransport");
