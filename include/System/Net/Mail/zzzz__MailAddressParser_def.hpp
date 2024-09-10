#pragma once
// IWYU pragma private; include "System/Net/Mail/MailAddressParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MailAddressParser)
namespace System::Net::Mail {
class MailAddress;
}
// Forward declare root types
namespace System::Net::Mail {
class MailAddressParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::MailAddressParser);
// Type: System.Net.Mail::MailAddressParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::MailAddressParser*
class CORDL_TYPE MailAddressParser : public ::System::Object {
public:
// Declarations
/// @brief Method NormalizeOrThrow, addr 0x4372d40, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW NormalizeOrThrow(::StringW  input) ;

/// @brief Method ParseAddress, addr 0x4372054, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW  data) ;

/// @brief Method ParseAddress, addr 0x4372080, size 0x35c, virtual false, abstract: false, final false
static inline ::System::Net::Mail::MailAddress* ParseAddress(::StringW  data, bool  expectMultipleAddresses, ByRef<int32_t>  index) ;

/// @brief Method ParseDisplayName, addr 0x43727ec, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW ParseDisplayName(::StringW  data, ByRef<int32_t>  index, bool  expectMultipleAddresses) ;

/// @brief Method ParseDomain, addr 0x4372438, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW ParseDomain(::StringW  data, ByRef<int32_t>  index) ;

/// @brief Method ParseLocalPart, addr 0x4372520, size 0x2cc, virtual false, abstract: false, final false
static inline ::StringW ParseLocalPart(::StringW  data, ByRef<int32_t>  index, bool  expectAngleBracket, bool  expectMultipleAddresses) ;

/// @brief Method ReadCfwsAndThrowIfIncomplete, addr 0x43723dc, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ReadCfwsAndThrowIfIncomplete(::StringW  data, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MailAddressParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MailAddressParser(MailAddressParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MailAddressParser(MailAddressParser const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::MailAddressParser, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::MailAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::MailAddressParser*, "System.Net.Mail", "MailAddressParser");
