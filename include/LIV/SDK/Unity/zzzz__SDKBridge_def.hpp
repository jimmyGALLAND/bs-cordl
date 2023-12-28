#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKBridge)
namespace LIV::SDK::Unity {
struct SDKTexture;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct SDKPlane;
}
namespace LIV::SDK::Unity {
struct SDKResolution;
}
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
namespace LIV::SDK::Unity {
template <typename T> struct __SDKBridge__SDKInjection_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKBridge;
}
namespace LIV::SDK::Unity {
template <typename T> struct __SDKBridge__SDKInjection_1;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::SDKBridge);
MARK_GEN_VAL_T(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1);
// Type: ::SDKInjection`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15095))
// CS Name: ::SDKBridge::SDKInjection`1<T>
struct CORDL_TYPE __SDKBridge__SDKInjection_1 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name:
  // "data", ty: "T", modifiers: "", def_value: None }]
  constexpr __SDKBridge__SDKInjection_1(bool active, ::System::Action* action, T data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SDKBridge__SDKInjection_1();

  /// @brief Field active, offset: 0x0, size: 0x1, def value: None
  bool active;

  /// @brief Field action, offset: 0x8, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  T data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace LIV::SDK::Unity
// Type: LIV.SDK.Unity::SDKBridge
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15095), inst: 4947 }), TypeDefinitionIndex(TypeDefinitionIndex(15115)),
// TypeDefinitionIndex(TypeDefinitionIndex(15108)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15095), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(15095)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15095), inst: 4946 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15096)) CS
// Name: ::LIV.SDK.Unity::SDKBridge*
class CORDL_TYPE SDKBridge : public ::System::Object {
public:
  // Declarations
  template <typename T> using SDKInjection_1 = ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<T>;

  /// @brief Field _injection_SDKInputFrame, offset 0xffffffff, size 0x168
  static __declspec(property(get = getStaticF__injection_SDKInputFrame,
                             put = setStaticF__injection_SDKInputFrame))::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> _injection_SDKInputFrame;

