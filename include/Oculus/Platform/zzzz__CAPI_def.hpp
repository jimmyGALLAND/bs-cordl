#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CAPI)
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct AccountAgeCategory;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace Oculus::Platform {
struct AppAgeCategory;
}
namespace Oculus::Platform {
struct AppStatus;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct KeyValuePairType;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System {
class Array;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CAPI);
MARK_REF_PTR_T(::Oculus::Platform::__CAPI__FilterCallback);
MARK_VAL_T(::Oculus::Platform::__CAPI__OculusInitParams);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrKeyValuePair);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrNetSyncVec3);
// Type: ::ovrKeyValuePair
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::ovrKeyValuePair
struct CORDL_TYPE __CAPI__ovrKeyValuePair {
public:
// Declarations
/// @brief Method .ctor, addr 0x3eccc80, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor, addr 0x3eccc98, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, double_t  value) ;

/// @brief Method .ctor, addr 0x3ecc784, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __CAPI__ovrKeyValuePair() ;

// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr __CAPI__ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept;

/// @brief Field key_, offset: 0x0, size: 0x8, def value: None
 ::StringW  key_;

/// @brief Field valueType_, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Platform::KeyValuePairType  valueType_;

/// @brief Field stringValue_, offset: 0x10, size: 0x8, def value: None
 ::StringW  stringValue_;

/// @brief Field intValue_, offset: 0x18, size: 0x4, def value: None
 int32_t  intValue_;

/// @brief Field doubleValue_, offset: 0x20, size: 0x8, def value: None
 double_t  doubleValue_;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrKeyValuePair, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, key_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, valueType_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, stringValue_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, intValue_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, doubleValue_) == 0x20, "Offset mismatch!");

} // namespace end def Oculus::Platform
// Type: ::ovrNetSyncVec3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::ovrNetSyncVec3
struct CORDL_TYPE __CAPI__ovrNetSyncVec3 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __CAPI__ovrNetSyncVec3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr __CAPI__ovrNetSyncVec3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrNetSyncVec3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, z) == 0x8, "Offset mismatch!");

} // namespace end def Oculus::Platform
// Type: ::OculusInitParams
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::OculusInitParams
struct CORDL_TYPE __CAPI__OculusInitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __CAPI__OculusInitParams() ;

// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __CAPI__OculusInitParams(int32_t  sType, ::StringW  email, ::StringW  password, uint64_t  appId, ::StringW  uriPrefixOverride) noexcept;

/// @brief Field sType, offset: 0x0, size: 0x4, def value: None
 int32_t  sType;

/// @brief Field email, offset: 0x8, size: 0x8, def value: None
 ::StringW  email;

/// @brief Field password, offset: 0x10, size: 0x8, def value: None
 ::StringW  password;

/// @brief Field appId, offset: 0x18, size: 0x8, def value: None
 uint64_t  appId;

/// @brief Field uriPrefixOverride, offset: 0x20, size: 0x8, def value: None
 ::StringW  uriPrefixOverride;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__OculusInitParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, sType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, email) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, uriPrefixOverride) == 0x20, "Offset mismatch!");

} // namespace end def Oculus::Platform
// Type: ::FilterCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::CAPI::FilterCallback*
class CORDL_TYPE __CAPI__FilterCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x3ee86fc, size 0xd8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x3ee87d4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x3ee86e8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels) ;

