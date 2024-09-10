#pragma once
// IWYU pragma private; include "GlobalNamespace/ExternalCamerasManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ExternalCamerasManager)
namespace GlobalNamespace {
class OculusMRCManager;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ExternalCamerasManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExternalCamerasManager);
// Type: ::ExternalCamerasManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExternalCamerasManager*
class CORDL_TYPE ExternalCamerasManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mrcBackgroundCameraPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mrcBackgroundCameraPrefab, put=__cordl_internal_set__mrcBackgroundCameraPrefab)) ::UnityW<::UnityEngine::Camera>  _mrcBackgroundCameraPrefab;

/// @brief Field _mrcForegroundCameraPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mrcForegroundCameraPrefab, put=__cordl_internal_set__mrcForegroundCameraPrefab)) ::UnityW<::UnityEngine::Camera>  _mrcForegroundCameraPrefab;

/// @brief Field _oculusMRCManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__oculusMRCManager, put=__cordl_internal_set__oculusMRCManager)) ::UnityW<::GlobalNamespace::OculusMRCManager>  _oculusMRCManager;

/// @brief Method InstantiateMixedRealityBackgroundCameraGameObject, addr 0x3fefe04, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject*  mainCameraGameObject) ;

/// @brief Method InstantiateMixedRealityForegroundCameraGameObject, addr 0x3fefe84, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject*  mainCameraGameObject) ;

static inline ::GlobalNamespace::ExternalCamerasManager* New_ctor() ;

/// @brief Method OnEnable, addr 0x3fefd40, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mrcBackgroundCameraPrefab() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mrcBackgroundCameraPrefab() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mrcForegroundCameraPrefab() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mrcForegroundCameraPrefab() ;

constexpr ::UnityW<::GlobalNamespace::OculusMRCManager> const& __cordl_internal_get__oculusMRCManager() const;

constexpr ::UnityW<::GlobalNamespace::OculusMRCManager>& __cordl_internal_get__oculusMRCManager() ;

constexpr void __cordl_internal_set__mrcBackgroundCameraPrefab(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__mrcForegroundCameraPrefab(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__oculusMRCManager(::UnityW<::GlobalNamespace::OculusMRCManager>  value) ;

/// @brief Method .ctor, addr 0x3feff04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalCamerasManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalCamerasManager(ExternalCamerasManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalCamerasManager(ExternalCamerasManager const& ) = delete;

/// @brief Field _oculusMRCManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OculusMRCManager>  ____oculusMRCManager;

/// @brief Field _mrcBackgroundCameraPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____mrcBackgroundCameraPrefab;

/// @brief Field _mrcForegroundCameraPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____mrcForegroundCameraPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExternalCamerasManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalCamerasManager, ____oculusMRCManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalCamerasManager, ____mrcBackgroundCameraPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalCamerasManager, ____mrcForegroundCameraPrefab) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExternalCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
