#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class SignedDataParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataParser);
// Type: Org.BouncyCastle.Cms::CmsSignedDataParser
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsSignedDataParser*
class CORDL_TYPE CmsSignedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
 __declspec(property(get=get_DigestOids)) ::Org::BouncyCastle::Utilities::Collections::ISet*  DigestOids;

/// @brief Field Helper, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Helper, put=setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsSignedHelper*  Helper;

 __declspec(property(get=get_SignedContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  SignedContentType;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _attributeStore, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeStore, put=__cordl_internal_set__attributeStore)) ::Org::BouncyCastle::X509::Store::IX509Store*  _attributeStore;

/// @brief Field _certSet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__certSet, put=__cordl_internal_set__certSet)) ::Org::BouncyCastle::Asn1::Asn1Set*  _certSet;

/// @brief Field _certificateStore, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__certificateStore, put=__cordl_internal_set__certificateStore)) ::Org::BouncyCastle::X509::Store::IX509Store*  _certificateStore;

/// @brief Field _crlSet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__crlSet, put=__cordl_internal_set__crlSet)) ::Org::BouncyCastle::Asn1::Asn1Set*  _crlSet;

/// @brief Field _crlStore, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__crlStore, put=__cordl_internal_set__crlStore)) ::Org::BouncyCastle::X509::Store::IX509Store*  _crlStore;

/// @brief Field _digestOids, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__digestOids, put=__cordl_internal_set__digestOids)) ::Org::BouncyCastle::Utilities::Collections::ISet*  _digestOids;

/// @brief Field _digests, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__digests, put=__cordl_internal_set__digests)) ::System::Collections::IDictionary*  _digests;

/// @brief Field _isCertCrlParsed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCertCrlParsed, put=__cordl_internal_set__isCertCrlParsed)) bool  _isCertCrlParsed;

/// @brief Field _signedContent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__signedContent, put=__cordl_internal_set__signedContent)) ::Org::BouncyCastle::Cms::CmsTypedStream*  _signedContent;

/// @brief Field _signedContentType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__signedContentType, put=__cordl_internal_set__signedContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  _signedContentType;

/// @brief Field _signedData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__signedData, put=__cordl_internal_set__signedData)) ::Org::BouncyCastle::Asn1::Cms::SignedDataParser*  _signedData;

/// @brief Field _signerInfoStore, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__signerInfoStore, put=__cordl_internal_set__signerInfoStore)) ::Org::BouncyCastle::Cms::SignerInformationStore*  _signerInfoStore;

/// @brief Method GetAsn1Set, addr 0x2618090, size 0xb0, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser*  asn1SetParser) ;

/// @brief Method GetAttributeCertificates, addr 0x2617ef8, size 0x88, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::StringW  type) ;

/// @brief Method GetCertificates, addr 0x2617f80, size 0x88, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW  type) ;

/// @brief Method GetCrls, addr 0x2618008, size 0x88, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::StringW  type) ;

/// @brief Method GetSignedContent, addr 0x2618148, size 0x44c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetSignedContent() ;

/// @brief Method GetSignerInfos, addr 0x2617408, size 0x97c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos() ;

static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::System::IO::Stream*  sigData) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::System::IO::Stream*  sigData) ;

/// @brief Method PopulateCertCrlSets, addr 0x2617d84, size 0x174, virtual false, abstract: false, final false
inline void PopulateCertCrlSets() ;

/// @brief Method ReplaceCertificatesAndCrls, addr 0x2618804, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::IO::Stream* ReplaceCertificatesAndCrls(::System::IO::Stream*  original, ::Org::BouncyCastle::X509::Store::IX509Store*  x509Certs, ::Org::BouncyCastle::X509::Store::IX509Store*  x509Crls, ::Org::BouncyCastle::X509::Store::IX509Store*  x509AttrCerts, ::System::IO::Stream*  outStr) ;

/// @brief Method ReplaceSigners, addr 0x2618594, size 0x19c, virtual false, abstract: false, final false
static inline ::System::IO::Stream* ReplaceSigners(::System::IO::Stream*  original, ::Org::BouncyCastle::Cms::SignerInformationStore*  signerInformationStore, ::System::IO::Stream*  outStr) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get__attributeStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __cordl_internal_get__attributeStore() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get__certSet() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get__certSet() const;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get__certificateStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __cordl_internal_get__certificateStore() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get__crlSet() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get__crlSet() const;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get__crlStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __cordl_internal_get__crlStore() const;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get__digestOids() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get__digestOids() const;

constexpr ::System::Collections::IDictionary*& __cordl_internal_get__digests() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__digests() const;

