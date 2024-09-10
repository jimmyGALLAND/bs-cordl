#pragma once
// IWYU pragma private; include "Zenject/StaticMemoryPool_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPool_3)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class IMemoryPool_3;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class StaticMemoryPool_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_3);
// Type: Zenject::StaticMemoryPool`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TValue>
// Is value type: false
// CS Name: ::Zenject::StaticMemoryPool`3<TParam1,TParam2,TValue>*
class CORDL_TYPE StaticMemoryPool_3 : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_3<TParam1,TParam2,TValue>*  OnSpawnMethod;

/// @brief Field _onSpawnMethod, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSpawnMethod, put=__cordl_internal_set__onSpawnMethod)) ::System::Action_3<TParam1,TParam2,TValue>*  _onSpawnMethod;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool_3<TParam1,TParam2,TValue>"
constexpr operator  ::Zenject::IMemoryPool_3<TParam1,TParam2,TValue>*() noexcept;

static inline ::Zenject::StaticMemoryPool_3<TParam1,TParam2,TValue>* New_ctor(::System::Action_3<TParam1,TParam2,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue Spawn(TParam1  p1, TParam2  p2) ;

constexpr ::System::Action_3<TParam1,TParam2,TValue>*& __cordl_internal_get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<TParam1,TParam2,TValue>*> const& __cordl_internal_get__onSpawnMethod() const;

constexpr void __cordl_internal_set__onSpawnMethod(::System::Action_3<TParam1,TParam2,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_3<TParam1,TParam2,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept;

/// @brief Convert to "::Zenject::IMemoryPool"
constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

/// @brief Convert to "::Zenject::IMemoryPool_3<TParam1,TParam2,TValue>"
constexpr ::Zenject::IMemoryPool_3<TParam1,TParam2,TValue>* i___Zenject__IMemoryPool_3_TParam1_TParam2_TValue_() noexcept;

/// @brief Method set_OnSpawnMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_OnSpawnMethod(::System::Action_3<TParam1,TParam2,TValue>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticMemoryPool_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_3(StaticMemoryPool_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_3(StaticMemoryPool_3 const& ) = delete;

/// @brief Field _onSpawnMethod, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<TParam1,TParam2,TValue>*  ____onSpawnMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_3, "Zenject", "StaticMemoryPool`3");
