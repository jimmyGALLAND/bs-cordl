#pragma once
// IWYU pragma private; include "HMUI/CurvedCanvasSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CurvedCanvasSettings)
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class CurvedCanvasSettings;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedCanvasSettings);
// Type: HMUI::CurvedCanvasSettings
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 169, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::CurvedCanvasSettings*
class CORDL_TYPE CurvedCanvasSettings : public ::UnityEngine::UI::Graphic {
public:
// Declarations
/// @brief Field _radius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _useFlatInEditMode, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__useFlatInEditMode, put=__cordl_internal_set__useFlatInEditMode)) bool  _useFlatInEditMode;

 __declspec(property(get=get_radius)) float_t  radius;

static inline ::HMUI::CurvedCanvasSettings* New_ctor() ;

/// @brief Method OnPopulateMesh, addr 0x39693ec, size 0x194, virtual true, abstract: false, final false
inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper*  vh) ;

/// @brief Method RebuildAndSetup, addr 0x3969258, size 0xf0, virtual false, abstract: false, final false
static inline void RebuildAndSetup(::UnityEngine::Transform*  t) ;

/// @brief Method SetRadius, addr 0x3969240, size 0x18, virtual false, abstract: false, final false
inline void SetRadius(float_t  value) ;

/// @brief Method Start, addr 0x3969348, size 0xa4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TransformPointFromCanvasTo3D, addr 0x3969580, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformPointFromCanvasTo3D(::UnityEngine::Vector2  point) ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr bool const& __cordl_internal_get__useFlatInEditMode() const;

constexpr bool& __cordl_internal_get__useFlatInEditMode() ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__useFlatInEditMode(bool  value) ;

/// @brief Method .ctor, addr 0x39695c0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_radius, addr 0x3969238, size 0x8, virtual false, abstract: false, final false
inline float_t get_radius() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurvedCanvasSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurvedCanvasSettings(CurvedCanvasSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurvedCanvasSettings(CurvedCanvasSettings const& ) = delete;

/// @brief Field _radius, offset: 0xa4, size: 0x4, def value: None
 float_t  ____radius;

/// @brief Field _useFlatInEditMode, offset: 0xa8, size: 0x1, def value: None
 bool  ____useFlatInEditMode;

/// @brief Field kMaxElementWidth offset 0xffffffff size 0x4
static constexpr float_t  kMaxElementWidth{10.0};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedCanvasSettings, 0xb0>, "Size mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettings, ____radius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettings, ____useFlatInEditMode) == 0xa8, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::CurvedCanvasSettings);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedCanvasSettings*, "HMUI", "CurvedCanvasSettings");
