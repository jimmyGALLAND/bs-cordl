#pragma once
// IWYU pragma private; include "Zenject/PlaceholderFactory_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlaceholderFactory_2)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class __PlaceholderFactory_2___get_ParamTypes_d__2;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class PlaceholderFactory_2;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class __PlaceholderFactory_2___get_ParamTypes_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactory_2);
MARK_GEN_REF_PTR_T(::Zenject::__PlaceholderFactory_2___get_ParamTypes_d__2);
// Type: ::<get_ParamTypes>d__2
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TValue>
// Is value type: false
// CS Name: ::PlaceholderFactory`2::<get_ParamTypes>d__2<TParam1,TValue>*
class CORDL_TYPE __PlaceholderFactory_2___get_ParamTypes_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type*  System_Collections_Generic_IEnumerator_System_Type__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Type*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Zenject::__PlaceholderFactory_2___get_ParamTypes_d__2<TParam1,TValue>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Type*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Type*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __PlaceholderFactory_2___get_ParamTypes_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__PlaceholderFactory_2___get_ParamTypes_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlaceholderFactory_2___get_ParamTypes_d__2(__PlaceholderFactory_2___get_ParamTypes_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlaceholderFactory_2___get_ParamTypes_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlaceholderFactory_2___get_ParamTypes_d__2(__PlaceholderFactory_2___get_ParamTypes_d__2 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PlaceholderFactory`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TValue>
// Is value type: false
// CS Name: ::Zenject::PlaceholderFactory`2<TParam1,TValue>*
class CORDL_TYPE PlaceholderFactory_2 : public ::Zenject::PlaceholderFactoryBase_1<TValue> {
public:
// Declarations
using _get_ParamTypes_d__2 = ::Zenject::__PlaceholderFactory_2___get_ParamTypes_d__2<TParam1, TValue>;

 __declspec(property(get=get_ParamTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ParamTypes;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory_2<TParam1,TValue>"
constexpr operator  ::Zenject::IFactory_2<TParam1,TValue>*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue Create(TParam1  param) ;

static inline ::Zenject::PlaceholderFactory_2<TParam1,TValue>* New_ctor() ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ParamTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes() ;

/// @brief Convert to "::Zenject::IFactory"
constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

/// @brief Convert to "::Zenject::IFactory_2<TParam1,TValue>"
constexpr ::Zenject::IFactory_2<TParam1,TValue>* i___Zenject__IFactory_2_TParam1_TValue_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaceholderFactory_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaceholderFactory_2(PlaceholderFactory_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaceholderFactory_2(PlaceholderFactory_2 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactory_2, "Zenject", "PlaceholderFactory`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__PlaceholderFactory_2___get_ParamTypes_d__2, "Zenject", "PlaceholderFactory`2/<get_ParamTypes>d__2");
