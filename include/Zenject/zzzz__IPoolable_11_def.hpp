#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_11)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TParam11>
class IPoolable_11;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_11);
// Type: Zenject::IPoolable`11
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TParam11>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15731))
// CS Name: ::Zenject::IPoolable`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TParam11>*
class CORDL_TYPE IPoolable_11 {
public:
  // Declarations
  /// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDespawned();

  /// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TParam9 p9, TParam10 p10, TParam11 p11);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolable_11(IPoolable_11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_11(IPoolable_11 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_11, "Zenject", "IPoolable`11");
