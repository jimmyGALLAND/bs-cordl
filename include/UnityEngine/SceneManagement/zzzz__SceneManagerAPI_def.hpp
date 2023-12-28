#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerAPI)
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPI;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SceneManagement::SceneManagerAPI);
// Type: UnityEngine.SceneManagement::SceneManagerAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10382))
// CS Name: ::UnityEngine.SceneManagement::SceneManagerAPI*
class CORDL_TYPE SceneManagerAPI : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultAPI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultAPI, put = setStaticF_s_DefaultAPI))::UnityEngine::SceneManagement::SceneManagerAPI* s_DefaultAPI;

  /// @brief Field <overrideAPI>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__overrideAPI_k__BackingField,
                             put = setStaticF__overrideAPI_k__BackingField))::UnityEngine::SceneManagement::SceneManagerAPI* _overrideAPI_k__BackingField;

  static inline void setStaticF_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI* value);

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* getStaticF_s_DefaultAPI();

  static inline void setStaticF__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI* value);

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* getStaticF__overrideAPI_k__BackingField();

  /// @brief Method get_ActiveAPI addr 0x2cf1c78 size 0xa8 virtual false final false
  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* get_ActiveAPI();

  /// @brief Method get_overrideAPI addr 0x2cf1d20 size 0x58 virtual false final false
  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* get_overrideAPI();

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* New_ctor();

  /// @brief Method .ctor addr 0x2cf1d78 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetNumScenesInBuildSettings addr 0x2cf1d80 size 0x28 virtual true final false
  inline int32_t GetNumScenesInBuildSettings();

  /// @brief Method LoadSceneAsyncByNameOrIndex addr 0x2cf1da8 size 0x60 virtual true final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                    bool mustCompleteNextFrame);

  /// @brief Method UnloadSceneAsyncByNameOrIndex addr 0x2cf1e08 size 0x6c virtual true final false
  inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options,
                                                                      ByRef<bool> outSuccess);

  /// @brief Method LoadFirstScene addr 0x2cf1e74 size 0x8 virtual true final false
  inline ::UnityEngine::AsyncOperation* LoadFirstScene(bool mustLoadAsync);

  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManagerAPI(SceneManagerAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManagerAPI(SceneManagerAPI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneManagerAPI();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManagerAPI, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPI*, "UnityEngine.SceneManagement", "SceneManagerAPI");
