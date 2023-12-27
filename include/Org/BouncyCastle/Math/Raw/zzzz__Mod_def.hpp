#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mod)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Mod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Mod);
// Type: Org.BouncyCastle.Math.Raw::Mod
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1589))
// CS Name: ::Org.BouncyCastle.Math.Raw::Mod*
class CORDL_TYPE Mod : public ::System::Object {
public:
  // Declarations
  /// @brief Field RandomSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RandomSource, put = setStaticF_RandomSource))::Org::BouncyCastle::Security::SecureRandom* RandomSource;

  static inline void setStaticF_RandomSource(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF_RandomSource();

  /// @brief Method Invert addr 0x105bfcc size 0x3c4 virtual false final false
  static inline void Invert(::ArrayW<uint32_t, ::Array<uint32_t>*> p, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Random addr 0x105c758 size 0x158 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Random(::ArrayW<uint32_t, ::Array<uint32_t>*> p);

  /// @brief Method Add addr 0x105c8b0 size 0x4c virtual false final false
  static inline void Add(::ArrayW<uint32_t, ::Array<uint32_t>*> p, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Subtract addr 0x105c990 size 0x4c virtual false final false
  static inline void Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> p, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method InversionResult addr 0x105c628 size 0x48 virtual false final false
  static inline void InversionResult(::ArrayW<uint32_t, ::Array<uint32_t>*> p, int32_t ac, ::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method InversionStep addr 0x105c518 size 0x110 virtual false final false
  static inline void InversionStep(::ArrayW<uint32_t, ::Array<uint32_t>*> p, ::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ByRef<int32_t> xc);

  static inline ::Org::BouncyCastle::Math::Raw::Mod* New_ctor();

  /// @brief Method .ctor addr 0x105cc84 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mod(Mod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mod(Mod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Mod, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Mod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Mod*, "Org.BouncyCastle.Math.Raw", "Mod");
