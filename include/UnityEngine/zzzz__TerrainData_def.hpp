#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __TerrainData__BoundaryValueType;
}
// Forward declare root types
namespace UnityEngine {
struct __TerrainData__BoundaryValueType;
}
namespace UnityEngine {
class TerrainData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__TerrainData__BoundaryValueType);
MARK_REF_PTR_T(::UnityEngine::TerrainData);
// Type: ::BoundaryValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::TerrainData::BoundaryValueType
struct CORDL_TYPE __TerrainData__BoundaryValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TerrainData__BoundaryValueType_Unwrapped
enum struct ____TerrainData__BoundaryValueType_Unwrapped : int32_t {
__E_MaxHeightmapRes = static_cast<int32_t>(0x0),
__E_MinDetailResPerPatch = static_cast<int32_t>(0x1),
__E_MaxDetailResPerPatch = static_cast<int32_t>(0x2),
__E_MaxDetailPatchCount = static_cast<int32_t>(0x3),
__E_MaxCoveragePerRes = static_cast<int32_t>(0x4),
__E_MinAlphamapRes = static_cast<int32_t>(0x5),
__E_MaxAlphamapRes = static_cast<int32_t>(0x6),
__E_MinBaseMapRes = static_cast<int32_t>(0x7),
__E_MaxBaseMapRes = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____TerrainData__BoundaryValueType_Unwrapped () const noexcept {
return static_cast<____TerrainData__BoundaryValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __TerrainData__BoundaryValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TerrainData__BoundaryValueType(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field MaxAlphamapRes value: static_cast<int32_t>(0x6)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxAlphamapRes;

/// @brief Field MaxBaseMapRes value: static_cast<int32_t>(0x8)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxBaseMapRes;

/// @brief Field MaxCoveragePerRes value: static_cast<int32_t>(0x4)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxCoveragePerRes;

/// @brief Field MaxDetailPatchCount value: static_cast<int32_t>(0x3)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxDetailPatchCount;

/// @brief Field MaxDetailResPerPatch value: static_cast<int32_t>(0x2)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxDetailResPerPatch;

/// @brief Field MaxHeightmapRes value: static_cast<int32_t>(0x0)
static ::UnityEngine::__TerrainData__BoundaryValueType const MaxHeightmapRes;

/// @brief Field MinAlphamapRes value: static_cast<int32_t>(0x5)
static ::UnityEngine::__TerrainData__BoundaryValueType const MinAlphamapRes;

/// @brief Field MinBaseMapRes value: static_cast<int32_t>(0x7)
static ::UnityEngine::__TerrainData__BoundaryValueType const MinBaseMapRes;

/// @brief Field MinDetailResPerPatch value: static_cast<int32_t>(0x1)
static ::UnityEngine::__TerrainData__BoundaryValueType const MinDetailResPerPatch;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TerrainData__BoundaryValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__TerrainData__BoundaryValueType, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::TerrainData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TerrainData*
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
// Declarations
using BoundaryValueType = ::UnityEngine::__TerrainData__BoundaryValueType;

 __declspec(property(get=get_Internal_alphamapResolution, put=set_Internal_alphamapResolution)) int32_t  Internal_alphamapResolution;

 __declspec(property(get=get_alphamapHeight)) int32_t  alphamapHeight;

 __declspec(property(get=get_alphamapLayers)) int32_t  alphamapLayers;

 __declspec(property(get=get_alphamapResolution, put=set_alphamapResolution)) int32_t  alphamapResolution;

 __declspec(property(get=get_alphamapWidth)) int32_t  alphamapWidth;

 __declspec(property(put=set_detailPrototypes)) ::ArrayW<::UnityEngine::DetailPrototype*,::Array<::UnityEngine::DetailPrototype*>*>  detailPrototypes;

 __declspec(property(get=get_detailResolutionPerPatch)) int32_t  detailResolutionPerPatch;

 __declspec(property(get=get_heightmapResolution, put=set_heightmapResolution)) int32_t  heightmapResolution;

 __declspec(property(get=get_internalHeightmapResolution, put=set_internalHeightmapResolution)) int32_t  internalHeightmapResolution;

/// @brief Field k_MaximumAlphamapResolution, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MaximumAlphamapResolution, put=setStaticF_k_MaximumAlphamapResolution)) int32_t  k_MaximumAlphamapResolution;

/// @brief Field k_MaximumBaseMapResolution, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MaximumBaseMapResolution, put=setStaticF_k_MaximumBaseMapResolution)) int32_t  k_MaximumBaseMapResolution;

/// @brief Field k_MaximumDetailPatchCount, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MaximumDetailPatchCount, put=setStaticF_k_MaximumDetailPatchCount)) int32_t  k_MaximumDetailPatchCount;

/// @brief Field k_MaximumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MaximumDetailResolutionPerPatch, put=setStaticF_k_MaximumDetailResolutionPerPatch)) int32_t  k_MaximumDetailResolutionPerPatch;

/// @brief Field k_MaximumResolution, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MaximumResolution, put=setStaticF_k_MaximumResolution)) int32_t  k_MaximumResolution;

/// @brief Field k_MinimumAlphamapResolution, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MinimumAlphamapResolution, put=setStaticF_k_MinimumAlphamapResolution)) int32_t  k_MinimumAlphamapResolution;

/// @brief Field k_MinimumBaseMapResolution, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MinimumBaseMapResolution, put=setStaticF_k_MinimumBaseMapResolution)) int32_t  k_MinimumBaseMapResolution;

/// @brief Field k_MinimumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_k_MinimumDetailResolutionPerPatch, put=setStaticF_k_MinimumDetailResolutionPerPatch)) int32_t  k_MinimumDetailResolutionPerPatch;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_terrainLayers, put=set_terrainLayers)) ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>,::Array<::UnityW<::UnityEngine::TerrainLayer>>*>  terrainLayers;

 __declspec(property(get=get_treeInstances)) ::ArrayW<::UnityEngine::TreeInstance,::Array<::UnityEngine::TreeInstance>*>  treeInstances;

 __declspec(property(get=get_treePrototypes, put=set_treePrototypes)) ::ArrayW<::UnityEngine::TreePrototype*,::Array<::UnityEngine::TreePrototype*>*>  treePrototypes;

 __declspec(property(get=get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>,::Array<::UnityW<::UnityEngine::Terrain>>*>  users;

/// @brief Method GetAlphamapResolutionInternal, addr 0x48877fc, size 0x3c, virtual false, abstract: false, final false
inline float_t GetAlphamapResolutionInternal() ;

/// @brief Method GetAlphamaps, addr 0x48873c4, size 0xc4, virtual false, abstract: false, final false
inline Il2CppObject* GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method GetBoundaryValue, addr 0x48862d4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetBoundaryValue(::UnityEngine::__TerrainData__BoundaryValueType  type) ;

/// @brief Method GetHeights, addr 0x4886770, size 0x130, virtual false, abstract: false, final false
inline Il2CppObject* GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_Create, addr 0x48863b4, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::TerrainData*  terrainData) ;

/// @brief Method Internal_GetAlphamaps, addr 0x4887488, size 0x6c, virtual false, abstract: false, final false
inline Il2CppObject* Internal_GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHeights, addr 0x48868a0, size 0x6c, virtual false, abstract: false, final false
inline Il2CppObject* Internal_GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetTreeInstances, addr 0x4887278, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance,::Array<::UnityEngine::TreeInstance>*> Internal_GetTreeInstances() ;

/// @brief Method Internal_SetAlphamaps, addr 0x4887a4c, size 0x74, virtual false, abstract: false, final false
inline void Internal_SetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height, Il2CppObject*  map) ;

/// @brief Method Internal_SetDetailLayer, addr 0x48871b8, size 0x84, virtual false, abstract: false, final false
inline void Internal_SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, Il2CppObject*  data) ;

/// @brief Method Internal_SetDetailResolution, addr 0x4886ffc, size 0x54, virtual false, abstract: false, final false
inline void Internal_SetDetailResolution(int32_t  patchCount, int32_t  resolutionPerPatch) ;

/// @brief Method Internal_SetHeights, addr 0x4886c0c, size 0x74, virtual false, abstract: false, final false
inline void Internal_SetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height, Il2CppObject*  heights) ;

static inline ::UnityEngine::TerrainData* New_ctor() ;

/// @brief Method RefreshPrototypes, addr 0x488708c, size 0x3c, virtual false, abstract: false, final false
inline void RefreshPrototypes() ;

/// @brief Method SetAlphamaps, addr 0x48878b0, size 0x19c, virtual false, abstract: false, final false
inline void SetAlphamaps(int32_t  x, int32_t  y, Il2CppObject*  map) ;

/// @brief Method SetDetailLayer, addr 0x488710c, size 0xac, virtual false, abstract: false, final false
inline void SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  layer, Il2CppObject*  details) ;

