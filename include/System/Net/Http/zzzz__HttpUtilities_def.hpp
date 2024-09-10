#pragma once
// IWYU pragma private; include "System/Net/Http/HttpUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpUtilities)
// Forward declare root types
namespace System::Net::Http {
class HttpUtilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpUtilities);
// Type: System.Net.Http::HttpUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpUtilities*
class CORDL_TYPE HttpUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method IsSecureWebSocketScheme, addr 0x4180960, size 0x50, virtual false, abstract: false, final false
static inline bool IsSecureWebSocketScheme(::StringW  scheme) ;

/// @brief Method IsSupportedSecureScheme, addr 0x41808f4, size 0x6c, virtual false, abstract: false, final false
static inline bool IsSupportedSecureScheme(::StringW  scheme) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpUtilities(HttpUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpUtilities(HttpUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpUtilities, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpUtilities*, "System.Net.Http", "HttpUtilities");
