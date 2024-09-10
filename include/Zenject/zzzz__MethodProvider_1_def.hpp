#pragma once
// IWYU pragma private; include "Zenject/MethodProvider_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProvider_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProvider_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProvider_1);
// Type: Zenject::MethodProvider`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TReturn>
// Is value type: false
// CS Name: ::Zenject::MethodProvider`1<TReturn>*
class CORDL_TYPE MethodProvider_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Field _container, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__container, put=__cordl_internal_set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _method, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::System::Func_2<::Zenject::InjectContext*,TReturn>*  _method;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

/// @brief Method GetAllInstancesWithInjectSplit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

/// @brief Method GetInstanceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

static inline ::Zenject::MethodProvider_1<TReturn>* New_ctor(::System::Func_2<::Zenject::InjectContext*,TReturn>*  method, ::Zenject::DiContainer*  container) ;

constexpr ::Zenject::DiContainer*& __cordl_internal_get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

constexpr ::System::Func_2<::Zenject::InjectContext*,TReturn>*& __cordl_internal_get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,TReturn>*> const& __cordl_internal_get__method() const;

constexpr void __cordl_internal_set__container(::Zenject::DiContainer*  value) ;

constexpr void __cordl_internal_set__method(::System::Func_2<::Zenject::InjectContext*,TReturn>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,TReturn>*  method, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MethodProvider_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProvider_1(MethodProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProvider_1(MethodProvider_1 const& ) = delete;

/// @brief Field _container, offset: 0x10, size: 0x8, def value: None
 ::Zenject::DiContainer*  ____container;

/// @brief Field _method, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Zenject::InjectContext*,TReturn>*  ____method;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProvider_1, "Zenject", "MethodProvider`1");
