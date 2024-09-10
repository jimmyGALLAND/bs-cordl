#pragma once
// IWYU pragma private; include "UnityEngine/UI/VertexHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VertexHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UI {
class VertexHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::VertexHelper);
// Type: UnityEngine.UI::VertexHelper
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::VertexHelper*
class CORDL_TYPE VertexHelper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_currentIndexCount)) int32_t  currentIndexCount;

 __declspec(property(get=get_currentVertCount)) int32_t  currentVertCount;

/// @brief Field m_Colors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Colors, put=__cordl_internal_set_m_Colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  m_Colors;

/// @brief Field m_Indices, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Indices, put=__cordl_internal_set_m_Indices)) ::System::Collections::Generic::List_1<int32_t>*  m_Indices;

/// @brief Field m_ListsInitalized, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ListsInitalized, put=__cordl_internal_set_m_ListsInitalized)) bool  m_ListsInitalized;

/// @brief Field m_Normals, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Normals, put=__cordl_internal_set_m_Normals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_Normals;

/// @brief Field m_Positions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Positions, put=__cordl_internal_set_m_Positions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_Positions;

/// @brief Field m_Tangents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Tangents, put=__cordl_internal_set_m_Tangents)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_Tangents;

/// @brief Field m_Uv0S, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Uv0S, put=__cordl_internal_set_m_Uv0S)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_Uv0S;

/// @brief Field m_Uv1S, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Uv1S, put=__cordl_internal_set_m_Uv1S)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_Uv1S;

/// @brief Field m_Uv2S, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Uv2S, put=__cordl_internal_set_m_Uv2S)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_Uv2S;

/// @brief Field m_Uv3S, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Uv3S, put=__cordl_internal_set_m_Uv3S)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  m_Uv3S;

/// @brief Field s_DefaultNormal, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_s_DefaultNormal, put=setStaticF_s_DefaultNormal)) ::UnityEngine::Vector3  s_DefaultNormal;

/// @brief Field s_DefaultTangent, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_s_DefaultTangent, put=setStaticF_s_DefaultTangent)) ::UnityEngine::Vector4  s_DefaultTangent;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddTriangle, addr 0x4a2b908, size 0x170, virtual false, abstract: false, final false
inline void AddTriangle(int32_t  idx0, int32_t  idx1, int32_t  idx2) ;

/// @brief Method AddUIVertexQuad, addr 0x4a38268, size 0x110, virtual false, abstract: false, final false
inline void AddUIVertexQuad(::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>  verts) ;

/// @brief Method AddUIVertexStream, addr 0x4a3c134, size 0xac, virtual false, abstract: false, final false
inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method AddUIVertexTriangleStream, addr 0x4a3c1e0, size 0x50, virtual false, abstract: false, final false
inline void AddUIVertexTriangleStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts) ;

/// @brief Method AddVert, addr 0x4a2b7d8, size 0x130, virtual false, abstract: false, final false
inline void AddVert(::UnityEngine::Vector3  position, ::UnityEngine::Color32  color, ::UnityEngine::Vector4  uv0) ;

/// @brief Method AddVert, addr 0x4a3bfa8, size 0xf8, virtual false, abstract: false, final false
inline void AddVert(::UnityEngine::Vector3  position, ::UnityEngine::Color32  color, ::UnityEngine::Vector4  uv0, ::UnityEngine::Vector4  uv1, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector4  tangent) ;

/// @brief Method AddVert, addr 0x4a3bb0c, size 0x49c, virtual false, abstract: false, final false
inline void AddVert(::UnityEngine::Vector3  position, ::UnityEngine::Color32  color, ::UnityEngine::Vector4  uv0, ::UnityEngine::Vector4  uv1, ::UnityEngine::Vector4  uv2, ::UnityEngine::Vector4  uv3, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector4  tangent) ;

/// @brief Method AddVert, addr 0x4a3c0a0, size 0x94, virtual false, abstract: false, final false
inline void AddVert(::UnityEngine::UIVertex  v) ;

/// @brief Method Clear, addr 0x4a2b6bc, size 0x11c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x4a3b4a4, size 0x1b4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FillMesh, addr 0x4a3b9ac, size 0x160, virtual false, abstract: false, final false
inline void FillMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetUIVertexStream, addr 0x4a3c230, size 0x50, virtual false, abstract: false, final false
inline void GetUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  stream) ;

/// @brief Method InitializeListIfRequired, addr 0x4a3b31c, size 0x188, virtual false, abstract: false, final false
inline void InitializeListIfRequired() ;

static inline ::UnityEngine::UI::VertexHelper* New_ctor() ;

static inline ::UnityEngine::UI::VertexHelper* New_ctor(::UnityEngine::Mesh*  m) ;

/// @brief Method PopulateUIVertex, addr 0x4a3b6f0, size 0x160, virtual false, abstract: false, final false
inline void PopulateUIVertex(ByRef<::UnityEngine::UIVertex>  vertex, int32_t  i) ;

/// @brief Method SetUIVertex, addr 0x4a3b850, size 0x15c, virtual false, abstract: false, final false
inline void SetUIVertex(::UnityEngine::UIVertex  vertex, int32_t  i) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& __cordl_internal_get_m_Colors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color32>*> const& __cordl_internal_get_m_Colors() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_Indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_Indices() const;

constexpr bool const& __cordl_internal_get_m_ListsInitalized() const;

constexpr bool& __cordl_internal_get_m_ListsInitalized() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_Normals() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Normals() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_Positions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Positions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Tangents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Tangents() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Uv0S() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Uv0S() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Uv1S() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Uv1S() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Uv2S() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Uv2S() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_m_Uv3S() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_Uv3S() const;

constexpr void __cordl_internal_set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value) ;

constexpr void __cordl_internal_set_m_Indices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ListsInitalized(bool  value) ;

constexpr void __cordl_internal_set_m_Normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_Positions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_Tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_m_Uv0S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_m_Uv1S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_m_Uv2S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_m_Uv3S(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

/// @brief Method .ctor, addr 0x4a3b0d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x4a3b0e0, size 0x23c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  m) ;

static inline ::UnityEngine::Vector3 getStaticF_s_DefaultNormal() ;

static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent() ;

/// @brief Method get_currentIndexCount, addr 0x4a3b6a4, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_currentIndexCount() ;

/// @brief Method get_currentVertCount, addr 0x4a3b658, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_currentVertCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_DefaultNormal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VertexHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexHelper(VertexHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexHelper(VertexHelper const& ) = delete;

/// @brief Field m_Positions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___m_Positions;

/// @brief Field m_Colors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  ___m_Colors;

/// @brief Field m_Uv0S, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___m_Uv0S;

/// @brief Field m_Uv1S, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___m_Uv1S;

/// @brief Field m_Uv2S, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___m_Uv2S;

/// @brief Field m_Uv3S, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___m_Uv3S;

/// @brief Field m_Normals, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___m_Normals;

/// @brief Field m_Tangents, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___m_Tangents;

/// @brief Field m_Indices, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_Indices;

/// @brief Field m_ListsInitalized, offset: 0x58, size: 0x1, def value: None
 bool  ___m_ListsInitalized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::VertexHelper, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv0S) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv1S) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv2S) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Uv3S) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Normals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Tangents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_Indices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::VertexHelper, ___m_ListsInitalized) == 0x58, "Offset mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::VertexHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::VertexHelper*, "UnityEngine.UI", "VertexHelper");
