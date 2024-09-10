#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroupEffectCollectionTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectCollectionTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3af8158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.TriggerValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3af81e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)()>(&::GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3af8270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>,::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*>& GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_get__floatFxGroupEffectTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFxGroupEffectTargets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>,::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*> const& GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_get__floatFxGroupEffectTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFxGroupEffectTargets;
}
constexpr void GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_set__floatFxGroupEffectTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>,::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxGroupEffectTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue(int32_t  groupId, int32_t  elementId, float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue(int32_t  groupId, int32_t  elementId, float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* GlobalNamespace::FloatFxGroupEffectCollectionTarget::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>());
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffectCollectionTarget::FloatFxGroupEffectCollectionTarget()   {
}
