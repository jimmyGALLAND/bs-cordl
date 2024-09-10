#pragma once
// IWYU pragma private; include "Zenject/DefaultGameObjectParentInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultGameObjectParentInstaller)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;
}
// Forward declare root types
namespace Zenject {
class DefaultGameObjectParentInstaller;
}
namespace Zenject {
class __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DefaultGameObjectParentInstaller);
MARK_REF_PTR_T(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer);
// Type: ::DefaultParentObjectDestroyer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*
class CORDL_TYPE __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer : public ::System::Object {
public:
// Declarations
/// @brief Field _gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObject, put=__cordl_internal_set__gameObject)) ::UnityW<::UnityEngine::GameObject>  _gameObject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x4abca58, size 0x5c, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer* New_ctor(::UnityEngine::GameObject*  gameObject) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject() ;

constexpr void __cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method __zenCreate, addr 0x4abcab4, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x4abcb5c, size 0x268, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x4abca30, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer const& ) = delete;

/// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____gameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer, ____gameObject) == 0x10, "Offset mismatch!");

} // namespace end def Zenject
// Type: Zenject::DefaultGameObjectParentInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::DefaultGameObjectParentInstaller*
class CORDL_TYPE DefaultGameObjectParentInstaller : public ::Zenject::Installer_2<::StringW,::Zenject::DefaultGameObjectParentInstaller*> {
public:
// Declarations
using DefaultParentObjectDestroyer = ::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method InstallBindings, addr 0x4abc5dc, size 0x148, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::Zenject::DefaultGameObjectParentInstaller* New_ctor(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method __zenCreate, addr 0x4abc724, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x4abc7c8, size 0x268, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x4abc580, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultGameObjectParentInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller const& ) = delete;

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DefaultGameObjectParentInstaller, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::DefaultGameObjectParentInstaller, ____name) == 0x18, "Offset mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::DefaultGameObjectParentInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectParentInstaller*, "Zenject", "DefaultGameObjectParentInstaller");
NEED_NO_BOX(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer*, "Zenject", "DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer");
