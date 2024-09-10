#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RenderingThreadingMode;
}
namespace UnityEngine {
struct BatteryStatus;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SystemInfo);
// Type: UnityEngine::SystemInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SystemInfo*
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetBatteryLevel, addr 0x48204d8, size 0x28, virtual false, abstract: false, final false
static inline float_t GetBatteryLevel() ;

/// @brief Method GetBatteryStatus, addr 0x4820528, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus GetBatteryStatus() ;

/// @brief Method GetCompatibleFormat, addr 0x4820ffc, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::FormatUsage  usage) ;

/// @brief Method GetDeviceModel, addr 0x48207f8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceName, addr 0x48207a8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDeviceName() ;

/// @brief Method GetDeviceType, addr 0x4820848, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType GetDeviceType() ;

/// @brief Method GetDeviceUniqueIdentifier, addr 0x4820758, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDeviceUniqueIdentifier() ;

/// @brief Method GetGraphicsDeviceID, addr 0x4820988, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceID() ;

/// @brief Method GetGraphicsDeviceName, addr 0x48208e8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceType, addr 0x4820a28, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// @brief Method GetGraphicsDeviceVendor, addr 0x4820938, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVendor() ;

/// @brief Method GetGraphicsDeviceVendorID, addr 0x48209d8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceVendorID() ;

/// @brief Method GetGraphicsDeviceVersion, addr 0x4820a78, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsFormat, addr 0x4821040, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetGraphicsMemorySize, addr 0x4820898, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsMemorySize() ;

/// @brief Method GetGraphicsMultiThreaded, addr 0x4820b18, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsMultiThreaded() ;

/// @brief Method GetGraphicsShaderLevel, addr 0x4820ac8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsShaderLevel() ;

/// @brief Method GetMaxRenderTextureSize, addr 0x4820f90, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxRenderTextureSize() ;

/// @brief Method GetMaxTextureSize, addr 0x4820f40, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureSize() ;

/// @brief Method GetOperatingSystem, addr 0x4820578, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetOperatingSystem() ;

/// @brief Method GetOperatingSystemFamily, addr 0x48205c8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetPhysicalMemoryMB, addr 0x4820708, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetPhysicalMemoryMB() ;

/// @brief Method GetProcessorCount, addr 0x48206b8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorCount() ;

/// @brief Method GetProcessorFrequencyMHz, addr 0x4820668, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorFrequencyMHz() ;

/// @brief Method GetProcessorType, addr 0x4820618, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetProcessorType() ;

/// @brief Method GetRenderingThreadingMode, addr 0x4820b68, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode() ;

/// @brief Method HasRenderTextureNative, addr 0x4820dcc, size 0x3c, virtual false, abstract: false, final false
static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method IsFormatSupported, addr 0x4820fb8, size 0x44, virtual false, abstract: false, final false
static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::FormatUsage  usage) ;

/// @brief Method IsValidEnumValue, addr 0x4820c80, size 0x78, virtual false, abstract: false, final false
static inline bool IsValidEnumValue(::bs_hook::EnumPtr  value) ;

/// @brief Method SupportsComputeShaders, addr 0x4820bb8, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsComputeShaders() ;

/// @brief Method SupportsInstancing, addr 0x4820c08, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsInstancing() ;

/// @brief Method SupportsRenderTextureFormat, addr 0x4820cf8, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsTextureFormat, addr 0x4820e08, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method SupportsTextureFormatNative, addr 0x4820edc, size 0x3c, virtual false, abstract: false, final false
static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat  format) ;

/// @brief Method UsesReversedZBuffer, addr 0x4820c58, size 0x28, virtual false, abstract: false, final false
static inline bool UsesReversedZBuffer() ;

/// @brief Method get_batteryLevel, addr 0x48204b0, size 0x28, virtual false, abstract: false, final false
static inline float_t get_batteryLevel() ;

/// @brief Method get_batteryStatus, addr 0x4820500, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus get_batteryStatus() ;

/// @brief Method get_deviceModel, addr 0x48207d0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_deviceModel() ;

/// @brief Method get_deviceName, addr 0x4820780, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_deviceName() ;

/// @brief Method get_deviceType, addr 0x4820820, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_deviceUniqueIdentifier, addr 0x4820730, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_deviceUniqueIdentifier() ;

/// @brief Method get_graphicsDeviceID, addr 0x4820960, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceID() ;

/// @brief Method get_graphicsDeviceName, addr 0x48208c0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType, addr 0x4820a00, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVendor, addr 0x4820910, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVendor() ;

/// @brief Method get_graphicsDeviceVendorID, addr 0x48209b0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceVendorID() ;

/// @brief Method get_graphicsDeviceVersion, addr 0x4820a50, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsMemorySize, addr 0x4820870, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsMultiThreaded, addr 0x4820af0, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsMultiThreaded() ;

/// @brief Method get_graphicsShaderLevel, addr 0x4820aa0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsShaderLevel() ;

/// @brief Method get_maxRenderTextureSize, addr 0x4820f68, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxRenderTextureSize() ;

/// @brief Method get_maxTextureSize, addr 0x4820f18, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxTextureSize() ;

/// @brief Method get_operatingSystem, addr 0x4820550, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily, addr 0x48205a0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorCount, addr 0x4820690, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorCount() ;

/// @brief Method get_processorFrequency, addr 0x4820640, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorFrequency() ;

/// @brief Method get_processorType, addr 0x48205f0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_processorType() ;

/// @brief Method get_renderingThreadingMode, addr 0x4820b40, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode() ;

/// @brief Method get_supportsComputeShaders, addr 0x4820b90, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsComputeShaders() ;

/// @brief Method get_supportsInstancing, addr 0x4820be0, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsInstancing() ;

/// @brief Method get_systemMemorySize, addr 0x48206e0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_systemMemorySize() ;

/// @brief Method get_usesReversedZBuffer, addr 0x4820c30, size 0x28, virtual false, abstract: false, final false
static inline bool get_usesReversedZBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
