#pragma once
// IWYU pragma private; include "GlobalNamespace/Easing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Easing)
// Forward declare root types
namespace GlobalNamespace {
class Easing;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Easing);
// Type: ::Easing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Easing*
class CORDL_TYPE Easing : public ::System::Object {
public:
// Declarations
/// @brief Method BeatSaberInOutBack, addr 0x44483e8, size 0x90, virtual false, abstract: false, final false
static inline float_t BeatSaberInOutBack(float_t  t) ;

/// @brief Method BeatSaberInOutBounce, addr 0x44484f8, size 0xbc, virtual false, abstract: false, final false
static inline float_t BeatSaberInOutBounce(float_t  t) ;

/// @brief Method BeatSaberInOutElastic, addr 0x4448478, size 0x80, virtual false, abstract: false, final false
static inline float_t BeatSaberInOutElastic(float_t  t) ;

/// @brief Method InBack, addr 0x4448034, size 0x2c, virtual false, abstract: false, final false
static inline float_t InBack(float_t  t) ;

/// @brief Method InBounce, addr 0x44482b8, size 0x24, virtual false, abstract: false, final false
static inline float_t InBounce(float_t  t) ;

/// @brief Method InCirc, addr 0x4447fb0, size 0x18, virtual false, abstract: false, final false
static inline float_t InCirc(float_t  t) ;

/// @brief Method InCubic, addr 0x4447d48, size 0xc, virtual false, abstract: false, final false
static inline float_t InCubic(float_t  t) ;

/// @brief Method InElastic, addr 0x4448120, size 0x68, virtual false, abstract: false, final false
static inline float_t InElastic(float_t  t) ;

/// @brief Method InExpo, addr 0x4447eec, size 0x24, virtual false, abstract: false, final false
static inline float_t InExpo(float_t  t) ;

/// @brief Method InOutBack, addr 0x44480b0, size 0x70, virtual false, abstract: false, final false
static inline float_t InOutBack(float_t  t) ;

/// @brief Method InOutBounce, addr 0x4448394, size 0x54, virtual false, abstract: false, final false
static inline float_t InOutBounce(float_t  t) ;

/// @brief Method InOutCirc, addr 0x4447fe4, size 0x50, virtual false, abstract: false, final false
static inline float_t InOutCirc(float_t  t) ;

/// @brief Method InOutCubic, addr 0x4447d7c, size 0x50, virtual false, abstract: false, final false
static inline float_t InOutCubic(float_t  t) ;

/// @brief Method InOutElastic, addr 0x44481f4, size 0xc4, virtual false, abstract: false, final false
static inline float_t InOutElastic(float_t  t) ;

/// @brief Method InOutExpo, addr 0x4447f44, size 0x6c, virtual false, abstract: false, final false
static inline float_t InOutExpo(float_t  t) ;

/// @brief Method InOutQuad, addr 0x4447d1c, size 0x2c, virtual false, abstract: false, final false
static inline float_t InOutQuad(float_t  t) ;

/// @brief Method InOutQuart, addr 0x4447e04, size 0x54, virtual false, abstract: false, final false
static inline float_t InOutQuart(float_t  t) ;

/// @brief Method InOutQuint, addr 0x4447e94, size 0x58, virtual false, abstract: false, final false
static inline float_t InOutQuint(float_t  t) ;

/// @brief Method InOutSine, addr 0x4447cd4, size 0x2c, virtual false, abstract: false, final false
static inline float_t InOutSine(float_t  t) ;

/// @brief Method InQuad, addr 0x4447d00, size 0x8, virtual false, abstract: false, final false
static inline float_t InQuad(float_t  t) ;

/// @brief Method InQuart, addr 0x4447dcc, size 0x10, virtual false, abstract: false, final false
static inline float_t InQuart(float_t  t) ;

/// @brief Method InQuint, addr 0x4447e58, size 0x14, virtual false, abstract: false, final false
static inline float_t InQuint(float_t  t) ;

/// @brief Method InSine, addr 0x4447c90, size 0x2c, virtual false, abstract: false, final false
static inline float_t InSine(float_t  t) ;

/// @brief Method Linear, addr 0x4447c8c, size 0x4, virtual false, abstract: false, final false
static inline float_t Linear(float_t  t) ;

/// @brief Method OutBack, addr 0x4448060, size 0x50, virtual false, abstract: false, final false
static inline float_t OutBack(float_t  t) ;

/// @brief Method OutBounce, addr 0x44482dc, size 0xb8, virtual false, abstract: false, final false
static inline float_t OutBounce(float_t  t) ;

/// @brief Method OutCirc, addr 0x4447fc8, size 0x1c, virtual false, abstract: false, final false
static inline float_t OutCirc(float_t  t) ;

/// @brief Method OutCubic, addr 0x4447d54, size 0x28, virtual false, abstract: false, final false
static inline float_t OutCubic(float_t  t) ;

/// @brief Method OutElastic, addr 0x4448188, size 0x6c, virtual false, abstract: false, final false
static inline float_t OutElastic(float_t  t) ;

/// @brief Method OutExpo, addr 0x4447f10, size 0x34, virtual false, abstract: false, final false
static inline float_t OutExpo(float_t  t) ;

/// @brief Method OutQuad, addr 0x4447d08, size 0x14, virtual false, abstract: false, final false
static inline float_t OutQuad(float_t  t) ;

/// @brief Method OutQuart, addr 0x4447ddc, size 0x28, virtual false, abstract: false, final false
static inline float_t OutQuart(float_t  t) ;

/// @brief Method OutQuint, addr 0x4447e6c, size 0x28, virtual false, abstract: false, final false
static inline float_t OutQuint(float_t  t) ;

/// @brief Method OutSine, addr 0x4447cbc, size 0x18, virtual false, abstract: false, final false
static inline float_t OutSine(float_t  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing(Easing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing(Easing const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Easing, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Easing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Easing*, "", "Easing");
