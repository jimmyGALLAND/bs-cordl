#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSettingsError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSettingsError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSettingsError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSettingsError);
// Type: OVR.OpenVR::EVRSettingsError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRSettingsError
struct CORDL_TYPE EVRSettingsError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRSettingsError_Unwrapped
enum struct __EVRSettingsError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IPCFailed = static_cast<int32_t>(0x1),
__E_WriteFailed = static_cast<int32_t>(0x2),
__E_ReadFailed = static_cast<int32_t>(0x3),
__E_JsonParseFailed = static_cast<int32_t>(0x4),
__E_UnsetSettingHasNoDefault = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSettingsError_Unwrapped () const noexcept {
return static_cast<__EVRSettingsError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVRSettingsError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSettingsError(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field IPCFailed value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRSettingsError const IPCFailed;

/// @brief Field JsonParseFailed value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRSettingsError const JsonParseFailed;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRSettingsError const None;

/// @brief Field ReadFailed value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::EVRSettingsError const ReadFailed;

/// @brief Field UnsetSettingHasNoDefault value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::EVRSettingsError const UnsetSettingHasNoDefault;

/// @brief Field WriteFailed value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRSettingsError const WriteFailed;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSettingsError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRSettingsError, value__) == 0x0, "Offset mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSettingsError, "OVR.OpenVR", "EVRSettingsError");
