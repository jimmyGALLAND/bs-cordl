#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat512.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat512)
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat512;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat512);
// Type: Org.BouncyCastle.Math.Raw::Nat512
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat512*
class CORDL_TYPE Nat512 : public ::System::Object {
public:
// Declarations
/// @brief Method Mul, addr 0x24c2ad0, size 0x144, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat512* New_ctor() ;

/// @brief Method Square, addr 0x24c2c14, size 0xf0, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method .ctor, addr 0x24c2d04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Nat512() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Nat512", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat512(Nat512 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat512", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat512(Nat512 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat512, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat512);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat512*, "Org.BouncyCastle.Math.Raw", "Nat512");
