#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableWhenMirrorIsEnabled.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableWhenMirrorIsEnabled)
namespace GlobalNamespace {
class Mirror;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableWhenMirrorIsEnabled;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableWhenMirrorIsEnabled);
// Type: ::DisableWhenMirrorIsEnabled
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableWhenMirrorIsEnabled*
class CORDL_TYPE DisableWhenMirrorIsEnabled : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mirror, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mirror, put=__cordl_internal_set__mirror)) ::UnityW<::GlobalNamespace::Mirror>  _mirror;

 __declspec(property(get=get_mirror, put=set_mirror)) ::UnityW<::GlobalNamespace::Mirror>  mirror;

/// @brief Method HandleMirrorDidChangeEnabledState, addr 0x3a8b870, size 0x2c, virtual false, abstract: false, final false
inline void HandleMirrorDidChangeEnabledState(bool  isEnabled) ;

static inline ::GlobalNamespace::DisableWhenMirrorIsEnabled* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3a8b89c, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3a8b7cc, size 0xa4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::Mirror> const& __cordl_internal_get__mirror() const;

constexpr ::UnityW<::GlobalNamespace::Mirror>& __cordl_internal_get__mirror() ;

constexpr void __cordl_internal_set__mirror(::UnityW<::GlobalNamespace::Mirror>  value) ;

/// @brief Method .ctor, addr 0x3a8b96c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_mirror, addr 0x3a8b7bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Mirror> get_mirror() ;

/// @brief Method set_mirror, addr 0x3a8b7c4, size 0x8, virtual false, abstract: false, final false
inline void set_mirror(::GlobalNamespace::Mirror*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableWhenMirrorIsEnabled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableWhenMirrorIsEnabled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableWhenMirrorIsEnabled(DisableWhenMirrorIsEnabled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableWhenMirrorIsEnabled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableWhenMirrorIsEnabled(DisableWhenMirrorIsEnabled const& ) = delete;

/// @brief Field _mirror, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Mirror>  ____mirror;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableWhenMirrorIsEnabled, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableWhenMirrorIsEnabled, ____mirror) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableWhenMirrorIsEnabled);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableWhenMirrorIsEnabled*, "", "DisableWhenMirrorIsEnabled");
