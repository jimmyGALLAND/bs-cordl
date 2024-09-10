#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/HkdfParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HkdfParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class HkdfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::HkdfParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::HkdfParameters*
class CORDL_TYPE HkdfParameters : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SkipExtract)) bool  SkipExtract;

/// @brief Field ikm, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ikm, put=__cordl_internal_set_ikm)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ikm;

/// @brief Field info, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::ArrayW<uint8_t,::Array<uint8_t>*>  info;

/// @brief Field salt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_salt, put=__cordl_internal_set_salt)) ::ArrayW<uint8_t,::Array<uint8_t>*>  salt;

/// @brief Field skipExpand, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipExpand, put=__cordl_internal_set_skipExpand)) bool  skipExpand;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

/// @brief Method DefaultParameters, addr 0x2372fa8, size 0x64, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* DefaultParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm) ;

/// @brief Method GetIkm, addr 0x237300c, size 0x5c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetIkm() ;

/// @brief Method GetInfo, addr 0x23730cc, size 0x5c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetInfo() ;

/// @brief Method GetSalt, addr 0x2373070, size 0x5c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSalt() ;

static inline ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  info) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm, bool  skip, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  info) ;

/// @brief Method SkipExtractParameters, addr 0x2372f38, size 0x70, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* SkipExtractParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm, ::ArrayW<uint8_t,::Array<uint8_t>*>  info) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_ikm() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_ikm() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_info() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_info() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_salt() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_salt() ;

constexpr bool const& __cordl_internal_get_skipExpand() const;

constexpr bool& __cordl_internal_get_skipExpand() ;

constexpr void __cordl_internal_set_ikm(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_info(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_salt(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_skipExpand(bool  value) ;

/// @brief Method .ctor, addr 0x2372f28, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  info) ;

/// @brief Method .ctor, addr 0x2372dcc, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  ikm, bool  skip, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  info) ;

/// @brief Method get_SkipExtract, addr 0x2373068, size 0x8, virtual true, abstract: false, final false
inline bool get_SkipExtract() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HkdfParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HkdfParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HkdfParameters(HkdfParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HkdfParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HkdfParameters(HkdfParameters const& ) = delete;

/// @brief Field ikm, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___ikm;

/// @brief Field skipExpand, offset: 0x18, size: 0x1, def value: None
 bool  ___skipExpand;

/// @brief Field salt, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___salt;

/// @brief Field info, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, ___ikm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, ___skipExpand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, ___salt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, ___info) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "HkdfParameters");
