#pragma once
// IWYU pragma private; include "HMUI/ScrollViewItemForVisibilityController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollViewItemForVisibilityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController.GetWorldCorners
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>)>(&::HMUI::ScrollViewItemForVisibilityController::GetWorldCorners)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x39788f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController*>::get(),
                        "GetWorldCorners",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)()>(&::HMUI::ScrollViewItemForVisibilityController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3978960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void HMUI::ScrollViewItemForVisibilityController::GetWorldCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  fourCornersArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController*>::get(),
                        "GetWorldCorners",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fourCornersArray);
}
inline ::HMUI::ScrollViewItemForVisibilityController* HMUI::ScrollViewItemForVisibilityController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ScrollViewItemForVisibilityController*>());
}
inline void HMUI::ScrollViewItemForVisibilityController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ScrollViewItemForVisibilityController::ScrollViewItemForVisibilityController()   {
}
