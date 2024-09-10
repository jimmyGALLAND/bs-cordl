#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectMethod_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectMethod_2)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
template<typename TParam1,typename TParam2>
class __SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2>
class SubContainerCreatorByNewGameObjectMethod_2;
}
namespace Zenject {
template<typename TParam1,typename TParam2>
class __SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectMethod_2);
MARK_GEN_REF_PTR_T(::Zenject::__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2>
// Is value type: false
// CS Name: ::SubContainerCreatorByNewGameObjectMethod`2::<>c__DisplayClass2_0<TParam1,TParam2>*
class CORDL_TYPE __SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>*  __4__this;

/// @brief Field args, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

static inline ::Zenject::__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0<TParam1,TParam2>* New_ctor() ;

/// @brief Method <AddInstallers>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AddInstallers_b__0(::Zenject::DiContainer*  subContainer) ;

constexpr ::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>*& __cordl_internal_get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>*> const& __cordl_internal_get___4__this() const;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __cordl_internal_get_args() const;

constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>*  value) ;

constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

/// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0 const& ) = delete;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>*  _____4__this;

/// @brief Field args, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  ___args;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2>
// Is value type: false
// CS Name: ::Zenject::SubContainerCreatorByNewGameObjectMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByNewGameObjectMethod_2 : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0<TParam1, TParam2>;

/// @brief Field _installerMethod, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__installerMethod, put=__cordl_internal_set__installerMethod)) ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  _installerMethod;

/// @brief Method AddInstallers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

static inline ::Zenject::SubContainerCreatorByNewGameObjectMethod_2<TParam1,TParam2>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

constexpr ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*& __cordl_internal_get__installerMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*> const& __cordl_internal_get__installerMethod() const;

constexpr void __cordl_internal_set__installerMethod(::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubContainerCreatorByNewGameObjectMethod_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewGameObjectMethod_2(SubContainerCreatorByNewGameObjectMethod_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewGameObjectMethod_2(SubContainerCreatorByNewGameObjectMethod_2 const& ) = delete;

/// @brief Field _installerMethod, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  ____installerMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewGameObjectMethod_2, "Zenject", "SubContainerCreatorByNewGameObjectMethod`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SubContainerCreatorByNewGameObjectMethod_2____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewGameObjectMethod`2/<>c__DisplayClass2_0");
