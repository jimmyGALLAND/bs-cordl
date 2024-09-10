#pragma once
// IWYU pragma private; include "LufsMetering/AudioJobHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioJobHelpers)
namespace LufsMetering {
struct FilterCoefficients;
}
// Forward declare root types
namespace LufsMetering {
class AudioJobHelpers;
}
// Write type traits
MARK_REF_PTR_T(::LufsMetering::AudioJobHelpers);
// Type: LufsMetering::AudioJobHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: false
// CS Name: ::LufsMetering::AudioJobHelpers*
class CORDL_TYPE AudioJobHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method GetHighPassDeManCoefficients, addr 0x3ae3240, size 0x7c, virtual false, abstract: false, final false
static inline ::LufsMetering::FilterCoefficients GetHighPassDeManCoefficients(float_t  quality, float_t  frequency, float_t  rate) ;

/// @brief Method GetHighShelfDeManCoefficients, addr 0x3ae3178, size 0xc8, virtual false, abstract: false, final false
static inline ::LufsMetering::FilterCoefficients GetHighShelfDeManCoefficients(float_t  gain, float_t  quality, float_t  frequency, float_t  rate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioJobHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioJobHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioJobHelpers(AudioJobHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioJobHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioJobHelpers(AudioJobHelpers const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::AudioJobHelpers, 0x10>, "Size mismatch!");

} // namespace end def LufsMetering
NEED_NO_BOX(::LufsMetering::AudioJobHelpers);
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::AudioJobHelpers*, "LufsMetering", "AudioJobHelpers");
