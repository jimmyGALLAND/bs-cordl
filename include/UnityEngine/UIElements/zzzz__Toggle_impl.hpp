#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Toggle.hpp"
#include "UnityEngine/UIElements/zzzz__BaseBoolField_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__Toggle__UxmlFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Toggle__UxmlFactory::*)()>(&::UnityEngine::UIElements::__Toggle__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4977fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__Toggle__UxmlFactory* UnityEngine::UIElements::__Toggle__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__Toggle__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__Toggle__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__Toggle__UxmlFactory::__Toggle__UxmlFactory()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__Toggle__UxmlTraits.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Toggle__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__Toggle__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4977fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Toggle__UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Toggle__UxmlTraits::*)()>(&::UnityEngine::UIElements::__Toggle__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4978104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__Toggle__UxmlTraits::__cordl_internal_get_m_Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Text;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::__Toggle__UxmlTraits::__cordl_internal_get_m_Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Text;
}
constexpr void UnityEngine::UIElements::__Toggle__UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__Toggle__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlTraits*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__Toggle__UxmlTraits* UnityEngine::UIElements::__Toggle__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__Toggle__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__Toggle__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Toggle__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__Toggle__UxmlTraits::__Toggle__UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4977ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Toggle::*)(::StringW)>(&::UnityEngine::UIElements::Toggle::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4977ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle.InitLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::InitLabel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4977bd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                                  118
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Toggle.UpdateMixedValueContent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Toggle::*)()>(&::UnityEngine::UIElements::Toggle::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x4977c54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Toggle::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_noTextVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "noTextVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_noTextVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "noTextVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_checkmarkUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_checkmarkUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_textUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_textUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline void UnityEngine::UIElements::Toggle::setStaticF_mixedValuesUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "mixedValuesUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Toggle::getStaticF_mixedValuesUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "mixedValuesUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get>();
}
inline ::UnityEngine::UIElements::Toggle* UnityEngine::UIElements::Toggle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Toggle*>());
}
inline void UnityEngine::UIElements::Toggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Toggle* UnityEngine::UIElements::Toggle::New_ctor(::StringW  label)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Toggle*>(label));
}
inline void UnityEngine::UIElements::Toggle::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::Toggle::InitLabel()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                    118
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Toggle::UpdateMixedValueContent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Toggle*>::get(),
                    116
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Toggle::Toggle()   {
}
