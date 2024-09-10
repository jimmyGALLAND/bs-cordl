#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroup)
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroup);
// Type: ::LightGroup
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroup*
class CORDL_TYPE LightGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lightGroupSO, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightGroupSO, put=__cordl_internal_set__lightGroupSO)) ::UnityW<::GlobalNamespace::LightGroupSO>  _lightGroupSO;

/// @brief Field _lightWithIdManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightWithIdManager, put=__cordl_internal_set__lightWithIdManager)) ::UnityW<::GlobalNamespace::LightWithIdManager>  _lightWithIdManager;

/// @brief Field didRefreshContentEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_didRefreshContentEvent, put=__cordl_internal_set_didRefreshContentEvent)) ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  didRefreshContentEvent;

 __declspec(property(get=get_groupId)) int32_t  groupId;

 __declspec(property(get=get_ignoreLightGroupEffectManager)) bool  ignoreLightGroupEffectManager;

 __declspec(property(get=get_lightGroupSO)) ::UnityW<::GlobalNamespace::LightGroupSO>  lightGroupSO;

 __declspec(property(get=get_numberOfElements)) int32_t  numberOfElements;

/// @brief Field respawnEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnEvent, put=__cordl_internal_set_respawnEvent)) ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  respawnEvent;

 __declspec(property(get=get_sameIdElements)) int32_t  sameIdElements;

 __declspec(property(get=get_startLightId)) int32_t  startLightId;

static inline ::GlobalNamespace::LightGroup* New_ctor() ;

/// @brief Method SetColor, addr 0x395d59c, size 0x8c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroupSO() const;

constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroupSO() ;

constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightWithIdManager() const;

constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightWithIdManager() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_didRefreshContentEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_didRefreshContentEvent() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_respawnEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_respawnEvent() const;

constexpr void __cordl_internal_set__lightGroupSO(::UnityW<::GlobalNamespace::LightGroupSO>  value) ;

constexpr void __cordl_internal_set__lightWithIdManager(::UnityW<::GlobalNamespace::LightWithIdManager>  value) ;

constexpr void __cordl_internal_set_didRefreshContentEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_respawnEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x395d864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didRefreshContentEvent, addr 0x395d43c, size 0xb0, virtual false, abstract: false, final false
inline void add_didRefreshContentEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method add_respawnEvent, addr 0x395d2dc, size 0xb0, virtual false, abstract: false, final false
inline void add_respawnEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method get_groupId, addr 0x395d160, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_groupId() ;

/// @brief Method get_ignoreLightGroupEffectManager, addr 0x395d258, size 0x84, virtual false, abstract: false, final false
inline bool get_ignoreLightGroupEffectManager() ;

/// @brief Method get_lightGroupSO, addr 0x395d060, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroupSO() ;

/// @brief Method get_numberOfElements, addr 0x395d068, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_numberOfElements() ;

/// @brief Method get_sameIdElements, addr 0x395d1dc, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_sameIdElements() ;

/// @brief Method get_startLightId, addr 0x395d0e4, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_startLightId() ;

/// @brief Method remove_didRefreshContentEvent, addr 0x395d4ec, size 0xb0, virtual false, abstract: false, final false
inline void remove_didRefreshContentEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method remove_respawnEvent, addr 0x395d38c, size 0xb0, virtual false, abstract: false, final false
inline void remove_respawnEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroup(LightGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroup(LightGroup const& ) = delete;

/// @brief Field _lightGroupSO, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightGroupSO>  ____lightGroupSO;

/// @brief Field _lightWithIdManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightWithIdManager>  ____lightWithIdManager;

/// @brief Field respawnEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  ___respawnEvent;

/// @brief Field didRefreshContentEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  ___didRefreshContentEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroup, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroup, ____lightGroupSO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroup, ____lightWithIdManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroup, ___respawnEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroup, ___didRefreshContentEvent) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroup*, "", "LightGroup");
