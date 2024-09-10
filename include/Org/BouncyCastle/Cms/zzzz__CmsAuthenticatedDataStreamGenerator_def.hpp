#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedDataStreamGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedDataStreamGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream);
// Type: ::CmsAuthenticatedDataOutputStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataOutputStream*
class CORDL_TYPE __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief Field authGen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_authGen, put=__cordl_internal_set_authGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  authGen;

/// @brief Field cGen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cGen, put=__cordl_internal_set_cGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  cGen;

/// @brief Field eiGen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_eiGen, put=__cordl_internal_set_eiGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  eiGen;

/// @brief Field mac, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mac, put=__cordl_internal_set_mac)) ::Org::BouncyCastle::Crypto::IMac*  mac;

/// @brief Field macStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_macStream, put=__cordl_internal_set_macStream)) ::System::IO::Stream*  macStream;

/// @brief Method Close, addr 0x2606628, size 0x134, virtual true, abstract: false, final false
inline void Close() ;

static inline ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream* New_ctor(::System::IO::Stream*  macStream, ::Org::BouncyCastle::Crypto::IMac*  mac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  authGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  eiGen) ;

/// @brief Method Write, addr 0x2606604, size 0x24, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  off, int32_t  len) ;

/// @brief Method WriteByte, addr 0x26065e0, size 0x24, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  b) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get_authGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __cordl_internal_get_authGen() const;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get_cGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __cordl_internal_get_cGen() const;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get_eiGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __cordl_internal_get_eiGen() const;

constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_mac() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_macStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_macStream() const;

constexpr void __cordl_internal_set_authGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr void __cordl_internal_set_cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr void __cordl_internal_set_eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac*  value) ;

constexpr void __cordl_internal_set_macStream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x26063dc, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  macStream, ::Org::BouncyCastle::Crypto::IMac*  mac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  authGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  eiGen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream const& ) = delete;

/// @brief Field macStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ___macStream;

/// @brief Field mac, offset: 0x38, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IMac*  ___mac;

/// @brief Field cGen, offset: 0x40, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  ___cGen;

/// @brief Field authGen, offset: 0x48, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  ___authGen;

/// @brief Field eiGen, offset: 0x50, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  ___eiGen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___macStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___cGen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___authGen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___eiGen) == 0x50, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataStreamGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedDataStreamGenerator*
class CORDL_TYPE CmsAuthenticatedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
// Declarations
using CmsAuthenticatedDataOutputStream = ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;

/// @brief Field _berEncodeRecipientSet, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__berEncodeRecipientSet, put=__cordl_internal_set__berEncodeRecipientSet)) bool  _berEncodeRecipientSet;

/// @brief Field _bufferSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* New_ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method Open, addr 0x260642c, size 0xd8, virtual false, abstract: false, final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStr, ::StringW  encryptionOid) ;

/// @brief Method Open, addr 0x2606504, size 0xdc, virtual false, abstract: false, final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStr, ::StringW  encryptionOid, int32_t  keySize) ;

/// @brief Method Open, addr 0x2605b90, size 0x84c, virtual false, abstract: false, final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  macAlgId, ::Org::BouncyCastle::Crypto::ICipherParameters*  cipherParameters, ::Org::BouncyCastle::Asn1::Asn1EncodableVector*  recipientInfos) ;

/// @brief Method Open, addr 0x26055ac, size 0x5e4, virtual false, abstract: false, final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStr, ::StringW  macOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*  keyGen) ;

/// @brief Method SetBerEncodeRecipients, addr 0x26055a0, size 0xc, virtual false, abstract: false, final false
inline void SetBerEncodeRecipients(bool  berEncodeRecipientSet) ;

/// @brief Method SetBufferSize, addr 0x2605598, size 0x8, virtual false, abstract: false, final false
inline void SetBufferSize(int32_t  bufferSize) ;

constexpr bool const& __cordl_internal_get__berEncodeRecipientSet() const;

constexpr bool& __cordl_internal_get__berEncodeRecipientSet() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr void __cordl_internal_set__berEncodeRecipientSet(bool  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x2605590, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2605594, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CmsAuthenticatedDataStreamGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator const& ) = delete;

/// @brief Field _bufferSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _berEncodeRecipientSet, offset: 0x2c, size: 0x1, def value: None
 bool  ____berEncodeRecipientSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, ____bufferSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, ____berEncodeRecipientSet) == 0x2c, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataStreamGenerator/CmsAuthenticatedDataOutputStream");
