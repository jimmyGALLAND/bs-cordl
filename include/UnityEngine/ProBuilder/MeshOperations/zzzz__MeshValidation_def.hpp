#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshValidation)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
struct __MeshValidation__AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass5_0;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct Triangle;
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
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
struct __MeshValidation__AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0);
// Type: ::AttributeValidationStrategy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: true
// CS Name: ::MeshValidation::AttributeValidationStrategy
struct CORDL_TYPE __MeshValidation__AttributeValidationStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MeshValidation__AttributeValidationStrategy_Unwrapped
enum struct ____MeshValidation__AttributeValidationStrategy_Unwrapped : int32_t {
__E_Resize = static_cast<int32_t>(0x0),
__E_Nullify = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____MeshValidation__AttributeValidationStrategy_Unwrapped () const noexcept {
return static_cast<____MeshValidation__AttributeValidationStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __MeshValidation__AttributeValidationStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MeshValidation__AttributeValidationStrategy(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Nullify value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy const Nullify;

/// @brief Field Resize value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy const Resize;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::MeshValidation::<>c*
class CORDL_TYPE __MeshValidation____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__4_1;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__7_0;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* New_ctor() ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_0, addr 0x46ef9e0, size 0x28, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle  x) ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_1, addr 0x46efa08, size 0x28, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle  x) ;

/// @brief Method <RemoveUnusedVertices>b__7_0, addr 0x46efa30, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face*  x) ;

/// @brief Method .ctor, addr 0x46ef9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_0() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_1() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MeshValidation____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MeshValidation____c(__MeshValidation____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MeshValidation____c(__MeshValidation____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::MeshValidation::<>c__DisplayClass10_0*
class CORDL_TYPE __MeshValidation____c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field mesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  mesh;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0* New_ctor() ;

/// @brief Method <RebuildSelectionIndexes>b__0, addr 0x46efa48, size 0x5c, virtual false, abstract: false, final false
inline bool _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face*  x) ;

constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_mesh() ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  value) ;

/// @brief Method .ctor, addr 0x46ef0e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MeshValidation____c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MeshValidation____c__DisplayClass10_0(__MeshValidation____c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MeshValidation____c__DisplayClass10_0(__MeshValidation____c__DisplayClass10_0 const& ) = delete;

/// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  ___mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0, ___mesh) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::MeshValidation::<>c__DisplayClass5_0*
class CORDL_TYPE __MeshValidation____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  __9__0;

/// @brief Field triangle, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_triangle, put=__cordl_internal_set_triangle)) ::UnityEngine::ProBuilder::Triangle  triangle;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0* New_ctor() ;

/// @brief Method <CollectFaceGroups>b__0, addr 0x46efaa4, size 0x34, virtual false, abstract: false, final false
inline bool _CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle  x) ;

constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*& __cordl_internal_get___9__0() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*> const& __cordl_internal_get___9__0() const;

constexpr ::UnityEngine::ProBuilder::Triangle const& __cordl_internal_get_triangle() const;

constexpr ::UnityEngine::ProBuilder::Triangle& __cordl_internal_get_triangle() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  value) ;

constexpr void __cordl_internal_set_triangle(::UnityEngine::ProBuilder::Triangle  value) ;

/// @brief Method .ctor, addr 0x46edcf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MeshValidation____c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MeshValidation____c__DisplayClass5_0(__MeshValidation____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MeshValidation____c__DisplayClass5_0(__MeshValidation____c__DisplayClass5_0 const& ) = delete;

/// @brief Field triangle, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::ProBuilder::Triangle  ___triangle;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, ___triangle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, _____9__0) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshValidation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshValidation*
class CORDL_TYPE MeshValidation : public ::System::Object {
public:
// Declarations
using AttributeValidationStrategy = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy;

using __c = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c;

using __c__DisplayClass10_0 = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0;

using __c__DisplayClass5_0 = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0;

/// @brief Method CollectFaceGroups, addr 0x46ed934, size 0x3bc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// @brief Method ContainsDegenerateTriangles, addr 0x46ecbb4, size 0x18, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Method ContainsDegenerateTriangles, addr 0x46ed000, size 0x158, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// @brief Method ContainsDegenerateTriangles, addr 0x46ecbcc, size 0x434, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*  faces) ;

/// @brief Method ContainsNonContiguousTriangles, addr 0x46ed158, size 0x12c, virtual false, abstract: false, final false
static inline bool ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// @brief Method EnsureArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureArraySize(ByRef<::ArrayW<T,::Array<T>*>>  attribute, int32_t  expectedVertexCount, ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy  strategy, T  fill) ;

/// @brief Method EnsureFacesAreComposedOfContiguousTriangles, addr 0x46ed284, size 0x6b0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*  faces) ;

/// @brief Method EnsureListSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureListSize(ByRef<::System::Collections::Generic::List_1<T>*>  attribute, int32_t  expectedVertexCount, ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy  strategy, T  fill) ;

/// @brief Method EnsureMeshIsValid, addr 0x46ef0ec, size 0x134, virtual false, abstract: false, final false
static inline bool EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ByRef<int32_t>  removedVertices) ;

/// @brief Method EnsureRealNumbers, addr 0x46ef420, size 0x1c0, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  attribute) ;

/// @brief Method EnsureRealNumbers, addr 0x46ef5e0, size 0x1cc, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  attribute) ;

/// @brief Method EnsureRealNumbers, addr 0x46ef7ac, size 0x1d0, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*  attribute) ;

/// @brief Method EnsureValidAttributes, addr 0x46ef220, size 0x200, virtual false, abstract: false, final false
static inline void EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Method RebuildEdges, addr 0x46eea84, size 0x48c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  edges, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RebuildIndexes, addr 0x46ee66c, size 0x418, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<int32_t>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RebuildSelectionIndexes, addr 0x46eef10, size 0x1d4, virtual false, abstract: false, final false
static inline void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*,::Array<::UnityEngine::ProBuilder::Face*>*>>  faces, ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>>  edges, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  indices, ::System::Collections::Generic::IEnumerable_1<int32_t>*  removed) ;

/// @brief Method RemoveDegenerateTriangles, addr 0x46edcf8, size 0x974, virtual false, abstract: false, final false
static inline bool RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RemoveUnusedVertices, addr 0x46eaa7c, size 0x324, virtual false, abstract: false, final false
static inline bool RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshValidation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshValidation(MeshValidation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshValidation(MeshValidation const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/AttributeValidationStrategy");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
