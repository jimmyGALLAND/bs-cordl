#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GUILayoutGroup_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngine::__GUILayoutUtility__LayoutCache.set_id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__GUILayoutUtility__LayoutCache::*)(int32_t)>(&::UnityEngine::__GUILayoutUtility__LayoutCache::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4847e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        "set_id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__GUILayoutUtility__LayoutCache._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__GUILayoutUtility__LayoutCache::*)(int32_t)>(&::UnityEngine::__GUILayoutUtility__LayoutCache::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4847084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__GUILayoutUtility__LayoutCache.ResetCursor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__GUILayoutUtility__LayoutCache::*)()>(&::UnityEngine::__GUILayoutUtility__LayoutCache::ResetCursor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x4847e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        "ResetCursor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_set__id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr ::UnityEngine::GUILayoutGroup*& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_topLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLevel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> const& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_topLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLevel;
}
constexpr void UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_set_topLevel(::UnityEngine::GUILayoutGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngineInternal::GenericStack*& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_layoutGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutGroups;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngineInternal::GenericStack*> const& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_layoutGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutGroups;
}
constexpr void UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_set_layoutGroups(::UnityEngineInternal::GenericStack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layoutGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GUILayoutGroup*& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_windows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windows;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> const& UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_get_windows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windows;
}
constexpr void UnityEngine::__GUILayoutUtility__LayoutCache::__cordl_internal_set_windows(::UnityEngine::GUILayoutGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::__GUILayoutUtility__LayoutCache::set_id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        "set_id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param instanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityEngine::__GUILayoutUtility__LayoutCache* UnityEngine::__GUILayoutUtility__LayoutCache::New_ctor(int32_t  instanceID)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__GUILayoutUtility__LayoutCache*>(instanceID));
}
/// @param instanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::__GUILayoutUtility__LayoutCache::_ctor(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceID);
}
inline void UnityEngine::__GUILayoutUtility__LayoutCache::ResetCursor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get(),
                        "ResetCursor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::__GUILayoutUtility__LayoutCache::__GUILayoutUtility__LayoutCache()   {
}
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_GetWindowRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(int32_t)>(&::UnityEngine::GUILayoutUtility::Internal_GetWindowRect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4846e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_GetWindowRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_MoveWindow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Rect)>(&::UnityEngine::GUILayoutUtility::Internal_MoveWindow)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4846f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_MoveWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.GetLayoutCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__GUILayoutUtility__LayoutCache* (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::GetLayoutCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4846fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "GetLayoutCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.SelectIDList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__GUILayoutUtility__LayoutCache* (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::SelectIDList)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4845ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "SelectIDList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.RemoveSelectedIdList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::RemoveSelectedIdList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4847150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "RemoveSelectedIdList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Begin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUILayoutUtility::Begin)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x4847224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Begin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginContainer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::__GUILayoutUtility__LayoutCache*)>(&::UnityEngine::GUILayoutUtility::BeginContainer)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x48474fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "BeginContainer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginWindow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>)>(&::UnityEngine::GUILayoutUtility::BeginWindow)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x4846264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "BeginWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Layout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::Layout)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x4846564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Layout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFromEditorWindow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::LayoutFromEditorWindow)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x48479c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFromEditorWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFromContainer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::GUILayoutUtility::LayoutFromContainer)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x4847bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFromContainer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFreeGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&::UnityEngine::GUILayoutUtility::LayoutFreeGroup)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x4847690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFreeGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUILayoutGroup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutSingleGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&::UnityEngine::GUILayoutUtility::LayoutSingleGroup)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x484784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutSingleGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUILayoutGroup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_GetWindowRect_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Rect>)>(&::UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4846ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_GetWindowRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_MoveWindow_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Rect>)>(&::UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4846f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_MoveWindow_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GUILayoutUtility::setStaticF_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*, "s_StoredLayouts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>* UnityEngine::GUILayoutUtility::getStaticF_s_StoredLayouts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*, "s_StoredLayouts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*, "s_StoredWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>* UnityEngine::GUILayoutUtility::getStaticF_s_StoredWindows()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*, "s_StoredWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_current(::UnityEngine::__GUILayoutUtility__LayoutCache*  value)  {
::cordl_internals::setStaticField<::UnityEngine::__GUILayoutUtility__LayoutCache*, "current", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>(std::forward<::UnityEngine::__GUILayoutUtility__LayoutCache*>(value));
}
inline ::UnityEngine::__GUILayoutUtility__LayoutCache* UnityEngine::GUILayoutUtility::getStaticF_current()  {
return ::cordl_internals::getStaticField<::UnityEngine::__GUILayoutUtility__LayoutCache*, "current", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_kDummyRect(::UnityEngine::Rect  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rect, "kDummyRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::getStaticF_kDummyRect()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rect, "kDummyRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get>();
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::Internal_GetWindowRect(int32_t  windowID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_GetWindowRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, windowID);
}
inline void UnityEngine::GUILayoutUtility::Internal_MoveWindow(int32_t  windowID, ::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_MoveWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, windowID, r);
}
inline ::UnityEngine::__GUILayoutUtility__LayoutCache* UnityEngine::GUILayoutUtility::GetLayoutCache(int32_t  instanceID, bool  isWindow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "GetLayoutCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::__GUILayoutUtility__LayoutCache*, false>(nullptr, ___internal_method, instanceID, isWindow);
}
inline ::UnityEngine::__GUILayoutUtility__LayoutCache* UnityEngine::GUILayoutUtility::SelectIDList(int32_t  instanceID, bool  isWindow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "SelectIDList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::__GUILayoutUtility__LayoutCache*, false>(nullptr, ___internal_method, instanceID, isWindow);
}
inline void UnityEngine::GUILayoutUtility::RemoveSelectedIdList(int32_t  instanceID, bool  isWindow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "RemoveSelectedIdList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instanceID, isWindow);
}
inline void UnityEngine::GUILayoutUtility::Begin(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Begin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::GUILayoutUtility::BeginContainer(::UnityEngine::__GUILayoutUtility__LayoutCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "BeginContainer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutUtility__LayoutCache*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cache);
}
inline void UnityEngine::GUILayoutUtility::BeginWindow(int32_t  windowID, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "BeginWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, windowID, style, options);
}
inline void UnityEngine::GUILayoutUtility::Layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Layout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::LayoutFromEditorWindow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFromEditorWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::LayoutFromContainer(float_t  w, float_t  h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFromContainer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, w, h);
}
inline void UnityEngine::GUILayoutUtility::LayoutFreeGroup(::UnityEngine::GUILayoutGroup*  toplevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutFreeGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUILayoutGroup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toplevel);
}
inline void UnityEngine::GUILayoutUtility::LayoutSingleGroup(::UnityEngine::GUILayoutGroup*  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "LayoutSingleGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUILayoutGroup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i);
}
inline void UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected(int32_t  windowID, ByRef<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_GetWindowRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, windowID, ret);
}
inline void UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected(int32_t  windowID, ByRef<::UnityEngine::Rect>  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutUtility*>::get(),
                        "Internal_MoveWindow_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, windowID, r);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutUtility::GUILayoutUtility()   {
}
