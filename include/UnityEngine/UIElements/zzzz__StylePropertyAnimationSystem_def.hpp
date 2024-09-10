#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem)
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename TTimingData,typename TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundPosition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundRepeat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundSize;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__Values_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template<typename T>
class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundPosition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundRepeat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackgroundSize;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template<typename T>
class __StylePropertyAnimationSystem__Values_1;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template<typename T>
struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace UnityEngine::UIElements {
template<typename TTimingData,typename TStyleData>
struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState);
MARK_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c);
MARK_REF_PTR_T(::UnityEngine::UIElements::StylePropertyAnimationSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair);
// Type: ::TransitionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::TransitionState
struct CORDL_TYPE __StylePropertyAnimationSystem__TransitionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped
enum struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Running = static_cast<int32_t>(0x1),
__E_Started = static_cast<int32_t>(0x2),
__E_Ended = static_cast<int32_t>(0x4),
__E_Canceled = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____StylePropertyAnimationSystem__TransitionState_Unwrapped () const noexcept {
return static_cast<____StylePropertyAnimationSystem__TransitionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__TransitionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__TransitionState(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Canceled value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Canceled;

/// @brief Field Ended value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Ended;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const None;

/// @brief Field Running value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Running;

/// @brief Field Started value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Started;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename TTimingData,typename TStyleData>
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2 {
public:
// Declarations
 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData> Create() ;

/// @brief Method GetActivePropertiesForElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<int32_t>  index) ;

/// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LocalInit() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAll() ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method Replace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Replace(int32_t  index, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_capacity(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2() ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData,::Array<TTimingData>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData,::Array<TStyleData>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties, ::ArrayW<TTimingData,::Array<TTimingData>*>  timing, ::ArrayW<TStyleData,::Array<TStyleData>*>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices) noexcept;

/// @brief Field elements, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>  elements;

/// @brief Field properties, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  properties;

/// @brief Field timing, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<TTimingData,::Array<TTimingData>*>  timing;

/// @brief Field style, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<TStyleData,::Array<TStyleData>*>  style;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  count;

/// @brief Field indices, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*  indices;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::EqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair::EqualityComparer*
class CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*() noexcept;

/// @brief Method Equals, addr 0x49f2fe0, size 0x18, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  x, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  y) ;

/// @brief Method GetHashCode, addr 0x49f2ff8, size 0x38, virtual true, abstract: false, final true
inline int32_t GetHashCode(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  obj) ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x49f2fd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements____StylePropertyAnimationSystem__ElementPropertyPair_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ElementPropertyPair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair
struct CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair {
public:
// Declarations
using EqualityComparer = ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;

/// @brief Field Comparer, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Comparer, put=setStaticF_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*  Comparer;

/// @brief Method .ctor, addr 0x49f2f5c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* getStaticF_Comparer() ;

static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ElementPropertyPair() ;

// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "property", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__ElementPropertyPair(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) noexcept;

/// @brief Field element, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Field property, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, property) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::Values
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::Values*
class CORDL_TYPE __StylePropertyAnimationSystem__Values : public ::System::Object {
public:
// Declarations
/// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method GetAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values* New_ctor() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method UpdateAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateComputedStyle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateValues() ;

/// @brief Method .ctor, addr 0x49f3030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*  __9;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* New_ctor() ;

/// @brief Method <.cctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;

/// @brief Field elementPropertyQueuedEvents, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementPropertyQueuedEvents, put=__cordl_internal_set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  elementPropertyQueuedEvents;

/// @brief Field elementPropertyStateDelta, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementPropertyStateDelta, put=__cordl_internal_set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  elementPropertyStateDelta;

/// @brief Field k_EventQueuePool, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_EventQueuePool, put=setStaticF_k_EventQueuePool)) ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  k_EventQueuePool;

/// @brief Field m_ChangesCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ChangesCount, put=__cordl_internal_set_m_ChangesCount)) int32_t  m_ChangesCount;

/// @brief Field panel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_panel, put=__cordl_internal_set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetPooledQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue() ;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* New_ctor() ;

/// @brief Method RegisterChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterChange() ;

/// @brief Method StateChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool StateChanged() ;

/// @brief Method UnregisterChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnregisterChange() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*& __cordl_internal_get_elementPropertyQueuedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> const& __cordl_internal_get_elementPropertyQueuedEvents() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*& __cordl_internal_get_elementPropertyStateDelta() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> const& __cordl_internal_get_elementPropertyStateDelta() const;

constexpr int32_t const& __cordl_internal_get_m_ChangesCount() const;

constexpr int32_t& __cordl_internal_get_m_ChangesCount() ;

constexpr ::UnityEngine::UIElements::IPanel*& __cordl_internal_get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& __cordl_internal_get_panel() const;

constexpr void __cordl_internal_set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

constexpr void __cordl_internal_set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  value) ;

constexpr void __cordl_internal_set_m_ChangesCount(int32_t  value) ;

constexpr void __cordl_internal_set_panel(::UnityEngine::UIElements::IPanel*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool() ;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) = delete;

/// @brief Field elementPropertyStateDelta, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*  ___elementPropertyStateDelta;

/// @brief Field elementPropertyQueuedEvents, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  ___elementPropertyQueuedEvents;

/// @brief Field panel, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::IPanel*  ___panel;

/// @brief Field m_ChangesCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_ChangesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimingData
// SizeInfo { instance_size: 40, native_size: 56, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::Values`1::TimingData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TimingData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1__TimingData() ;

// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__Values_1__TimingData(int64_t  startTimeMs, int32_t  durationMs, ::System::Func_2<float_t,float_t>*  easingCurve, float_t  easedProgress, float_t  reversingShorteningFactor, bool  isStarted, int32_t  delayMs) noexcept;

/// @brief Field startTimeMs, offset: 0x0, size: 0x8, def value: None
 int64_t  startTimeMs;

/// @brief Field durationMs, offset: 0x8, size: 0x4, def value: None
 int32_t  durationMs;

/// @brief Field easingCurve, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<float_t,float_t>*  easingCurve;

/// @brief Field easedProgress, offset: 0x18, size: 0x4, def value: None
 float_t  easedProgress;

/// @brief Field reversingShorteningFactor, offset: 0x1c, size: 0x4, def value: None
 float_t  reversingShorteningFactor;

/// @brief Field isStarted, offset: 0x20, size: 0x1, def value: None
 bool  isStarted;

/// @brief Field delayMs, offset: 0x24, size: 0x4, def value: None
 int32_t  delayMs;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StyleData
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::Values`1::StyleData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__StyleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1__StyleData() ;

// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None }]
constexpr __StylePropertyAnimationSystem__Values_1__StyleData(T  startValue, T  endValue, T  reversingAdjustedStartValue, T  currentValue) noexcept;

/// @brief Field startValue, offset: 0x0, size: 0x8, def value: None
 T  startValue;

/// @brief Field endValue, offset: 0x8, size: 0x8, def value: None
 T  endValue;

/// @brief Field reversingAdjustedStartValue, offset: 0x10, size: 0x8, def value: None
 T  reversingAdjustedStartValue;

/// @brief Field currentValue, offset: 0x18, size: 0x8, def value: None
 T  currentValue;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
#pragma pack(push, 0)
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>  Default;

static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> getStaticF_Default() ;

static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1__EmptyData() ;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Values`1
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1 : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>;

using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>;

using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>;

using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;

 __declspec(property(get=get_SameFunc)) ::System::Func_3<T,T,bool>*  SameFunc;

/// @brief Field completed, offset 0x58, size 0x30 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>  completed;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Field m_CurrentFrameEventsState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentFrameEventsState, put=__cordl_internal_set_m_CurrentFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  m_CurrentFrameEventsState;

/// @brief Field m_CurrentTimeMs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentTimeMs, put=__cordl_internal_set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_NextFrameEventsState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NextFrameEventsState, put=__cordl_internal_set_m_NextFrameEventsState)) ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  m_NextFrameEventsState;

/// @brief Field running, offset 0x28, size 0x30 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>  running;

/// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method CancelAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method ClearEventQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method ComputeReversingDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor) ;

/// @brief Method ComputeReversingShorteningFactor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t ComputeReversingShorteningFactor(int32_t  oldIndex) ;

/// @brief Method ConvertUnits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<T>  a, ByRef<T>  b) ;

/// @brief Method ForceComputedStyleEndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForceComputedStyleEndValue(int32_t  runningIndex) ;

/// @brief Method GetAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* New_ctor() ;

/// @brief Method ProcessEventQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProcessEventQueue() ;

/// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair  epp) ;

/// @brief Method QueueTransitionCancelEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method QueueTransitionEndEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionRunEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method QueueTransitionStartEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex) ;

/// @brief Method SendTransitionCancelEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs) ;

/// @brief Method StartTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs) ;

/// @brief Method SwapFrameStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SwapFrameStates() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Update(int64_t  currentTimeMs) ;

/// @brief Method UpdateAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateProgress(int64_t  currentTimeMs) ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T> const& __cordl_internal_get_completed() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>& __cordl_internal_get_completed() ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*& __cordl_internal_get_m_CurrentFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const& __cordl_internal_get_m_CurrentFrameEventsState() const;

constexpr int64_t const& __cordl_internal_get_m_CurrentTimeMs() const;

constexpr int64_t& __cordl_internal_get_m_CurrentTimeMs() ;

constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*& __cordl_internal_get_m_NextFrameEventsState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const& __cordl_internal_get_m_NextFrameEventsState() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>> const& __cordl_internal_get_running() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>& __cordl_internal_get_running() ;

constexpr void __cordl_internal_set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>  value) ;

constexpr void __cordl_internal_set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  value) ;

constexpr void __cordl_internal_set_m_CurrentTimeMs(int64_t  value) ;

constexpr void __cordl_internal_set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  value) ;

constexpr void __cordl_internal_set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Func_3<T,T,bool>* get_SameFunc() ;

/// @brief Method get_isEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__Values_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const& ) = delete;

/// @brief Field m_CurrentTimeMs, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_CurrentTimeMs;

/// @brief Field m_CurrentFrameEventsState, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  ___m_CurrentFrameEventsState;

/// @brief Field m_NextFrameEventsState, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*  ___m_NextFrameEventsState;

/// @brief Field running, offset: 0x28, size: 0x30, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>  ___running;

/// @brief Field completed, offset: 0x58, size: 0x30, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T>  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFloat
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesFloat*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFloat : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<float_t> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<float_t,float_t,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<float_t,float_t,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f3040, size 0x88, virtual false, abstract: false, final false
static inline bool IsSame(float_t  a, float_t  b) ;

/// @brief Method Lerp, addr 0x49f30c8, size 0x10, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3158, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3224, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f30d8, size 0x80, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<float_t,float_t,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<float_t,float_t,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<float_t,float_t,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f32cc, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f3038, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<float_t,float_t,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<float_t,float_t,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesInt
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesInt*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesInt : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<int32_t> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<int32_t,int32_t,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<int32_t,int32_t,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f336c, size 0xc, virtual false, abstract: false, final false
static inline bool IsSame(int32_t  a, int32_t  b) ;

/// @brief Method Lerp, addr 0x49f3378, size 0xec, virtual false, abstract: false, final false
static inline int32_t Lerp(int32_t  a, int32_t  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f34fc, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f35c8, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f3464, size 0x98, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<int32_t,int32_t,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<int32_t,int32_t,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<int32_t,int32_t,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f3670, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f3364, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<int32_t,int32_t,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<int32_t,int32_t,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesLength
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesLength*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesLength : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  _SameFunc_k__BackingField;

/// @brief Method ConvertUnits, addr 0x49f37b0, size 0x28, virtual true, abstract: false, final true
inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<::UnityEngine::UIElements::Length>  a, ByRef<::UnityEngine::UIElements::Length>  b) ;

/// @brief Method IsSame, addr 0x49f3710, size 0xa0, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b) ;

/// @brief Method Lerp, addr 0x49f37d8, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length Lerp(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f38cc, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3998, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f3818, size 0xb4, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f3a40, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f3708, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesLength() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesColor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesColor*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesColor : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::Color> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f3ae0, size 0x138, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::Color  c, ::UnityEngine::Color  d) ;

/// @brief Method Lerp, addr 0x49f3c18, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Color Lerp(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3cd4, size 0xd0, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3da4, size 0xac, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f3c50, size 0x84, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f3e50, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f3ad8, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesDiscrete`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesDiscrete_1 : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<T,T,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<T,T,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsSame(T  a, T  b) ;

/// @brief Method Lerp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T Lerp(T  a, T  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>* New_ctor() ;

/// @brief Method UpdateValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<T,T,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<T,T,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<T,T,bool>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Func_3<T,T,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesDiscrete_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<T,T,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackground
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesBackground*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackground : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3ee8, size 0xdc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f3fc4, size 0xbc, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method .ctor, addr 0x49f4080, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesBackground() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFontDefinition
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesFontDefinition*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFontDefinition : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f40c8, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4194, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method .ctor, addr 0x49f423c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesFontDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFont
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesFont*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFont : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityW<::UnityEngine::Font>> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4284, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4350, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method .ctor, addr 0x49f43f8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesFont() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTextShadow
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesTextShadow*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTextShadow : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f4448, size 0x48, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b) ;

