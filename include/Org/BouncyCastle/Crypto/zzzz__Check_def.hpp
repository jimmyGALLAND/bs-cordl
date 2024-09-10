#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Check.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Check)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class Check;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Check);
// Type: Org.BouncyCastle.Crypto::Check
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::Check*
class CORDL_TYPE Check : public ::System::Object {
public:
// Declarations
/// @brief Method DataLength, addr 0x23fd8dc, size 0x64, virtual false, abstract: false, final false
static inline void DataLength(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, ::StringW  msg) ;

/// @brief Method DataLength, addr 0x23fd894, size 0x48, virtual false, abstract: false, final false
static inline void DataLength(bool  condition, ::StringW  msg) ;

static inline ::Org::BouncyCastle::Crypto::Check* New_ctor() ;

/// @brief Method OutputLength, addr 0x23fd940, size 0x64, virtual false, abstract: false, final false
static inline void OutputLength(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, ::StringW  msg) ;

/// @brief Method .ctor, addr 0x23fd9a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Check() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Check(Check && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Check(Check const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Check, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Check);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Check*, "Org.BouncyCastle.Crypto", "Check");
