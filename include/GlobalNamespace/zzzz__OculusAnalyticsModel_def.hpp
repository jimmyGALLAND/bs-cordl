#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusAnalyticsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusAnalyticsModel)
namespace GlobalNamespace {
struct BeatSaberSessionEventType;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusAnalyticsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusAnalyticsModel);
// Type: ::OculusAnalyticsModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusAnalyticsModel*
class CORDL_TYPE OculusAnalyticsModel : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_supportsOpenDataPrivacyPage)) bool  supportsOpenDataPrivacyPage;

/// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
constexpr operator  ::GlobalNamespace::IAnalyticsModel*() noexcept;

/// @brief Method LogClick, addr 0x222c9ac, size 0x90, virtual true, abstract: false, final true
inline void LogClick(::StringW  clickType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clickData) ;

/// @brief Method LogEditAvatarEvent, addr 0x222c890, size 0x11c, virtual true, abstract: false, final true
inline void LogEditAvatarEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogEvent, addr 0x222c594, size 0x11c, virtual true, abstract: false, final true
inline void LogEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogExposure, addr 0x222cacc, size 0x90, virtual true, abstract: false, final true
inline void LogExposure(::StringW  exposureType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  exposureData) ;

/// @brief Method LogImpression, addr 0x222ca3c, size 0x90, virtual true, abstract: false, final true
inline void LogImpression(::StringW  impressionType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  impressionData) ;

/// @brief Method LogSessionEvent, addr 0x222c6b0, size 0x1e0, virtual true, abstract: false, final true
inline void LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType  eventType, int32_t  timeSinceSessionStart) ;

static inline ::GlobalNamespace::OculusAnalyticsModel* New_ctor() ;

/// @brief Method OpenDataPrivacyPage, addr 0x222c590, size 0x4, virtual true, abstract: false, final true
inline void OpenDataPrivacyPage() ;

/// @brief Method .ctor, addr 0x222cb5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_supportsOpenDataPrivacyPage, addr 0x222c588, size 0x8, virtual true, abstract: false, final true
inline bool get_supportsOpenDataPrivacyPage() ;

/// @brief Convert to "::GlobalNamespace::IAnalyticsModel"
constexpr ::GlobalNamespace::IAnalyticsModel* i___GlobalNamespace__IAnalyticsModel() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OculusAnalyticsModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusAnalyticsModel(OculusAnalyticsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusAnalyticsModel(OculusAnalyticsModel const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