/// @brief Method Lerp, addr 0x49f4490, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextShadow Lerp(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4600, size 0xf0, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f46f0, size 0xd4, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f44ec, size 0x114, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f47c4, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f4440, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesTextShadow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesScale
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesScale*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesScale : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f4864, size 0x54, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b) ;

/// @brief Method Lerp, addr 0x49f4a2c, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Scale Lerp(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f48b8, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4984, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f4a98, size 0x9c, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f4b34, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f485c, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesScale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesRotate
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesRotate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesRotate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  _SameFunc_k__BackingField;

/// @brief Method IsSame, addr 0x49f4bd4, size 0x44, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b) ;

/// @brief Method Lerp, addr 0x49f4dcc, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Rotate Lerp(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4c18, size 0xe8, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f4d00, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f4e44, size 0xd4, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f4f18, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f4bcc, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesRotate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTranslate
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesTranslate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTranslate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  _SameFunc_k__BackingField;

/// @brief Method ConvertUnits, addr 0x49f5034, size 0x20, virtual true, abstract: false, final true
inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<::UnityEngine::UIElements::Translate>  a, ByRef<::UnityEngine::UIElements::Translate>  b) ;

/// @brief Method IsSame, addr 0x49f4fb8, size 0x7c, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b) ;

/// @brief Method Lerp, addr 0x49f5208, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Translate Lerp(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5054, size 0xe8, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f513c, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f5284, size 0xd4, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f5358, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f4fb0, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesTranslate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTransformOrigin
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesTransformOrigin*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTransformOrigin : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  _SameFunc_k__BackingField;

