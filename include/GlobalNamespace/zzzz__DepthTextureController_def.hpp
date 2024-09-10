#pragma once
// IWYU pragma private; include "GlobalNamespace/DepthTextureController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DepthTextureController)
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class DepthTextureController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DepthTextureController);
// Type: ::DepthTextureController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DepthTextureController*
class CORDL_TYPE DepthTextureController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _settingsManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

static inline ::GlobalNamespace::DepthTextureController* New_ctor() ;

/// @brief Method Start, addr 0x3aa1740, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x3aa17ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthTextureController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthTextureController(DepthTextureController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthTextureController(DepthTextureController const& ) = delete;

/// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

/// @brief Field kDepthTextureEnabledKeyword offset 0xffffffff size 0x8
static constexpr ::ConstString  kDepthTextureEnabledKeyword{u"DEPTH_TEXTURE_ENABLED"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DepthTextureController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DepthTextureController, ____settingsManager) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DepthTextureController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DepthTextureController*, "", "DepthTextureController");
