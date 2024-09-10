#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradient.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::*)()>(&::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3953a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_startT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startT;
}
constexpr float_t const& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_startT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startT;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_set_startT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startT = value;
}
constexpr float_t& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_exp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exp;
}
constexpr float_t const& GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_get_exp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exp;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__cordl_internal_set_exp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exp = value;
}
inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element* GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>());
}
inline void GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element::__BloomPrePassBackgroundColorsGradient__Element()   {
}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.get_elements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3953850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        "get_elements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.UpdatePixels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3953858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.EvaluateColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(float_t)>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x39538c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        "EvaluateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3953994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>& GlobalNamespace::BloomPrePassBackgroundColorsGradient::__cordl_internal_get__elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> const& GlobalNamespace::BloomPrePassBackgroundColorsGradient::__cordl_internal_get__elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradient::__cordl_internal_set__elements(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*> GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        "get_elements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*,::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradient__Element*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  pixels, int32_t  numberOfPixels)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixels, numberOfPixels);
}
inline ::UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        "EvaluateColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, t);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* GlobalNamespace::BloomPrePassBackgroundColorsGradient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::BloomPrePassBackgroundColorsGradient()   {
}
