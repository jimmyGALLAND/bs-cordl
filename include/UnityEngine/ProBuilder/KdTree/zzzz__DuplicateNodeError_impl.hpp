#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/DuplicateNodeError.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__DuplicateNodeError_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::*)()>(&::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x46642a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError* UnityEngine::ProBuilder::KdTree::DuplicateNodeError::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>());
}
inline void UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::DuplicateNodeError()   {
}