/// @brief Method SetDetailResolution, addr 0x4886c80, size 0x37c, virtual false, abstract: false, final false
inline void SetDetailResolution(int32_t  detailResolution, int32_t  resolutionPerPatch) ;

/// @brief Method SetHeights, addr 0x488690c, size 0x300, virtual false, abstract: false, final false
inline void SetHeights(int32_t  xBase, int32_t  yBase, Il2CppObject*  heights) ;

/// @brief Method SetTreeInstances, addr 0x48872b4, size 0x54, virtual false, abstract: false, final false
inline void SetTreeInstances(::ArrayW<::UnityEngine::TreeInstance,::Array<::UnityEngine::TreeInstance>*>  instances, bool  snapToHeightmap) ;

/// @brief Method .ctor, addr 0x4886310, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_k_MaximumAlphamapResolution() ;

static inline int32_t getStaticF_k_MaximumBaseMapResolution() ;

static inline int32_t getStaticF_k_MaximumDetailPatchCount() ;

static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch() ;

static inline int32_t getStaticF_k_MaximumResolution() ;

static inline int32_t getStaticF_k_MinimumAlphamapResolution() ;

static inline int32_t getStaticF_k_MinimumBaseMapResolution() ;

static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch() ;

/// @brief Method get_Internal_alphamapResolution, addr 0x4887530, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_Internal_alphamapResolution() ;

