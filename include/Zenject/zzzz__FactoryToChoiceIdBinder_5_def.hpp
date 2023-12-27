#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_5_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_5)
namespace System {
class Object;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryArgumentsToChoiceBinder_5;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryToChoiceIdBinder_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_5);
// Type: Zenject::FactoryToChoiceIdBinder`5
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10708), inst: 1777 }), TypeDefinitionIndex(TypeDefinitionIndex(10708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10861))
// CS Name: ::Zenject::FactoryToChoiceIdBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_5 : public ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* WithId(::System::Object* identifier);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceIdBinder_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_5, "Zenject", "FactoryToChoiceIdBinder`5");
