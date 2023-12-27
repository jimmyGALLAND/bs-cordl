#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPoolProvider_3)
namespace System {
class Action;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace System {
struct Guid;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TContract, typename TMemoryPool> class PoolableMemoryPoolProvider_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPoolProvider_3);
// Type: Zenject::PoolableMemoryPoolProvider`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract, typename TMemoryPool>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11219), inst: 4842 }), TypeDefinitionIndex(TypeDefinitionIndex(11219))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11221))
// CS Name: ::Zenject::PoolableMemoryPoolProvider`3<TParam1,TContract,TMemoryPool>*
class CORDL_TYPE PoolableMemoryPoolProvider_3 : public ::Zenject::PoolableMemoryPoolProviderBase_1<TContract> {
public:
  // Declarations
  /// @brief Field _pool, offset 0x28, size 0x8
  __declspec(property(get = __get__pool, put = __set__pool)) TMemoryPool _pool;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  constexpr TMemoryPool& __get__pool();

  constexpr TMemoryPool const& __get__pool() const;

  constexpr void __set__pool(TMemoryPool value);

  static inline ::Zenject::PoolableMemoryPoolProvider_3<TParam1, TContract, TMemoryPool>* New_ctor(::Zenject::DiContainer* container, ::System::Guid poolId);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid poolId);

  /// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Validate();

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableMemoryPoolProvider_3();

public:
  /// @brief Field _pool, offset: 0x28, size: 0x8, def value: None
  TMemoryPool ____pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPoolProvider_3, "Zenject", "PoolableMemoryPoolProvider`3");
