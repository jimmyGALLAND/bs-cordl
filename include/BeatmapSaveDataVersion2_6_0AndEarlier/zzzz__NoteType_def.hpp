#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/NoteType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteType)
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct NoteType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType);
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::NoteType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType
struct CORDL_TYPE NoteType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteType_Unwrapped
enum struct __NoteType_Unwrapped : int32_t {
__E_NoteA = static_cast<int32_t>(0x0),
__E_NoteB = static_cast<int32_t>(0x1),
__E_GhostNote = static_cast<int32_t>(0x2),
__E_Bomb = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteType_Unwrapped () const noexcept {
return static_cast<__NoteType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoteType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteType(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Bomb value: static_cast<int32_t>(0x3)
static ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const Bomb;

/// @brief Field GhostNote value: static_cast<int32_t>(0x2)
static ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const GhostNote;

/// @brief Field None value: static_cast<int32_t>(0xffffffff)
static ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const None;

/// @brief Field NoteA value: static_cast<int32_t>(0x0)
static ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const NoteA;

/// @brief Field NoteB value: static_cast<int32_t>(0x1)
static ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const NoteB;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType, value__) == 0x0, "Offset mismatch!");

} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType, "BeatmapSaveDataVersion2_6_0AndEarlier", "NoteType");
