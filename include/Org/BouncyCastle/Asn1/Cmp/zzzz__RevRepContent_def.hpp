#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/RevRepContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RevRepContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevRepContent);
// Type: Org.BouncyCastle.Asn1.Cmp::RevRepContent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::RevRepContent*
class CORDL_TYPE RevRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Field crls, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_crls, put=__cordl_internal_set_crls)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  crls;

/// @brief Field revCerts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_revCerts, put=__cordl_internal_set_revCerts)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  revCerts;

/// @brief Field status, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  status;

/// @brief Method GetCrls, addr 0x22b1a30, size 0x100, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*,::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> GetCrls() ;

/// @brief Method GetInstance, addr 0x22ac580, size 0x17c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* GetInstance(::System::Object*  obj) ;

/// @brief Method GetRevCerts, addr 0x22b1930, size 0x100, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertId*,::Array<::Org::BouncyCastle::Asn1::Crmf::CertId*>*> GetRevCerts() ;

/// @brief Method GetStatus, addr 0x22b183c, size 0xf4, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>*> GetStatus() ;

static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x22b1b30, size 0x120, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_crls() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_crls() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_revCerts() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_revCerts() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_status() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_status() const;

constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr void __cordl_internal_set_revCerts(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

/// @brief Method .ctor, addr 0x22b175c, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RevRepContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevRepContent(RevRepContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevRepContent(RevRepContent const& ) = delete;

/// @brief Field status, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___status;

/// @brief Field revCerts, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___revCerts;

/// @brief Field crls, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___crls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevRepContent, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContent, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContent, ___revCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContent, ___crls) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevRepContent*, "Org.BouncyCastle.Asn1.Cmp", "RevRepContent");
