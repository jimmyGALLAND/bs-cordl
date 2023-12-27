#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InstanceInputUIState)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstanceInputUIState;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InstanceInputUIState);
// Type: HoudiniEngineUnity::HEU_InstanceInputUIState
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9651))
// CS Name: ::HoudiniEngineUnity::HEU_InstanceInputUIState*
class CORDL_TYPE HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _showInstanceInputs, offset 0x18, size 0x1
  __declspec(property(get = __get__showInstanceInputs, put = __set__showInstanceInputs)) bool _showInstanceInputs;

  /// @brief Field _numInputsToShowUI, offset 0x1c, size 0x4
  __declspec(property(get = __get__numInputsToShowUI, put = __set__numInputsToShowUI)) int32_t _numInputsToShowUI;

  /// @brief Field _inputsPageIndexUI, offset 0x20, size 0x4
  __declspec(property(get = __get__inputsPageIndexUI, put = __set__inputsPageIndexUI)) int32_t _inputsPageIndexUI;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>*() noexcept;

  constexpr bool& __get__showInstanceInputs();

  constexpr bool const& __get__showInstanceInputs() const;

  constexpr void __set__showInstanceInputs(bool value);

  constexpr int32_t& __get__numInputsToShowUI();

  constexpr int32_t const& __get__numInputsToShowUI() const;

  constexpr void __set__numInputsToShowUI(int32_t value);

  constexpr int32_t& __get__inputsPageIndexUI();

  constexpr int32_t const& __get__inputsPageIndexUI() const;

  constexpr void __set__inputsPageIndexUI(int32_t value);

  /// @brief Method CopyTo addr 0x217246c size 0x24 virtual false final false
  inline void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* dest);

  /// @brief Method IsEquivalentTo addr 0x2172490 size 0x1e4 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* other);

  static inline ::HoudiniEngineUnity::HEU_InstanceInputUIState* New_ctor();

  /// @brief Method .ctor addr 0x2172674 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InstanceInputUIState(HEU_InstanceInputUIState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InstanceInputUIState(HEU_InstanceInputUIState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InstanceInputUIState();

public:
  /// @brief Field _showInstanceInputs, offset: 0x18, size: 0x1, def value: None
  bool ____showInstanceInputs;

  /// @brief Field _numInputsToShowUI, offset: 0x1c, size: 0x4, def value: None
  int32_t ____numInputsToShowUI;

  /// @brief Field _inputsPageIndexUI, offset: 0x20, size: 0x4, def value: None
  int32_t ____inputsPageIndexUI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InstanceInputUIState, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstanceInputUIState);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstanceInputUIState*, "HoudiniEngineUnity", "HEU_InstanceInputUIState");
