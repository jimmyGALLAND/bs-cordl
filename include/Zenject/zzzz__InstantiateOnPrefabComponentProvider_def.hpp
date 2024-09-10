#pragma once
// IWYU pragma private; include "Zenject/InstantiateOnPrefabComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(InstantiateOnPrefabComponentProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class IPrefabInstantiator;
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
class InstantiateOnPrefabComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InstantiateOnPrefabComponentProvider);
// Type: Zenject::InstantiateOnPrefabComponentProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::InstantiateOnPrefabComponentProvider*
class CORDL_TYPE InstantiateOnPrefabComponentProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Field _componentType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__componentType, put=__cordl_internal_set__componentType)) ::System::Type*  _componentType;

/// @brief Field _prefabInstantiator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabInstantiator, put=__cordl_internal_set__prefabInstantiator)) ::Zenject::IPrefabInstantiator*  _prefabInstantiator;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

/// @brief Method GetAllInstancesWithInjectSplit, addr 0x4aa6f0c, size 0x168, virtual true, abstract: false, final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

/// @brief Method GetInstanceType, addr 0x4aa6f04, size 0x8, virtual true, abstract: false, final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

static inline ::Zenject::InstantiateOnPrefabComponentProvider* New_ctor(::System::Type*  componentType, ::Zenject::IPrefabInstantiator*  prefabInstantiator) ;

constexpr ::System::Type*& __cordl_internal_get__componentType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__componentType() const;

constexpr ::Zenject::IPrefabInstantiator*& __cordl_internal_get__prefabInstantiator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> const& __cordl_internal_get__prefabInstantiator() const;

constexpr void __cordl_internal_set__componentType(::System::Type*  value) ;

constexpr void __cordl_internal_set__prefabInstantiator(::Zenject::IPrefabInstantiator*  value) ;

/// @brief Method .ctor, addr 0x4aa6ec8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentType, ::Zenject::IPrefabInstantiator*  prefabInstantiator) ;

/// @brief Method get_IsCached, addr 0x4aa6ef4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4aa6efc, size 0x8, virtual true, abstract: false, final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstantiateOnPrefabComponentProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstantiateOnPrefabComponentProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstantiateOnPrefabComponentProvider(InstantiateOnPrefabComponentProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateOnPrefabComponentProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstantiateOnPrefabComponentProvider(InstantiateOnPrefabComponentProvider const& ) = delete;

/// @brief Field _prefabInstantiator, offset: 0x10, size: 0x8, def value: None
 ::Zenject::IPrefabInstantiator*  ____prefabInstantiator;

/// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____componentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InstantiateOnPrefabComponentProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::InstantiateOnPrefabComponentProvider, ____prefabInstantiator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InstantiateOnPrefabComponentProvider, ____componentType) == 0x18, "Offset mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InstantiateOnPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstantiateOnPrefabComponentProvider*, "Zenject", "InstantiateOnPrefabComponentProvider");
