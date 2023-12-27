#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveResult)
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveResult;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveResult);
// Type: ::MissionObjectiveResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4462))
// CS Name: ::MissionObjectiveResult*
class CORDL_TYPE MissionObjectiveResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field <missionObjective>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__missionObjective_k__BackingField, put = __set__missionObjective_k__BackingField))::GlobalNamespace::MissionObjective* _missionObjective_k__BackingField;

  /// @brief Field <cleared>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__cleared_k__BackingField, put = __set__cleared_k__BackingField)) bool _cleared_k__BackingField;

  /// @brief Field <value>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__value_k__BackingField, put = __set__value_k__BackingField)) int32_t _value_k__BackingField;

  __declspec(property(get = get_missionObjective, put = set_missionObjective))::GlobalNamespace::MissionObjective* missionObjective;

  __declspec(property(get = get_cleared, put = set_cleared)) bool cleared;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  constexpr ::GlobalNamespace::MissionObjective*& __get__missionObjective_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjective*> const& __get__missionObjective_k__BackingField() const;

  constexpr void __set__missionObjective_k__BackingField(::GlobalNamespace::MissionObjective* value);

  constexpr bool& __get__cleared_k__BackingField();

  constexpr bool const& __get__cleared_k__BackingField() const;

  constexpr void __set__cleared_k__BackingField(bool value);

  constexpr int32_t& __get__value_k__BackingField();

  constexpr int32_t const& __get__value_k__BackingField() const;

  constexpr void __set__value_k__BackingField(int32_t value);

  /// @brief Method get_missionObjective addr 0x2352de0 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionObjective* get_missionObjective();

  /// @brief Method set_missionObjective addr 0x2352de8 size 0x8 virtual false final false
  inline void set_missionObjective(::GlobalNamespace::MissionObjective* value);

  /// @brief Method get_cleared addr 0x2352df0 size 0x8 virtual false final false
  inline bool get_cleared();

  /// @brief Method set_cleared addr 0x2352df8 size 0xc virtual false final false
  inline void set_cleared(bool value);

  /// @brief Method get_value addr 0x2352e04 size 0x8 virtual false final false
  inline int32_t get_value();

  /// @brief Method set_value addr 0x2352e0c size 0x8 virtual false final false
  inline void set_value(int32_t value);

  static inline ::GlobalNamespace::MissionObjectiveResult* New_ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value);

  /// @brief Method .ctor addr 0x2352e14 size 0x44 virtual false final false
  inline void _ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveResult(MissionObjectiveResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveResult(MissionObjectiveResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveResult();

public:
  /// @brief Field <missionObjective>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjective* ____missionObjective_k__BackingField;

  /// @brief Field <cleared>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____cleared_k__BackingField;

  /// @brief Field <value>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveResult, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveResult);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveResult*, "", "MissionObjectiveResult");
