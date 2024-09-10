#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509SubjectKeyIdentifierExtension)
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509SubjectKeyIdentifierHashAlgorithm;
}
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509SubjectKeyIdentifierExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
// Type: System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierExtension
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierExtension*
class CORDL_TYPE X509SubjectKeyIdentifierExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
 __declspec(property(get=get_SubjectKeyIdentifier)) ::StringW  SubjectKeyIdentifier;

/// @brief Field _ski, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ski, put=__cordl_internal_set__ski)) ::StringW  _ski;

/// @brief Field _status, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__status, put=__cordl_internal_set__status)) ::System::Security::Cryptography::AsnDecodeStatus  _status;

/// @brief Field _subjectKeyIdentifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__subjectKeyIdentifier, put=__cordl_internal_set__subjectKeyIdentifier)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _subjectKeyIdentifier;

/// @brief Method CopyFrom, addr 0x43b3e6c, size 0x1cc, virtual true, abstract: false, final false
inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method Decode, addr 0x43b3460, size 0x164, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  extension) ;

/// @brief Method Encode, addr 0x43b376c, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode() ;

/// @brief Method FromHex, addr 0x43b3938, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromHex(::StringW  hex) ;

/// @brief Method FromHexChar, addr 0x43b4038, size 0x44, virtual false, abstract: false, final false
static inline uint8_t FromHexChar(char16_t  c) ;

/// @brief Method FromHexChars, addr 0x43b407c, size 0x9c, virtual false, abstract: false, final false
static inline uint8_t FromHexChars(char16_t  c1, char16_t  c2) ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor() ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData*  encodedSubjectKeyIdentifier, bool  critical) ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey*  key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm  algorithm, bool  critical) ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey*  key, bool  critical) ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier, bool  critical) ;

static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::StringW  subjectKeyIdentifier, bool  critical) ;

/// @brief Method ToString, addr 0x43b4118, size 0x238, virtual true, abstract: false, final false
inline ::StringW ToString(bool  multiLine) ;

constexpr ::StringW const& __cordl_internal_get__ski() const;

constexpr ::StringW& __cordl_internal_get__ski() ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __cordl_internal_get__status() const;

constexpr ::System::Security::Cryptography::AsnDecodeStatus& __cordl_internal_get__status() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__subjectKeyIdentifier() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__subjectKeyIdentifier() ;

constexpr void __cordl_internal_set__ski(::StringW  value) ;

constexpr void __cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus  value) ;

constexpr void __cordl_internal_set__subjectKeyIdentifier(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x43b32f4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x43b3390, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsnEncodedData*  encodedSubjectKeyIdentifier, bool  critical) ;

/// @brief Method .ctor, addr 0x43b3a38, size 0x3b0, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey*  key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm  algorithm, bool  critical) ;

/// @brief Method .ctor, addr 0x43b3a2c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey*  key, bool  critical) ;

/// @brief Method .ctor, addr 0x43b35c4, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier, bool  critical) ;

/// @brief Method .ctor, addr 0x43b37e0, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::StringW  subjectKeyIdentifier, bool  critical) ;

/// @brief Method get_SubjectKeyIdentifier, addr 0x43b3de8, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_SubjectKeyIdentifier() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509SubjectKeyIdentifierExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension const& ) = delete;

/// @brief Field _subjectKeyIdentifier, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____subjectKeyIdentifier;

/// @brief Field _ski, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____ski;

/// @brief Field _status, offset: 0x38, size: 0x4, def value: None
 ::System::Security::Cryptography::AsnDecodeStatus  ____status;

/// @brief Field friendlyName offset 0xffffffff size 0x8
static constexpr ::ConstString  friendlyName{u"Subject Key Identifier"};

/// @brief Field oid offset 0xffffffff size 0x8
static constexpr ::ConstString  oid{u"2.5.29.14"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, ____subjectKeyIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, ____ski) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, ____status) == 0x38, "Offset mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
