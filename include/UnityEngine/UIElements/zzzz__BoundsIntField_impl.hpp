#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BoundsIntField.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BoundsIntField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BoundsIntField_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vector3IntField_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__BoundsIntField__UxmlFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BoundsIntField__UxmlFactory::*)()>(&::UnityEngine::UIElements::__BoundsIntField__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x48f6c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__BoundsIntField__UxmlFactory* UnityEngine::UIElements::__BoundsIntField__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__BoundsIntField__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__BoundsIntField__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BoundsIntField__UxmlFactory::__BoundsIntField__UxmlFactory()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BoundsIntField__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__BoundsIntField__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x48f6ca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BoundsIntField__UxmlTraits::*)()>(&::UnityEngine::UIElements::__BoundsIntField__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x48f6efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionXValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionXValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionXValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionXValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_PositionXValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionXValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionYValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionYValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionYValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionYValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_PositionYValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionYValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionZValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionZValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_PositionZValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionZValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_PositionZValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionZValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeXValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeXValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeXValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeXValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_SizeXValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SizeXValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeYValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeYValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeYValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeYValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_SizeYValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SizeYValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeZValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeZValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_get_m_SizeZValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeZValue;
}
constexpr void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__cordl_internal_set_m_SizeZValue(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SizeZValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits* UnityEngine::UIElements::__BoundsIntField__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__BoundsIntField__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits::__BoundsIntField__UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)()>(&::UnityEngine::UIElements::BoundsIntField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48f63bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)(::StringW)>(&::UnityEngine::UIElements::BoundsIntField::_ctor)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x48f63c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField.SetValueWithoutNotify
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)(::UnityEngine::BoundsInt)>(&::UnityEngine::UIElements::BoundsIntField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x48f685c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                                  117
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField.UpdateMixedValueContent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)()>(&::UnityEngine::UIElements::BoundsIntField::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48f6958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField.__ctor_b__10_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*)>(&::UnityEngine::UIElements::BoundsIntField::__ctor_b__10_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48f6b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        "<.ctor>b__10_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsIntField.__ctor_b__10_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BoundsIntField::*)(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*)>(&::UnityEngine::UIElements::BoundsIntField::__ctor_b__10_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48f6bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        "<.ctor>b__10_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Vector3IntField*& UnityEngine::UIElements::BoundsIntField::__cordl_internal_get_m_PositionField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3IntField*> const& UnityEngine::UIElements::BoundsIntField::__cordl_internal_get_m_PositionField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionField;
}
constexpr void UnityEngine::UIElements::BoundsIntField::__cordl_internal_set_m_PositionField(::UnityEngine::UIElements::Vector3IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Vector3IntField*& UnityEngine::UIElements::BoundsIntField::__cordl_internal_get_m_SizeField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3IntField*> const& UnityEngine::UIElements::BoundsIntField::__cordl_internal_get_m_SizeField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SizeField;
}
constexpr void UnityEngine::UIElements::BoundsIntField::__cordl_internal_set_m_SizeField(::UnityEngine::UIElements::Vector3IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SizeField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BoundsIntField::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsIntField::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>();
}
inline void UnityEngine::UIElements::BoundsIntField::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsIntField::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>();
}
inline void UnityEngine::UIElements::BoundsIntField::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsIntField::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>();
}
inline void UnityEngine::UIElements::BoundsIntField::setStaticF_positionUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "positionUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsIntField::getStaticF_positionUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "positionUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>();
}
inline void UnityEngine::UIElements::BoundsIntField::setStaticF_sizeUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "sizeUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsIntField::getStaticF_sizeUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "sizeUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get>();
}
inline ::UnityEngine::UIElements::BoundsIntField* UnityEngine::UIElements::BoundsIntField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BoundsIntField*>());
}
inline void UnityEngine::UIElements::BoundsIntField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BoundsIntField* UnityEngine::UIElements::BoundsIntField::New_ctor(::StringW  label)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BoundsIntField*>(label));
}
inline void UnityEngine::UIElements::BoundsIntField::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::BoundsIntField::SetValueWithoutNotify(::UnityEngine::BoundsInt  newValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                    117
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::BoundsIntField::UpdateMixedValueContent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                    116
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BoundsIntField::__ctor_b__10_0(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        "<.ctor>b__10_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::BoundsIntField::__ctor_b__10_1(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BoundsIntField*>::get(),
                        "<.ctor>b__10_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BoundsIntField::BoundsIntField()   {
}
