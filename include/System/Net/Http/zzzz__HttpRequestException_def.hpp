#pragma once
// IWYU pragma private; include "System/Net/Http/HttpRequestException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpRequestException)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net::Http {
class HttpRequestException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpRequestException);
// Type: System.Net.Http::HttpRequestException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpRequestException*
class CORDL_TYPE HttpRequestException : public ::System::Exception {
public:
// Declarations
static inline ::System::Net::Http::HttpRequestException* New_ctor() ;

static inline ::System::Net::Http::HttpRequestException* New_ctor(::StringW  message) ;

static inline ::System::Net::Http::HttpRequestException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x4187f94, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x41870fc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x41849dc, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpRequestException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpRequestException(HttpRequestException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpRequestException(HttpRequestException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpRequestException, 0x90>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpRequestException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpRequestException*, "System.Net.Http", "HttpRequestException");