/// @brief Method ConvertUnits, addr 0x49f5464, size 0x20, virtual true, abstract: false, final true
inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<::UnityEngine::UIElements::TransformOrigin>  a, ByRef<::UnityEngine::UIElements::TransformOrigin>  b) ;

/// @brief Method IsSame, addr 0x49f53f8, size 0x6c, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b) ;

/// @brief Method Lerp, addr 0x49f5638, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TransformOrigin Lerp(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5484, size 0xe8, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f556c, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f56ac, size 0xe0, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f578c, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f53f0, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesTransformOrigin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackgroundPosition
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesBackgroundPosition*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackgroundPosition : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::BackgroundPosition> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5824, size 0xe8, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f590c, size 0xb4, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method .ctor, addr 0x49f59c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesBackgroundPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesBackgroundPosition(__StylePropertyAnimationSystem__ValuesBackgroundPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesBackgroundPosition(__StylePropertyAnimationSystem__ValuesBackgroundPosition const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackgroundRepeat
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesBackgroundRepeat*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackgroundRepeat : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::BackgroundRepeat> {
public:
// Declarations
static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5a08, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5ad4, size 0xa8, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method .ctor, addr 0x49f5b7c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesBackgroundRepeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundRepeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesBackgroundRepeat(__StylePropertyAnimationSystem__ValuesBackgroundRepeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundRepeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesBackgroundRepeat(__StylePropertyAnimationSystem__ValuesBackgroundRepeat const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackgroundSize
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StylePropertyAnimationSystem::ValuesBackgroundSize*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackgroundSize : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::BackgroundSize> {
public:
// Declarations
 __declspec(property(get=get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*  SameFunc;

/// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SameFunc_k__BackingField, put=__cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*  _SameFunc_k__BackingField;

/// @brief Method ConvertUnits, addr 0x49f5c14, size 0x20, virtual true, abstract: false, final true
inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ByRef<::UnityEngine::UIElements::BackgroundSize>  a, ByRef<::UnityEngine::UIElements::BackgroundSize>  b) ;

/// @brief Method IsSame, addr 0x49f5bcc, size 0x48, virtual false, abstract: false, final false
static inline bool IsSame(::UnityEngine::UIElements::BackgroundSize  a, ::UnityEngine::UIElements::BackgroundSize  b) ;

/// @brief Method Lerp, addr 0x49f5de8, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BackgroundSize Lerp(::UnityEngine::UIElements::BackgroundSize  a, ::UnityEngine::UIElements::BackgroundSize  b, float_t  t) ;

static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize* New_ctor() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5c34, size 0xe8, virtual true, abstract: false, final true
inline void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle, addr 0x49f5d1c, size 0xcc, virtual true, abstract: false, final true
inline void UpdateComputedStyle(int32_t  i) ;

/// @brief Method UpdateValues, addr 0x49f5ed4, size 0xec, virtual true, abstract: false, final true
inline void UpdateValues() ;

constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*& __cordl_internal_get__SameFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*> const& __cordl_internal_get__SameFunc_k__BackingField() const;

constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*  value) ;

/// @brief Method .ctor, addr 0x49f5fc0, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SameFunc, addr 0x49f5bc4, size 0x8, virtual true, abstract: false, final false
inline ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>* get_SameFunc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __StylePropertyAnimationSystem__ValuesBackgroundSize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundSize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StylePropertyAnimationSystem__ValuesBackgroundSize(__StylePropertyAnimationSystem__ValuesBackgroundSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackgroundSize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StylePropertyAnimationSystem__ValuesBackgroundSize(__StylePropertyAnimationSystem__ValuesBackgroundSize const& ) = delete;

/// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*  ____SameFunc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyAnimationSystem
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StylePropertyAnimationSystem*
class CORDL_TYPE StylePropertyAnimationSystem : public ::System::Object {
public:
// Declarations
template<typename TTimingData,typename TStyleData>
using AnimationDataSet_2 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>;

using ElementPropertyPair = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair;

using TransitionState = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState;

using Values = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values;

using ValuesBackground = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground;

using ValuesBackgroundPosition = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition;

using ValuesBackgroundRepeat = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat;

using ValuesBackgroundSize = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize;

using ValuesColor = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor;

template<typename T>
using ValuesDiscrete_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>;

using ValuesFloat = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat;

using ValuesFont = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont;

using ValuesFontDefinition = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition;

using ValuesInt = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt;

using ValuesLength = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength;

using ValuesRotate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate;

using ValuesScale = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale;

using ValuesTextShadow = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow;

using ValuesTransformOrigin = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin;

using ValuesTranslate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate;

template<typename T>
using Values_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>;

/// @brief Field m_AllValues, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AllValues, put=__cordl_internal_set_m_AllValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  m_AllValues;

/// @brief Field m_BackgroundPosition, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BackgroundPosition, put=__cordl_internal_set_m_BackgroundPosition)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*  m_BackgroundPosition;

/// @brief Field m_BackgroundRepeat, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BackgroundRepeat, put=__cordl_internal_set_m_BackgroundRepeat)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*  m_BackgroundRepeat;

/// @brief Field m_BackgroundSize, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BackgroundSize, put=__cordl_internal_set_m_BackgroundSize)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*  m_BackgroundSize;

/// @brief Field m_Backgrounds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Backgrounds, put=__cordl_internal_set_m_Backgrounds)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*  m_Backgrounds;

/// @brief Field m_Colors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Colors, put=__cordl_internal_set_m_Colors)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*  m_Colors;

/// @brief Field m_CurrentTimeMs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentTimeMs, put=__cordl_internal_set_m_CurrentTimeMs)) int64_t  m_CurrentTimeMs;

/// @brief Field m_Floats, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Floats, put=__cordl_internal_set_m_Floats)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*  m_Floats;

/// @brief Field m_FontDefinitions, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FontDefinitions, put=__cordl_internal_set_m_FontDefinitions)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*  m_FontDefinitions;

/// @brief Field m_Fonts, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Fonts, put=__cordl_internal_set_m_Fonts)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*  m_Fonts;

/// @brief Field m_Ints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ints, put=__cordl_internal_set_m_Ints)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*  m_Ints;

/// @brief Field m_Lengths, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Lengths, put=__cordl_internal_set_m_Lengths)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*  m_Lengths;

/// @brief Field m_PropertyToValues, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyToValues, put=__cordl_internal_set_m_PropertyToValues)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  m_PropertyToValues;

/// @brief Field m_Rotate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rotate, put=__cordl_internal_set_m_Rotate)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*  m_Rotate;

/// @brief Field m_Scale, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Scale, put=__cordl_internal_set_m_Scale)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*  m_Scale;

/// @brief Field m_TextShadows, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextShadows, put=__cordl_internal_set_m_TextShadows)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*  m_TextShadows;

/// @brief Field m_TransformOrigin, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformOrigin, put=__cordl_internal_set_m_TransformOrigin)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*  m_TransformOrigin;

/// @brief Field m_Translate, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Translate, put=__cordl_internal_set_m_Translate)) ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*  m_Translate;

/// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr operator  ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept;

/// @brief Method CancelAllAnimations, addr 0x49f2800, size 0x150, virtual true, abstract: false, final true
inline void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations, addr 0x49f2950, size 0x2b4, virtual true, abstract: false, final true
inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  owner) ;

/// @brief Method CancelAnimation, addr 0x49f2c04, size 0x90, virtual true, abstract: false, final true
inline void CancelAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method CurrentTimeMs, addr 0x49f2e7c, size 0x8, virtual false, abstract: false, final false
inline int64_t CurrentTimeMs() ;

/// @brief Method GetAllAnimations, addr 0x49f2d24, size 0x158, virtual true, abstract: false, final true
inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement*  owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  propertyIds) ;

/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetOrCreate(ByRef<T>  values) ;

static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* New_ctor() ;

/// @brief Method StartTransition, addr 0x49f1c00, size 0x110, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Color  startValue, ::UnityEngine::Color  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1ef8, size 0xd8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Font*  startValue, ::UnityEngine::Font*  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1d10, size 0xf8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Background  startValue, ::UnityEngine::UIElements::Background  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f2520, size 0xf0, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundPosition  startValue, ::UnityEngine::UIElements::BackgroundPosition  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f2610, size 0xd8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundRepeat  startValue, ::UnityEngine::UIElements::BackgroundRepeat  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f26e8, size 0x118, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundSize  startValue, ::UnityEngine::UIElements::BackgroundSize  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1e08, size 0xf0, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::FontDefinition  startValue, ::UnityEngine::UIElements::FontDefinition  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1b28, size 0xd8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Length  startValue, ::UnityEngine::UIElements::Length  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f21d8, size 0x118, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Rotate  startValue, ::UnityEngine::UIElements::Rotate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f20e8, size 0xf0, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Scale  startValue, ::UnityEngine::UIElements::Scale  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1fd0, size 0x118, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TextShadow  startValue, ::UnityEngine::UIElements::TextShadow  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f2408, size 0x118, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TransformOrigin  startValue, ::UnityEngine::UIElements::TransformOrigin  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f22f0, size 0x118, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Translate  startValue, ::UnityEngine::UIElements::Translate  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*  values) ;

/// @brief Method StartTransition, addr 0x49f1988, size 0xc8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, float_t  startValue, float_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method StartTransition, addr 0x49f1a50, size 0xd8, virtual true, abstract: false, final true
inline bool StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, int32_t  startValue, int32_t  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) ;

/// @brief Method Update, addr 0x49f2e84, size 0xd8, virtual true, abstract: false, final true
inline void Update() ;

/// @brief Method UpdateAnimation, addr 0x49f2c94, size 0x90, virtual true, abstract: false, final true
inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method UpdateTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void UpdateTracking(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*  values) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*& __cordl_internal_get_m_AllValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const& __cordl_internal_get_m_AllValues() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*& __cordl_internal_get_m_BackgroundPosition() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*> const& __cordl_internal_get_m_BackgroundPosition() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*& __cordl_internal_get_m_BackgroundRepeat() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*> const& __cordl_internal_get_m_BackgroundRepeat() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*& __cordl_internal_get_m_BackgroundSize() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*> const& __cordl_internal_get_m_BackgroundSize() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*& __cordl_internal_get_m_Backgrounds() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*> const& __cordl_internal_get_m_Backgrounds() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*& __cordl_internal_get_m_Colors() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*> const& __cordl_internal_get_m_Colors() const;

constexpr int64_t const& __cordl_internal_get_m_CurrentTimeMs() const;

constexpr int64_t& __cordl_internal_get_m_CurrentTimeMs() ;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*& __cordl_internal_get_m_Floats() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*> const& __cordl_internal_get_m_Floats() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*& __cordl_internal_get_m_FontDefinitions() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*> const& __cordl_internal_get_m_FontDefinitions() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*& __cordl_internal_get_m_Fonts() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*> const& __cordl_internal_get_m_Fonts() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*& __cordl_internal_get_m_Ints() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*> const& __cordl_internal_get_m_Ints() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*& __cordl_internal_get_m_Lengths() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*> const& __cordl_internal_get_m_Lengths() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*& __cordl_internal_get_m_PropertyToValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const& __cordl_internal_get_m_PropertyToValues() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*& __cordl_internal_get_m_Rotate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*> const& __cordl_internal_get_m_Rotate() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*& __cordl_internal_get_m_Scale() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*> const& __cordl_internal_get_m_Scale() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*& __cordl_internal_get_m_TextShadows() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*> const& __cordl_internal_get_m_TextShadows() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*& __cordl_internal_get_m_TransformOrigin() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*> const& __cordl_internal_get_m_TransformOrigin() const;

constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*& __cordl_internal_get_m_Translate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*> const& __cordl_internal_get_m_Translate() const;

constexpr void __cordl_internal_set_m_AllValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  value) ;

constexpr void __cordl_internal_set_m_BackgroundPosition(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*  value) ;

constexpr void __cordl_internal_set_m_BackgroundRepeat(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*  value) ;

constexpr void __cordl_internal_set_m_BackgroundSize(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*  value) ;

constexpr void __cordl_internal_set_m_Backgrounds(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*  value) ;

constexpr void __cordl_internal_set_m_Colors(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*  value) ;

constexpr void __cordl_internal_set_m_CurrentTimeMs(int64_t  value) ;

constexpr void __cordl_internal_set_m_Floats(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*  value) ;

constexpr void __cordl_internal_set_m_FontDefinitions(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*  value) ;

constexpr void __cordl_internal_set_m_Fonts(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*  value) ;

constexpr void __cordl_internal_set_m_Ints(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*  value) ;

constexpr void __cordl_internal_set_m_Lengths(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*  value) ;

constexpr void __cordl_internal_set_m_PropertyToValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  value) ;

constexpr void __cordl_internal_set_m_Rotate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*  value) ;

constexpr void __cordl_internal_set_m_Scale(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*  value) ;

constexpr void __cordl_internal_set_m_TextShadows(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*  value) ;

constexpr void __cordl_internal_set_m_TransformOrigin(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*  value) ;

constexpr void __cordl_internal_set_m_Translate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*  value) ;

/// @brief Method .ctor, addr 0x49f188c, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* i___UnityEngine__UIElements__IStylePropertyAnimationSystem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyAnimationSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StylePropertyAnimationSystem(StylePropertyAnimationSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StylePropertyAnimationSystem(StylePropertyAnimationSystem const& ) = delete;

/// @brief Field m_CurrentTimeMs, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_CurrentTimeMs;

/// @brief Field m_Floats, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*  ___m_Floats;

/// @brief Field m_Ints, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*  ___m_Ints;

/// @brief Field m_Lengths, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*  ___m_Lengths;

/// @brief Field m_Colors, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*  ___m_Colors;

/// @brief Field m_Backgrounds, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*  ___m_Backgrounds;

/// @brief Field m_FontDefinitions, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*  ___m_FontDefinitions;

/// @brief Field m_Fonts, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*  ___m_Fonts;

/// @brief Field m_TextShadows, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*  ___m_TextShadows;

/// @brief Field m_Scale, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*  ___m_Scale;

/// @brief Field m_Rotate, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*  ___m_Rotate;

/// @brief Field m_Translate, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*  ___m_Translate;

/// @brief Field m_TransformOrigin, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*  ___m_TransformOrigin;

/// @brief Field m_BackgroundPosition, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*  ___m_BackgroundPosition;

/// @brief Field m_BackgroundRepeat, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*  ___m_BackgroundRepeat;

/// @brief Field m_BackgroundSize, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*  ___m_BackgroundSize;

/// @brief Field m_AllValues, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  ___m_AllValues;

/// @brief Field m_PropertyToValues, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*  ___m_PropertyToValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyAnimationSystem, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_CurrentTimeMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Floats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Ints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Lengths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Backgrounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_FontDefinitions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Fonts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TextShadows) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Scale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Rotate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Translate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TransformOrigin) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundRepeat) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_AllValues) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_PropertyToValues) == 0x98, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
NEED_NO_BOX(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem*, "UnityEngine.UIElements", "StylePropertyAnimationSystem");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackground");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundPosition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundPosition");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundRepeat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundRepeat");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackgroundSize*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundSize");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesColor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesDiscrete`1");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFloat");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFont");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFontDefinition");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesInt");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesLength");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRotate");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesScale");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTextShadow");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTransformOrigin");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
