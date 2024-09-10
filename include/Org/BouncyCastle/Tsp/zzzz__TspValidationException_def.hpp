#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TspValidationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Tsp/zzzz__TspException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TspValidationException)
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspValidationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspValidationException);
// Type: Org.BouncyCastle.Tsp::TspValidationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Tsp::TspValidationException*
class CORDL_TYPE TspValidationException : public ::Org::BouncyCastle::Tsp::TspException {
public:
// Declarations
 __declspec(property(get=get_FailureCode)) int32_t  FailureCode;

/// @brief Field failureCode, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_failureCode, put=__cordl_internal_set_failureCode)) int32_t  failureCode;

static inline ::Org::BouncyCastle::Tsp::TspValidationException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Tsp::TspValidationException* New_ctor(::StringW  message, int32_t  failureCode) ;

constexpr int32_t const& __cordl_internal_get_failureCode() const;

constexpr int32_t& __cordl_internal_get_failureCode() ;

constexpr void __cordl_internal_set_failureCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x257f0b4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x257dca8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  failureCode) ;

/// @brief Method get_FailureCode, addr 0x2584bc0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FailureCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TspValidationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TspValidationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TspValidationException(TspValidationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TspValidationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TspValidationException(TspValidationException const& ) = delete;

/// @brief Field failureCode, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___failureCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspValidationException, 0x90>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TspValidationException, ___failureCode) == 0x8c, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspValidationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspValidationException*, "Org.BouncyCastle.Tsp", "TspValidationException");
