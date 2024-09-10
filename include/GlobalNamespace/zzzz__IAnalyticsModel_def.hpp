#pragma once
// IWYU pragma private; include "GlobalNamespace/IAnalyticsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAnalyticsModel)
namespace GlobalNamespace {
struct BeatSaberSessionEventType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAnalyticsModel);
// Type: ::IAnalyticsModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAnalyticsModel*
class CORDL_TYPE IAnalyticsModel {
public:
// Declarations
 __declspec(property(get=get_supportsOpenDataPrivacyPage)) bool  supportsOpenDataPrivacyPage;

/// @brief Method LogClick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogClick(::StringW  clickType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clickData) ;

/// @brief Method LogEditAvatarEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogEditAvatarEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogExposure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogExposure(::StringW  exposureType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  exposureData) ;

/// @brief Method LogImpression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogImpression(::StringW  impressionType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  impressionData) ;

/// @brief Method LogSessionEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType  eventType, int32_t  timeSinceSessionStart) ;

/// @brief Method OpenDataPrivacyPage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OpenDataPrivacyPage() ;

/// @brief Method get_supportsOpenDataPrivacyPage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_supportsOpenDataPrivacyPage() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAnalyticsModel(IAnalyticsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalyticsModel(IAnalyticsModel const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAnalyticsModel*, "", "IAnalyticsModel");
