#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__DrivenTransformProperties_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__RectTransform__Edge::__RectTransform__Edge(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__RectTransform__Edge::__RectTransform__Edge() {}
constexpr ::UnityEngine::__RectTransform__Edge UnityEngine::__RectTransform__Edge::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__RectTransform__Edge UnityEngine::__RectTransform__Edge::Right{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__RectTransform__Edge UnityEngine::__RectTransform__Edge::Top{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__RectTransform__Edge UnityEngine::__RectTransform__Edge::Bottom{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__RectTransform__Axis::__RectTransform__Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__RectTransform__Axis::__RectTransform__Axis() {}
constexpr ::UnityEngine::__RectTransform__Axis UnityEngine::__RectTransform__Axis::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__RectTransform__Axis UnityEngine::__RectTransform__Axis::Vertical{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::__RectTransform__ReapplyDrivenProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__RectTransform__ReapplyDrivenProperties::*)(::System::Object*, void*)>(
    &::UnityEngine::__RectTransform__ReapplyDrivenProperties::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2ce3c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__RectTransform__ReapplyDrivenProperties.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__RectTransform__ReapplyDrivenProperties::*)(::UnityEngine::RectTransform*)>(
    &::UnityEngine::__RectTransform__ReapplyDrivenProperties::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ce3cec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* UnityEngine::__RectTransform__ReapplyDrivenProperties::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>(object, method));
}
inline void UnityEngine::__RectTransform__ReapplyDrivenProperties::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__RectTransform__ReapplyDrivenProperties::Invoke(::UnityEngine::RectTransform* driven) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, driven);
}
// Ctor Parameters []
constexpr ::UnityEngine::__RectTransform__ReapplyDrivenProperties::__RectTransform__ReapplyDrivenProperties() {}
//  Writing Method size for method: ::UnityEngine::RectTransform.add_reapplyDrivenProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::__RectTransform__ReapplyDrivenProperties*)>(
    &::UnityEngine::RectTransform::add_reapplyDrivenProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ce27a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "add_reapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.remove_reapplyDrivenProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::__RectTransform__ReapplyDrivenProperties*)>(
    &::UnityEngine::RectTransform::remove_reapplyDrivenProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ce2858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "remove_reapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_rect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_rect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ce2910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_rect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchorMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_anchorMin)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ce29ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMin",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchorMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_anchorMin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ce2a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMin", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchorMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_anchorMax)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ce2ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMax",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchorMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_anchorMax)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ce2b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMax", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchoredPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_anchoredPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ce2be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchoredPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::RectTransform::set_anchoredPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ce2c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_sizeDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_sizeDelta)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ce2d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_sizeDelta",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_sizeDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_sizeDelta)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ce2d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_sizeDelta", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_pivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_pivot)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ce2e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_pivot",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_pivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_pivot)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ce2eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_pivot", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchoredPosition3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_anchoredPosition3D)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ce2f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition3D",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchoredPosition3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::RectTransform::set_anchoredPosition3D)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ce2f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition3D", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_offsetMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_offsetMin)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ce2f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_offsetMin",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_offsetMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_offsetMin)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ce2ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_offsetMin", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_offsetMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_offsetMax)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ce30e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_offsetMax",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_offsetMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransform::set_offsetMax)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2ce3184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_offsetMax", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_drivenByObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::get_drivenByObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ce3280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_drivenByObject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_drivenByObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::Object*)>(&::UnityEngine::RectTransform::set_drivenByObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce32bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_drivenByObject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_drivenProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DrivenTransformProperties (::UnityEngine::RectTransform::*)()>(
    &::UnityEngine::RectTransform::get_drivenProperties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ce3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_drivenProperties",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_drivenProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::DrivenTransformProperties)>(
    &::UnityEngine::RectTransform::set_drivenProperties)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce333c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_drivenProperties", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DrivenTransformProperties>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.ForceUpdateRectTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::ForceUpdateRectTransforms)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ce3380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(),
                                                                               "ForceUpdateRectTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.GetLocalCorners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
    &::UnityEngine::RectTransform::GetLocalCorners)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ce33bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetLocalCorners", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.GetWorldCorners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
    &::UnityEngine::RectTransform::GetWorldCorners)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2ce34f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetWorldCorners", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.SetInsetAndSizeFromParentEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::__RectTransform__Edge, float_t, float_t)>(
    &::UnityEngine::RectTransform::SetInsetAndSizeFromParentEdge)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ce364c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SetInsetAndSizeFromParentEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.SetSizeWithCurrentAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(::UnityEngine::__RectTransform__Axis, float_t)>(
    &::UnityEngine::RectTransform::SetSizeWithCurrentAnchors)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2ce3760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SetSizeWithCurrentAnchors", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.SendReapplyDrivenProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&::UnityEngine::RectTransform::SendReapplyDrivenProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ce397c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SendReapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.GetRectInParentSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::GetRectInParentSpace)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2ce39e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetRectInParentSpace",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.GetParentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::GetParentSize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ce385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetParentSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)()>(&::UnityEngine::RectTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ce3c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_rect_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Rect>)>(
    &::UnityEngine::RectTransform::get_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_rect_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchorMin_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::get_anchorMin_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce29f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMin_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchorMin_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::set_anchorMin_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMin_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchorMax_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::get_anchorMax_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMax_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchorMax_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::set_anchorMax_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMax_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_anchoredPosition_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::get_anchoredPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition_Injected", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_anchoredPosition_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::set_anchoredPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition_Injected", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_sizeDelta_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::get_sizeDelta_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_sizeDelta_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_sizeDelta_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::set_sizeDelta_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_sizeDelta_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.get_pivot_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::get_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_pivot_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransform.set_pivot_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransform::set_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce2ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_pivot_Injected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::RectTransform::setStaticF_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__RectTransform__ReapplyDrivenProperties*, "reapplyDrivenProperties",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get>(
      std::forward<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>(value));
}
inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* UnityEngine::RectTransform::getStaticF_reapplyDrivenProperties() {
  return ::cordl_internals::getStaticField<::UnityEngine::__RectTransform__ReapplyDrivenProperties*, "reapplyDrivenProperties",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get>();
}
inline void UnityEngine::RectTransform::add_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "add_reapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::RectTransform::remove_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "remove_reapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__ReapplyDrivenProperties*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::RectTransform::get_rect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_rect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_anchorMin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMin",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_anchorMin(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMin", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_anchorMax() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMax",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_anchorMax(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMax", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_anchoredPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_anchoredPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_sizeDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_sizeDelta",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_sizeDelta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_sizeDelta", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_pivot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_pivot(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_pivot", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::RectTransform::get_anchoredPosition3D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition3D",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_anchoredPosition3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition3D", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_offsetMin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_offsetMin",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_offsetMin(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_offsetMin", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::get_offsetMax() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_offsetMax",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_offsetMax(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_offsetMax", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Object* UnityEngine::RectTransform::get_drivenByObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_drivenByObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_drivenByObject(::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_drivenByObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::DrivenTransformProperties UnityEngine::RectTransform::get_drivenProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_drivenProperties",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DrivenTransformProperties, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::set_drivenProperties(::UnityEngine::DrivenTransformProperties value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_drivenProperties", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DrivenTransformProperties>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::RectTransform::ForceUpdateRectTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "ForceUpdateRectTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::GetLocalCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetLocalCorners", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fourCornersArray);
}
inline void UnityEngine::RectTransform::GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetWorldCorners", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fourCornersArray);
}
inline void UnityEngine::RectTransform::SetInsetAndSizeFromParentEdge(::UnityEngine::__RectTransform__Edge edge, float_t inset, float_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SetInsetAndSizeFromParentEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Edge>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge, inset, size);
}
inline void UnityEngine::RectTransform::SetSizeWithCurrentAnchors(::UnityEngine::__RectTransform__Axis axis, float_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SetSizeWithCurrentAnchors", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis, size);
}
inline void UnityEngine::RectTransform::SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "SendReapplyDrivenProperties", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, driven);
}
inline ::UnityEngine::Rect UnityEngine::RectTransform::GetRectInParentSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetRectInParentSpace",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransform::GetParentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "GetParentSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::RectTransform* UnityEngine::RectTransform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RectTransform*>());
}
inline void UnityEngine::RectTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::RectTransform::get_rect_Injected(ByRef<::UnityEngine::Rect> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_rect_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::get_anchorMin_Injected(ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMin_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::set_anchorMin_Injected(ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMin_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::RectTransform::get_anchorMax_Injected(ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchorMax_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::set_anchorMax_Injected(ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchorMax_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::RectTransform::get_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_anchoredPosition_Injected", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::set_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_anchoredPosition_Injected", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::RectTransform::get_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_sizeDelta_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::set_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_sizeDelta_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::RectTransform::get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "get_pivot_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::RectTransform::set_pivot_Injected(ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RectTransform*>::get(), "set_pivot_Injected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::RectTransform::RectTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
