#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PlaceholderFactory_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Factory_3)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TValue> class Factory_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Factory_3);
// Type: Zenject::Factory`3
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11008)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11008), inst: 3495 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11009))
// CS Name: ::Zenject::Factory`3<TParam1,TParam2,TValue>*
class CORDL_TYPE Factory_3 : public ::Zenject::PlaceholderFactory_3<TParam1, TParam2, TValue> {
public:
  // Declarations
  static inline ::Zenject::Factory_3<TParam1, TParam2, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Factory_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Factory_3(Factory_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Factory_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Factory_3(Factory_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Factory_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_3, "Zenject", "Factory`3");