/// @brief Method get_alphamapHeight, addr 0x4887874, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_alphamapHeight() ;

/// @brief Method get_alphamapLayers, addr 0x4887388, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_alphamapLayers() ;

/// @brief Method get_alphamapResolution, addr 0x48874f4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_alphamapResolution() ;

/// @brief Method get_alphamapWidth, addr 0x4887838, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_alphamapWidth() ;

/// @brief Method get_detailResolutionPerPatch, addr 0x4887050, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_detailResolutionPerPatch() ;

/// @brief Method get_heightmapResolution, addr 0x48863f0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_heightmapResolution() ;

/// @brief Method get_internalHeightmapResolution, addr 0x488642c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_internalHeightmapResolution() ;

/// @brief Method get_size, addr 0x4886638, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_size_Injected, addr 0x4886694, size 0x44, virtual false, abstract: false, final false
inline void get_size_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_terrainLayers, addr 0x4887ac0, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>,::Array<::UnityW<::UnityEngine::TerrainLayer>>*> get_terrainLayers() ;

/// @brief Method get_treeInstances, addr 0x488723c, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance,::Array<::UnityEngine::TreeInstance>*> get_treeInstances() ;

/// @brief Method get_treePrototypes, addr 0x4887308, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreePrototype*,::Array<::UnityEngine::TreePrototype*>*> get_treePrototypes() ;

/// @brief Method get_users, addr 0x488600c, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>,::Array<::UnityW<::UnityEngine::Terrain>>*> get_users() ;

static inline void setStaticF_k_MaximumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailPatchCount(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailResolutionPerPatch(int32_t  value) ;

static inline void setStaticF_k_MaximumResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumDetailResolutionPerPatch(int32_t  value) ;

/// @brief Method set_Internal_alphamapResolution, addr 0x48877b8, size 0x44, virtual false, abstract: false, final false
inline void set_Internal_alphamapResolution(int32_t  value) ;

/// @brief Method set_alphamapResolution, addr 0x488756c, size 0x24c, virtual false, abstract: false, final false
inline void set_alphamapResolution(int32_t  value) ;

/// @brief Method set_detailPrototypes, addr 0x48870c8, size 0x44, virtual false, abstract: false, final false
inline void set_detailPrototypes(::ArrayW<::UnityEngine::DetailPrototype*,::Array<::UnityEngine::DetailPrototype*>*>  value) ;

/// @brief Method set_heightmapResolution, addr 0x4886468, size 0x18c, virtual false, abstract: false, final false
inline void set_heightmapResolution(int32_t  value) ;

/// @brief Method set_internalHeightmapResolution, addr 0x48865f4, size 0x44, virtual false, abstract: false, final false
inline void set_internalHeightmapResolution(int32_t  value) ;

/// @brief Method set_size, addr 0x48866d8, size 0x54, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_size_Injected, addr 0x488672c, size 0x44, virtual false, abstract: false, final false
inline void set_size_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_terrainLayers, addr 0x4887afc, size 0x44, virtual false, abstract: false, final false
inline void set_terrainLayers(::ArrayW<::UnityEngine::TerrainLayer*,::Array<::UnityEngine::TerrainLayer*>*>  value) ;

/// @brief Method set_treePrototypes, addr 0x4887344, size 0x44, virtual false, abstract: false, final false
inline void set_treePrototypes(::ArrayW<::UnityEngine::TreePrototype*,::Array<::UnityEngine::TreePrototype*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainData(TerrainData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainData(TerrainData const& ) = delete;

/// @brief Field k_DetailDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DetailDatabasePrefix{u"GetDetailDatabase()."};

/// @brief Field k_HeightmapPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HeightmapPrefix{u"GetHeightmap()."};

/// @brief Field k_ScriptingInterfaceName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScriptingInterfaceName{u"TerrainDataScriptingInterface"};

/// @brief Field k_ScriptingInterfacePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScriptingInterfacePrefix{u"TerrainDataScriptingInterface::"};

/// @brief Field k_SplatDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SplatDatabasePrefix{u"GetSplatDatabase()."};

/// @brief Field k_TreeDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TreeDatabasePrefix{u"GetTreeDatabase()."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TerrainData__BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
NEED_NO_BOX(::UnityEngine::TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
