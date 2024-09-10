#pragma once
// IWYU pragma private; include "UnityEngine/Terrain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Terrain)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Terrain);
// Type: UnityEngine::Terrain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Terrain*
class CORDL_TYPE Terrain : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_allowAutoConnect, put=set_allowAutoConnect)) bool  allowAutoConnect;

 __declspec(property(put=set_detailObjectDensity)) float_t  detailObjectDensity;

 __declspec(property(put=set_detailObjectDistance)) float_t  detailObjectDistance;

 __declspec(property(put=set_drawInstanced)) bool  drawInstanced;

 __declspec(property(get=get_groupingID)) int32_t  groupingID;

 __declspec(property(get=get_materialTemplate, put=set_materialTemplate)) ::UnityW<::UnityEngine::Material>  materialTemplate;

 __declspec(property(get=get_terrainData, put=set_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

/// @brief Method Flush, addr 0x4885e94, size 0x3c, virtual false, abstract: false, final false
inline void Flush() ;

static inline ::UnityEngine::Terrain* New_ctor() ;

/// @brief Method SetNeighbors, addr 0x4885e28, size 0x6c, virtual false, abstract: false, final false
inline void SetNeighbors(::UnityEngine::Terrain*  left, ::UnityEngine::Terrain*  top, ::UnityEngine::Terrain*  right, ::UnityEngine::Terrain*  bottom) ;

/// @brief Method .ctor, addr 0x4885ef8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activeTerrains, addr 0x4885ed0, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>,::Array<::UnityW<::UnityEngine::Terrain>>*> get_activeTerrains() ;

/// @brief Method get_allowAutoConnect, addr 0x4885d28, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowAutoConnect() ;

/// @brief Method get_groupingID, addr 0x4885da8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_groupingID() ;

/// @brief Method get_materialTemplate, addr 0x4885ca8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_materialTemplate() ;

/// @brief Method get_terrainData, addr 0x4885b90, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TerrainData> get_terrainData() ;

/// @brief Method set_allowAutoConnect, addr 0x4885d64, size 0x44, virtual false, abstract: false, final false
inline void set_allowAutoConnect(bool  value) ;

/// @brief Method set_detailObjectDensity, addr 0x4885c5c, size 0x4c, virtual false, abstract: false, final false
inline void set_detailObjectDensity(float_t  value) ;

/// @brief Method set_detailObjectDistance, addr 0x4885c10, size 0x4c, virtual false, abstract: false, final false
inline void set_detailObjectDistance(float_t  value) ;

/// @brief Method set_drawInstanced, addr 0x4885de4, size 0x44, virtual false, abstract: false, final false
inline void set_drawInstanced(bool  value) ;

/// @brief Method set_materialTemplate, addr 0x4885ce4, size 0x44, virtual false, abstract: false, final false
inline void set_materialTemplate(::UnityEngine::Material*  value) ;

/// @brief Method set_terrainData, addr 0x4885bcc, size 0x44, virtual false, abstract: false, final false
inline void set_terrainData(::UnityEngine::TerrainData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Terrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Terrain(Terrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Terrain(Terrain const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Terrain, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
