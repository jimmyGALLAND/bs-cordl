#pragma once
// IWYU pragma private; include "TMPro/KerningPairKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KerningPairKey)
// Forward declare root types
namespace TMPro {
struct KerningPairKey;
}
// Write type traits
MARK_VAL_T(::TMPro::KerningPairKey);
// Type: TMPro::KerningPairKey
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::KerningPairKey
struct CORDL_TYPE KerningPairKey {
public:
// Declarations
/// @brief Method .ctor, addr 0x474251c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  ascii_left, uint32_t  ascii_right) ;

// Ctor Parameters []
// @brief default ctor
constexpr KerningPairKey() ;

// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KerningPairKey(uint32_t  ascii_Left, uint32_t  ascii_Right, uint32_t  key) noexcept;

/// @brief Field ascii_Left, offset: 0x0, size: 0x4, def value: None
 uint32_t  ascii_Left;

/// @brief Field ascii_Right, offset: 0x4, size: 0x4, def value: None
 uint32_t  ascii_Right;

/// @brief Field key, offset: 0x8, size: 0x4, def value: None
 uint32_t  key;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::KerningPairKey, 0xc>, "Size mismatch!");

static_assert(offsetof(::TMPro::KerningPairKey, ascii_Left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPairKey, ascii_Right) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPairKey, key) == 0x8, "Offset mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPairKey, "TMPro", "KerningPairKey");
