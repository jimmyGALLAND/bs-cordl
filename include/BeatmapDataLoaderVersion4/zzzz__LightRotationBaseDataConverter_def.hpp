#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightRotationBaseDataConverter)
namespace BeatmapSaveDataVersion4 {
struct LightRotationEvent;
}
namespace GlobalNamespace {
class LightRotationBaseData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightRotationBaseDataConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter);
// Type: BeatmapDataLoaderVersion4::LightRotationBaseDataConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter*
class CORDL_TYPE LightRotationBaseDataConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x140592c, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LightRotationBaseData* Convert(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBaseDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBaseDataConverter(LightRotationBaseDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBaseDataConverter(LightRotationBaseDataConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightRotationBaseDataConverter*, "BeatmapDataLoaderVersion4", "LightRotationBaseDataConverter");
