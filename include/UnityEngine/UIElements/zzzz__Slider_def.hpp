#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Slider)
namespace UnityEngine::UIElements {
template <typename TValueType> struct __BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlFactory;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Slider;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Slider);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Slider__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Slider__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 916 }), TypeDefinitionIndex(TypeDefinitionIndex(7131)),
// TypeDefinitionIndex(TypeDefinitionIndex(6986))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7039)) CS Name: ::Slider::UxmlTraits*
class CORDL_TYPE __Slider__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<float_t, ::UnityEngine::UIElements::UxmlFloatAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_LowValue, offset 0x88, size 0x8
  __declspec(property(get = __get_m_LowValue, put = __set_m_LowValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_HighValue, offset 0x90, size 0x8
  __declspec(property(get = __get_m_HighValue, put = __set_m_HighValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_PageSize, offset 0x98, size 0x8
  __declspec(property(get = __get_m_PageSize, put = __set_m_PageSize))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_PageSize;

  /// @brief Field m_ShowInputField, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_ShowInputField, put = __set_m_ShowInputField))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowInputField;

  /// @brief Field m_Direction, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_Direction, put = __set_m_Direction))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;

  /// @brief Field m_Inverted, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_Inverted, put = __set_m_Inverted))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Inverted;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_LowValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_LowValue() const;

  constexpr void __set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_HighValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_HighValue() const;

  constexpr void __set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_PageSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_PageSize() const;

  constexpr void __set_m_PageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_ShowInputField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_ShowInputField() const;

  constexpr void __set_m_ShowInputField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& __get_m_Direction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*> const& __get_m_Direction() const;

  constexpr void __set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_Inverted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_Inverted() const;

  constexpr void __set_m_Inverted(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method Init addr 0x2e1e0cc size 0x2b4 virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Slider__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e1e380 size 0x228 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Slider__UxmlTraits(__Slider__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Slider__UxmlTraits(__Slider__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Slider__UxmlTraits();

public:
  /// @brief Field m_LowValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighValue;

  /// @brief Field m_PageSize, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_PageSize;

  /// @brief Field m_ShowInputField, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowInputField;

  /// @brief Field m_Direction, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* ___m_Direction;

  /// @brief Field m_Inverted, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Inverted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Slider__UxmlTraits, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Slider
// SizeInfo { instance_size: 1112, native_size: -1, calculated_instance_size: 1112, calculated_native_size: 1109, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7101)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7101), inst: 391 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7040))
// CS Name: ::UnityEngine.UIElements::Slider*
class CORDL_TYPE Slider : public ::UnityEngine::UIElements::BaseSlider_1<float_t> {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__Slider__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__Slider__UxmlFactory;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::UnityEngine::UIElements::Slider* New_ctor();

  /// @brief Method .ctor addr 0x2e1d900 size 0x18 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Slider* New_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method .ctor addr 0x2e1da64 size 0xc virtual false final false
  inline void _ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  static inline ::UnityEngine::UIElements::Slider* New_ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method .ctor addr 0x2e1d918 size 0x14c virtual false final false
  inline void _ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method SliderLerpUnclamped addr 0x2e1da70 size 0x2b0 virtual true final false
  inline float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue addr 0x2e1dd20 size 0x10 virtual true final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method ParseStringToValue addr 0x2e1dd30 size 0xd0 virtual true final false
  inline float_t ParseStringToValue(::StringW stringValue);

  /// @brief Method ComputeValueFromKey addr 0x2e1de00 size 0x1fc virtual true final false
  inline void ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<float_t> sliderKey, bool isShift);

  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Slider(Slider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Slider(Slider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Slider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Slider, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7039)), TypeDefinitionIndex(TypeDefinitionIndex(7040)), TypeDefinitionIndex(TypeDefinitionIndex(6997)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5276 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7038)) CS Name: ::Slider::UxmlFactory*
class CORDL_TYPE __Slider__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Slider*, ::UnityEngine::UIElements::__Slider__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Slider__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2e11368 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Slider__UxmlFactory(__Slider__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Slider__UxmlFactory(__Slider__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Slider__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Slider__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Slider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Slider*, "UnityEngine.UIElements", "Slider");
NEED_NO_BOX(::UnityEngine::UIElements::__Slider__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Slider__UxmlFactory*, "UnityEngine.UIElements", "Slider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Slider__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Slider__UxmlTraits*, "UnityEngine.UIElements", "Slider/UxmlTraits");
