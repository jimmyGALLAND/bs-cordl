#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1KeyWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1KeyWrapper)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1KeyWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper);
// Type: Org.BouncyCastle.Crypto.Operators::Asn1KeyWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Operators::Asn1KeyWrapper*
class CORDL_TYPE Asn1KeyWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmDetails)) ::System::Object*  AlgorithmDetails;

/// @brief Field algorithm, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_algorithm, put=__cordl_internal_set_algorithm)) ::StringW  algorithm;

/// @brief Field wrapper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrapper, put=__cordl_internal_set_wrapper)) ::Org::BouncyCastle::Crypto::IKeyWrapper*  wrapper;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr operator  ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept;

static inline ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper* New_ctor(::StringW  algorithm, ::Org::BouncyCastle::X509::X509Certificate*  cert) ;

/// @brief Method Wrap, addr 0x23652c4, size 0xac, virtual true, abstract: false, final true
inline ::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::ArrayW<uint8_t,::Array<uint8_t>*>  keyData) ;

constexpr ::StringW const& __cordl_internal_get_algorithm() const;

constexpr ::StringW& __cordl_internal_get_algorithm() ;

constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& __cordl_internal_get_wrapper() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IKeyWrapper*> const& __cordl_internal_get_wrapper() const;

constexpr void __cordl_internal_set_algorithm(::StringW  value) ;

constexpr void __cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper*  value) ;

/// @brief Method .ctor, addr 0x2364f50, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::StringW  algorithm, ::Org::BouncyCastle::X509::X509Certificate*  cert) ;

/// @brief Method get_AlgorithmDetails, addr 0x2365224, size 0xa0, virtual true, abstract: false, final true
inline ::System::Object* get_AlgorithmDetails() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* i___Org__BouncyCastle__Crypto__IKeyWrapper() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Asn1KeyWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Asn1KeyWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Asn1KeyWrapper(Asn1KeyWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Asn1KeyWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Asn1KeyWrapper(Asn1KeyWrapper const& ) = delete;

/// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___algorithm;

/// @brief Field wrapper, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IKeyWrapper*  ___wrapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper, ___wrapper) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*, "Org.BouncyCastle.Crypto.Operators", "Asn1KeyWrapper");
