#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleMaterialSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleMaterialSetter)
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleMaterialSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleMaterialSetter);
// Type: ::ObstacleMaterialSetter
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleMaterialSetter*
class CORDL_TYPE ObstacleMaterialSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fakeGlowLWMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__fakeGlowLWMaterial, put=__cordl_internal_set__fakeGlowLWMaterial)) ::UnityW<::UnityEngine::Material>  _fakeGlowLWMaterial;

/// @brief Field _fakeGlowTexturedMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__fakeGlowTexturedMaterial, put=__cordl_internal_set__fakeGlowTexturedMaterial)) ::UnityW<::UnityEngine::Material>  _fakeGlowTexturedMaterial;

/// @brief Field _hwCoreMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hwCoreMaterial, put=__cordl_internal_set__hwCoreMaterial)) ::UnityW<::UnityEngine::Material>  _hwCoreMaterial;

/// @brief Field _lwCoreMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lwCoreMaterial, put=__cordl_internal_set__lwCoreMaterial)) ::UnityW<::UnityEngine::Material>  _lwCoreMaterial;

/// @brief Field _obstacleCoreRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__obstacleCoreRenderer, put=__cordl_internal_set__obstacleCoreRenderer)) ::UnityW<::UnityEngine::Renderer>  _obstacleCoreRenderer;

/// @brief Field _obstacleFakeGlowRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__obstacleFakeGlowRenderer, put=__cordl_internal_set__obstacleFakeGlowRenderer)) ::UnityW<::UnityEngine::Renderer>  _obstacleFakeGlowRenderer;

/// @brief Field _settingsManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Field _texturedCoreMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__texturedCoreMaterial, put=__cordl_internal_set__texturedCoreMaterial)) ::UnityW<::UnityEngine::Material>  _texturedCoreMaterial;

static inline ::GlobalNamespace::ObstacleMaterialSetter* New_ctor() ;

/// @brief Method SetCoreMaterial, addr 0x3a69b50, size 0xfc, virtual false, abstract: false, final false
inline void SetCoreMaterial(::UnityEngine::Renderer*  renderer) ;

/// @brief Method SetFakeGlowMaterial, addr 0x3a69c4c, size 0x4c, virtual false, abstract: false, final false
inline void SetFakeGlowMaterial(::UnityEngine::Renderer*  renderer) ;

/// @brief Method Start, addr 0x3a69b30, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fakeGlowLWMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fakeGlowLWMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fakeGlowTexturedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fakeGlowTexturedMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__hwCoreMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__hwCoreMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__lwCoreMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__lwCoreMaterial() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__obstacleCoreRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__obstacleCoreRenderer() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__obstacleFakeGlowRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__obstacleFakeGlowRenderer() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__texturedCoreMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__texturedCoreMaterial() ;

constexpr void __cordl_internal_set__fakeGlowLWMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__fakeGlowTexturedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__hwCoreMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__lwCoreMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__obstacleCoreRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__obstacleFakeGlowRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

constexpr void __cordl_internal_set__texturedCoreMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x3a69c98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleMaterialSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleMaterialSetter(ObstacleMaterialSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleMaterialSetter(ObstacleMaterialSetter const& ) = delete;

/// @brief Field _lwCoreMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____lwCoreMaterial;

/// @brief Field _hwCoreMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____hwCoreMaterial;

/// @brief Field _texturedCoreMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____texturedCoreMaterial;

/// @brief Field _fakeGlowLWMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____fakeGlowLWMaterial;

/// @brief Field _fakeGlowTexturedMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____fakeGlowTexturedMaterial;

/// @brief Field _obstacleCoreRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____obstacleCoreRenderer;

/// @brief Field _obstacleFakeGlowRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____obstacleFakeGlowRenderer;

/// @brief Field _settingsManager, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleMaterialSetter, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____lwCoreMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____hwCoreMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____texturedCoreMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____fakeGlowLWMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____fakeGlowTexturedMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____obstacleCoreRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____obstacleFakeGlowRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleMaterialSetter, ____settingsManager) == 0x58, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleMaterialSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleMaterialSetter*, "", "ObstacleMaterialSetter");
