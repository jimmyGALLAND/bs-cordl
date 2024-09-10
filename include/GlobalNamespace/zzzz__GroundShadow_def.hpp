#pragma once
// IWYU pragma private; include "GlobalNamespace/GroundShadow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GroundShadow)
// Forward declare root types
namespace GlobalNamespace {
class GroundShadow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GroundShadow);
// Type: ::GroundShadow
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GroundShadow*
class CORDL_TYPE GroundShadow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GroundShadow* New_ctor() ;

/// @brief Method OnEnable, addr 0x3963e94, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x3963f34, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Setup, addr 0x3963e98, size 0x9c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method .ctor, addr 0x3963f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroundShadow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroundShadow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroundShadow(GroundShadow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroundShadow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroundShadow(GroundShadow const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GroundShadow, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GroundShadow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GroundShadow*, "", "GroundShadow");
