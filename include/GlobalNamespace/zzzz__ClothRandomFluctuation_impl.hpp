#pragma once
// IWYU pragma private; include "GlobalNamespace/ClothRandomFluctuation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Cloth_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ClothRandomFluctuation__SineLayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ClothRandomFluctuation__SineLayer::*)()>(&::GlobalNamespace::__ClothRandomFluctuation__SineLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a4685c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_get_multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr float_t const& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_get_multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr void GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_set_multiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiplier = value;
}
constexpr float_t& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::__ClothRandomFluctuation__SineLayer::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline ::GlobalNamespace::__ClothRandomFluctuation__SineLayer* GlobalNamespace::__ClothRandomFluctuation__SineLayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>());
}
inline void GlobalNamespace::__ClothRandomFluctuation__SineLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ClothRandomFluctuation__SineLayer::__ClothRandomFluctuation__SineLayer()   {
}
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a465d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.FluctuateCloth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)(::UnityEngine::Cloth*)>(&::GlobalNamespace::ClothRandomFluctuation::FluctuateCloth)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3a465e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "FluctuateCloth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cloth*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.GetNoise
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ClothRandomFluctuation::*)(float_t, float_t)>(&::GlobalNamespace::ClothRandomFluctuation::GetNoise)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a46750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "GetNoise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a46854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Cloth>& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__cloth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloth;
}
constexpr ::UnityW<::UnityEngine::Cloth> const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__cloth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloth;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__cloth(::UnityW<::UnityEngine::Cloth>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cloth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalExternalFluctuations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalExternalFluctuations;
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalExternalFluctuations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalExternalFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__useLocalExternalFluctuations(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLocalExternalFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__externalFluctuations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__externalFluctuations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__externalFluctuations(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____externalFluctuations = value;
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalRandomFluctuations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalRandomFluctuations;
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__useLocalRandomFluctuations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalRandomFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__useLocalRandomFluctuations(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLocalRandomFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__minFluctuations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__minFluctuations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__minFluctuations(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minFluctuations = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__maxFluctuations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFluctuations;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__maxFluctuations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFluctuations;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__maxFluctuations(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxFluctuations = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__compoundSins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compoundSins;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*> const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__compoundSins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compoundSins;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compoundSins)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& GlobalNamespace::ClothRandomFluctuation::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
inline void GlobalNamespace::ClothRandomFluctuation::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ClothRandomFluctuation::FluctuateCloth(::UnityEngine::Cloth*  cloth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "FluctuateCloth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cloth*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloth);
}
/// @param offset: float_t (default: 0.0)
inline float_t GlobalNamespace::ClothRandomFluctuation::GetNoise(float_t  time, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        "GetNoise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time, offset);
}
inline ::GlobalNamespace::ClothRandomFluctuation* GlobalNamespace::ClothRandomFluctuation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ClothRandomFluctuation*>());
}
inline void GlobalNamespace::ClothRandomFluctuation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClothRandomFluctuation::ClothRandomFluctuation()   {
}
