#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttingManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CuttingManager)
namespace GlobalNamespace {
class NoteCutter;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttingManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CuttingManager);
// Type: ::CuttingManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CuttingManager*
class CORDL_TYPE CuttingManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _noteCutter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteCutter, put=__cordl_internal_set__noteCutter)) ::GlobalNamespace::NoteCutter*  _noteCutter;

/// @brief Field _saberManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__saberManager, put=__cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager>  _saberManager;

/// @brief Method HandleSaberManagerDidUpdateSaberPositions, addr 0x3b53828, size 0x44, virtual false, abstract: false, final false
inline void HandleSaberManagerDidUpdateSaberPositions(::GlobalNamespace::Saber*  leftSaber, ::GlobalNamespace::Saber*  rightSaber) ;

static inline ::GlobalNamespace::CuttingManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x3b536ec, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x3b535b0, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::NoteCutter*& __cordl_internal_get__noteCutter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutter*> const& __cordl_internal_get__noteCutter() const;

constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager() ;

constexpr void __cordl_internal_set__noteCutter(::GlobalNamespace::NoteCutter*  value) ;

constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager>  value) ;

/// @brief Method .ctor, addr 0x3b53dac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuttingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CuttingManager(CuttingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuttingManager(CuttingManager const& ) = delete;

/// @brief Field _saberManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SaberManager>  ____saberManager;

/// @brief Field _noteCutter, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::NoteCutter*  ____noteCutter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttingManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CuttingManager, ____saberManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuttingManager, ____noteCutter) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttingManager*, "", "CuttingManager");
