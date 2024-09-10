#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingTutorialPresenceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingTutorialPresenceData)
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingTutorialPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingTutorialPresenceData);
// Type: ::PlayingTutorialPresenceData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayingTutorialPresenceData*
class CORDL_TYPE PlayingTutorialPresenceData : public ::System::Object {
public:
// Declarations
/// @brief Field _localizedDescription, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedDescription, put=__cordl_internal_set__localizedDescription)) ::StringW  _localizedDescription;

 __declspec(property(get=get_apiName)) ::StringW  apiName;

 __declspec(property(get=get_localizedDescription)) ::StringW  localizedDescription;

/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr operator  ::GlobalNamespace::IRichPresenceData*() noexcept;

static inline ::GlobalNamespace::PlayingTutorialPresenceData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__localizedDescription() const;

constexpr ::StringW& __cordl_internal_get__localizedDescription() ;

constexpr void __cordl_internal_set__localizedDescription(::StringW  value) ;

/// @brief Method .ctor, addr 0x3aa01e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_apiName, addr 0x3aa014c, size 0x40, virtual true, abstract: false, final true
inline ::StringW get_apiName() ;

/// @brief Method get_localizedDescription, addr 0x3aa018c, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_localizedDescription() ;

/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* i___GlobalNamespace__IRichPresenceData() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayingTutorialPresenceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayingTutorialPresenceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayingTutorialPresenceData(PlayingTutorialPresenceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayingTutorialPresenceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayingTutorialPresenceData(PlayingTutorialPresenceData const& ) = delete;

/// @brief Field _localizedDescription, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____localizedDescription;

/// @brief Field kPlayingTutorialRichPresenceLocalizationKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kPlayingTutorialRichPresenceLocalizationKey{u"PLAYING_TUTORIAL_PRESENCE"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingTutorialPresenceData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingTutorialPresenceData, ____localizedDescription) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingTutorialPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingTutorialPresenceData*, "", "PlayingTutorialPresenceData");
