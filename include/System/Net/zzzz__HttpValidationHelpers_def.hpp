#pragma once
// IWYU pragma private; include "System/Net/HttpValidationHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpValidationHelpers)
// Forward declare root types
namespace System::Net {
class HttpValidationHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpValidationHelpers);
// Type: System.Net::HttpValidationHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HttpValidationHelpers*
class CORDL_TYPE HttpValidationHelpers : public ::System::Object {
public:
// Declarations
/// @brief Field s_httpTrimCharacters, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_httpTrimCharacters, put=setStaticF_s_httpTrimCharacters)) ::ArrayW<char16_t,::Array<char16_t>*>  s_httpTrimCharacters;

/// @brief Method IsInvalidMethodOrHeaderString, addr 0x43f9424, size 0x100, virtual false, abstract: false, final false
static inline bool IsInvalidMethodOrHeaderString(::StringW  stringValue) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_httpTrimCharacters() ;

static inline void setStaticF_s_httpTrimCharacters(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpValidationHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpValidationHelpers(HttpValidationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpValidationHelpers(HttpValidationHelpers const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpValidationHelpers, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpValidationHelpers*, "System.Net", "HttpValidationHelpers");
