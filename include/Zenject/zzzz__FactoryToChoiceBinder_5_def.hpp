#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_5_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_5)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryFromBinder_5;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryToChoiceBinder_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_5);
// Type: Zenject::FactoryToChoiceBinder`5
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10756), inst: 1829 }), TypeDefinitionIndex(TypeDefinitionIndex(10756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10853))
// CS Name: ::Zenject::FactoryToChoiceBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_5 : public ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                            ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* ToSelf();

  /// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TConcrete> inline ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>* To();

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceBinder_5(FactoryToChoiceBinder_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceBinder_5(FactoryToChoiceBinder_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceBinder_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_5, "Zenject", "FactoryToChoiceBinder`5");
