#pragma once
// IWYU pragma private; include "Zenject/Context.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Context)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InstallerBase;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace Zenject {
class ZenjectBinding;
}
namespace Zenject {
class __Context____c;
}
// Forward declare root types
namespace Zenject {
class Context;
}
namespace Zenject {
class __Context____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Context);
MARK_REF_PTR_T(::Zenject::__Context____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Context::<>c*
class CORDL_TYPE __Context____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Zenject::__Context____c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_2<::System::Type*,bool>*  __9__16_0;

static inline ::Zenject::__Context____c* New_ctor() ;

/// @brief Method __zenCreate, addr 0x4a8ec18, size 0x54, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x4a8ec6c, size 0x1b8, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x4a8eb5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <set_NormalInstallerTypes>b__16_0, addr 0x4a8eb64, size 0xb4, virtual false, abstract: false, final false
inline bool _set_NormalInstallerTypes_b__16_0(::System::Type*  x) ;

static inline ::Zenject::__Context____c* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::Zenject::__Context____c*  value) ;

static inline void setStaticF___9__16_0(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Context____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Context____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Context____c(__Context____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Context____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Context____c(__Context____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__Context____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::Context
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::Context*
class CORDL_TYPE Context : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Zenject::__Context____c;

 __declspec(property(get=get_Container)) ::Zenject::DiContainer*  Container;

 __declspec(property(get=get_InstallerPrefabs, put=set_InstallerPrefabs)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*  InstallerPrefabs;

 __declspec(property(get=get_Installers, put=set_Installers)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*  Installers;

 __declspec(property(get=get_NormalInstallerTypes, put=set_NormalInstallerTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  NormalInstallerTypes;

 __declspec(property(get=get_NormalInstallers, put=set_NormalInstallers)) ::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*  NormalInstallers;

 __declspec(property(get=get_ScriptableObjectInstallers, put=set_ScriptableObjectInstallers)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  ScriptableObjectInstallers;

/// @brief Field _installerPrefabs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__installerPrefabs, put=__cordl_internal_set__installerPrefabs)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  _installerPrefabs;

/// @brief Field _monoInstallers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__monoInstallers, put=__cordl_internal_set__monoInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  _monoInstallers;

/// @brief Field _normalInstallerTypes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalInstallerTypes, put=__cordl_internal_set__normalInstallerTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  _normalInstallerTypes;

/// @brief Field _normalInstallers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalInstallers, put=__cordl_internal_set__normalInstallers)) ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*  _normalInstallers;

/// @brief Field _scriptableObjectInstallers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scriptableObjectInstallers, put=__cordl_internal_set__scriptableObjectInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  _scriptableObjectInstallers;

/// @brief Method AddNormalInstaller, addr 0x4a8cf38, size 0xa4, virtual false, abstract: false, final false
inline void AddNormalInstaller(::Zenject::InstallerBase*  installer) ;

/// @brief Method AddNormalInstallerType, addr 0x4a8ce2c, size 0x10c, virtual false, abstract: false, final false
inline void AddNormalInstallerType(::System::Type*  installerType) ;

/// @brief Method CheckInstallerPrefabTypes, addr 0x4a8cfdc, size 0x4b0, virtual false, abstract: false, final false
inline void CheckInstallerPrefabTypes(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  installers, ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  installerPrefabs) ;

/// @brief Method GetInjectableMonoBehaviours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  components) ;

/// @brief Method GetRootGameObjects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects() ;

/// @brief Method InstallInstallers, addr 0x4a8d48c, size 0x10, virtual true, abstract: false, final false
inline void InstallInstallers() ;

/// @brief Method InstallInstallers, addr 0x4a8d49c, size 0x76c, virtual false, abstract: false, final false
inline void InstallInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*  normalInstallers, ::System::Collections::Generic::List_1<::System::Type*>*  normalInstallerTypes, ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  scriptableObjectInstallers, ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  installers, ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  installerPrefabs) ;

/// @brief Method InstallSceneBindings, addr 0x4a8dcd4, size 0x560, virtual false, abstract: false, final false
inline void InstallSceneBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  injectableMonoBehaviours) ;

/// @brief Method InstallZenjectBinding, addr 0x4a8e234, size 0x568, virtual false, abstract: false, final false
inline void InstallZenjectBinding(::Zenject::ZenjectBinding*  binding) ;

static inline ::Zenject::Context* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& __cordl_internal_get__installerPrefabs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*> const& __cordl_internal_get__installerPrefabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& __cordl_internal_get__monoInstallers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*> const& __cordl_internal_get__monoInstallers() const;

constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get__normalInstallerTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __cordl_internal_get__normalInstallerTypes() const;

constexpr ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*& __cordl_internal_get__normalInstallers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*> const& __cordl_internal_get__normalInstallers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*& __cordl_internal_get__scriptableObjectInstallers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*> const& __cordl_internal_get__scriptableObjectInstallers() const;

constexpr void __cordl_internal_set__installerPrefabs(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  value) ;

constexpr void __cordl_internal_set__monoInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  value) ;

constexpr void __cordl_internal_set__normalInstallerTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set__normalInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*  value) ;

constexpr void __cordl_internal_set__scriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  value) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x4a8e994, size 0x16c, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x4a8e828, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method get_InstallerPrefabs, addr 0x4a8caf0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* get_InstallerPrefabs() ;

/// @brief Method get_Installers, addr 0x4a8ca58, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* get_Installers() ;

/// @brief Method get_NormalInstallerTypes, addr 0x4a8cc20, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_NormalInstallerTypes() ;

/// @brief Method get_NormalInstallers, addr 0x4a8cd94, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* get_NormalInstallers() ;

/// @brief Method get_ScriptableObjectInstallers, addr 0x4a8cb88, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* get_ScriptableObjectInstallers() ;

/// @brief Method set_InstallerPrefabs, addr 0x4a8caf8, size 0x90, virtual false, abstract: false, final false
inline void set_InstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*  value) ;

/// @brief Method set_Installers, addr 0x4a8ca60, size 0x90, virtual false, abstract: false, final false
inline void set_Installers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*  value) ;

/// @brief Method set_NormalInstallerTypes, addr 0x4a8cc28, size 0x16c, virtual false, abstract: false, final false
inline void set_NormalInstallerTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  value) ;

/// @brief Method set_NormalInstallers, addr 0x4a8cd9c, size 0x90, virtual false, abstract: false, final false
inline void set_NormalInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*  value) ;

/// @brief Method set_ScriptableObjectInstallers, addr 0x4a8cb90, size 0x90, virtual false, abstract: false, final false
inline void set_ScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Context(Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Context(Context const& ) = delete;

/// @brief Field _scriptableObjectInstallers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*  ____scriptableObjectInstallers;

/// @brief Field _monoInstallers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  ____monoInstallers;

/// @brief Field _installerPrefabs, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*  ____installerPrefabs;

/// @brief Field _normalInstallers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*  ____normalInstallers;

/// @brief Field _normalInstallerTypes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Type*>*  ____normalInstallerTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Context, 0x48>, "Size mismatch!");

static_assert(offsetof(::Zenject::Context, ____scriptableObjectInstallers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::Context, ____monoInstallers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::Context, ____installerPrefabs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::Context, ____normalInstallers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::Context, ____normalInstallerTypes) == 0x40, "Offset mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::Context);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Context*, "Zenject", "Context");
NEED_NO_BOX(::Zenject::__Context____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__Context____c*, "Zenject", "Context/<>c");
