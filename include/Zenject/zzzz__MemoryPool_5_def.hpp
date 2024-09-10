#pragma once
// IWYU pragma private; include "Zenject/MemoryPool_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MemoryPool_5)
namespace System {
class Object;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IFactory_5;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IMemoryPool_5;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class MemoryPool_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPool_5);
// Type: Zenject::MemoryPool`5
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
// Is value type: false
// CS Name: ::Zenject::MemoryPool`5<TParam1,TParam2,TParam3,TParam4,TValue>*
class CORDL_TYPE MemoryPool_5 : public ::Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>"
constexpr operator  ::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>"
constexpr operator  ::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*() noexcept;

static inline ::Zenject::MemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>* New_ctor() ;

/// @brief Method Reinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reinitialize(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TValue  item) ;

/// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue Spawn(TParam1  param1, TParam2  param2, TParam3  param3, TParam4  param4) ;

/// @brief Method Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TValue>.Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue Zenject_IFactory_TParam1_TParam2_TParam3_TParam4_TValue__Create(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept;

/// @brief Convert to "::Zenject::IFactory"
constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

/// @brief Convert to "::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>"
constexpr ::Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>* i___Zenject__IFactory_5_TParam1_TParam2_TParam3_TParam4_TValue_() noexcept;

/// @brief Convert to "::Zenject::IMemoryPool"
constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

/// @brief Convert to "::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>"
constexpr ::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>* i___Zenject__IMemoryPool_5_TParam1_TParam2_TParam3_TParam4_TValue_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryPool_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPool_5(MemoryPool_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPool_5(MemoryPool_5 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPool_5, "Zenject", "MemoryPool`5");
