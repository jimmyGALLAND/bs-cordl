#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SHA1SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SHA1SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SHA1SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription);
// Type: System.Security.Cryptography::RSAPKCS1SHA1SignatureDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSAPKCS1SHA1SignatureDescription*
class CORDL_TYPE RSAPKCS1SHA1SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription {
public:
// Declarations
static inline ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription* New_ctor() ;

/// @brief Method .ctor, addr 0x3c1bfbc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAPKCS1SHA1SignatureDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA1SignatureDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1SHA1SignatureDescription(RSAPKCS1SHA1SignatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA1SignatureDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1SHA1SignatureDescription(RSAPKCS1SHA1SignatureDescription const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SHA1SignatureDescription");
