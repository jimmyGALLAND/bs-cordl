#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatToTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBeatToTimeConverter)
// Forward declare root types
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatToTimeConverter);
// Type: ::IBeatToTimeConverter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatToTimeConverter*
class CORDL_TYPE IBeatToTimeConverter {
public:
// Declarations
/// @brief Method ConvertBeatToTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t ConvertBeatToTime(float_t  beat) ;

// Ctor Parameters [CppParam { name: "", ty: "IBeatToTimeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IBeatToTimeConverter(IBeatToTimeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IBeatToTimeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBeatToTimeConverter(IBeatToTimeConverter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatToTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatToTimeConverter*, "", "IBeatToTimeConverter");
