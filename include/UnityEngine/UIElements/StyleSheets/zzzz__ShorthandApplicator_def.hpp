#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShorthandApplicator)
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class ShorthandApplicator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator);
// Type: UnityEngine.UIElements.StyleSheets::ShorthandApplicator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7460))
// CS Name: ::UnityEngine.UIElements.StyleSheets::ShorthandApplicator*
class CORDL_TYPE ShorthandApplicator : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_TransitionDelayList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TransitionDelayList,
                             put = setStaticF_s_TransitionDelayList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* s_TransitionDelayList;

  /// @brief Field s_TransitionDurationList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TransitionDurationList,
                             put = setStaticF_s_TransitionDurationList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* s_TransitionDurationList;

  /// @brief Field s_TransitionPropertyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TransitionPropertyList,
                             put = setStaticF_s_TransitionPropertyList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* s_TransitionPropertyList;

  /// @brief Field s_TransitionTimingFunctionList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TransitionTimingFunctionList,
                             put = setStaticF_s_TransitionTimingFunctionList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* s_TransitionTimingFunctionList;

  static inline void setStaticF_s_TransitionDelayList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* getStaticF_s_TransitionDelayList();

  static inline void setStaticF_s_TransitionDurationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* getStaticF_s_TransitionDurationList();

  static inline void setStaticF_s_TransitionPropertyList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* getStaticF_s_TransitionPropertyList();

  static inline void setStaticF_s_TransitionTimingFunctionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* getStaticF_s_TransitionTimingFunctionList();

  /// @brief Method CompileFlexShorthand addr 0x2de3e50 size 0x1e8 virtual false final false
  static inline bool CompileFlexShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<float_t> grow, ByRef<float_t> shrink,
                                          ByRef<::UnityEngine::UIElements::Length> basis);

  /// @brief Method CompileBorderRadius addr 0x2de434c size 0x148 virtual false final false
  static inline void CompileBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::Length> top,
                                         ByRef<::UnityEngine::UIElements::Length> right, ByRef<::UnityEngine::UIElements::Length> bottom, ByRef<::UnityEngine::UIElements::Length> left);

  /// @brief Method CompileBoxArea addr 0x2de4494 size 0x15c virtual false final false
  static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::Length> top, ByRef<::UnityEngine::UIElements::Length> right,
                                    ByRef<::UnityEngine::UIElements::Length> bottom, ByRef<::UnityEngine::UIElements::Length> left);

  /// @brief Method CompileBoxArea addr 0x2de45f0 size 0xb8 virtual false final false
  static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<float_t> top, ByRef<float_t> right, ByRef<float_t> bottom, ByRef<float_t> left);

  /// @brief Method CompileBoxArea addr 0x2de46a8 size 0x168 virtual false final false
  static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::Color> top, ByRef<::UnityEngine::Color> right,
                                    ByRef<::UnityEngine::Color> bottom, ByRef<::UnityEngine::Color> left);

  /// @brief Method CompileTextOutline addr 0x2de4914 size 0xa0 virtual false final false
  static inline void CompileTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::Color> outlineColor, ByRef<float_t> outlineWidth);

  /// @brief Method CompileTransition addr 0x2de49b4 size 0x694 virtual false final false
  static inline void CompileTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader,
                                       ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*> outDelay,
                                       ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*> outDuration,
                                       ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*> outProperty,
                                       ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*> outTimingFunction);

  /// @brief Method ApplyBorderColor addr 0x2de5140 size 0xf4 virtual false final false
  static inline void ApplyBorderColor(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyBorderRadius addr 0x2de5234 size 0xf0 virtual false final false
  static inline void ApplyBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyBorderWidth addr 0x2de5324 size 0xec virtual false final false
  static inline void ApplyBorderWidth(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyFlex addr 0x2de5410 size 0xd0 virtual false final false
  static inline void ApplyFlex(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyMargin addr 0x2de54e0 size 0xf0 virtual false final false
  static inline void ApplyMargin(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyPadding addr 0x2de55d0 size 0xf0 virtual false final false
  static inline void ApplyPadding(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyTransition addr 0x2de56c0 size 0x150 virtual false final false
  static inline void ApplyTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyUnityTextOutline addr 0x2de5810 size 0xb8 virtual false final false
  static inline void ApplyUnityTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader, ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  // Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShorthandApplicator(ShorthandApplicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShorthandApplicator(ShorthandApplicator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShorthandApplicator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ShorthandApplicator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator*, "UnityEngine.UIElements.StyleSheets", "ShorthandApplicator");
