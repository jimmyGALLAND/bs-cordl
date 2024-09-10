#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/SignatureExpirationTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureExpirationTime)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignatureExpirationTime;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime);
// Type: Org.BouncyCastle.Bcpg.Sig::SignatureExpirationTime
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::SignatureExpirationTime*
class CORDL_TYPE SignatureExpirationTime : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
 __declspec(property(get=get_Time)) int64_t  Time;

static inline ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime* New_ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime* New_ctor(bool  critical, int64_t  seconds) ;

/// @brief Method TimeToBytes, addr 0x25f366c, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> TimeToBytes(int64_t  t) ;

/// @brief Method .ctor, addr 0x25f3700, size 0x48, virtual false, abstract: false, final false
inline void _ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor, addr 0x25f3748, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(bool  critical, int64_t  seconds) ;

/// @brief Method get_Time, addr 0x25f3794, size 0x5c, virtual false, abstract: false, final false
inline int64_t get_Time() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignatureExpirationTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignatureExpirationTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureExpirationTime(SignatureExpirationTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureExpirationTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureExpirationTime(SignatureExpirationTime const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*, "Org.BouncyCastle.Bcpg.Sig", "SignatureExpirationTime");
