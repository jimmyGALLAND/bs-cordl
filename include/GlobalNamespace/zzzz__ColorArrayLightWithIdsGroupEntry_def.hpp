#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorArrayLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorArrayLightWithIdsGroupEntry)
namespace GlobalNamespace {
class ColorArrayLightWithIds;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorArrayLightWithIdsGroupEntry;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry);
// Type: ::ColorArrayLightWithIdsGroupEntry
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorArrayLightWithIdsGroupEntry*
class CORDL_TYPE ColorArrayLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colorArrayLightWithIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorArrayLightWithIds, put=__cordl_internal_set__colorArrayLightWithIds)) ::UnityW<::GlobalNamespace::ColorArrayLightWithIds>  _colorArrayLightWithIds;

/// @brief Field _excludedLightIds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__excludedLightIds, put=__cordl_internal_set__excludedLightIds)) ::ArrayW<int32_t,::Array<int32_t>*>  _excludedLightIds;

/// @brief Field _lightGroups, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightGroups, put=__cordl_internal_set__lightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>  _lightGroups;

 __declspec(property(get=get_lightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>  lightGroups;

static inline ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::ColorArrayLightWithIds> const& __cordl_internal_get__colorArrayLightWithIds() const;

constexpr ::UnityW<::GlobalNamespace::ColorArrayLightWithIds>& __cordl_internal_get__colorArrayLightWithIds() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__excludedLightIds() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__excludedLightIds() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> const& __cordl_internal_get__lightGroups() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>& __cordl_internal_get__lightGroups() ;

constexpr void __cordl_internal_set__colorArrayLightWithIds(::UnityW<::GlobalNamespace::ColorArrayLightWithIds>  value) ;

constexpr void __cordl_internal_set__excludedLightIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>  value) ;

/// @brief Method .ctor, addr 0x395e58c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_lightGroups, addr 0x395e584, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> get_lightGroups() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorArrayLightWithIdsGroupEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry const& ) = delete;

/// @brief Field _colorArrayLightWithIds, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ColorArrayLightWithIds>  ____colorArrayLightWithIds;

/// @brief Field _lightGroups, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>,::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>  ____lightGroups;

/// @brief Field _excludedLightIds, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____excludedLightIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, ____colorArrayLightWithIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, ____lightGroups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, ____excludedLightIds) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*, "", "ColorArrayLightWithIdsGroupEntry");
