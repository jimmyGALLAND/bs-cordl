#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEventBase_1)
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class MouseCaptureEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEventBase_1);
// Type: UnityEngine.UIElements::MouseCaptureEventBase`1
// SizeInfo { instance_size: 144, native_size: 140, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7150)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7150), inst: 4634 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7153))
// CS Name: ::UnityEngine.UIElements::MouseCaptureEventBase`1<T>*
class CORDL_TYPE MouseCaptureEventBase_1 : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<T> {
public:
  // Declarations
  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  static inline ::UnityEngine::UIElements::MouseCaptureEventBase_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureEventBase_1(MouseCaptureEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureEventBase_1(MouseCaptureEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureEventBase_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::MouseCaptureEventBase_1, "UnityEngine.UIElements", "MouseCaptureEventBase`1");
