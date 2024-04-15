#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CallbackRunner)
// Forward declare root types
namespace Oculus::Platform {
class CallbackRunner;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CallbackRunner);
// Type: Oculus.Platform::CallbackRunner
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::CallbackRunner*
class CORDL_TYPE CallbackRunner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field IsPersistantBetweenSceneLoads, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_IsPersistantBetweenSceneLoads, put = __cordl_internal_set_IsPersistantBetweenSceneLoads)) bool IsPersistantBetweenSceneLoads;

  /// @brief Method Awake, addr 0x29a8458, size 0x100, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Oculus::Platform::CallbackRunner* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x29a85cc, size 0x4c, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDestroy, addr 0x29a85c8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x29a8558, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_IsPersistantBetweenSceneLoads() const;

  constexpr bool& __cordl_internal_get_IsPersistantBetweenSceneLoads();

  constexpr void __cordl_internal_set_IsPersistantBetweenSceneLoads(bool value);

  /// @brief Method .ctor, addr 0x29a8618, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ovr_UnityResetTestPlatform, addr 0x29a83f4, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_UnityResetTestPlatform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackRunner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbackRunner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackRunner(CallbackRunner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackRunner(CallbackRunner const&) = delete;

  /// @brief Field IsPersistantBetweenSceneLoads, offset: 0x18, size: 0x1, def value: None
  bool ___IsPersistantBetweenSceneLoads;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CallbackRunner, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::CallbackRunner, ___IsPersistantBetweenSceneLoads) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CallbackRunner);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CallbackRunner*, "Oculus.Platform", "CallbackRunner");