  /// @brief Field _injection_SDKResolution, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF__injection_SDKResolution,
                             put = setStaticF__injection_SDKResolution))::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> _injection_SDKResolution;

  /// @brief Field _injection_IsActive, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF__injection_IsActive, put = setStaticF__injection_IsActive))::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> _injection_IsActive;

  /// @brief Field _injection_DisableSubmit, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableSubmit, put = setStaticF__injection_DisableSubmit)) bool _injection_DisableSubmit;

  /// @brief Field _injection_DisableSubmitApplicationOutput, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableSubmitApplicationOutput, put = setStaticF__injection_DisableSubmitApplicationOutput)) bool _injection_DisableSubmitApplicationOutput;

  /// @brief Field _injection_DisableAddTexture, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableAddTexture, put = setStaticF__injection_DisableAddTexture)) bool _injection_DisableAddTexture;

  /// @brief Field _injection_DisableCreateFrame, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableCreateFrame, put = setStaticF__injection_DisableCreateFrame)) bool _injection_DisableCreateFrame;

  static inline void setStaticF__injection_SDKInputFrame(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> value);

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> getStaticF__injection_SDKInputFrame();

  static inline void setStaticF__injection_SDKResolution(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> value);

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> getStaticF__injection_SDKResolution();

  static inline void setStaticF__injection_IsActive(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> value);

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> getStaticF__injection_IsActive();

  static inline void setStaticF__injection_DisableSubmit(bool value);

  static inline bool getStaticF__injection_DisableSubmit();

  static inline void setStaticF__injection_DisableSubmitApplicationOutput(bool value);

  static inline bool getStaticF__injection_DisableSubmitApplicationOutput();

  static inline void setStaticF__injection_DisableAddTexture(bool value);

  static inline bool getStaticF__injection_DisableAddTexture();

  static inline void setStaticF__injection_DisableCreateFrame(bool value);

  static inline bool getStaticF__injection_DisableCreateFrame();

  /// @brief Method AddStringToChannel addr 0x220eb1c size 0x8 virtual false final false
  static inline int32_t AddStringToChannel(int32_t slot, void* str, int32_t length, uint64_t tag);

  /// @brief Method addtexture addr 0x220eb24 size 0x8 virtual false final false
  static inline int32_t addtexture(void* sourcetexture, uint64_t tag);

  /// @brief Method GetObjectTimeStamp addr 0x220eb2c size 0x8 virtual false final false
  static inline uint64_t GetObjectTimeStamp(void* obj);

  /// @brief Method GetCurrentTimeTicks addr 0x220eb34 size 0x8 virtual false final false
  static inline uint64_t GetCurrentTimeTicks();

  /// @brief Method GetIsCaptureActive addr 0x220eb3c size 0x8 virtual false final false
  static inline bool GetIsCaptureActive();

  /// @brief Method GetRenderEventFunc addr 0x220eb44 size 0x48 virtual false final false
  static inline void* GetRenderEventFunc();

  /// @brief Method GetCompositorChannelObject addr 0x220eb8c size 0x48 virtual false final false
  static inline void* GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp);

  /// @brief Method AddObjectToCompositorChannel addr 0x220ebd4 size 0x8 virtual false final false
  static inline int32_t AddObjectToCompositorChannel(int32_t slot, void* obj, int32_t objectsize, uint64_t tag);

  /// @brief Method AddObjectToFrame addr 0x220ebdc size 0x8 virtual false final false
  static inline int32_t AddObjectToFrame(void* obj, int32_t objectsize, uint64_t tag);

  /// @brief Method updatinputframe addr 0x220ebe4 size 0x48 virtual false final false
  static inline void* updatinputframe(void* InputFrame);

  /// @brief Method GetViewportTexture addr 0x220ec2c size 0x48 virtual false final false
  static inline void* GetViewportTexture();

  /// @brief Method GetChannelObject addr 0x220ec74 size 0x48 virtual false final false
  static inline void* GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp);

  /// @brief Method AddObjectToChannel addr 0x220ecbc size 0x8 virtual false final false
  static inline int32_t AddObjectToChannel(int32_t slot, void* obj, int32_t objectsize, uint64_t tag);

  /// @brief Method Tag addr 0x220ecc4 size 0x84 virtual false final false
  static inline uint64_t Tag(::StringW str);

  /// @brief Method AddString addr 0x220ed48 size 0xfc virtual false final false
  static inline void AddString(::StringW tag, ::StringW value, int32_t slot);

  /// @brief Method AddTexture addr 0x220ee44 size 0xc0 virtual false final false
  static inline void AddTexture(::LIV::SDK::Unity::SDKTexture texture, uint64_t tag);

  /// @brief Method GetObjectTime addr 0x220ef04 size 0x5c virtual false final false
  static inline uint64_t GetObjectTime(void* objectptr);

  /// @brief Method GetCurrentTime addr 0x220ef60 size 0x5c virtual false final false
  static inline uint64_t GetCurrentTime();

  /// @brief Method get_IsActive addr 0x220dd64 size 0x98 virtual false final false
  static inline bool get_IsActive();

  /// @brief Method IssuePluginEvent addr 0x220efbc size 0xb0 virtual false final false
  static inline void IssuePluginEvent();

  /// @brief Method SubmitApplicationOutput addr 0x220e578 size 0x1f0 virtual false final false
  static inline void SubmitApplicationOutput(::LIV::SDK::Unity::SDKApplicationOutput applicationOutput);

  /// @brief Method GetStructFromGlobalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool GetStructFromGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method AddStructToGlobalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t AddStructToGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method GetStructFromLocalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool GetStructFromLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method AddStructToLocalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t AddStructToLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method AddStructToFrame addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AddStructToFrame(ByRef<T> mystruct, uint64_t tag);

  /// @brief Method UpdateInputFrame addr 0x220f06c size 0x2c0 virtual false final false
  static inline bool UpdateInputFrame(ByRef<::LIV::SDK::Unity::SDKInputFrame> setframe);

  /// @brief Method GetViewfinderTexture addr 0x220f470 size 0x1d4 virtual false final false
  static inline ::LIV::SDK::Unity::SDKTexture GetViewfinderTexture();

  /// @brief Method AddTexture addr 0x220f6a0 size 0x130 virtual false final false
  static inline void AddTexture(::LIV::SDK::Unity::SDKTexture texture);

  /// @brief Method CreateFrame addr 0x220f7d0 size 0x168 virtual false final false
  static inline void CreateFrame(::LIV::SDK::Unity::SDKOutputFrame frame);

  /// @brief Method SetGroundPlane addr 0x220f938 size 0xa0 virtual false final false
  static inline void SetGroundPlane(::LIV::SDK::Unity::SDKPlane groundPlane);

  /// @brief Method GetResolution addr 0x220f9d8 size 0x130 virtual false final false
  static inline bool GetResolution(ByRef<::LIV::SDK::Unity::SDKResolution> sdkResolution);

  // Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKBridge(SDKBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKBridge(SDKBridge const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKBridge();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKBridge, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKBridge);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKBridge*, "LIV.SDK.Unity", "SDKBridge");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1, "LIV.SDK.Unity", "SDKBridge/SDKInjection`1");