static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3ee8648, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __CAPI__FilterCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CAPI__FilterCallback(__CAPI__FilterCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CAPI__FilterCallback(__CAPI__FilterCallback const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__FilterCallback, 0x80>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: Oculus.Platform::CAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::CAPI*
class CORDL_TYPE CAPI : public ::System::Object {
public:
// Declarations
using FilterCallback = ::Oculus::Platform::__CAPI__FilterCallback;

using OculusInitParams = ::Oculus::Platform::__CAPI__OculusInitParams;

using ovrKeyValuePair = ::Oculus::Platform::__CAPI__ovrKeyValuePair;

using ovrNetSyncVec3 = ::Oculus::Platform::__CAPI__ovrNetSyncVec3;

/// @brief Field nativeStringEncoding, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_nativeStringEncoding, put=setStaticF_nativeStringEncoding)) ::System::Text::UTF8Encoding*  nativeStringEncoding;

/// @brief Method ArrayOfStructsToIntPtr, addr 0x3ecc3a4, size 0x198, virtual false, abstract: false, final false
static inline ::System::IntPtr ArrayOfStructsToIntPtr(::System::Array*  ar) ;

/// @brief Method BlobFromNative, addr 0x3ecd38c, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> BlobFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method DataStoreFromNative, addr 0x3eccd70, size 0x128, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* DataStoreFromNative(::System::IntPtr  pointer) ;

/// @brief Method DateTimeFromNative, addr 0x3ecd1bc, size 0xa4, virtual false, abstract: false, final false
static inline ::System::DateTime DateTimeFromNative(uint64_t  seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative, addr 0x3ecd260, size 0x12c, virtual false, abstract: false, final false
static inline uint64_t DateTimeToNative(::System::DateTime  dt) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x3ecc53c, size 0x248, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool>*  dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x3ecc7a0, size 0x4e0, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dict) ;

/// @brief Method FiledataFromNative, addr 0x3ecd464, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FiledataFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x3ecd148, size 0x74, virtual false, abstract: false, final false
static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(::System::IntPtr  pointer) ;

/// @brief Method IntPtrToByteArray, addr 0x3ecccb4, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IntPtrToByteArray(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LogNewEvent, addr 0x3ece588, size 0x330, virtual false, abstract: false, final false
static inline void LogNewEvent(::StringW  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

/// @brief Method LogNewUnifiedEvent, addr 0x3ece4e0, size 0xa8, virtual false, abstract: false, final false
static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

static inline ::Oculus::Platform::CAPI* New_ctor() ;

/// @brief Method StringFromNative, addr 0x3ecd030, size 0x118, virtual false, abstract: false, final false
static inline ::StringW StringFromNative(::System::IntPtr  pointer) ;

/// @brief Method StringToNative, addr 0x3ecd504, size 0x17c, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToNative(::StringW  s) ;

/// @brief Method .ctor, addr 0x3ee85cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding() ;

/// @brief Method ovr_AbuseReportOptions_Create, addr 0x3ec9f60, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x3eca280, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x3eca030, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x3eca11c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x3ed78a8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x3ed7900, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportRecording_GetRecordingUuid_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x3ed006c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t  content_id, ::System::IntPtr  abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x3ed00f0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse  response) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x3ed7bc4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x3ed7c48, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x3ed7ca0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x3ed7d1c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementDefinitionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x3ed7d98, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementDefinitionArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x3ed797c, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName, addr 0x3ed79f8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinition_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x3ed7a50, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinition_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x3ed7acc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementDefinition_GetTarget(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetType, addr 0x3ed7b48, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x3ed8198, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x3ed821c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x3ed8274, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x3ed82f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementProgressArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x3ed836c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgressArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x3ed7e1c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetBitfield(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x3ed7e74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetBitfield_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetCount, addr 0x3ed7ef0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetCount(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x3ed7f6c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgress_GetIsUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName, addr 0x3ed7ff0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x3ed8048, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x3ed80c4, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x3ed811c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x3ed83f0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementUpdate_GetJustUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName, addr 0x3ed8474, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementUpdate_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x3ed84cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementUpdate_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Achievements_AddCount, addr 0x3ed016c, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount(::StringW  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddCount_Native, addr 0x3ed0218, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount_Native(::System::IntPtr  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddFields, addr 0x3ed029c, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields(::StringW  name, ::StringW  fields) ;

/// @brief Method ovr_Achievements_AddFields_Native, addr 0x3ed0364, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields_Native(::System::IntPtr  name, ::System::IntPtr  fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x3ed03e8, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress, addr 0x3ed0450, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x3ed04b8, size 0x12c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_GetProgressByName, addr 0x3ed05e4, size 0x12c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_Unlock, addr 0x3ed0710, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock(::StringW  name) ;

/// @brief Method ovr_Achievements_Unlock_Native, addr 0x3ed07ac, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock_Native(::System::IntPtr  name) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x3eca828, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x3eca550, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x3eca904, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x3eca360, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x3ecab4c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x3eca438, size 0xc0, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::System::IntPtr  handle, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x3ee61fc, size 0x94, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::System::IntPtr  handle, ::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x3eca634, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x3ee6290, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x3eca73c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x3eca9e8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportVideoMode  value) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x3ed8548, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x3ed85c4, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x3ed8640, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x3ed86bc, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadResult_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x3ed8b54, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x3ed8bd8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x3ed8c30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x3ed8cac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ApplicationInviteArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x3ed8d28, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInviteArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x3ed87b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetID, addr 0x3ed8830, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationInvite_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x3ed88ac, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInvite_GetIsActive(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x3ed8930, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x3ed8988, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x3ed8a04, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x3ed8a5c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x3ed8ad8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetRecipient(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x3ece954, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x3ed0b30, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x3ed0b98, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x3ece9bc, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x3ecea58, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::System::IntPtr  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x3ed0c00, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW  sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x3ed0c9c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::System::IntPtr  sessionKey) ;

/// @brief Method ovr_ApplicationOptions_Create, addr 0x3ecaf08, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy, addr 0x3ecb55c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x3ecafd8, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x3ee6314, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x3ecb0e0, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x3ee6398, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x3ecb1e8, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x3ee641c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x3ecb2f0, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x3ee64a0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x3ecb3f8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetRoomId(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x3ed8dac, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetCurrentCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x3ed8e28, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetCurrentName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x3ed8e80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetCurrentName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x3ed8efc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetLatestCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x3ed8f78, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetLatestName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x3ed8fd0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetLatestName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x3ed904c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ApplicationVersion_GetReleaseDate(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize, addr 0x3ed90c8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x3ed9120, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetSize_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_CancelAppDownload, addr 0x3ed0828, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CancelAppDownload() ;

/// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x3ed0890, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CheckAppDownloadProgress() ;

/// @brief Method ovr_Application_GetID, addr 0x3ed8738, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_GetInstalledApplications, addr 0x3ed08f8, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion, addr 0x3ed0960, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x3ed09c8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_LaunchOtherApp, addr 0x3ed0a44, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t  appID, ::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_StartAppDownload, addr 0x3ed0ac8, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_StartAppDownload() ;

/// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x3ed96b8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetailsArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x3ed973c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AssetDetailsArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId, addr 0x3ed919c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetDetails_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType, addr 0x3ed9218, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetAssetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x3ed9270, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetAssetType_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x3ed92ec, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetDownloadStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x3ed9344, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetDownloadStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath, addr 0x3ed93c0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x3ed9418, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x3ed9494, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetIapStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x3ed94ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetIapStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage, addr 0x3ed9568, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetLanguage(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata, addr 0x3ed95e4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetMetadata(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x3ed963c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetMetadata_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x3ed97b8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x3ed9834, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x3ed98b0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x3ed9908, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDeleteResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x3ed9984, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDeleteResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x3ed9a08, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x3ed9a84, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x3ed9b00, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x3ed9b58, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x3ed9bd4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x3ed9c58, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x3ed9cd4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x3ed9d2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x3ed9da8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x3ed9e24, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x3ed9ea0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x3ed9f1c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x3ed9f98, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x3eda014, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x3eda090, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFile_Delete, addr 0x3ed0d18, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Delete(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById, addr 0x3ed0d94, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName, addr 0x3ed0e10, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x3ed0eac, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_Download, addr 0x3ed0f28, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Download(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById, addr 0x3ed0fa4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName, addr 0x3ed1020, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x3ed10bc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel, addr 0x3ed1138, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x3ed11b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x3ed1230, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x3ed12cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_GetList, addr 0x3ed1348, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status, addr 0x3ed13b0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Status(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById, addr 0x3ed142c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName, addr 0x3ed14a8, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x3ed1544, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AvatarEditorOptions_Create, addr 0x3ecb63c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x3ecb88c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x3ecb70c, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x3ee6524, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x3eda114, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AvatarEditorResult_GetRequestSent(::System::IntPtr  obj) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x3ed15c0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_LaunchAvatarEditor(::System::IntPtr  options) ;

/// @brief Method ovr_Avatar_UpdateMetaData, addr 0x3ed163c, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW  avatarMetaData, ::StringW  imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x3ed1704, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData_Native(::System::IntPtr  avatarMetaData, ::System::IntPtr  imageFilePath) ;

/// @brief Method ovr_BlockedUserArray_GetElement, addr 0x3eda214, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x3eda298, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_BlockedUserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x3eda2f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize, addr 0x3eda36c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_BlockedUserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x3eda3e8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_BlockedUserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUser_GetId, addr 0x3eda198, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_BlockedUser_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetElement, addr 0x3edaaa4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x3edab28, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x3edab80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x3edabfc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x3edac54, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetSize, addr 0x3edacd0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x3edad4c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x3edadc8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x3edae4c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x3edb448, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x3edb4cc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x3edb524, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x3edb5a0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x3edb5f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x3edb674, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x3edb6f0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x3edb76c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x3edb7f0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x3edaed0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x3edaf28, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x3edafa4, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x3edb108, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x3edb08c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetID, addr 0x3edb184, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank, addr 0x3edb200, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ChallengeEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore, addr 0x3edb27c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ChallengeEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x3edb2f8, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x3edb350, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser, addr 0x3edb3cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeOptions_Create, addr 0x3ee65a8, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy, addr 0x3ee6610, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x3ee668c, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x3ee672c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x3ee67b0, size 0x6c, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x3ee681c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x3ee68a0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x3ee6924, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x3ee69a8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludePastChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x3ee6a2c, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x3ee6acc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x3ee6b50, size 0x6c, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x3ee6bbc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x3ee6c40, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x3ee6ce0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x3ee6d64, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetViewerFilter(::System::IntPtr  handle, ::Oculus::Platform::ChallengeViewerFilter  value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x3ee6de8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetVisibility(::System::IntPtr  handle, ::Oculus::Platform::ChallengeVisibility  value) ;

/// @brief Method ovr_Challenge_GetCreationType, addr 0x3eda46c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription, addr 0x3eda4e8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native, addr 0x3eda540, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate, addr 0x3eda5bc, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetEndDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x3eda614, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetEndDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetID, addr 0x3eda690, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x3eda70c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard, addr 0x3eda788, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetLeaderboard(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetParticipants, addr 0x3eda804, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetParticipants(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate, addr 0x3eda880, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetStartDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x3eda8d8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetStartDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle, addr 0x3eda954, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetTitle(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native, addr 0x3eda9ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetTitle_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetVisibility, addr 0x3edaa28, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenges_Create, addr 0x3ed1788, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create(::StringW  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native, addr 0x3ed1834, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create_Native(::System::IntPtr  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite, addr 0x3ed18b8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Delete, addr 0x3ed1934, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Delete(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Get, addr 0x3ed19b0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Get(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_GetEntries, addr 0x3ed1a2c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntries(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x3ed1ac8, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t  challengeID, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x3ed1b5c, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Challenges_GetList, addr 0x3ed1c10, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetList(::System::IntPtr  challengeOptions, int32_t  limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges, addr 0x3ed1c94, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetNextEntries, addr 0x3ed1d10, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x3ed1d8c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x3ed1e08, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_Join, addr 0x3ed1e84, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Join(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Leave, addr 0x3ed1f00, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Leave(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo, addr 0x3ed1f7c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t  challengeID, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x3ed2000, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap, addr 0x3ed2068, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native, addr 0x3ed2104, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_Colocation_ShareMap, addr 0x3ed2180, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native, addr 0x3ed221c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_CrashApplication, addr 0x3ece374, size 0x64, virtual false, abstract: false, final false
static inline void ovr_CrashApplication() ;

/// @brief Method ovr_DataStore_Contains, addr 0x3edb874, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_Contains_Native, addr 0x3edb924, size 0x84, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DataStore_GetKey, addr 0x3eccf14, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetKey(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetKey_Native, addr 0x3edb9a8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetKey_Native(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetNumKeys, addr 0x3ecce98, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DataStore_GetNumKeys(::System::IntPtr  obj) ;

/// @brief Method ovr_DataStore_GetValue, addr 0x3eccf7c, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetValue(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_GetValue_Native, addr 0x3edba2c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetValue_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DestinationArray_GetElement, addr 0x3edbd2c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x3edbdb0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_DestinationArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x3edbe08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetSize, addr 0x3edbe84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DestinationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage, addr 0x3edbf00, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_DestinationArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName, addr 0x3edbab0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName_Native, addr 0x3edbb08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x3edbb84, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x3edbbdc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName, addr 0x3edbc58, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x3edbcb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x3ed2298, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x3ed2334, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x3ed23b0, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x3ed244c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x3ed24c8, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_Error_GetCode, addr 0x3edbf84, size 0x78, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage, addr 0x3edbffc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetDisplayableMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x3edc054, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetDisplayableMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetHttpCode, addr 0x3edc0d0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetHttpCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage, addr 0x3edc14c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage_Native, addr 0x3edc1a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_FreeMessage, addr 0x3ecddb8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_FreeMessage(::System::IntPtr  message) ;

/// @brief Method ovr_GetLoggedInUserLocale, addr 0x3ecdc98, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x3ecdce8, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_GraphAPI_Get, addr 0x3ed2530, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Get_Native, addr 0x3ed25cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GraphAPI_Post, addr 0x3ed2648, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Post_Native, addr 0x3ed26e4, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x3edc220, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x3edc278, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x3edc2f4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x3edc34c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x3edc3c8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x3edc420, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x3edc49c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x3edc4f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x3edc570, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x3edc5c8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x3edc644, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x3edc69c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x3edc718, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x3edc770, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceOptions_Create, addr 0x3ee6e6c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x3ee6ed4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x3ee6f50, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x3ee6ff0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x3ee7074, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x3ee7114, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x3ee7198, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x3ee721c, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x3ee72bc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x3ee7340, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x3ee73e0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresence_Clear, addr 0x3ed275c, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x3ed27c4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetInvitableUsers(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x3ed2840, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x3ed28a8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x3ed2924, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x3ed29a0, size 0xe8, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW  lobby_session_id, ::StringW  match_session_id, ::StringW  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x3ed2a88, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::System::IntPtr  lobby_session_id, ::System::IntPtr  match_session_id, ::System::IntPtr  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x3ed2b1c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_SendInvites, addr 0x3ed2b98, size 0x8c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_GroupPresence_Set, addr 0x3ed2c24, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Set(::System::IntPtr  groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x3ed2ca0, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x3ed2d3c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::System::IntPtr  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination, addr 0x3ed2db8, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x3ed2e54, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x3ed2ed0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x3ed2f4c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x3ed2fe8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x3ed3064, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x3ed3100, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_HTTP_Get, addr 0x3ed317c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get(::StringW  url) ;

/// @brief Method ovr_HTTP_GetToFile, addr 0x3ed3294, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile(::StringW  url, ::StringW  diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native, addr 0x3ed335c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile_Native(::System::IntPtr  url, ::System::IntPtr  diskFile) ;

/// @brief Method ovr_HTTP_GetWithMessageType, addr 0x3ece2d8, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW  url, int32_t  messageType) ;

/// @brief Method ovr_HTTP_Get_Native, addr 0x3ed3218, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_MultiPartPost, addr 0x3ed33e0, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost(::StringW  url, ::StringW  filepath_param_name, ::StringW  filepath, ::StringW  access_token, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x3ed3510, size 0x1f0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost_Native(::System::IntPtr  url, ::System::IntPtr  filepath_param_name, ::System::IntPtr  filepath, ::System::IntPtr  access_token, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  post_params, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Post, addr 0x3ed3700, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post(::StringW  url) ;

/// @brief Method ovr_HTTP_Post_Native, addr 0x3ed379c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_StartTransfer, addr 0x3eceadc, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer(::StringW  url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x3eceba4, size 0x1b4, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer_Native(::System::IntPtr  url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  headers, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Write, addr 0x3eced58, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_HTTP_Write(uint64_t  transferId, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::System::UIntPtr  length) ;

/// @brief Method ovr_HTTP_WriteEOM, addr 0x3ecedfc, size 0x78, virtual false, abstract: false, final false
static inline void ovr_HTTP_WriteEOM(uint64_t  transferId) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x3edc7ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_HttpTransferUpdate_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x3edc868, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HttpTransferUpdate_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x3edc8e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_HttpTransferUpdate_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x3edc960, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_HttpTransferUpdate_IsCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_IAP_ConsumePurchase, addr 0x3ed3818, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase(::StringW  sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x3ed38b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU, addr 0x3ed3930, size 0x12c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW,::Array<::StringW>*>  skus, int32_t  count) ;

/// @brief Method ovr_IAP_GetViewerPurchases, addr 0x3ed3a5c, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x3ed3ac4, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x3ed3b2c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW  sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x3ed3bc8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x3edcdb0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplicationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x3edce34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_InstalledApplicationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x3edc9e4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetApplicationId(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x3edca3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetApplicationId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x3edcab8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetPackageName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x3edcb10, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetPackageName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus, addr 0x3edcb8c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x3edcbe4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x3edcc60, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_InstalledApplication_GetVersionCode(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x3edccdc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetVersionName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x3edcd34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetVersionName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x3ee7548, size 0x84, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x3ee75cc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_InviteOptions_Create, addr 0x3ee7464, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy, addr 0x3ee74cc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x3edceb0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x3edcf34, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x3edcf8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetEnglishName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x3edd008, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetNativeName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x3edd060, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetNativeName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x3edd0dc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetTag(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x3edd134, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetTag_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePack_GetCurrent, addr 0x3ed3c44, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent, addr 0x3ed3cac, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW  tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x3ed3d48, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent_Native(::System::IntPtr  tag) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x3edd1b0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x3edd234, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x3edd2b8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x3edd310, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x3edd38c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x3edd3e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x3edd460, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetLaunchSource(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x3edd4b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetLaunchSource_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x3edd534, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x3edd5b0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetTrackingID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x3edd608, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetTrackingID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers, addr 0x3edd684, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x3edd700, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x3edd784, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x3edd808, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x3edd884, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchReportFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x3edd908, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x3edd984, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x3edda08, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement, addr 0x3eddc58, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x3eddcdc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x3eddd34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize, addr 0x3edddb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x3edde2c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x3ede3ac, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x3ede430, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x3ede488, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x3ede504, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x3ede55c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x3ede5d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x3ede654, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x3ede6d0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x3ede754, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x3eddeb0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x3eddf08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x3eddf84, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x3edb010, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x3eddff0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID, addr 0x3ede06c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x3ede0e8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LeaderboardEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x3ede164, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_LeaderboardEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x3ede1e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetSupplementaryMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x3ede25c, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x3ede2b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x3ede330, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x3ede7d8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x3ede85c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x3ede8e0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_Get, addr 0x3ed3dc4, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get(::StringW  leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetApiName, addr 0x3edda8c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Leaderboard_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x3eddae4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetDestination, addr 0x3eddb60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetEntries, addr 0x3ed3edc, size 0xc4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x3ed403c, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x3ed40f0, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::System::IntPtr  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x3ed4184, size 0xcc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x3ed4250, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x3ed3fa0, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetID, addr 0x3eddbdc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x3ed4304, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x3ed4380, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_Get_Native, addr 0x3ed3e60, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get_Native(::System::IntPtr  leaderboardName) ;

/// @brief Method ovr_Leaderboard_WriteEntry, addr 0x3ed43fc, size 0xcc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x3ed457c, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x3ed4658, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::System::IntPtr  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x3ed44c8, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry_Native(::System::IntPtr  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x3edeb80, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x3edec04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LinkedAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x3ede95c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x3ede9b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x3edea30, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId, addr 0x3edeaac, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x3edeb04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetUserId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x3edec80, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x3eded04, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x3eded80, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetCommentsVisible(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x3edee04, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetIsPaused(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x3edee88, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x3edef0c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x3edef88, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetMicEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x3edf00c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x3edf088, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x3edf104, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x3edf15c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LivestreamingVideoStats_GetTotalViews_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x3ed4714, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW  packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x3ed47b0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::System::IntPtr  packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x3ed482c, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream, addr 0x3ed4894, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience  audience, ::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x3ed4918, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream, addr 0x3ed4980, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x3ed49e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Log_NewEvent, addr 0x3ece8b8, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_Log_NewEvent(::System::IntPtr  eventName, ::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  values, ::System::UIntPtr  length) ;

/// @brief Method ovr_Media_ShareToFacebook, addr 0x3ed4a64, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook(::StringW  postTextSuggestion, ::StringW  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x3ed4b34, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook_Native(::System::IntPtr  postTextSuggestion, ::System::IntPtr  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x3edf1d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAbuseReportRecording(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x3edf254, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementDefinitionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x3edf2d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementProgressArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate, addr 0x3edf34c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x3edf3c8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadProgressResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadResult, addr 0x3edf444, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x3edf4c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationInviteArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationVersion, addr 0x3edf53c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationVersion(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetails, addr 0x3edf5b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetails(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x3edf634, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetailsArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x3edf6b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDeleteResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x3edf72c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadCancelResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x3edf7a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x3edf824, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x3edf8a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAvatarEditorResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray, addr 0x3edf91c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetBlockedUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallenge, addr 0x3edf998, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallenge(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeArray, addr 0x3edfa14, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x3edfa90, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDataStore, addr 0x3edfb0c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDataStore(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDestinationArray, addr 0x3edfb88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDestinationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetError, addr 0x3edfc04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetError(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x3edfc80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceJoinIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x3edfcfc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceLeaveIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x3edfd78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetHttpTransferUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x3edfdf4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInstalledApplicationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x3edfe70, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInvitePanelResultInfo(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x3edfeec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchBlockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x3edff68, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchFriendRequestFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x3edffe4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchInvitePanelFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x3ee0060, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchReportFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x3ee00dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchUnblockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray, addr 0x3ee0158, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x3ee01d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x3ee0250, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardUpdateStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x3ee02cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLinkedAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x3ee0348, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingApplicationStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x3ee03c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStartResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x3ee0440, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x3ee04bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingVideoStats(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x3ee0538, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetMicrophoneAvailabilityState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNativeMessage, addr 0x3ee05b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNativeMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection, addr 0x3ee0630, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncConnection(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x3ee06ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x3ee0728, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionsChangedNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x3ee07a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSetSessionPropertyResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x3ee0820, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncVoipAttenuationValueArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetOrgScopedID, addr 0x3ee089c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetOrgScopedID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetParty, addr 0x3ee0918, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetParty(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyID, addr 0x3ee0994, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x3ee0a10, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyUpdateNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPidArray, addr 0x3ee0a8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPidArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize, addr 0x3ee0b08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPlatformInitialize(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetProductArray, addr 0x3ee0b84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetProductArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchase, addr 0x3ee0c00, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchase(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchaseArray, addr 0x3ee0c7c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchaseArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x3ee0cf8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetRejoinDialogResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRequestID, addr 0x3ee0d74, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Message_GetRequestID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray, addr 0x3ee0df0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSdkAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult, addr 0x3ee0e6c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSendInvitesResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetShareMediaResult, addr 0x3ee0ee8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetShareMediaResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetString, addr 0x3ee0f64, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetString(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetStringForJavascript, addr 0x3ecee74, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetStringForJavascript(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x3eceecc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetStringForJavascript_Native(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetString_Native, addr 0x3ee0fbc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetString_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSystemVoipState, addr 0x3ee1038, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSystemVoipState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetType, addr 0x3ee10b4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUser, addr 0x3ee1130, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x3ee11ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserAccountAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserArray, addr 0x3ee1228, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x3ee12a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserCapabilityArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x3ee1320, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserDataStoreUpdateResponse(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserProof, addr 0x3ee139c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserProof(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserReportID, addr 0x3ee1418, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserReportID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_IsError, addr 0x3ee1494, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_Message_IsError(::System::IntPtr  obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x3ee1960, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Create, addr 0x3ece098, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy, addr 0x3ece100, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Destroy(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x3ee1518, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetNumSamplesAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x3ee1594, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetOutputBufferMaxSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetPCM, addr 0x3ee1610, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCM(::System::IntPtr  obj, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat, addr 0x3ee16ac, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCMFloat(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData, addr 0x3ee1748, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_ReadData(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x3ee17e4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(::System::IntPtr  obj, ::System::UIntPtr  delayMs) ;

/// @brief Method ovr_Microphone_Start, addr 0x3ee1868, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Start(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Stop, addr 0x3ee18e4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Stop(::System::IntPtr  obj) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x3ee7648, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x3ee76b0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x3ee772c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_SetErrorKey(::System::IntPtr  handle, ::Oculus::Platform::MultiplayerErrorErrorKey  value) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x3ee19e4, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncConnection_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x3ee1a60, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x3ee1adc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncConnection_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x3ee1b58, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x3ee1bd4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncConnection_GetZoneId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x3ee1c2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncConnection_GetZoneId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncOptions_Create, addr 0x3ee77b0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy, addr 0x3ee7818, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x3ee7894, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x3ee7934, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x3ee79b8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipStreamDefault(::System::IntPtr  handle, ::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x3ee7a3c, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x3ee7adc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x3ee1f74, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x3ee1ff8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncSessionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x3ee1ca8, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSession_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted, addr 0x3ee1d24, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_NetSyncSession_GetMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x3ee1da8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId, addr 0x3ee1e24, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x3ee1ea0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncSession_GetVoipGroup(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x3ee1ef8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSession_GetVoipGroup_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x3ee2074, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x3ee20f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionsChangedNotification_GetSessions(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x3ee216c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSetSessionPropertyResult_GetSession(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x3ee22e0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncVoipAttenuationValueArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x3ee2364, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncVoipAttenuationValueArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x3ee21e8, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x3ee2264, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSync_Connect, addr 0x3ed4bc8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Connect(::System::IntPtr  connect_options) ;

/// @brief Method ovr_NetSync_Disconnect, addr 0x3ed4c44, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Disconnect(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x3ecef48, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x3ecefe4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x3ecf080, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x3ecf11c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition, addr 0x3ecf1b8, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetListenerPosition(int64_t  connection_id, uint64_t  sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x3ecf254, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamFloatPCM(int64_t  connection_id, uint64_t  sessionId, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x3ecf2f8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamInt16PCM(int64_t  connection_id, uint64_t  session_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x3ecf39c, size 0x68, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetSessions, addr 0x3ed4cc0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetSessions(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x3ecf404, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetVoipAmplitude(int64_t  connection_id, uint64_t  sessionId, ByRef<float_t>  amplitude) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x3ed4d3c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x3ed4db8, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetListenerPosition, addr 0x3ecf4a0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSync_SetListenerPosition(int64_t  connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x3ed4e20, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x3ed4ecc, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t  connection_id, ::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x3ed4f9c, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t  connection_id, ::System::IntPtr  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x3ed5058, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t  connection_id, ::StringW  channel_name, ::StringW  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x3ed5138, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t  connection_id, ::System::IntPtr  channel_name, ::System::IntPtr  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup, addr 0x3ed51d4, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t  connection_id, ::StringW  group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x3ed5284, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t  connection_id, ::System::IntPtr  group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x3ed5308, size 0x140, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  listento_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x3ed5448, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t  connection_id, ::Oculus::Platform::NetSyncVoipMicSource  mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x3ed54cc, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t  connection_id, uint64_t  session_id, bool  muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x3ed5560, size 0x140, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  speakto_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x3ed56a0, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t  connection_id, uint64_t  sessionId, ::Oculus::Platform::NetSyncVoipStreamMode  streamMode) ;

/// @brief Method ovr_Notification_MarkAsRead, addr 0x3ed5734, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Notification_MarkAsRead(uint64_t  notificationID) ;

/// @brief Method ovr_OrgScopedID_GetID, addr 0x3ee23e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_OrgScopedID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_Free, addr 0x3ee245c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Packet_Free(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetBytes, addr 0x3ee24d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Packet_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSenderID, addr 0x3ee2554, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Packet_GetSenderID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSize, addr 0x3ee25d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Packet_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyID_GetID, addr 0x3ee283c, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x3ee28b4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x3ee2930, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x3ee29ac, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x3ee2a28, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x3ee2a80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x3ee2afc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x3ee2b54, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x3ee2bd0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x3ee2c4c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserName(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x3ee2ca4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Create, addr 0x3ed57b0, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication, addr 0x3ed5818, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GatherInApplication(uint64_t  partyID, uint64_t  appID) ;

/// @brief Method ovr_Party_Get, addr 0x3ed589c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Get(uint64_t  partyID) ;

/// @brief Method ovr_Party_GetCurrent, addr 0x3ed5918, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser, addr 0x3ed5980, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t  userID) ;

/// @brief Method ovr_Party_GetID, addr 0x3ee264c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetInvitedUsers, addr 0x3ee26c8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetLeader, addr 0x3ee2744, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetLeader(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetUsers, addr 0x3ee27c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Invite, addr 0x3ed59fc, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Invite(uint64_t  partyID, uint64_t  userID) ;

/// @brief Method ovr_Party_Join, addr 0x3ed5a7c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Join(uint64_t  partyID) ;

/// @brief Method ovr_Party_Leave, addr 0x3ed5af8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Leave(uint64_t  partyID) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x3ecf524, size 0x68, virtual false, abstract: false, final false
static inline int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x3ecf58c, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x3ecf5f4, size 0x70, virtual false, abstract: false, final false
static inline bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x3ecf664, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_PidArray_GetElement, addr 0x3ee2df4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PidArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PidArray_GetSize, addr 0x3ee2e78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PidArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId, addr 0x3ee2d20, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Pid_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId_Native, addr 0x3ee2d78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Pid_GetId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x3ecd880, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t  appId, ::StringW  accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x3ecd920, size 0x1a4, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t  appId, ::StringW  accessToken, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  configOptions, ::System::UIntPtr  numOptions) ;

/// @brief Method ovr_PlatformInitialize_GetResult, addr 0x3ee2ef4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x3ecd79c, size 0xe4, virtual false, abstract: false, final false
static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams>  init) ;

/// @brief Method ovr_PopMessage, addr 0x3ecdd50, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PopMessage() ;

/// @brief Method ovr_Price_GetAmountInHundredths, addr 0x3ee2f70, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Price_GetAmountInHundredths(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency, addr 0x3ee2fec, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetCurrency(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency_Native, addr 0x3ee3044, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetCurrency_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted, addr 0x3ee30c0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetFormatted(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted_Native, addr 0x3ee3118, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetFormatted_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetElement, addr 0x3ee34e4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ProductArray_GetNextUrl, addr 0x3ee3568, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_ProductArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x3ee35c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetSize, addr 0x3ee363c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ProductArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_HasNextPage, addr 0x3ee36b8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ProductArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription, addr 0x3ee3194, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription_Native, addr 0x3ee31ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice, addr 0x3ee3268, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetFormattedPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x3ee32c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetFormattedPrice_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName, addr 0x3ee333c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName_Native, addr 0x3ee3394, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU, addr 0x3ee3410, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU_Native, addr 0x3ee3468, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetElement, addr 0x3ee3cb0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x3ee3d34, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_PurchaseArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x3ee3d8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetSize, addr 0x3ee3e08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PurchaseArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x3ee3e84, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_PurchaseArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x3ee373c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetDeveloperPayload(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x3ee3794, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetDeveloperPayload_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime, addr 0x3ee3810, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetExpirationTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x3ee3868, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetExpirationTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime, addr 0x3ee38e4, size 0x58, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetGrantTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x3ee393c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetGrantTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID, addr 0x3ee39b8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetPurchaseID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x3ee3a34, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetPurchaseStrID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x3ee3a8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetPurchaseStrID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId, addr 0x3ee3b08, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetReportingId(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x3ee3b60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetReportingId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU, addr 0x3ee3bdc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native, addr 0x3ee3c34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x3ee3f08, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_RejoinDialogResult_GetRejoinSelected(::System::IntPtr  obj) ;

/// @brief Method ovr_RichPresenceOptions_Create, addr 0x3ee7b60, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x3ee7bc8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x3ee7c44, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x3ee7ce4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x3ee7d68, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x3ee7e08, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x3ee7e8c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_RichPresence_Clear, addr 0x3ed5b74, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations, addr 0x3ed5bdc, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set, addr 0x3ed5c44, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Set(::System::IntPtr  richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination, addr 0x3ed5cc0, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x3ed5d5c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x3ed5dd8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession, addr 0x3ed5e54, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x3ed5ef0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession, addr 0x3ed5f6c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x3ed6008, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x3ee7ff4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x3ee8078, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_RosterOptions_Create, addr 0x3ee7f10, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy, addr 0x3ee7f78, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_SdkAccountArray_GetElement, addr 0x3ee4084, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SdkAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_SdkAccountArray_GetSize, addr 0x3ee4108, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_SdkAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType, addr 0x3ee3f8c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetUserId, addr 0x3ee4008, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SdkAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x3ee4184, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SendInvitesResult_GetInvites(::System::IntPtr  obj) ;

/// @brief Method ovr_SetDeveloperAccessToken, addr 0x3ecdc00, size 0x98, virtual false, abstract: false, final false
static inline bool ovr_SetDeveloperAccessToken(::StringW  accessToken) ;

/// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x3ee4200, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID, addr 0x3ee427c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SupplementaryMetric_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x3ee42f8, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_SupplementaryMetric_GetMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x3ee4374, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus, addr 0x3ee43f0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x3ee4b20, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccessArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x3ee4ba4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_TestUserAppAccessArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x3ee4954, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x3ee49ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccess_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x3ee4a28, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetAppId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x3ee4aa4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken, addr 0x3ee446c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x3ee44c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x3ee4540, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x3ee45bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFbAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x3ee4638, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetFriendAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x3ee4690, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x3ee470c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias, addr 0x3ee4788, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x3ee47e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserFbid, addr 0x3ee485c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserFbid(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserId, addr 0x3ee48d8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_UnityInitGlobals, addr 0x3ecd680, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UnityInitGlobals(::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapper, addr 0x3ecac74, size 0x98, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapper(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x3ecae08, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone, addr 0x3ecd6fc, size 0xa0, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperStandalone(::StringW  accessToken, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindows, addr 0x3ecdac4, size 0xa0, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperWindows(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x3ecdb64, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityResetTestPlatform, addr 0x3ece274, size 0x64, virtual false, abstract: false, final false
static inline void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x3ee548c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_UserAgeCategory_Get, addr 0x3ed6dcc, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Get() ;

/// @brief Method ovr_UserAgeCategory_Report, addr 0x3ed6e34, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory  age_category) ;

/// @brief Method ovr_UserArray_GetElement, addr 0x3ee5508, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserArray_GetNextUrl, addr 0x3ee558c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x3ee55e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetSize, addr 0x3ee5660, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_HasNextPage, addr 0x3ee56dc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x3ee5a60, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x3ee5ae4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x3ee5b3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x3ee5bb8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserCapabilityArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x3ee5c34, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapabilityArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription, addr 0x3ee5760, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x3ee57b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x3ee5834, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapability_GetIsEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName, addr 0x3ee58b8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName_Native, addr 0x3ee5910, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode, addr 0x3ee598c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetReasonCode(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x3ee59e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetReasonCode_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x3ee5cb8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey, addr 0x3ed6eb0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native, addr 0x3ed6f60, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t  userID, ::System::IntPtr  key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntries, addr 0x3ed6fe4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t  userID) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey, addr 0x3ed7060, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native, addr 0x3ed7110, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t  userID, ::System::IntPtr  key) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry, addr 0x3ed7194, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t  userID, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native, addr 0x3ed7264, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t  userID, ::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey, addr 0x3ed72f8, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native, addr 0x3ed73a8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t  userID, ::System::IntPtr  key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntries, addr 0x3ed742c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t  userID) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey, addr 0x3ed74a8, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native, addr 0x3ed7558, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t  userID, ::System::IntPtr  key) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry, addr 0x3ed75dc, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t  userID, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry_Native, addr 0x3ed76ac, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t  userID, ::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x3ee825c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_AddServiceProvider(::System::IntPtr  handle, ::Oculus::Platform::ServiceProvider  value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x3ee82e0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_ClearServiceProviders(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_Create, addr 0x3ee80f4, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy, addr 0x3ee815c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x3ee81d8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetMaxUsers(::System::IntPtr  handle, uint32_t  value) ;

/// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x3ee835c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetTimeWindow(::System::IntPtr  handle, ::Oculus::Platform::TimeWindow  value) ;

/// @brief Method ovr_UserProof_GetNonce, addr 0x3ee5d3c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_UserProof_GetNonce(::System::IntPtr  obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native, addr 0x3ee5d94, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserProof_GetNonce_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel, addr 0x3ee5e10, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserReportID_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetID, addr 0x3ee5e94, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserReportID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x3ed6084, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW  recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x3ed6120, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(::System::IntPtr  recordingUUID) ;

/// @brief Method ovr_User_Get, addr 0x3ed619c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_Get(uint64_t  userID) ;

/// @brief Method ovr_User_GetAccessToken, addr 0x3ed6218, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers, addr 0x3ed6280, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetDisplayName, addr 0x3ee4c20, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetDisplayName_Native, addr 0x3ee4c78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetID, addr 0x3ee4cf4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl, addr 0x3ee4d70, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl_Native, addr 0x3ee4dc8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetLinkedAccounts, addr 0x3ed62e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLinkedAccounts(::System::IntPtr  userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser, addr 0x3ed6364, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x3ed63cc, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetOculusID, addr 0x3ee4e44, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetOculusID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOculusID_Native, addr 0x3ee4e9c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetOculusID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOrgScopedID, addr 0x3ed6434, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetOrgScopedID(uint64_t  userID) ;

/// @brief Method ovr_User_GetPresence, addr 0x3ee4f18, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresence(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x3ee4fec, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x3ee5044, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x3ee50c0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x3ee5118, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x3ee5194, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x3ee51ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x3ee5268, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x3ee52c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceStatus, addr 0x3ee533c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresence_Native, addr 0x3ee4f70, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresence_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSdkAccounts, addr 0x3ed64b0, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetSmallImageUrl, addr 0x3ee53b8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetSmallImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x3ee5410, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetSmallImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetUserCapabilities, addr 0x3ed6518, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof, addr 0x3ed6580, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow, addr 0x3ed65e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x3ed6664, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow, addr 0x3ed66e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow2, addr 0x3ed675c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t  optionalUserID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow, addr 0x3ed67e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_NewEntitledTestUser, addr 0x3ed685c, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser, addr 0x3ed68c4, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends, addr 0x3ed692c, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x3ed6994, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x3ed69fc, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x3ed6b30, size 0xb8, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x3ed6be8, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x3ed6aac, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x3ed6c7c, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x3ed6d30, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::System::IntPtr  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x3ee5f10, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, ::System::UIntPtr  compressedSize) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x3ecdffc, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, uint64_t  compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x3ee5fac, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipDecoder_GetDecodedPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM, addr 0x3ee6048, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipEncoder_AddPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  inputData, uint32_t  inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x3ee60e4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedData(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::System::UIntPtr  intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x3ee6180, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedDataSize(::System::IntPtr  obj) ;

/// @brief Method ovr_VoipOptions_Create, addr 0x3ee83e0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy, addr 0x3ee8448, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x3ee84c4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetBitrateForNewConnections(::System::IntPtr  handle, ::Oculus::Platform::VoipBitrate  value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x3ee8548, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::System::IntPtr  handle, ::Oculus::Platform::VoipDtxState  value) ;

/// @brief Method ovr_Voip_Accept, addr 0x3ecf6cc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Accept(uint64_t  userID) ;

/// @brief Method ovr_Voip_CreateDecoder, addr 0x3ecdf18, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_CreateEncoder, addr 0x3ecde34, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyDecoder, addr 0x3ecdf80, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyDecoder(::System::IntPtr  decoder) ;

/// @brief Method ovr_Voip_DestroyEncoder, addr 0x3ecde9c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyEncoder(::System::IntPtr  encoder) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x3ecf748, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate, addr 0x3ecf7c4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x3ed7740, size 0x68, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x3ecf840, size 0x68, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM, addr 0x3ecf8a8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCM(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat, addr 0x3ecf944, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize, addr 0x3ecf9e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMSize(uint64_t  senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x3ecfa5c, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestamp(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x3ecfb08, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestampFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x3ecfbb4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x3ecfc30, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t  userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x3ecfcac, size 0x84, virtual false, abstract: false, final false
static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t  lhs, uint32_t  rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x3ecfd30, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x3ecfd98, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x3ed77a8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t,::Array<uint64_t>*>  sessionIDs) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x3ece3d8, size 0x80, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback*  cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x3ece458, size 0x88, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback*  cb, ::System::UIntPtr  bufferSizeElements) ;

/// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x3ecfe00, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState  state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x3ecfe7c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetNewConnectionOptions(::System::IntPtr  voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x3ecfef8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate  rate) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x3ece1f8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState  muted) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x3ece17c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipPassthrough(bool  passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x3ed782c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool  suppressed) ;

/// @brief Method ovr_Voip_Start, addr 0x3ecff74, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Start(uint64_t  userID) ;

/// @brief Method ovr_Voip_Stop, addr 0x3ecfff0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Stop(uint64_t  userID) ;

static inline void setStaticF_nativeStringEncoding(::System::Text::UTF8Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CAPI(CAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CAPI(CAPI const& ) = delete;

/// @brief Field DLL_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  DLL_NAME{u"ovrplatformloader"};

/// @brief Field VoipFilterBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  VoipFilterBufferSize{static_cast<int32_t>(0x1e0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI*, "Oculus.Platform", "CAPI");
NEED_NO_BOX(::Oculus::Platform::__CAPI__FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
