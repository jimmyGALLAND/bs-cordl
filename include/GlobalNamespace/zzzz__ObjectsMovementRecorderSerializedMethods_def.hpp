#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectsMovementRecorderSerializedMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectsMovementRecorderSerializedMethods)
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
struct __PlaybackRenderer__PlaybackScreenshot__Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderSerializedMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods);
// Type: ::ObjectsMovementRecorderSerializedMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObjectsMovementRecorderSerializedMethods*
class CORDL_TYPE ObjectsMovementRecorderSerializedMethods : public ::System::Object {
public:
// Declarations
/// @brief Method CameraViewFromSerializedName, addr 0x3a8f358, size 0x9c, virtual false, abstract: false, final false
static inline bool CameraViewFromSerializedName(::StringW  name, ByRef<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>  cameraView) ;

/// @brief Method ModeFromSerializedName, addr 0x3a8f224, size 0xcc, virtual false, abstract: false, final false
static inline bool ModeFromSerializedName(::StringW  name, ByRef<::GlobalNamespace::__ObjectsMovementRecorder__Mode>  mode) ;

/// @brief Method PlaybackScreenshotTypeFromSerializedName, addr 0x3a8f45c, size 0xa4, virtual false, abstract: false, final false
static inline bool PlaybackScreenshotTypeFromSerializedName(::StringW  name, ByRef<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>  type) ;

/// @brief Method SerializedName, addr 0x3a8f2f0, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializedName(::GlobalNamespace::__ObjectsMovementRecorder__CameraView  cameraView) ;

/// @brief Method SerializedName, addr 0x3a8f1b0, size 0x74, virtual false, abstract: false, final false
static inline ::StringW SerializedName(::GlobalNamespace::__ObjectsMovementRecorder__Mode  mode) ;

/// @brief Method SerializedName, addr 0x3a8f3f4, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializedName(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectsMovementRecorderSerializedMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods const& ) = delete;

/// @brief Field kBackgroundPlaybackScreenshotType offset 0xffffffff size 0x8
static constexpr ::ConstString  kBackgroundPlaybackScreenshotType{u"Background"};

/// @brief Field kFirstPersonCameraView offset 0xffffffff size 0x8
static constexpr ::ConstString  kFirstPersonCameraView{u"FirstPerson"};

/// @brief Field kForegroundPlaybackScreenshotType offset 0xffffffff size 0x8
static constexpr ::ConstString  kForegroundPlaybackScreenshotType{u"Foreground"};

/// @brief Field kOffRecordingMode offset 0xffffffff size 0x8
static constexpr ::ConstString  kOffRecordingMode{u"Off"};

/// @brief Field kPlaybackRecordingMode offset 0xffffffff size 0x8
static constexpr ::ConstString  kPlaybackRecordingMode{u"Playback"};

/// @brief Field kRecordRecordingMode offset 0xffffffff size 0x8
static constexpr ::ConstString  kRecordRecordingMode{u"Record"};

/// @brief Field kThirdPersonCameraView offset 0xffffffff size 0x8
static constexpr ::ConstString  kThirdPersonCameraView{u"ThirdPerson"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorderSerializedMethods, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*, "", "ObjectsMovementRecorderSerializedMethods");
