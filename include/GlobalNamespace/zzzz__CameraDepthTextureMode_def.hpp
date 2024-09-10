#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraDepthTextureMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraDepthTextureMode)
// Forward declare root types
namespace GlobalNamespace {
class CameraDepthTextureMode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CameraDepthTextureMode);
// Type: ::CameraDepthTextureMode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CameraDepthTextureMode*
class CORDL_TYPE CameraDepthTextureMode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _depthTextureMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthTextureMode, put=__cordl_internal_set__depthTextureMode)) ::UnityEngine::DepthTextureMode  _depthTextureMode;

/// @brief Method Awake, addr 0x3940110, size 0x5c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CameraDepthTextureMode* New_ctor() ;

constexpr ::UnityEngine::DepthTextureMode const& __cordl_internal_get__depthTextureMode() const;

constexpr ::UnityEngine::DepthTextureMode& __cordl_internal_get__depthTextureMode() ;

constexpr void __cordl_internal_set__depthTextureMode(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method .ctor, addr 0x394016c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraDepthTextureMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraDepthTextureMode(CameraDepthTextureMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraDepthTextureMode(CameraDepthTextureMode const& ) = delete;

/// @brief Field _depthTextureMode, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::DepthTextureMode  ____depthTextureMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CameraDepthTextureMode, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDepthTextureMode, ____depthTextureMode) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CameraDepthTextureMode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CameraDepthTextureMode*, "", "CameraDepthTextureMode");
