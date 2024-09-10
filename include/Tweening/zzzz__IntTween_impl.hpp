#pragma once
// IWYU pragma private; include "Tweening/IntTween.hpp"
#include "Tweening/zzzz__IntTween_impl.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__IntTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__IntTween_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tweening::__IntTween__RoundingType::__IntTween__RoundingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tweening::__IntTween__RoundingType::__IntTween__RoundingType()   {
}
constexpr ::Tweening::__IntTween__RoundingType  Tweening::__IntTween__RoundingType::Floor{static_cast<int32_t>(0x0)};
constexpr ::Tweening::__IntTween__RoundingType  Tweening::__IntTween__RoundingType::Round{static_cast<int32_t>(0x1)};
constexpr ::Tweening::__IntTween__RoundingType  Tweening::__IntTween__RoundingType::Ceil{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Tweening::IntTween._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::IntTween::*)()>(&::Tweening::IntTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4448bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::IntTween._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::IntTween::*)(int32_t, int32_t, ::System::Action_1<int32_t>*, float_t, ::GlobalNamespace::EaseType, ::Tweening::__IntTween__RoundingType, float_t)>(&::Tweening::IntTween::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4448c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::__IntTween__RoundingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::IntTween.GetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tweening::IntTween::*)(float_t)>(&::Tweening::IntTween::GetValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x4448cb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr ::Tweening::__IntTween__RoundingType& Tweening::IntTween::__cordl_internal_get__roundingType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundingType;
}
constexpr ::Tweening::__IntTween__RoundingType const& Tweening::IntTween::__cordl_internal_get__roundingType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundingType;
}
constexpr void Tweening::IntTween::__cordl_internal_set__roundingType(::Tweening::__IntTween__RoundingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roundingType = value;
}
inline ::Tweening::IntTween* Tweening::IntTween::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::IntTween*>());
}
inline void Tweening::IntTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param delay: float_t (default: 0.0)
inline ::Tweening::IntTween* Tweening::IntTween::New_ctor(int32_t  fromValue, int32_t  toValue, ::System::Action_1<int32_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, ::Tweening::__IntTween__RoundingType  roundingType, float_t  delay)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tweening::IntTween*>(fromValue, toValue, onUpdate, duration, easeType, roundingType, delay));
}
/// @param delay: float_t (default: 0.0)
inline void Tweening::IntTween::_ctor(int32_t  fromValue, int32_t  toValue, ::System::Action_1<int32_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, ::Tweening::__IntTween__RoundingType  roundingType, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::__IntTween__RoundingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, roundingType, delay);
}
inline int32_t Tweening::IntTween::GetValue(float_t  t)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::IntTween*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Tweening::IntTween::IntTween()   {
}
