#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
namespace UnityEngine::Rendering {
struct OpaqueSortMode;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct TransparencySortMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class __Camera__CameraCallback;
}
namespace UnityEngine {
struct __Camera__GateFitMode;
}
namespace UnityEngine {
struct __Camera__GateFitParameters;
}
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct __Camera__ProjectionMatrixMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
namespace UnityEngine {
struct __Camera__SceneViewFilterMode;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
// Forward declare root types
namespace UnityEngine {
struct __Camera__GateFitMode;
}
namespace UnityEngine {
struct __Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct __Camera__ProjectionMatrixMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestMode;
}
namespace UnityEngine {
struct __Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct __Camera__SceneViewFilterMode;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class __Camera__CameraCallback;
}
namespace UnityEngine {
struct __Camera__GateFitParameters;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__Camera__GateFitMode);
MARK_VAL_T(::UnityEngine::__Camera__MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::__Camera__ProjectionMatrixMode);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestMode);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequestOutputSpace);
MARK_VAL_T(::UnityEngine::__Camera__SceneViewFilterMode);
MARK_VAL_T(::UnityEngine::__Camera__StereoscopicEye);
MARK_REF_PTR_T(::UnityEngine::Camera);
MARK_REF_PTR_T(::UnityEngine::__Camera__CameraCallback);
MARK_VAL_T(::UnityEngine::__Camera__GateFitParameters);
MARK_VAL_T(::UnityEngine::__Camera__RenderRequest);
// Type: ::ProjectionMatrixMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::ProjectionMatrixMode
struct CORDL_TYPE __Camera__ProjectionMatrixMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__ProjectionMatrixMode_Unwrapped
enum struct ____Camera__ProjectionMatrixMode_Unwrapped : int32_t {
__E_Explicit = static_cast<int32_t>(0x0),
__E_Implicit = static_cast<int32_t>(0x1),
__E_PhysicalPropertiesBased = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__ProjectionMatrixMode_Unwrapped () const noexcept {
return static_cast<____Camera__ProjectionMatrixMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__ProjectionMatrixMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__ProjectionMatrixMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Explicit value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__ProjectionMatrixMode const Explicit;

/// @brief Field Implicit value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__ProjectionMatrixMode const Implicit;

/// @brief Field PhysicalPropertiesBased value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Camera__ProjectionMatrixMode const PhysicalPropertiesBased;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__ProjectionMatrixMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__ProjectionMatrixMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::GateFitMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::GateFitMode
struct CORDL_TYPE __Camera__GateFitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__GateFitMode_Unwrapped
enum struct ____Camera__GateFitMode_Unwrapped : int32_t {
__E_Vertical = static_cast<int32_t>(0x1),
__E_Horizontal = static_cast<int32_t>(0x2),
__E_Fill = static_cast<int32_t>(0x3),
__E_Overscan = static_cast<int32_t>(0x4),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__GateFitMode_Unwrapped () const noexcept {
return static_cast<____Camera__GateFitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__GateFitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__GateFitMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Fill value: static_cast<int32_t>(0x3)
static ::UnityEngine::__Camera__GateFitMode const Fill;

/// @brief Field Horizontal value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Camera__GateFitMode const Horizontal;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__GateFitMode const None;

/// @brief Field Overscan value: static_cast<int32_t>(0x4)
static ::UnityEngine::__Camera__GateFitMode const Overscan;

/// @brief Field Vertical value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__GateFitMode const Vertical;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__GateFitMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::GateFitParameters
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::GateFitParameters
struct CORDL_TYPE __Camera__GateFitParameters {
public:
// Declarations
 __declspec(property(get=get_aspect)) float_t  aspect;

 __declspec(property(get=get_mode)) ::UnityEngine::__Camera__GateFitMode  mode;

/// @brief Method get_aspect, addr 0x47d70d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_aspect() ;

/// @brief Method get_mode, addr 0x47d70cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::__Camera__GateFitMode get_mode() ;

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__GateFitParameters() ;

// Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::__Camera__GateFitMode", modifiers: "", def_value: None }, CppParam { name: "_aspect_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr __Camera__GateFitParameters(::UnityEngine::__Camera__GateFitMode  _mode_k__BackingField, float_t  _aspect_k__BackingField) noexcept;

/// @brief Field <mode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::__Camera__GateFitMode  _mode_k__BackingField;

/// @brief Field <aspect>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _aspect_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__GateFitParameters, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitParameters, _mode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__GateFitParameters, _aspect_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::StereoscopicEye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::StereoscopicEye
struct CORDL_TYPE __Camera__StereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__StereoscopicEye_Unwrapped
enum struct ____Camera__StereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__StereoscopicEye_Unwrapped () const noexcept {
return static_cast<____Camera__StereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__StereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__StereoscopicEye(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Left value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__StereoscopicEye const Left;

/// @brief Field Right value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__StereoscopicEye const Right;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__StereoscopicEye, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__StereoscopicEye, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::MonoOrStereoscopicEye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::MonoOrStereoscopicEye
struct CORDL_TYPE __Camera__MonoOrStereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__MonoOrStereoscopicEye_Unwrapped
enum struct ____Camera__MonoOrStereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Mono = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__MonoOrStereoscopicEye_Unwrapped () const noexcept {
return static_cast<____Camera__MonoOrStereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__MonoOrStereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__MonoOrStereoscopicEye(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Left value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Left;

/// @brief Field Mono value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Mono;

/// @brief Field Right value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__MonoOrStereoscopicEye const Right;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__MonoOrStereoscopicEye, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__MonoOrStereoscopicEye, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::SceneViewFilterMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::SceneViewFilterMode
struct CORDL_TYPE __Camera__SceneViewFilterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__SceneViewFilterMode_Unwrapped
enum struct ____Camera__SceneViewFilterMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_ShowFiltered = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__SceneViewFilterMode_Unwrapped () const noexcept {
return static_cast<____Camera__SceneViewFilterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__SceneViewFilterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__SceneViewFilterMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__SceneViewFilterMode const Off;

/// @brief Field ShowFiltered value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__SceneViewFilterMode const ShowFiltered;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__SceneViewFilterMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__SceneViewFilterMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::RenderRequestMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::RenderRequestMode
struct CORDL_TYPE __Camera__RenderRequestMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__RenderRequestMode_Unwrapped
enum struct ____Camera__RenderRequestMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ObjectId = static_cast<int32_t>(0x1),
__E_Depth = static_cast<int32_t>(0x2),
__E_VertexNormal = static_cast<int32_t>(0x3),
__E_WorldPosition = static_cast<int32_t>(0x4),
__E_EntityId = static_cast<int32_t>(0x5),
__E_BaseColor = static_cast<int32_t>(0x6),
__E_SpecularColor = static_cast<int32_t>(0x7),
__E_Metallic = static_cast<int32_t>(0x8),
__E_Emission = static_cast<int32_t>(0x9),
__E_Normal = static_cast<int32_t>(0xa),
__E_Smoothness = static_cast<int32_t>(0xb),
__E_Occlusion = static_cast<int32_t>(0xc),
__E_DiffuseColor = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__RenderRequestMode_Unwrapped () const noexcept {
return static_cast<____Camera__RenderRequestMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__RenderRequestMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__RenderRequestMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field BaseColor value: static_cast<int32_t>(0x6)
static ::UnityEngine::__Camera__RenderRequestMode const BaseColor;

/// @brief Field Depth value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Camera__RenderRequestMode const Depth;

/// @brief Field DiffuseColor value: static_cast<int32_t>(0xd)
static ::UnityEngine::__Camera__RenderRequestMode const DiffuseColor;

/// @brief Field Emission value: static_cast<int32_t>(0x9)
static ::UnityEngine::__Camera__RenderRequestMode const Emission;

/// @brief Field EntityId value: static_cast<int32_t>(0x5)
static ::UnityEngine::__Camera__RenderRequestMode const EntityId;

/// @brief Field Metallic value: static_cast<int32_t>(0x8)
static ::UnityEngine::__Camera__RenderRequestMode const Metallic;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__RenderRequestMode const None;

/// @brief Field Normal value: static_cast<int32_t>(0xa)
static ::UnityEngine::__Camera__RenderRequestMode const Normal;

/// @brief Field ObjectId value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__RenderRequestMode const ObjectId;

/// @brief Field Occlusion value: static_cast<int32_t>(0xc)
static ::UnityEngine::__Camera__RenderRequestMode const Occlusion;

/// @brief Field Smoothness value: static_cast<int32_t>(0xb)
static ::UnityEngine::__Camera__RenderRequestMode const Smoothness;

/// @brief Field SpecularColor value: static_cast<int32_t>(0x7)
static ::UnityEngine::__Camera__RenderRequestMode const SpecularColor;

/// @brief Field VertexNormal value: static_cast<int32_t>(0x3)
static ::UnityEngine::__Camera__RenderRequestMode const VertexNormal;

/// @brief Field WorldPosition value: static_cast<int32_t>(0x4)
static ::UnityEngine::__Camera__RenderRequestMode const WorldPosition;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequestMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequestMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::RenderRequestOutputSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::RenderRequestOutputSpace
struct CORDL_TYPE __Camera__RenderRequestOutputSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Camera__RenderRequestOutputSpace_Unwrapped
enum struct ____Camera__RenderRequestOutputSpace_Unwrapped : int32_t {
__E_ScreenSpace = static_cast<int32_t>(0xffffffff),
__E_UV0 = static_cast<int32_t>(0x0),
__E_UV1 = static_cast<int32_t>(0x1),
__E_UV2 = static_cast<int32_t>(0x2),
__E_UV3 = static_cast<int32_t>(0x3),
__E_UV4 = static_cast<int32_t>(0x4),
__E_UV5 = static_cast<int32_t>(0x5),
__E_UV6 = static_cast<int32_t>(0x6),
__E_UV7 = static_cast<int32_t>(0x7),
__E_UV8 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Camera__RenderRequestOutputSpace_Unwrapped () const noexcept {
return static_cast<____Camera__RenderRequestOutputSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Camera__RenderRequestOutputSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Camera__RenderRequestOutputSpace(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field ScreenSpace value: static_cast<int32_t>(0xffffffff)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const ScreenSpace;

/// @brief Field UV0 value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV0;

/// @brief Field UV1 value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV1;

/// @brief Field UV2 value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV2;

/// @brief Field UV3 value: static_cast<int32_t>(0x3)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV3;

/// @brief Field UV4 value: static_cast<int32_t>(0x4)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV4;

/// @brief Field UV5 value: static_cast<int32_t>(0x5)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV5;

/// @brief Field UV6 value: static_cast<int32_t>(0x6)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV6;

/// @brief Field UV7 value: static_cast<int32_t>(0x7)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV7;

/// @brief Field UV8 value: static_cast<int32_t>(0x8)
static ::UnityEngine::__Camera__RenderRequestOutputSpace const UV8;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequestOutputSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequestOutputSpace, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::RenderRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Camera::RenderRequest
struct CORDL_TYPE __Camera__RenderRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __Camera__RenderRequest() ;

// Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "::UnityEngine::__Camera__RenderRequestMode", modifiers: "", def_value: None }, CppParam { name: "m_ResultRT", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_OutputSpace", ty: "::UnityEngine::__Camera__RenderRequestOutputSpace", modifiers: "", def_value: None }]
constexpr __Camera__RenderRequest(::UnityEngine::__Camera__RenderRequestMode  m_CameraRenderMode, ::UnityW<::UnityEngine::RenderTexture>  m_ResultRT, ::UnityEngine::__Camera__RenderRequestOutputSpace  m_OutputSpace) noexcept;

/// @brief Field m_CameraRenderMode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::__Camera__RenderRequestMode  m_CameraRenderMode;

/// @brief Field m_ResultRT, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  m_ResultRT;

/// @brief Field m_OutputSpace, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::__Camera__RenderRequestOutputSpace  m_OutputSpace;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__RenderRequest, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_CameraRenderMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_ResultRT) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Camera__RenderRequest, m_OutputSpace) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: ::CameraCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Camera::CameraCallback*
class CORDL_TYPE __Camera__CameraCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x47d7178, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Camera*  cam) ;

static inline ::UnityEngine::__Camera__CameraCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x47d70dc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Camera__CameraCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Camera__CameraCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Camera__CameraCallback(__Camera__CameraCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Camera__CameraCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Camera__CameraCallback(__Camera__CameraCallback const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Camera__CameraCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::Camera
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Camera*
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
// Declarations
using CameraCallback = ::UnityEngine::__Camera__CameraCallback;

using GateFitMode = ::UnityEngine::__Camera__GateFitMode;

using GateFitParameters = ::UnityEngine::__Camera__GateFitParameters;

using MonoOrStereoscopicEye = ::UnityEngine::__Camera__MonoOrStereoscopicEye;

using ProjectionMatrixMode = ::UnityEngine::__Camera__ProjectionMatrixMode;

using RenderRequest = ::UnityEngine::__Camera__RenderRequest;

using RenderRequestMode = ::UnityEngine::__Camera__RenderRequestMode;

using RenderRequestOutputSpace = ::UnityEngine::__Camera__RenderRequestOutputSpace;

using SceneViewFilterMode = ::UnityEngine::__Camera__SceneViewFilterMode;

using StereoscopicEye = ::UnityEngine::__Camera__StereoscopicEye;

 __declspec(property(get=get_activeTexture)) ::UnityW<::UnityEngine::RenderTexture>  activeTexture;

 __declspec(property(get=get_actualRenderingPath)) ::UnityEngine::RenderingPath  actualRenderingPath;

 __declspec(property(get=get_allowDynamicResolution, put=set_allowDynamicResolution)) bool  allowDynamicResolution;

 __declspec(property(get=get_allowHDR, put=set_allowHDR)) bool  allowHDR;

 __declspec(property(get=get_allowMSAA, put=set_allowMSAA)) bool  allowMSAA;

 __declspec(property(get=get_anamorphism, put=set_anamorphism)) float_t  anamorphism;

 __declspec(property(get=get_aperture, put=set_aperture)) float_t  aperture;

 __declspec(property(get=get_areVRStereoViewMatricesWithinSingleCullTolerance)) bool  areVRStereoViewMatricesWithinSingleCullTolerance;

 __declspec(property(get=get_aspect, put=set_aspect)) float_t  aspect;

 __declspec(property(get=get_backgroundColor, put=set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_barrelClipping, put=set_barrelClipping)) float_t  barrelClipping;

 __declspec(property(get=get_bladeCount, put=set_bladeCount)) int32_t  bladeCount;

 __declspec(property(get=get_cameraToWorldMatrix)) ::UnityEngine::Matrix4x4  cameraToWorldMatrix;

 __declspec(property(get=get_cameraType, put=set_cameraType)) ::UnityEngine::CameraType  cameraType;

 __declspec(property(get=get_clearFlags, put=set_clearFlags)) ::UnityEngine::CameraClearFlags  clearFlags;

 __declspec(property(get=get_clearStencilAfterLightingPass, put=set_clearStencilAfterLightingPass)) bool  clearStencilAfterLightingPass;

 __declspec(property(get=get_commandBufferCount)) int32_t  commandBufferCount;

 __declspec(property(get=get_cullingMask, put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(get=get_cullingMatrix, put=set_cullingMatrix)) ::UnityEngine::Matrix4x4  cullingMatrix;

 __declspec(property(get=get_curvature, put=set_curvature)) ::UnityEngine::Vector2  curvature;

 __declspec(property(get=get_depth, put=set_depth)) float_t  depth;

 __declspec(property(get=get_depthTextureMode, put=set_depthTextureMode)) ::UnityEngine::DepthTextureMode  depthTextureMode;

 __declspec(property(get=get_eventMask, put=set_eventMask)) int32_t  eventMask;

 __declspec(property(get=get_farClipPlane, put=set_farClipPlane)) float_t  farClipPlane;

 __declspec(property(get=get_fieldOfView, put=set_fieldOfView)) float_t  fieldOfView;

 __declspec(property(get=get_focalLength, put=set_focalLength)) float_t  focalLength;

 __declspec(property(get=get_focusDistance, put=set_focusDistance)) float_t  focusDistance;

 __declspec(property(get=get_forceIntoRenderTexture, put=set_forceIntoRenderTexture)) bool  forceIntoRenderTexture;

 __declspec(property(get=get_gateFit, put=set_gateFit)) ::UnityEngine::__Camera__GateFitMode  gateFit;

 __declspec(property(get=get_iso, put=set_iso)) int32_t  iso;

 __declspec(property(get=get_layerCullDistances, put=set_layerCullDistances)) ::ArrayW<float_t,::Array<float_t>*>  layerCullDistances;

 __declspec(property(get=get_layerCullSpherical, put=set_layerCullSpherical)) bool  layerCullSpherical;

 __declspec(property(get=get_lensShift, put=set_lensShift)) ::UnityEngine::Vector2  lensShift;

 __declspec(property(get=get_nearClipPlane, put=set_nearClipPlane)) float_t  nearClipPlane;

 __declspec(property(get=get_nonJitteredProjectionMatrix, put=set_nonJitteredProjectionMatrix)) ::UnityEngine::Matrix4x4  nonJitteredProjectionMatrix;

/// @brief Field onPostRender, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_onPostRender, put=setStaticF_onPostRender)) ::UnityEngine::__Camera__CameraCallback*  onPostRender;

/// @brief Field onPreCull, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_onPreCull, put=setStaticF_onPreCull)) ::UnityEngine::__Camera__CameraCallback*  onPreCull;

/// @brief Field onPreRender, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_onPreRender, put=setStaticF_onPreRender)) ::UnityEngine::__Camera__CameraCallback*  onPreRender;

 __declspec(property(get=get_opaqueSortMode, put=set_opaqueSortMode)) ::UnityEngine::Rendering::OpaqueSortMode  opaqueSortMode;

 __declspec(property(get=get_orthographic, put=set_orthographic)) bool  orthographic;

 __declspec(property(get=get_orthographicSize, put=set_orthographicSize)) float_t  orthographicSize;

 __declspec(property(get=get_overrideSceneCullingMask, put=set_overrideSceneCullingMask)) uint64_t  overrideSceneCullingMask;

 __declspec(property(get=get_pixelHeight)) int32_t  pixelHeight;

 __declspec(property(get=get_pixelRect, put=set_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_pixelWidth)) int32_t  pixelWidth;

 __declspec(property(get=get_previousViewProjectionMatrix)) ::UnityEngine::Matrix4x4  previousViewProjectionMatrix;

 __declspec(property(get=get_projectionMatrix, put=set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

 __declspec(property(get=get_projectionMatrixMode)) ::UnityEngine::__Camera__ProjectionMatrixMode  projectionMatrixMode;

 __declspec(property(get=get_rect, put=set_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(get=get_renderingPath, put=set_renderingPath)) ::UnityEngine::RenderingPath  renderingPath;

 __declspec(property(get=get_scaledPixelHeight)) int32_t  scaledPixelHeight;

 __declspec(property(get=get_scaledPixelWidth)) int32_t  scaledPixelWidth;

 __declspec(property(get=get_scene, put=set_scene)) ::UnityEngine::SceneManagement::Scene  scene;

 __declspec(property(get=get_sceneCullingMask)) uint64_t  sceneCullingMask;

 __declspec(property(get=get_sceneViewFilterMode)) ::UnityEngine::__Camera__SceneViewFilterMode  sceneViewFilterMode;

 __declspec(property(get=get_sensorSize, put=set_sensorSize)) ::UnityEngine::Vector2  sensorSize;

 __declspec(property(get=get_shutterSpeed, put=set_shutterSpeed)) float_t  shutterSpeed;

 __declspec(property(get=get_skyboxMaterial)) ::UnityW<::UnityEngine::Material>  skyboxMaterial;

 __declspec(property(get=get_stereoActiveEye)) ::UnityEngine::__Camera__MonoOrStereoscopicEye  stereoActiveEye;

 __declspec(property(get=get_stereoConvergence, put=set_stereoConvergence)) float_t  stereoConvergence;

 __declspec(property(get=get_stereoEnabled)) bool  stereoEnabled;

 __declspec(property(get=get_stereoSeparation, put=set_stereoSeparation)) float_t  stereoSeparation;

 __declspec(property(get=get_stereoTargetEye, put=set_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEye;

 __declspec(property(get=get_targetDisplay, put=set_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_targetTexture, put=set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture>  targetTexture;

 __declspec(property(get=get_transparencySortAxis, put=set_transparencySortAxis)) ::UnityEngine::Vector3  transparencySortAxis;

 __declspec(property(get=get_transparencySortMode, put=set_transparencySortMode)) ::UnityEngine::TransparencySortMode  transparencySortMode;

 __declspec(property(get=get_useJitteredProjectionMatrixForTransparentRendering, put=set_useJitteredProjectionMatrixForTransparentRendering)) bool  useJitteredProjectionMatrixForTransparentRendering;

 __declspec(property(get=get_useOcclusionCulling, put=set_useOcclusionCulling)) bool  useOcclusionCulling;

 __declspec(property(get=get_usePhysicalProperties, put=set_usePhysicalProperties)) bool  usePhysicalProperties;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

 __declspec(property(get=get_worldToCameraMatrix, put=set_worldToCameraMatrix)) ::UnityEngine::Matrix4x4  worldToCameraMatrix;

/// @brief Method AddCommandBuffer, addr 0x47d6a90, size 0x134, virtual false, abstract: false, final false
inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method AddCommandBufferAsync, addr 0x47d6bc4, size 0x144, virtual false, abstract: false, final false
inline void AddCommandBufferAsync(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::ComputeQueueType  queueType) ;

/// @brief Method AddCommandBufferAsyncImpl, addr 0x47d69e0, size 0x5c, virtual false, abstract: false, final false
inline void AddCommandBufferAsyncImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::ComputeQueueType  queueType) ;

/// @brief Method AddCommandBufferImpl, addr 0x47d698c, size 0x54, virtual false, abstract: false, final false
inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CalculateFrustumCorners, addr 0x47d54bc, size 0xb4, virtual false, abstract: false, final false
inline void CalculateFrustumCorners(::UnityEngine::Rect  viewport, float_t  z, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  outCorners) ;

/// @brief Method CalculateFrustumCornersInternal, addr 0x47d53d4, size 0x7c, virtual false, abstract: false, final false
inline void CalculateFrustumCornersInternal(::UnityEngine::Rect  viewport, float_t  z, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>  outCorners) ;

/// @brief Method CalculateFrustumCornersInternal_Injected, addr 0x47d5450, size 0x6c, virtual false, abstract: false, final false
inline void CalculateFrustumCornersInternal_Injected(ByRef<::UnityEngine::Rect>  viewport, float_t  z, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>  outCorners) ;

/// @brief Method CalculateObliqueMatrix, addr 0x47d4ae8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4  clipPlane) ;

/// @brief Method CalculateObliqueMatrix_Injected, addr 0x47d4b60, size 0x54, virtual false, abstract: false, final false
inline void CalculateObliqueMatrix_Injected(ByRef<::UnityEngine::Vector4>  clipPlane, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method CalculateProjectionMatrixFromPhysicalProperties, addr 0x47d568c, size 0xc, virtual false, abstract: false, final false
static inline void CalculateProjectionMatrixFromPhysicalProperties(ByRef<::UnityEngine::Matrix4x4>  output, float_t  focalLength, ::UnityEngine::Vector2  sensorSize, ::UnityEngine::Vector2  lensShift, float_t  nearClip, float_t  farClip, ::UnityEngine::__Camera__GateFitParameters  gateFitParameters) ;

/// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal, addr 0x47d5570, size 0x90, virtual false, abstract: false, final false
static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal(ByRef<::UnityEngine::Matrix4x4>  output, float_t  focalLength, ::UnityEngine::Vector2  sensorSize, ::UnityEngine::Vector2  lensShift, float_t  nearClip, float_t  farClip, float_t  gateAspect, ::UnityEngine::__Camera__GateFitMode  gateFitMode) ;

/// @brief Method CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected, addr 0x47d5600, size 0x8c, virtual false, abstract: false, final false
static inline void CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(ByRef<::UnityEngine::Matrix4x4>  output, float_t  focalLength, ByRef<::UnityEngine::Vector2>  sensorSize, ByRef<::UnityEngine::Vector2>  lensShift, float_t  nearClip, float_t  farClip, float_t  gateAspect, ::UnityEngine::__Camera__GateFitMode  gateFitMode) ;

/// @brief Method CopyFrom, addr 0x47d688c, size 0x44, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::Camera*  other) ;

/// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x47d5ce8, size 0x44, virtual false, abstract: false, final false
inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::__Camera__StereoscopicEye  eye) ;

/// @brief Method FieldOfViewToFocalLength, addr 0x47d56d8, size 0x40, virtual false, abstract: false, final false
static inline float_t FieldOfViewToFocalLength(float_t  fieldOfView, float_t  sensorSize) ;

/// @brief Method FireOnPostRender, addr 0x47d6f58, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPostRender(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreCull, addr 0x47d6e80, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreCull(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreRender, addr 0x47d6eec, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreRender(::UnityEngine::Camera*  cam) ;

/// @brief Method FocalLengthToFieldOfView, addr 0x47d5698, size 0x40, virtual false, abstract: false, final false
static inline float_t FocalLengthToFieldOfView(float_t  focalLength, float_t  sensorSize) ;

/// @brief Method GetAllCameras, addr 0x47d60f0, size 0xd8, virtual false, abstract: false, final false
static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>  cameras) ;

/// @brief Method GetAllCamerasCount, addr 0x47d5fc4, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasCount() ;

/// @brief Method GetAllCamerasImpl, addr 0x47d5fec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl(ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>  cam) ;

/// @brief Method GetCameraBufferWarnings, addr 0x47d44ac, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetCameraBufferWarnings() ;

/// @brief Method GetCommandBuffers, addr 0x47d6e3c, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::CommandBuffer*,::Array<::UnityEngine::Rendering::CommandBuffer*>*> GetCommandBuffers(::UnityEngine::Rendering::CameraEvent  evt) ;

/// @brief Method GetCullingParameters_Internal, addr 0x47d7018, size 0x5c, virtual false, abstract: false, final false
static inline bool GetCullingParameters_Internal(::UnityEngine::Camera*  camera, bool  stereoAware, ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, int32_t  managedCullingParametersSize) ;

/// @brief Method GetFilterMode, addr 0x47d6354, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetFilterMode() ;

/// @brief Method GetFrustumPlaneSizeAt, addr 0x47d507c, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetFrustumPlaneSizeAt(float_t  distance) ;

/// @brief Method GetFrustumPlaneSizeAt_Injected, addr 0x47d50e0, size 0x54, virtual false, abstract: false, final false
inline void GetFrustumPlaneSizeAt_Injected(float_t  distance, ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method GetGateFittedFieldOfView, addr 0x47d3d4c, size 0x3c, virtual false, abstract: false, final false
inline float_t GetGateFittedFieldOfView() ;

/// @brief Method GetGateFittedLensShift, addr 0x47d3d88, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetGateFittedLensShift() ;

/// @brief Method GetGateFittedLensShift_Injected, addr 0x47d3dd4, size 0x44, virtual false, abstract: false, final false
inline void GetGateFittedLensShift_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method GetLayerCullDistances, addr 0x47d2df0, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetLayerCullDistances() ;

/// @brief Method GetLocalSpaceAim, addr 0x47d3e18, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalSpaceAim() ;

/// @brief Method GetLocalSpaceAim_Injected, addr 0x47d3e74, size 0x44, virtual false, abstract: false, final false
inline void GetLocalSpaceAim_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x47d5b48, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye  eye) ;

/// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x47d5bc4, size 0x54, virtual false, abstract: false, final false
inline void GetStereoNonJitteredProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetStereoProjectionMatrix, addr 0x47d5d2c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye  eye) ;

/// @brief Method GetStereoProjectionMatrix_Injected, addr 0x47d5da8, size 0x54, virtual false, abstract: false, final false
inline void GetStereoProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetStereoViewMatrix, addr 0x47d5c18, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::__Camera__StereoscopicEye  eye) ;

/// @brief Method GetStereoViewMatrix_Injected, addr 0x47d5c94, size 0x54, virtual false, abstract: false, final false
inline void GetStereoViewMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method HorizontalToVerticalFieldOfView, addr 0x47d5718, size 0x40, virtual false, abstract: false, final false
static inline float_t HorizontalToVerticalFieldOfView(float_t  horizontalFieldOfView, float_t  aspectRatio) ;

static inline ::UnityEngine::Camera* New_ctor() ;

/// @brief Method OnlyUsedForTesting1, addr 0x47d6fc4, size 0x4, virtual false, abstract: false, final false
inline void OnlyUsedForTesting1() ;

/// @brief Method OnlyUsedForTesting2, addr 0x47d6fc8, size 0x4, virtual false, abstract: false, final false
inline void OnlyUsedForTesting2() ;

/// @brief Method RemoveAllCommandBuffers, addr 0x47d6950, size 0x3c, virtual false, abstract: false, final false
inline void RemoveAllCommandBuffers() ;

/// @brief Method RemoveCommandBuffer, addr 0x47d6d08, size 0x134, virtual false, abstract: false, final false
inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferImpl, addr 0x47d6a3c, size 0x54, virtual false, abstract: false, final false
inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBuffers, addr 0x47d690c, size 0x44, virtual false, abstract: false, final false
inline void RemoveCommandBuffers(::UnityEngine::Rendering::CameraEvent  evt) ;

/// @brief Method Render, addr 0x47d6484, size 0x3c, virtual false, abstract: false, final false
inline void Render() ;

/// @brief Method RenderDontRestore, addr 0x47d6514, size 0x3c, virtual false, abstract: false, final false
inline void RenderDontRestore() ;

/// @brief Method RenderToCubemap, addr 0x47d6270, size 0x48, virtual false, abstract: false, final false
inline bool RenderToCubemap(::UnityEngine::Cubemap*  cubemap) ;

/// @brief Method RenderToCubemap, addr 0x47d621c, size 0x54, virtual false, abstract: false, final false
inline bool RenderToCubemap(::UnityEngine::Cubemap*  cubemap, int32_t  faceMask) ;

/// @brief Method RenderToCubemap, addr 0x47d630c, size 0x48, virtual false, abstract: false, final false
inline bool RenderToCubemap(::UnityEngine::RenderTexture*  cubemap) ;

/// @brief Method RenderToCubemap, addr 0x47d62b8, size 0x54, virtual false, abstract: false, final false
inline bool RenderToCubemap(::UnityEngine::RenderTexture*  cubemap, int32_t  faceMask) ;

/// @brief Method RenderToCubemap, addr 0x47d6428, size 0x5c, virtual false, abstract: false, final false
inline bool RenderToCubemap(::UnityEngine::RenderTexture*  cubemap, int32_t  faceMask, ::UnityEngine::__Camera__MonoOrStereoscopicEye  stereoEye) ;

/// @brief Method RenderToCubemapEyeImpl, addr 0x47d63cc, size 0x5c, virtual false, abstract: false, final false
inline bool RenderToCubemapEyeImpl(::UnityEngine::RenderTexture*  cubemap, int32_t  faceMask, ::UnityEngine::__Camera__MonoOrStereoscopicEye  stereoEye) ;

/// @brief Method RenderToCubemapImpl, addr 0x47d61c8, size 0x54, virtual false, abstract: false, final false
inline bool RenderToCubemapImpl(::UnityEngine::Texture*  tex, int32_t  faceMask) ;

/// @brief Method RenderWithShader, addr 0x47d64c0, size 0x54, virtual false, abstract: false, final false
inline void RenderWithShader(::UnityEngine::Shader*  shader, ::StringW  replacementTag) ;

/// @brief Method Reset, addr 0x47d2354, size 0x3c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetAspect, addr 0x47d2a1c, size 0x3c, virtual false, abstract: false, final false
inline void ResetAspect() ;

/// @brief Method ResetCullingMatrix, addr 0x47d310c, size 0x3c, virtual false, abstract: false, final false
inline void ResetCullingMatrix() ;

/// @brief Method ResetProjectionMatrix, addr 0x47d4aac, size 0x3c, virtual false, abstract: false, final false
inline void ResetProjectionMatrix() ;

/// @brief Method ResetReplacementShader, addr 0x47d3450, size 0x3c, virtual false, abstract: false, final false
inline void ResetReplacementShader() ;

/// @brief Method ResetStereoProjectionMatrices, addr 0x47d5ea4, size 0x3c, virtual false, abstract: false, final false
inline void ResetStereoProjectionMatrices() ;

/// @brief Method ResetStereoViewMatrices, addr 0x47d5f88, size 0x3c, virtual false, abstract: false, final false
inline void ResetStereoViewMatrices() ;

/// @brief Method ResetTransparencySortSettings, addr 0x47d28d0, size 0x3c, virtual false, abstract: false, final false
inline void ResetTransparencySortSettings() ;

/// @brief Method ResetWorldToCameraMatrix, addr 0x47d4a70, size 0x3c, virtual false, abstract: false, final false
inline void ResetWorldToCameraMatrix() ;

/// @brief Method ScreenPointToRay, addr 0x47d5284, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay, addr 0x47d5390, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ScreenPointToRay, addr 0x47d5358, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay_Injected, addr 0x47d52fc, size 0x5c, virtual false, abstract: false, final false
inline void ScreenPointToRay_Injected(ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Ray>  ret) ;

/// @brief Method ScreenToViewportPoint, addr 0x47d4f04, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToViewportPoint_Injected, addr 0x47d4f6c, size 0x54, virtual false, abstract: false, final false
inline void ScreenToViewportPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method ScreenToWorldPoint, addr 0x47d4efc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToWorldPoint, addr 0x47d4e18, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenToWorldPoint_Injected, addr 0x47d4e88, size 0x5c, virtual false, abstract: false, final false
inline void ScreenToWorldPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method SetLayerCullDistances, addr 0x47d2e2c, size 0x44, virtual false, abstract: false, final false
inline void SetLayerCullDistances(::ArrayW<float_t,::Array<float_t>*>  d) ;

/// @brief Method SetReplacementShader, addr 0x47d33fc, size 0x54, virtual false, abstract: false, final false
inline void SetReplacementShader(::UnityEngine::Shader*  shader, ::StringW  replacementTag) ;

/// @brief Method SetStereoProjectionMatrix, addr 0x47d5dfc, size 0x54, virtual false, abstract: false, final false
inline void SetStereoProjectionMatrix(::UnityEngine::__Camera__StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoProjectionMatrix_Injected, addr 0x47d5e50, size 0x54, virtual false, abstract: false, final false
inline void SetStereoProjectionMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method SetStereoViewMatrix, addr 0x47d5ee0, size 0x54, virtual false, abstract: false, final false
inline void SetStereoViewMatrix(::UnityEngine::__Camera__StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoViewMatrix_Injected, addr 0x47d5f34, size 0x54, virtual false, abstract: false, final false
inline void SetStereoViewMatrix_Injected(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method SetTargetBuffers, addr 0x47d44a8, size 0x4, virtual false, abstract: false, final false
inline void SetTargetBuffers(::ArrayW<::UnityEngine::RenderBuffer,::Array<::UnityEngine::RenderBuffer>*>  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer) ;

/// @brief Method SetTargetBuffers, addr 0x47d43f8, size 0x4, virtual false, abstract: false, final false
inline void SetTargetBuffers(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer) ;

/// @brief Method SetTargetBuffersImpl, addr 0x47d434c, size 0x58, virtual false, abstract: false, final false
inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth) ;

/// @brief Method SetTargetBuffersImpl_Injected, addr 0x47d43a4, size 0x54, virtual false, abstract: false, final false
inline void SetTargetBuffersImpl_Injected(ByRef<::UnityEngine::RenderBuffer>  color, ByRef<::UnityEngine::RenderBuffer>  depth) ;

/// @brief Method SetTargetBuffersMRTImpl, addr 0x47d43fc, size 0x58, virtual false, abstract: false, final false
inline void SetTargetBuffersMRTImpl(::ArrayW<::UnityEngine::RenderBuffer,::Array<::UnityEngine::RenderBuffer>*>  color, ::UnityEngine::RenderBuffer  depth) ;

/// @brief Method SetTargetBuffersMRTImpl_Injected, addr 0x47d4454, size 0x54, virtual false, abstract: false, final false
inline void SetTargetBuffersMRTImpl_Injected(::ArrayW<::UnityEngine::RenderBuffer,::Array<::UnityEngine::RenderBuffer>*>  color, ByRef<::UnityEngine::RenderBuffer>  depth) ;

/// @brief Method SetupCurrent, addr 0x47d6850, size 0x3c, virtual false, abstract: false, final false
static inline void SetupCurrent(::UnityEngine::Camera*  cur) ;

/// @brief Method SubmitBuiltInObjectIDRenderRequest, addr 0x47d67e4, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> SubmitBuiltInObjectIDRenderRequest(::UnityEngine::RenderTexture*  target, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename RequestData>
inline void SubmitRenderRequest(RequestData  renderRequest) ;

/// @brief Method SubmitRenderRequests, addr 0x47d6550, size 0x148, virtual false, abstract: false, final false
inline void SubmitRenderRequests(::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*  renderRequests) ;

/// @brief Method SubmitRenderRequestsInternal, addr 0x47d67a0, size 0x44, virtual false, abstract: false, final false
inline void SubmitRenderRequestsInternal(::System::Object*  requests) ;

/// @brief Method TryGetCullingParameters, addr 0x47d6fcc, size 0x4c, virtual false, abstract: false, final false
inline bool TryGetCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters) ;

/// @brief Method TryGetCullingParameters, addr 0x47d7074, size 0x58, virtual false, abstract: false, final false
inline bool TryGetCullingParameters(bool  stereoAware, ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters) ;

/// @brief Method VerticalToHorizontalFieldOfView, addr 0x47d5758, size 0x40, virtual false, abstract: false, final false
static inline float_t VerticalToHorizontalFieldOfView(float_t  verticalFieldOfView, float_t  aspectRatio) ;

/// @brief Method ViewportPointToRay, addr 0x47d5134, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay, addr 0x47d5240, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ViewportPointToRay, addr 0x47d5208, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay_Injected, addr 0x47d51ac, size 0x5c, virtual false, abstract: false, final false
inline void ViewportPointToRay_Injected(ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Ray>  ret) ;

/// @brief Method ViewportToScreenPoint, addr 0x47d4fc0, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ViewportToScreenPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ViewportToScreenPoint_Injected, addr 0x47d5028, size 0x54, virtual false, abstract: false, final false
inline void ViewportToScreenPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method ViewportToWorldPoint, addr 0x47d4ef4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ViewportToWorldPoint, addr 0x47d4d4c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportToWorldPoint_Injected, addr 0x47d4dbc, size 0x5c, virtual false, abstract: false, final false
inline void ViewportToWorldPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToScreenPoint, addr 0x47d4ee4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToScreenPoint, addr 0x47d4bb4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToScreenPoint_Injected, addr 0x47d4c24, size 0x5c, virtual false, abstract: false, final false
inline void WorldToScreenPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToViewportPoint, addr 0x47d4eec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToViewportPoint, addr 0x47d4c80, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToViewportPoint_Injected, addr 0x47d4cf0, size 0x5c, virtual false, abstract: false, final false
inline void WorldToViewportPoint_Injected(ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::__Camera__MonoOrStereoscopicEye  eye, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method .ctor, addr 0x47d20f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPostRender() ;

static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreCull() ;

static inline ::UnityEngine::__Camera__CameraCallback* getStaticF_onPreRender() ;

/// @brief Method get_PreviewCullingLayer, addr 0x47d2f4c, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_PreviewCullingLayer() ;

/// @brief Method get_activeTexture, addr 0x47d4290, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_activeTexture() ;

/// @brief Method get_actualRenderingPath, addr 0x47d2318, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderingPath get_actualRenderingPath() ;

/// @brief Method get_allCameras, addr 0x47d6050, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Camera>,::Array<::UnityW<::UnityEngine::Camera>>*> get_allCameras() ;

/// @brief Method get_allCamerasCount, addr 0x47d6028, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_allCamerasCount() ;

/// @brief Method get_allowDynamicResolution, addr 0x47d2490, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowDynamicResolution() ;

/// @brief Method get_allowHDR, addr 0x47d2390, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowHDR() ;

/// @brief Method get_allowMSAA, addr 0x47d2410, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowMSAA() ;

/// @brief Method get_anamorphism, addr 0x47d3a0c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_anamorphism() ;

/// @brief Method get_aperture, addr 0x47d3650, size 0x3c, virtual false, abstract: false, final false
inline float_t get_aperture() ;

/// @brief Method get_areVRStereoViewMatricesWithinSingleCullTolerance, addr 0x47d5a50, size 0x3c, virtual false, abstract: false, final false
inline bool get_areVRStereoViewMatricesWithinSingleCullTolerance() ;

/// @brief Method get_aspect, addr 0x47d2994, size 0x3c, virtual false, abstract: false, final false
inline float_t get_aspect() ;

/// @brief Method get_backgroundColor, addr 0x47d3148, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0x47d31a0, size 0x44, virtual false, abstract: false, final false
inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_barrelClipping, addr 0x47d3984, size 0x3c, virtual false, abstract: false, final false
inline float_t get_barrelClipping() ;

/// @brief Method get_bladeCount, addr 0x47d37e8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_bladeCount() ;

/// @brief Method get_cameraToWorldMatrix, addr 0x47d44e8, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix() ;

/// @brief Method get_cameraToWorldMatrix_Injected, addr 0x47d4554, size 0x44, virtual false, abstract: false, final false
inline void get_cameraToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_cameraType, addr 0x47d2c78, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::CameraType get_cameraType() ;

/// @brief Method get_clearFlags, addr 0x47d327c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::CameraClearFlags get_clearFlags() ;

/// @brief Method get_clearStencilAfterLightingPass, addr 0x47d337c, size 0x3c, virtual false, abstract: false, final false
inline bool get_clearStencilAfterLightingPass() ;

/// @brief Method get_commandBufferCount, addr 0x47d68d0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_commandBufferCount() ;

/// @brief Method get_cullingMask, addr 0x47d2af8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_cullingMask() ;

/// @brief Method get_cullingMatrix, addr 0x47d2fd4, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_cullingMatrix() ;

/// @brief Method get_cullingMatrix_Injected, addr 0x47d3040, size 0x44, virtual false, abstract: false, final false
inline void get_cullingMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_current, addr 0x47d57c0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_current() ;

/// @brief Method get_curvature, addr 0x47d3868, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_curvature() ;

/// @brief Method get_curvature_Injected, addr 0x47d38b4, size 0x44, virtual false, abstract: false, final false
inline void get_curvature_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_depth, addr 0x47d290c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_depth() ;

/// @brief Method get_depthTextureMode, addr 0x47d32fc, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode get_depthTextureMode() ;

/// @brief Method get_eventMask, addr 0x47d2b78, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_eventMask() ;

/// @brief Method get_farClipPlane, addr 0x47d2188, size 0x3c, virtual false, abstract: false, final false
inline float_t get_farClipPlane() ;

/// @brief Method get_fieldOfView, addr 0x47d2210, size 0x3c, virtual false, abstract: false, final false
inline float_t get_fieldOfView() ;

/// @brief Method get_focalLength, addr 0x47d3760, size 0x3c, virtual false, abstract: false, final false
inline float_t get_focalLength() ;

/// @brief Method get_focusDistance, addr 0x47d36d8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_focusDistance() ;

/// @brief Method get_forceIntoRenderTexture, addr 0x47d2510, size 0x3c, virtual false, abstract: false, final false
inline bool get_forceIntoRenderTexture() ;

/// @brief Method get_gateFit, addr 0x47d3ccc, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::__Camera__GateFitMode get_gateFit() ;

/// @brief Method get_iso, addr 0x47d3548, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_iso() ;

/// @brief Method get_layerCullDistances, addr 0x47d2e70, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_layerCullDistances() ;

/// @brief Method get_layerCullSpherical, addr 0x47d2bf8, size 0x3c, virtual false, abstract: false, final false
inline bool get_layerCullSpherical() ;

/// @brief Method get_lensShift, addr 0x47d3bb0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_lensShift() ;

/// @brief Method get_lensShift_Injected, addr 0x47d3bfc, size 0x44, virtual false, abstract: false, final false
inline void get_lensShift_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_main, addr 0x47d5798, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_main() ;

/// @brief Method get_nearClipPlane, addr 0x47d2100, size 0x3c, virtual false, abstract: false, final false
inline float_t get_nearClipPlane() ;

/// @brief Method get_nonJitteredProjectionMatrix, addr 0x47d4808, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_nonJitteredProjectionMatrix() ;

/// @brief Method get_nonJitteredProjectionMatrix_Injected, addr 0x47d4874, size 0x44, virtual false, abstract: false, final false
inline void get_nonJitteredProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_opaqueSortMode, addr 0x47d2698, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode() ;

/// @brief Method get_orthographic, addr 0x47d2618, size 0x3c, virtual false, abstract: false, final false
inline bool get_orthographic() ;

/// @brief Method get_orthographicSize, addr 0x47d2590, size 0x3c, virtual false, abstract: false, final false
inline float_t get_orthographicSize() ;

/// @brief Method get_overrideSceneCullingMask, addr 0x47d2d34, size 0x3c, virtual false, abstract: false, final false
inline uint64_t get_overrideSceneCullingMask() ;

/// @brief Method get_pixelHeight, addr 0x47d415c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_pixelHeight() ;

/// @brief Method get_pixelRect, addr 0x47d3fec, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0x47d4044, size 0x44, virtual false, abstract: false, final false
inline void get_pixelRect_Injected(ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_pixelWidth, addr 0x47d4120, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_pixelWidth() ;

/// @brief Method get_previousViewProjectionMatrix, addr 0x47d49c0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix() ;

/// @brief Method get_previousViewProjectionMatrix_Injected, addr 0x47d4a2c, size 0x44, virtual false, abstract: false, final false
inline void get_previousViewProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_projectionMatrix, addr 0x47d46d0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_projectionMatrix() ;

/// @brief Method get_projectionMatrixMode, addr 0x47d348c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::__Camera__ProjectionMatrixMode get_projectionMatrixMode() ;

/// @brief Method get_projectionMatrix_Injected, addr 0x47d473c, size 0x44, virtual false, abstract: false, final false
inline void get_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_rect, addr 0x47d3eb8, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x47d3f10, size 0x44, virtual false, abstract: false, final false
inline void get_rect_Injected(ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_renderingPath, addr 0x47d2298, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderingPath get_renderingPath() ;

/// @brief Method get_scaledPixelHeight, addr 0x47d41d4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_scaledPixelHeight() ;

/// @brief Method get_scaledPixelWidth, addr 0x47d4198, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_scaledPixelWidth() ;

/// @brief Method get_scene, addr 0x47d57e8, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_scene() ;

/// @brief Method get_sceneCullingMask, addr 0x47d2db4, size 0x3c, virtual false, abstract: false, final false
inline uint64_t get_sceneCullingMask() ;

/// @brief Method get_sceneViewFilterMode, addr 0x47d6390, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::__Camera__SceneViewFilterMode get_sceneViewFilterMode() ;

/// @brief Method get_scene_Injected, addr 0x47d5834, size 0x44, virtual false, abstract: false, final false
inline void get_scene_Injected(ByRef<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method get_sensorSize, addr 0x47d3a94, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_sensorSize() ;

/// @brief Method get_sensorSize_Injected, addr 0x47d3ae0, size 0x44, virtual false, abstract: false, final false
inline void get_sensorSize_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_shutterSpeed, addr 0x47d35c8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_shutterSpeed() ;

/// @brief Method get_skyboxMaterial, addr 0x47d2cf8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_skyboxMaterial() ;

/// @brief Method get_stereoActiveEye, addr 0x47d5b0c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::__Camera__MonoOrStereoscopicEye get_stereoActiveEye() ;

/// @brief Method get_stereoConvergence, addr 0x47d59c8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_stereoConvergence() ;

/// @brief Method get_stereoEnabled, addr 0x47d5904, size 0x3c, virtual false, abstract: false, final false
inline bool get_stereoEnabled() ;

/// @brief Method get_stereoSeparation, addr 0x47d5940, size 0x3c, virtual false, abstract: false, final false
inline float_t get_stereoSeparation() ;

/// @brief Method get_stereoTargetEye, addr 0x47d5a8c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye() ;

/// @brief Method get_targetDisplay, addr 0x47d42cc, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetTexture, addr 0x47d4210, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture() ;

/// @brief Method get_transparencySortAxis, addr 0x47d2798, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_transparencySortAxis() ;

/// @brief Method get_transparencySortAxis_Injected, addr 0x47d27f4, size 0x44, virtual false, abstract: false, final false
inline void get_transparencySortAxis_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_transparencySortMode, addr 0x47d2718, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TransparencySortMode get_transparencySortMode() ;

/// @brief Method get_useJitteredProjectionMatrixForTransparentRendering, addr 0x47d4940, size 0x3c, virtual false, abstract: false, final false
inline bool get_useJitteredProjectionMatrixForTransparentRendering() ;

/// @brief Method get_useOcclusionCulling, addr 0x47d2f54, size 0x3c, virtual false, abstract: false, final false
inline bool get_useOcclusionCulling() ;

/// @brief Method get_usePhysicalProperties, addr 0x47d34c8, size 0x3c, virtual false, abstract: false, final false
inline bool get_usePhysicalProperties() ;

/// @brief Method get_velocity, addr 0x47d2a58, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x47d2ab4, size 0x44, virtual false, abstract: false, final false
inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_worldToCameraMatrix, addr 0x47d4598, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix() ;

/// @brief Method get_worldToCameraMatrix_Injected, addr 0x47d4604, size 0x44, virtual false, abstract: false, final false
inline void get_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

static inline void setStaticF_onPostRender(::UnityEngine::__Camera__CameraCallback*  value) ;

static inline void setStaticF_onPreCull(::UnityEngine::__Camera__CameraCallback*  value) ;

static inline void setStaticF_onPreRender(::UnityEngine::__Camera__CameraCallback*  value) ;

/// @brief Method set_allowDynamicResolution, addr 0x47d24cc, size 0x44, virtual false, abstract: false, final false
inline void set_allowDynamicResolution(bool  value) ;

/// @brief Method set_allowHDR, addr 0x47d23cc, size 0x44, virtual false, abstract: false, final false
inline void set_allowHDR(bool  value) ;

/// @brief Method set_allowMSAA, addr 0x47d244c, size 0x44, virtual false, abstract: false, final false
inline void set_allowMSAA(bool  value) ;

/// @brief Method set_anamorphism, addr 0x47d3a48, size 0x4c, virtual false, abstract: false, final false
inline void set_anamorphism(float_t  value) ;

/// @brief Method set_aperture, addr 0x47d368c, size 0x4c, virtual false, abstract: false, final false
inline void set_aperture(float_t  value) ;

/// @brief Method set_aspect, addr 0x47d29d0, size 0x4c, virtual false, abstract: false, final false
inline void set_aspect(float_t  value) ;

/// @brief Method set_backgroundColor, addr 0x47d31e4, size 0x54, virtual false, abstract: false, final false
inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0x47d3238, size 0x44, virtual false, abstract: false, final false
inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_barrelClipping, addr 0x47d39c0, size 0x4c, virtual false, abstract: false, final false
inline void set_barrelClipping(float_t  value) ;

/// @brief Method set_bladeCount, addr 0x47d3824, size 0x44, virtual false, abstract: false, final false
inline void set_bladeCount(int32_t  value) ;

/// @brief Method set_cameraType, addr 0x47d2cb4, size 0x44, virtual false, abstract: false, final false
inline void set_cameraType(::UnityEngine::CameraType  value) ;

/// @brief Method set_clearFlags, addr 0x47d32b8, size 0x44, virtual false, abstract: false, final false
inline void set_clearFlags(::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_clearStencilAfterLightingPass, addr 0x47d33b8, size 0x44, virtual false, abstract: false, final false
inline void set_clearStencilAfterLightingPass(bool  value) ;

/// @brief Method set_cullingMask, addr 0x47d2b34, size 0x44, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_cullingMatrix, addr 0x47d3084, size 0x44, virtual false, abstract: false, final false
inline void set_cullingMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_cullingMatrix_Injected, addr 0x47d30c8, size 0x44, virtual false, abstract: false, final false
inline void set_cullingMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_curvature, addr 0x47d38f8, size 0x48, virtual false, abstract: false, final false
inline void set_curvature(::UnityEngine::Vector2  value) ;

/// @brief Method set_curvature_Injected, addr 0x47d3940, size 0x44, virtual false, abstract: false, final false
inline void set_curvature_Injected(ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_depth, addr 0x47d2948, size 0x4c, virtual false, abstract: false, final false
inline void set_depth(float_t  value) ;

/// @brief Method set_depthTextureMode, addr 0x47d3338, size 0x44, virtual false, abstract: false, final false
inline void set_depthTextureMode(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_eventMask, addr 0x47d2bb4, size 0x44, virtual false, abstract: false, final false
inline void set_eventMask(int32_t  value) ;

/// @brief Method set_farClipPlane, addr 0x47d21c4, size 0x4c, virtual false, abstract: false, final false
inline void set_farClipPlane(float_t  value) ;

/// @brief Method set_fieldOfView, addr 0x47d224c, size 0x4c, virtual false, abstract: false, final false
inline void set_fieldOfView(float_t  value) ;

/// @brief Method set_focalLength, addr 0x47d379c, size 0x4c, virtual false, abstract: false, final false
inline void set_focalLength(float_t  value) ;

/// @brief Method set_focusDistance, addr 0x47d3714, size 0x4c, virtual false, abstract: false, final false
inline void set_focusDistance(float_t  value) ;

/// @brief Method set_forceIntoRenderTexture, addr 0x47d254c, size 0x44, virtual false, abstract: false, final false
inline void set_forceIntoRenderTexture(bool  value) ;

/// @brief Method set_gateFit, addr 0x47d3d08, size 0x44, virtual false, abstract: false, final false
inline void set_gateFit(::UnityEngine::__Camera__GateFitMode  value) ;

/// @brief Method set_iso, addr 0x47d3584, size 0x44, virtual false, abstract: false, final false
inline void set_iso(int32_t  value) ;

/// @brief Method set_layerCullDistances, addr 0x47d2eac, size 0xa0, virtual false, abstract: false, final false
inline void set_layerCullDistances(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method set_layerCullSpherical, addr 0x47d2c34, size 0x44, virtual false, abstract: false, final false
inline void set_layerCullSpherical(bool  value) ;

/// @brief Method set_lensShift, addr 0x47d3c40, size 0x48, virtual false, abstract: false, final false
inline void set_lensShift(::UnityEngine::Vector2  value) ;

/// @brief Method set_lensShift_Injected, addr 0x47d3c88, size 0x44, virtual false, abstract: false, final false
inline void set_lensShift_Injected(ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_nearClipPlane, addr 0x47d213c, size 0x4c, virtual false, abstract: false, final false
inline void set_nearClipPlane(float_t  value) ;

/// @brief Method set_nonJitteredProjectionMatrix, addr 0x47d48b8, size 0x44, virtual false, abstract: false, final false
inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x47d48fc, size 0x44, virtual false, abstract: false, final false
inline void set_nonJitteredProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_opaqueSortMode, addr 0x47d26d4, size 0x44, virtual false, abstract: false, final false
inline void set_opaqueSortMode(::UnityEngine::Rendering::OpaqueSortMode  value) ;

/// @brief Method set_orthographic, addr 0x47d2654, size 0x44, virtual false, abstract: false, final false
inline void set_orthographic(bool  value) ;

/// @brief Method set_orthographicSize, addr 0x47d25cc, size 0x4c, virtual false, abstract: false, final false
inline void set_orthographicSize(float_t  value) ;

/// @brief Method set_overrideSceneCullingMask, addr 0x47d2d70, size 0x44, virtual false, abstract: false, final false
inline void set_overrideSceneCullingMask(uint64_t  value) ;

/// @brief Method set_pixelRect, addr 0x47d4088, size 0x54, virtual false, abstract: false, final false
inline void set_pixelRect(::UnityEngine::Rect  value) ;

/// @brief Method set_pixelRect_Injected, addr 0x47d40dc, size 0x44, virtual false, abstract: false, final false
inline void set_pixelRect_Injected(ByRef<::UnityEngine::Rect>  value) ;

/// @brief Method set_projectionMatrix, addr 0x47d4780, size 0x44, virtual false, abstract: false, final false
inline void set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_projectionMatrix_Injected, addr 0x47d47c4, size 0x44, virtual false, abstract: false, final false
inline void set_projectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_rect, addr 0x47d3f54, size 0x54, virtual false, abstract: false, final false
inline void set_rect(::UnityEngine::Rect  value) ;

/// @brief Method set_rect_Injected, addr 0x47d3fa8, size 0x44, virtual false, abstract: false, final false
inline void set_rect_Injected(ByRef<::UnityEngine::Rect>  value) ;

/// @brief Method set_renderingPath, addr 0x47d22d4, size 0x44, virtual false, abstract: false, final false
inline void set_renderingPath(::UnityEngine::RenderingPath  value) ;

/// @brief Method set_scene, addr 0x47d5878, size 0x48, virtual false, abstract: false, final false
inline void set_scene(::UnityEngine::SceneManagement::Scene  value) ;

/// @brief Method set_scene_Injected, addr 0x47d58c0, size 0x44, virtual false, abstract: false, final false
inline void set_scene_Injected(ByRef<::UnityEngine::SceneManagement::Scene>  value) ;

/// @brief Method set_sensorSize, addr 0x47d3b24, size 0x48, virtual false, abstract: false, final false
inline void set_sensorSize(::UnityEngine::Vector2  value) ;

/// @brief Method set_sensorSize_Injected, addr 0x47d3b6c, size 0x44, virtual false, abstract: false, final false
inline void set_sensorSize_Injected(ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_shutterSpeed, addr 0x47d3604, size 0x4c, virtual false, abstract: false, final false
inline void set_shutterSpeed(float_t  value) ;

/// @brief Method set_stereoConvergence, addr 0x47d5a04, size 0x4c, virtual false, abstract: false, final false
inline void set_stereoConvergence(float_t  value) ;

/// @brief Method set_stereoSeparation, addr 0x47d597c, size 0x4c, virtual false, abstract: false, final false
inline void set_stereoSeparation(float_t  value) ;

/// @brief Method set_stereoTargetEye, addr 0x47d5ac8, size 0x44, virtual false, abstract: false, final false
inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask  value) ;

/// @brief Method set_targetDisplay, addr 0x47d4308, size 0x44, virtual false, abstract: false, final false
inline void set_targetDisplay(int32_t  value) ;

/// @brief Method set_targetTexture, addr 0x47d424c, size 0x44, virtual false, abstract: false, final false
inline void set_targetTexture(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_transparencySortAxis, addr 0x47d2838, size 0x54, virtual false, abstract: false, final false
inline void set_transparencySortAxis(::UnityEngine::Vector3  value) ;

/// @brief Method set_transparencySortAxis_Injected, addr 0x47d288c, size 0x44, virtual false, abstract: false, final false
inline void set_transparencySortAxis_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_transparencySortMode, addr 0x47d2754, size 0x44, virtual false, abstract: false, final false
inline void set_transparencySortMode(::UnityEngine::TransparencySortMode  value) ;

/// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x47d497c, size 0x44, virtual false, abstract: false, final false
inline void set_useJitteredProjectionMatrixForTransparentRendering(bool  value) ;

/// @brief Method set_useOcclusionCulling, addr 0x47d2f90, size 0x44, virtual false, abstract: false, final false
inline void set_useOcclusionCulling(bool  value) ;

/// @brief Method set_usePhysicalProperties, addr 0x47d3504, size 0x44, virtual false, abstract: false, final false
inline void set_usePhysicalProperties(bool  value) ;

/// @brief Method set_worldToCameraMatrix, addr 0x47d4648, size 0x44, virtual false, abstract: false, final false
inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_worldToCameraMatrix_Injected, addr 0x47d468c, size 0x44, virtual false, abstract: false, final false
inline void set_worldToCameraMatrix_Injected(ByRef<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera(Camera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera(Camera const& ) = delete;

/// @brief Field kMaxAperture offset 0xffffffff size 0x4
static constexpr float_t  kMaxAperture{32.0};

/// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMaxBladeCount{static_cast<int32_t>(0xb)};

/// @brief Field kMinAperture offset 0xffffffff size 0x4
static constexpr float_t  kMinAperture{0.7};

/// @brief Field kMinBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMinBladeCount{static_cast<int32_t>(0x3)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__GateFitMode, "UnityEngine", "Camera/GateFitMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__ProjectionMatrixMode, "UnityEngine", "Camera/ProjectionMatrixMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestMode, "UnityEngine", "Camera/RenderRequestMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__SceneViewFilterMode, "UnityEngine", "Camera/SceneViewFilterMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(::UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera*, "UnityEngine", "Camera");
NEED_NO_BOX(::UnityEngine::__Camera__CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__CameraCallback*, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__GateFitParameters, "UnityEngine", "Camera/GateFitParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Camera__RenderRequest, "UnityEngine", "Camera/RenderRequest");
