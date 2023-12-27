#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPool_5)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class IMemoryPool_5;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class StaticMemoryPool_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_5);
// Type: Zenject::StaticMemoryPool`5
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11085)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 187 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11090))
// CS Name: ::Zenject::StaticMemoryPool`5<TParam1,TParam2,TParam3,TParam4,TValue>*
class CORDL_TYPE StaticMemoryPool_5 : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
  // Declarations
  /// @brief Field _onSpawnMethod, offset 0x28, size 0x8
  __declspec(property(get = __get__onSpawnMethod, put = __set__onSpawnMethod))::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* _onSpawnMethod;

  __declspec(property(put = set_OnSpawnMethod))::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* OnSpawnMethod;

  /// @brief Convert operator to "::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>"
  constexpr operator ::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  constexpr ::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*& __get__onSpawnMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*> const& __get__onSpawnMethod() const;

  constexpr void __set__onSpawnMethod(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value);

  static inline ::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod,
                                                                                                    ::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_OnSpawnMethod(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value);

  /// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticMemoryPool_5(StaticMemoryPool_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticMemoryPool_5(StaticMemoryPool_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticMemoryPool_5();

public:
  /// @brief Field _onSpawnMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* ____onSpawnMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_5, "Zenject", "StaticMemoryPool`5");
