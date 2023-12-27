#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransitionEventBase_1)
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class TransitionEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TransitionEventBase_1);
// Type: UnityEngine.UIElements::TransitionEventBase`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1719 }), TypeDefinitionIndex(TypeDefinitionIndex(7180)),
// TypeDefinitionIndex(TypeDefinitionIndex(7187))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7188)) CS Name: ::UnityEngine.UIElements::TransitionEventBase`1<T>*
class CORDL_TYPE TransitionEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <stylePropertyNames>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__stylePropertyNames_k__BackingField,
                      put = __set__stylePropertyNames_k__BackingField))::UnityEngine::UIElements::StylePropertyNameCollection _stylePropertyNames_k__BackingField;

  /// @brief Field <elapsedTime>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__elapsedTime_k__BackingField, put = __set__elapsedTime_k__BackingField)) double_t _elapsedTime_k__BackingField;

  __declspec(property(get = get_stylePropertyNames))::UnityEngine::UIElements::StylePropertyNameCollection stylePropertyNames;

  __declspec(property(put = set_elapsedTime)) double_t elapsedTime;

  constexpr ::UnityEngine::UIElements::StylePropertyNameCollection& __get__stylePropertyNames_k__BackingField();

  constexpr ::UnityEngine::UIElements::StylePropertyNameCollection const& __get__stylePropertyNames_k__BackingField() const;

  constexpr void __set__stylePropertyNames_k__BackingField(::UnityEngine::UIElements::StylePropertyNameCollection value);

  constexpr double_t& __get__elapsedTime_k__BackingField();

  constexpr double_t const& __get__elapsedTime_k__BackingField() const;

  constexpr void __set__elapsedTime_k__BackingField(double_t value);

  /// @brief Method get_stylePropertyNames addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::UIElements::StylePropertyNameCollection get_stylePropertyNames();

  /// @brief Method set_elapsedTime addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_elapsedTime(double_t value);

  static inline ::UnityEngine::UIElements::TransitionEventBase_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LocalInit();

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::UIElements::StylePropertyName stylePropertyName, double_t elapsedTime);

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionEventBase_1(TransitionEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionEventBase_1(TransitionEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionEventBase_1();

public:
  /// @brief Field <stylePropertyNames>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyNameCollection ____stylePropertyNames_k__BackingField;

  /// @brief Field <elapsedTime>k__BackingField, offset: 0x88, size: 0x8, def value: None
  double_t ____elapsedTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TransitionEventBase_1, "UnityEngine.UIElements", "TransitionEventBase`1");
