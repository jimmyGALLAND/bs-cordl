#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder0Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder0Extensions)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__1_1;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__3_1;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class __FactoryFromBinder0Extensions____c__5_2;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class __FactoryFromBinder0Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__DisplayClass6_0_1;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinder0Extensions;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__1_1;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__3_1;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class __FactoryFromBinder0Extensions____c__5_2;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class __FactoryFromBinder0Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template<typename TContract>
class __FactoryFromBinder0Extensions____c__DisplayClass6_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinder0Extensions);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder0Extensions____c__1_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder0Extensions____c__3_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder0Extensions____c__5_2);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass0_0_2);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass6_0_1);
// Type: ::<>c__1`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder0Extensions::<>c__1`1<TContract>*
class CORDL_TYPE __FactoryFromBinder0Extensions____c__1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Zenject::__FactoryFromBinder0Extensions____c__1_1<TContract>*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  __9__1_0;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__1_1<TContract>* New_ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*  x) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__1_1<TContract>* getStaticF___9() ;

static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Zenject::__FactoryFromBinder0Extensions____c__1_1<TContract>*  value) ;

static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FactoryFromBinder0Extensions____c__1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder0Extensions____c__1_1(__FactoryFromBinder0Extensions____c__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder0Extensions____c__1_1(__FactoryFromBinder0Extensions____c__1_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__3`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder0Extensions::<>c__3`1<TContract>*
class CORDL_TYPE __FactoryFromBinder0Extensions____c__3_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Zenject::__FactoryFromBinder0Extensions____c__3_1<TContract>*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  __9__3_0;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__3_1<TContract>* New_ctor() ;

/// @brief Method <FromMonoPoolableMemoryPool>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*  x) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__3_1<TContract>* getStaticF___9() ;

static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Zenject::__FactoryFromBinder0Extensions____c__3_1<TContract>*  value) ;

static inline void setStaticF___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FactoryFromBinder0Extensions____c__3_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__3_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder0Extensions____c__3_1(__FactoryFromBinder0Extensions____c__3_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__3_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder0Extensions____c__3_1(__FactoryFromBinder0Extensions____c__3_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__5`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TContract,typename TMemoryPool>
// Is value type: false
// CS Name: ::FactoryFromBinder0Extensions::<>c__5`2<TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder0Extensions____c__5_2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Zenject::__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  __9__5_0;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>* New_ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*  x) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>* getStaticF___9() ;

static inline ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::Zenject::__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>*  value) ;

static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FactoryFromBinder0Extensions____c__5_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__5_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder0Extensions____c__5_2(__FactoryFromBinder0Extensions____c__5_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__5_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder0Extensions____c__5_2(__FactoryFromBinder0Extensions____c__5_2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass0_0`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TContract,typename TMemoryPool>
// Is value type: false
// CS Name: ::FactoryFromBinder0Extensions::<>c__DisplayClass0_0`2<TContract,TMemoryPool>*
class CORDL_TYPE __FactoryFromBinder0Extensions____c__DisplayClass0_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field poolId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_poolId, put=__cordl_internal_set_poolId)) ::System::Guid  poolId;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>* New_ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Zenject::IProvider* _FromPoolableMemoryPool_b__0(::Zenject::DiContainer*  container) ;

constexpr ::System::Guid const& __cordl_internal_get_poolId() const;

constexpr ::System::Guid& __cordl_internal_get_poolId() ;

constexpr void __cordl_internal_set_poolId(::System::Guid  value) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FactoryFromBinder0Extensions____c__DisplayClass0_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__DisplayClass0_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder0Extensions____c__DisplayClass0_0_2(__FactoryFromBinder0Extensions____c__DisplayClass0_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__DisplayClass0_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder0Extensions____c__DisplayClass0_0_2(__FactoryFromBinder0Extensions____c__DisplayClass0_0_2 const& ) = delete;

/// @brief Field poolId, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___poolId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TContract>
// Is value type: false
// CS Name: ::FactoryFromBinder0Extensions::<>c__DisplayClass6_0`1<TContract>*
class CORDL_TYPE __FactoryFromBinder0Extensions____c__DisplayClass6_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field factoryId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_factoryId, put=__cordl_internal_set_factoryId)) ::System::Guid  factoryId;

static inline ::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>* New_ctor() ;

/// @brief Method <FromIFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Zenject::IProvider* _FromIFactory_b__0(::Zenject::DiContainer*  container) ;

constexpr ::System::Guid const& __cordl_internal_get_factoryId() const;

constexpr ::System::Guid& __cordl_internal_get_factoryId() ;

constexpr void __cordl_internal_set_factoryId(::System::Guid  value) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FactoryFromBinder0Extensions____c__DisplayClass6_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactoryFromBinder0Extensions____c__DisplayClass6_0_1(__FactoryFromBinder0Extensions____c__DisplayClass6_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder0Extensions____c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactoryFromBinder0Extensions____c__DisplayClass6_0_1(__FactoryFromBinder0Extensions____c__DisplayClass6_0_1 const& ) = delete;

/// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___factoryId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder0Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::FactoryFromBinder0Extensions*
class CORDL_TYPE FactoryFromBinder0Extensions : public ::System::Object {
public:
// Declarations
template<typename TContract>
using __c__1_1 = ::Zenject::__FactoryFromBinder0Extensions____c__1_1<TContract>;

template<typename TContract>
using __c__3_1 = ::Zenject::__FactoryFromBinder0Extensions____c__3_1<TContract>;

template<typename TContract,typename TMemoryPool>
using __c__5_2 = ::Zenject::__FactoryFromBinder0Extensions____c__5_2<TContract, TMemoryPool>;

template<typename TContract,typename TMemoryPool>
using __c__DisplayClass0_0_2 = ::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract, TMemoryPool>;

template<typename TContract>
using __c__DisplayClass6_0_1 = ::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>;

/// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder, ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  factoryBindGenerator) ;

/// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder) ;

/// @brief Method FromMonoPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  poolBindGenerator) ;

/// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder) ;

/// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract,typename TMemoryPool>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder) ;

/// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  poolBindGenerator) ;

/// @brief Method FromPoolableMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContract,typename TMemoryPool>
static inline ::Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(::Zenject::FactoryFromBinder_1<TContract>*  fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*  poolBindGenerator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FactoryFromBinder0Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder0Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinder0Extensions(FactoryFromBinder0Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder0Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinder0Extensions(FactoryFromBinder0Extensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinder0Extensions, 0x10>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinder0Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinder0Extensions*, "Zenject", "FactoryFromBinder0Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder0Extensions____c__1_1, "Zenject", "FactoryFromBinder0Extensions/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder0Extensions____c__3_1, "Zenject", "FactoryFromBinder0Extensions/<>c__3`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder0Extensions____c__5_2, "Zenject", "FactoryFromBinder0Extensions/<>c__5`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass0_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder0Extensions____c__DisplayClass6_0_1, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1");