constexpr bool const& __cordl_internal_get__isCertCrlParsed() const;

constexpr bool& __cordl_internal_get__isCertCrlParsed() ;

constexpr ::Org::BouncyCastle::Cms::CmsTypedStream*& __cordl_internal_get__signedContent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsTypedStream*> const& __cordl_internal_get__signedContent() const;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__signedContentType() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get__signedContentType() const;

constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser*& __cordl_internal_get__signedData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*> const& __cordl_internal_get__signedData() const;

constexpr ::Org::BouncyCastle::Cms::SignerInformationStore*& __cordl_internal_get__signerInfoStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerInformationStore*> const& __cordl_internal_get__signerInfoStore() const;

constexpr void __cordl_internal_set__attributeStore(::Org::BouncyCastle::X509::Store::IX509Store*  value) ;

constexpr void __cordl_internal_set__certSet(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr void __cordl_internal_set__certificateStore(::Org::BouncyCastle::X509::Store::IX509Store*  value) ;

constexpr void __cordl_internal_set__crlSet(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr void __cordl_internal_set__crlStore(::Org::BouncyCastle::X509::Store::IX509Store*  value) ;

constexpr void __cordl_internal_set__digestOids(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

constexpr void __cordl_internal_set__digests(::System::Collections::IDictionary*  value) ;

constexpr void __cordl_internal_set__isCertCrlParsed(bool  value) ;

constexpr void __cordl_internal_set__signedContent(::Org::BouncyCastle::Cms::CmsTypedStream*  value) ;

constexpr void __cordl_internal_set__signedContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr void __cordl_internal_set__signedData(::Org::BouncyCastle::Asn1::Cms::SignedDataParser*  value) ;

constexpr void __cordl_internal_set__signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore*  value) ;

/// @brief Method .ctor, addr 0x2616abc, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock) ;

/// @brief Method .ctor, addr 0x2616b30, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  sigData) ;

/// @brief Method .ctor, addr 0x2616b3c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::ArrayW<uint8_t,::Array<uint8_t>*>  sigBlock) ;

/// @brief Method .ctor, addr 0x2616bb4, size 0x760, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream*  signedContent, ::System::IO::Stream*  sigData) ;

static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper() ;

/// @brief Method get_DigestOids, addr 0x26173a8, size 0x60, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_DigestOids() ;

/// @brief Method get_SignedContentType, addr 0x2618140, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType() ;

/// @brief Method get_Version, addr 0x2617384, size 0x24, virtual false, abstract: false, final false
inline int32_t get_Version() ;

static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CmsSignedDataParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsSignedDataParser(CmsSignedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsSignedDataParser(CmsSignedDataParser const& ) = delete;

/// @brief Field _signedData, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Cms::SignedDataParser*  ____signedData;

/// @brief Field _signedContentType, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  ____signedContentType;

/// @brief Field _signedContent, offset: 0x30, size: 0x8, def value: None
 ::Org::BouncyCastle::Cms::CmsTypedStream*  ____signedContent;

/// @brief Field _digests, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::IDictionary*  ____digests;

/// @brief Field _digestOids, offset: 0x40, size: 0x8, def value: None
 ::Org::BouncyCastle::Utilities::Collections::ISet*  ____digestOids;

/// @brief Field _signerInfoStore, offset: 0x48, size: 0x8, def value: None
 ::Org::BouncyCastle::Cms::SignerInformationStore*  ____signerInfoStore;

/// @brief Field _certSet, offset: 0x50, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Set*  ____certSet;

/// @brief Field _crlSet, offset: 0x58, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Set*  ____crlSet;

/// @brief Field _isCertCrlParsed, offset: 0x60, size: 0x1, def value: None
 bool  ____isCertCrlParsed;

/// @brief Field _attributeStore, offset: 0x68, size: 0x8, def value: None
 ::Org::BouncyCastle::X509::Store::IX509Store*  ____attributeStore;

/// @brief Field _certificateStore, offset: 0x70, size: 0x8, def value: None
 ::Org::BouncyCastle::X509::Store::IX509Store*  ____certificateStore;

/// @brief Field _crlStore, offset: 0x78, size: 0x8, def value: None
 ::Org::BouncyCastle::X509::Store::IX509Store*  ____crlStore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataParser, 0x80>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedContentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedContent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____digests) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____digestOids) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signerInfoStore) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____certSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____crlSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____isCertCrlParsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____attributeStore) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____certificateStore) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____crlStore) == 0x78, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataParser*, "Org.BouncyCastle.Cms", "CmsSignedDataParser");
