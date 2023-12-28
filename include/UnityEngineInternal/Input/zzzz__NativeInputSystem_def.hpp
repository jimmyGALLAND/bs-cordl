#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputSystem)
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeInputSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::Input::NativeInputSystem);
// Type: UnityEngineInternal.Input::NativeInputSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngineInternal::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16112))
// CS Name: ::UnityEngineInternal.Input::NativeInputSystem*
class CORDL_TYPE NativeInputSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field onUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onUpdate, put = setStaticF_onUpdate))::UnityEngineInternal::Input::NativeUpdateCallback* onUpdate;

  /// @brief Field onBeforeUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onBeforeUpdate, put = setStaticF_onBeforeUpdate))::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* onBeforeUpdate;

  /// @brief Field onShouldRunUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onShouldRunUpdate, put = setStaticF_onShouldRunUpdate))::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* onShouldRunUpdate;

  /// @brief Field s_OnDeviceDiscoveredCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_OnDeviceDiscoveredCallback, put = setStaticF_s_OnDeviceDiscoveredCallback))::System::Action_2<int32_t, ::StringW>* s_OnDeviceDiscoveredCallback;

  static inline void setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value);

  static inline ::UnityEngineInternal::Input::NativeUpdateCallback* getStaticF_onUpdate();

  static inline void setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value);

  static inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* getStaticF_onBeforeUpdate();

  static inline void setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value);

  static inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* getStaticF_onShouldRunUpdate();

  static inline void setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t, ::StringW>* value);

  static inline ::System::Action_2<int32_t, ::StringW>* getStaticF_s_OnDeviceDiscoveredCallback();

  /// @brief Method get_onDeviceDiscovered addr 0x2d0fd58 size 0x58 virtual false final false
  static inline ::System::Action_2<int32_t, ::StringW>* get_onDeviceDiscovered();

  /// @brief Method set_onDeviceDiscovered addr 0x2d0fdb0 size 0x84 virtual false final false
  static inline void set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value);

  /// @brief Method NotifyBeforeUpdate addr 0x2d0fea0 size 0x7c virtual false final false
  static inline void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  /// @brief Method NotifyUpdate addr 0x2d0ff1c size 0x9c virtual false final false
  static inline void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, void* eventBuffer);

  /// @brief Method NotifyDeviceDiscovered addr 0x2d0ffb8 size 0x90 virtual false final false
  static inline void NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor);

  /// @brief Method ShouldRunUpdate addr 0x2d10048 size 0x90 virtual false final false
  static inline void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval);

  /// @brief Method set_hasDeviceDiscoveredCallback addr 0x2d0fe34 size 0x3c virtual false final false
  static inline void set_hasDeviceDiscoveredCallback(bool value);

  /// @brief Method get_currentTime addr 0x2d100d8 size 0x28 virtual false final false
  static inline double_t get_currentTime();

  /// @brief Method get_currentTimeOffsetToRealtimeSinceStartup addr 0x2d10100 size 0x28 virtual false final false
  static inline double_t get_currentTimeOffsetToRealtimeSinceStartup();

  /// @brief Method AllocateDeviceId addr 0x2d10128 size 0x28 virtual false final false
  static inline int32_t AllocateDeviceId();

  /// @brief Method QueueInputEvent addr 0x2d10150 size 0x3c virtual false final false
  static inline void QueueInputEvent(void* inputEvent);

  /// @brief Method IOCTL addr 0x2d1018c size 0x5c virtual false final false
  static inline int64_t IOCTL(int32_t deviceId, int32_t code, void* data, int32_t sizeInBytes);

  /// @brief Method SetPollingFrequency addr 0x2d101e8 size 0x38 virtual false final false
  static inline void SetPollingFrequency(float_t hertz);

  /// @brief Method Update addr 0x2d10220 size 0x3c virtual false final false
  static inline void Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputSystem(NativeInputSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputSystem(NativeInputSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputSystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
NEED_NO_BOX(::UnityEngineInternal::Input::NativeInputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
