#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchiveStatus)
// Forward declare root types
namespace Unity::IO::Archive {
struct ArchiveStatus;
}
// Write type traits
MARK_VAL_T(::Unity::IO::Archive::ArchiveStatus);
// Type: Unity.IO.Archive::ArchiveStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::IO::Archive {
// Is value type: true
// CS Name: ::Unity.IO.Archive::ArchiveStatus
struct CORDL_TYPE ArchiveStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArchiveStatus_Unwrapped
enum struct __ArchiveStatus_Unwrapped : int32_t {
__E_InProgress = static_cast<int32_t>(0x0),
__E_Complete = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArchiveStatus_Unwrapped () const noexcept {
return static_cast<__ArchiveStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArchiveStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArchiveStatus(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Complete value: static_cast<int32_t>(0x1)
static ::Unity::IO::Archive::ArchiveStatus const Complete;

/// @brief Field Failed value: static_cast<int32_t>(0x2)
static ::Unity::IO::Archive::ArchiveStatus const Failed;

/// @brief Field InProgress value: static_cast<int32_t>(0x0)
static ::Unity::IO::Archive::ArchiveStatus const InProgress;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::Archive::ArchiveStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::Archive::ArchiveStatus, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::IO::Archive
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveStatus, "Unity.IO.Archive", "ArchiveStatus");
