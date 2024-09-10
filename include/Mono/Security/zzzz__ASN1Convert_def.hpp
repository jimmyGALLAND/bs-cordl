#pragma once
// IWYU pragma private; include "Mono/Security/ASN1Convert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASN1Convert)
namespace Mono::Security {
class ASN1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Mono::Security {
class ASN1Convert;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::ASN1Convert);
// Type: Mono.Security::ASN1Convert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::Mono.Security::ASN1Convert*
class CORDL_TYPE ASN1Convert : public ::System::Object {
public:
// Declarations
/// @brief Method FromInt32, addr 0x3ba0d20, size 0x16c, virtual false, abstract: false, final false
static inline ::Mono::Security::ASN1* FromInt32(int32_t  value) ;

/// @brief Method FromOid, addr 0x3ba0ea4, size 0xdc, virtual false, abstract: false, final false
static inline ::Mono::Security::ASN1* FromOid(::StringW  oid) ;

/// @brief Method FromUnsignedBigInteger, addr 0x3ba0f80, size 0x110, virtual false, abstract: false, final false
static inline ::Mono::Security::ASN1* FromUnsignedBigInteger(::ArrayW<uint8_t,::Array<uint8_t>*>  big) ;

/// @brief Method ToDateTime, addr 0x3ba1428, size 0x570, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::Mono::Security::ASN1*  time) ;

/// @brief Method ToInt32, addr 0x3ba1090, size 0x110, virtual false, abstract: false, final false
static inline int32_t ToInt32(::Mono::Security::ASN1*  asn1) ;

/// @brief Method ToOid, addr 0x3ba11a0, size 0x288, virtual false, abstract: false, final false
static inline ::StringW ToOid(::Mono::Security::ASN1*  asn1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ASN1Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ASN1Convert(ASN1Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ASN1Convert(ASN1Convert const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::ASN1Convert, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security
NEED_NO_BOX(::Mono::Security::ASN1Convert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1Convert*, "Mono.Security", "ASN1Convert");
