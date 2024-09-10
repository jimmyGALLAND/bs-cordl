#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpResponseHeaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
CORDL_MODULE_EXPORT(HttpResponseHeaders)
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpResponseHeaders;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpResponseHeaders);
// Type: System.Net.Http.Headers::HttpResponseHeaders
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::HttpResponseHeaders*
class CORDL_TYPE HttpResponseHeaders : public ::System::Net::Http::Headers::HttpHeaders {
public:
// Declarations
static inline ::System::Net::Http::Headers::HttpResponseHeaders* New_ctor() ;

/// @brief Method .ctor, addr 0x418861c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpResponseHeaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseHeaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpResponseHeaders(HttpResponseHeaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseHeaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpResponseHeaders(HttpResponseHeaders const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpResponseHeaders, 0x20>, "Size mismatch!");

} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpResponseHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpResponseHeaders*, "System.Net.Http.Headers", "HttpResponseHeaders");
