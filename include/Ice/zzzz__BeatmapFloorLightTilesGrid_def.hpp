#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapFloorLightTilesGrid)
namespace Ice {
class FloorLightTilesGrid;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
// Forward declare root types
namespace Ice {
class BeatmapFloorLightTilesGrid;
}
// Write type traits
MARK_REF_PTR_T(::Ice::BeatmapFloorLightTilesGrid);
// Type: Ice::BeatmapFloorLightTilesGrid
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16164))
// CS Name: ::Ice::BeatmapFloorLightTilesGrid*
class CORDL_TYPE BeatmapFloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _numberOfRows, offset 0x18, size 0x4
  __declspec(property(get = __get__numberOfRows, put = __set__numberOfRows)) int32_t _numberOfRows;

  /// @brief Field _tileWidth, offset 0x1c, size 0x4
  __declspec(property(get = __get__tileWidth, put = __set__tileWidth)) float_t _tileWidth;

  /// @brief Field _tileHeight, offset 0x20, size 0x4
  __declspec(property(get = __get__tileHeight, put = __set__tileHeight)) float_t _tileHeight;

  /// @brief Field _floorLightTilesGrid, offset 0x28, size 0x8
  __declspec(property(get = __get__floorLightTilesGrid, put = __set__floorLightTilesGrid))::Ice::FloorLightTilesGrid* _floorLightTilesGrid;

  /// @brief Field _beatmapObjectSpawnController, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  constexpr int32_t& __get__numberOfRows();

  constexpr int32_t const& __get__numberOfRows() const;

  constexpr void __set__numberOfRows(int32_t value);

  constexpr float_t& __get__tileWidth();

  constexpr float_t const& __get__tileWidth() const;

  constexpr void __set__tileWidth(float_t value);

  constexpr float_t& __get__tileHeight();

  constexpr float_t const& __get__tileHeight() const;

  constexpr void __set__tileHeight(float_t value);

  constexpr ::Ice::FloorLightTilesGrid*& __get__floorLightTilesGrid();

  constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTilesGrid*> const& __get__floorLightTilesGrid() const;

  constexpr void __set__floorLightTilesGrid(::Ice::FloorLightTilesGrid* value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  /// @brief Method Start addr 0x129ed94 size 0xf0 virtual false final false
  inline void Start();

  static inline ::Ice::BeatmapFloorLightTilesGrid* New_ctor();

  /// @brief Method .ctor addr 0x129f018 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapFloorLightTilesGrid();

public:
  /// @brief Field _numberOfRows, offset: 0x18, size: 0x4, def value: None
  int32_t ____numberOfRows;

  /// @brief Field _tileWidth, offset: 0x1c, size: 0x4, def value: None
  float_t ____tileWidth;

  /// @brief Field _tileHeight, offset: 0x20, size: 0x4, def value: None
  float_t ____tileHeight;

  /// @brief Field _floorLightTilesGrid, offset: 0x28, size: 0x8, def value: None
  ::Ice::FloorLightTilesGrid* ____floorLightTilesGrid;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::BeatmapFloorLightTilesGrid, 0x38>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::BeatmapFloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::BeatmapFloorLightTilesGrid*, "Ice", "BeatmapFloorLightTilesGrid");
