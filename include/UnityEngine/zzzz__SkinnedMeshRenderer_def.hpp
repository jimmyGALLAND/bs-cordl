#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct SkinQuality;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct __GraphicsBuffer__Target;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SkinnedMeshRenderer);
// Type: UnityEngine::SkinnedMeshRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SkinnedMeshRenderer*
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_bones, put=set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  bones;

 __declspec(property(get=get_forceMatrixRecalculationPerRender, put=set_forceMatrixRecalculationPerRender)) bool  forceMatrixRecalculationPerRender;

 __declspec(property(get=get_quality, put=set_quality)) ::UnityEngine::SkinQuality  quality;

 __declspec(property(get=get_rootBone, put=set_rootBone)) ::UnityW<::UnityEngine::Transform>  rootBone;

 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

 __declspec(property(get=get_skinnedMotionVectors, put=set_skinnedMotionVectors)) bool  skinnedMotionVectors;

 __declspec(property(get=get_updateWhenOffscreen, put=set_updateWhenOffscreen)) bool  updateWhenOffscreen;

 __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget)) ::UnityEngine::__GraphicsBuffer__Target  vertexBufferTarget;

/// @brief Method BakeMesh, addr 0x47f3bd0, size 0x48, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method BakeMesh, addr 0x47f3c18, size 0x54, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh, bool  useScale) ;

/// @brief Method GetBlendShapeWeight, addr 0x47f3b38, size 0x44, virtual false, abstract: false, final false
inline float_t GetBlendShapeWeight(int32_t  index) ;

/// @brief Method GetPreviousVertexBuffer, addr 0x47f3d64, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer() ;

/// @brief Method GetPreviousVertexBufferImpl, addr 0x47f3e20, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl() ;

/// @brief Method GetVertexBuffer, addr 0x47f3c6c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer() ;

/// @brief Method GetVertexBufferImpl, addr 0x47f3d28, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl() ;

static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor() ;

/// @brief Method SetBlendShapeWeight, addr 0x47f3b7c, size 0x54, virtual false, abstract: false, final false
inline void SetBlendShapeWeight(int32_t  index, float_t  value) ;

/// @brief Method .ctor, addr 0x47f3edc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bones, addr 0x47f39b8, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> get_bones() ;

/// @brief Method get_forceMatrixRecalculationPerRender, addr 0x47f38b8, size 0x3c, virtual false, abstract: false, final false
inline bool get_forceMatrixRecalculationPerRender() ;

/// @brief Method get_quality, addr 0x47f37b8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SkinQuality get_quality() ;

/// @brief Method get_rootBone, addr 0x47f3938, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rootBone() ;

/// @brief Method get_sharedMesh, addr 0x47f3a38, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method get_skinnedMotionVectors, addr 0x47f3ab8, size 0x3c, virtual false, abstract: false, final false
inline bool get_skinnedMotionVectors() ;

/// @brief Method get_updateWhenOffscreen, addr 0x47f3838, size 0x3c, virtual false, abstract: false, final false
inline bool get_updateWhenOffscreen() ;

/// @brief Method get_vertexBufferTarget, addr 0x47f3e5c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::__GraphicsBuffer__Target get_vertexBufferTarget() ;

/// @brief Method set_bones, addr 0x47f39f4, size 0x44, virtual false, abstract: false, final false
inline void set_bones(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

/// @brief Method set_forceMatrixRecalculationPerRender, addr 0x47f38f4, size 0x44, virtual false, abstract: false, final false
inline void set_forceMatrixRecalculationPerRender(bool  value) ;

/// @brief Method set_quality, addr 0x47f37f4, size 0x44, virtual false, abstract: false, final false
inline void set_quality(::UnityEngine::SkinQuality  value) ;

/// @brief Method set_rootBone, addr 0x47f3974, size 0x44, virtual false, abstract: false, final false
inline void set_rootBone(::UnityEngine::Transform*  value) ;

/// @brief Method set_sharedMesh, addr 0x47f3a74, size 0x44, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_skinnedMotionVectors, addr 0x47f3af4, size 0x44, virtual false, abstract: false, final false
inline void set_skinnedMotionVectors(bool  value) ;

/// @brief Method set_updateWhenOffscreen, addr 0x47f3874, size 0x44, virtual false, abstract: false, final false
inline void set_updateWhenOffscreen(bool  value) ;

/// @brief Method set_vertexBufferTarget, addr 0x47f3e98, size 0x44, virtual false, abstract: false, final false
inline void set_vertexBufferTarget(::UnityEngine::__GraphicsBuffer__Target  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedMeshRenderer(SkinnedMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedMeshRenderer(SkinnedMeshRenderer const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinnedMeshRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
