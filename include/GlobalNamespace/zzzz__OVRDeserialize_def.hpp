#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize)
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceShareResultData;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
namespace GlobalNamespace {
struct __OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceShareResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpatialAnchorCreateCompleteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDeserialize);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceShareResultData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData);
// Type: ::DisplayRefreshRateChangedData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8093))
// CS Name: ::OVRDeserialize::DisplayRefreshRateChangedData
struct CORDL_TYPE __OVRDeserialize__DisplayRefreshRateChangedData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__DisplayRefreshRateChangedData();

  /// @brief Field FromRefreshRate, offset: 0x0, size: 0x4, def value: None
  float_t FromRefreshRate;

  /// @brief Field ToRefreshRate, offset: 0x4, size: 0x4, def value: None
  float_t ToRefreshRate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryResultsData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8094))
// CS Name: ::OVRDeserialize::SpaceQueryResultsData
struct CORDL_TYPE __OVRDeserialize__SpaceQueryResultsData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceQueryResultsData(uint64_t RequestId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceQueryResultsData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryCompleteData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8095))
// CS Name: ::OVRDeserialize::SpaceQueryCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceQueryCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceQueryCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SceneCaptureCompleteData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8096))
// CS Name: ::OVRDeserialize::SceneCaptureCompleteData
struct CORDL_TYPE __OVRDeserialize__SceneCaptureCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SceneCaptureCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpatialAnchorCreateCompleteData
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8097))
// CS Name: ::OVRDeserialize::SpatialAnchorCreateCompleteData
struct CORDL_TYPE __OVRDeserialize__SpatialAnchorCreateCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, ::System::Guid Uuid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpatialAnchorCreateCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Space, offset: 0x10, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceSetComponentStatusCompleteData
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7835)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8098))
// CS Name: ::OVRDeserialize::SpaceSetComponentStatusCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceSetComponentStatusCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty:
  // "::GlobalNamespace::__OVRPlugin__SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceSetComponentStatusCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, ::System::Guid Uuid,
                                                                  ::GlobalNamespace::__OVRPlugin__SpaceComponentType ComponentType, int32_t Enabled) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceSetComponentStatusCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Space, offset: 0x10, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief Field ComponentType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceComponentType ComponentType;

  /// @brief Field Enabled, offset: 0x2c, size: 0x4, def value: None
  int32_t Enabled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceSaveCompleteData
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8099))
// CS Name: ::OVRDeserialize::SpaceSaveCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceSaveCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, ::System::Guid Uuid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceSaveCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Space, offset: 0x8, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Uuid, offset: 0x14, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceEraseCompleteData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(7836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8100))
// CS Name: ::OVRDeserialize::SpaceEraseCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceEraseCompleteData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "Location", ty: "::GlobalNamespace::__OVRPlugin__SpaceStorageLocation", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, ::System::Guid Uuid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation Location) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceEraseCompleteData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief Field Uuid, offset: 0xc, size: 0x10, def value: None
  ::System::Guid Uuid;

  /// @brief Field Location, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation Location;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceShareResultData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8101))
// CS Name: ::OVRDeserialize::SpaceShareResultData
struct CORDL_TYPE __OVRDeserialize__SpaceShareResultData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceShareResultData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceShareResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceListSaveResultData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8102))
// CS Name: ::OVRDeserialize::SpaceListSaveResultData
struct CORDL_TYPE __OVRDeserialize__SpaceListSaveResultData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRDeserialize__SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDeserialize__SpaceListSaveResultData();

  /// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Result, offset: 0x8, size: 0x4, def value: None
  int32_t Result;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRDeserialize
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8103))
// CS Name: ::OVRDeserialize*
class CORDL_TYPE OVRDeserialize : public ::System::Object {
public:
  // Declarations
  using SpaceListSaveResultData = ::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData;

  using SpaceShareResultData = ::GlobalNamespace::__OVRDeserialize__SpaceShareResultData;

  using SpaceEraseCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData;

  using SpaceSaveCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData;

  using SpaceSetComponentStatusCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData;

  using SpatialAnchorCreateCompleteData = ::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData;

  using SceneCaptureCompleteData = ::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData;

  using SpaceQueryCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData;

  using SpaceQueryResultsData = ::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData;

  using DisplayRefreshRateChangedData = ::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData;

  /// @brief Method ByteArrayToStructure addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  // Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDeserialize(OVRDeserialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDeserialize(OVRDeserialize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDeserialize();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDeserialize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize*, "", "OVRDeserialize");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData, "", "OVRDeserialize/SceneCaptureCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData, "", "OVRDeserialize/SpaceListSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData, "", "OVRDeserialize/SpaceQueryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData, "", "OVRDeserialize/SpaceQueryResultsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
