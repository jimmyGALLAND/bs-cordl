#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::*)()>(&::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498b6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0._AppendAction_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DropdownMenuAction__Status (::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::*)(::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::_AppendAction_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498bc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*>::get(),
                        "<AppendAction>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status& UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status const& UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::__cordl_internal_set_status(::UnityEngine::UIElements::__DropdownMenuAction__Status  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
inline ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0* UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*>());
}
inline void UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DropdownMenuAction__Status UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::_AppendAction_b__0(::UnityEngine::UIElements::DropdownMenuAction*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*>::get(),
                        "<AppendAction>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DropdownMenuAction__Status, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0::__DropdownMenu____c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.MenuItems
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* (::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::MenuItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498b488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "MenuItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*, ::System::Object*)>(&::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x498b490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, ::UnityEngine::UIElements::__DropdownMenuAction__Status)>(&::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x498b58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DropdownMenuAction__Status>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendSeparator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW)>(&::UnityEngine::UIElements::DropdownMenu::AppendSeparator)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x498b6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.InsertSeparator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, int32_t)>(&::UnityEngine::UIElements::DropdownMenu::InsertSeparator)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x498b824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "InsertSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.PrepareForDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::DropdownMenu::PrepareForDisplay)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x498b960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "PrepareForDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x498bc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*> const& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_MenuItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuItems;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MenuItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DropdownMenuEventInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> const& UnityEngine::UIElements::DropdownMenu::__cordl_internal_get_m_DropdownMenuEventInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DropdownMenuEventInfo;
}
constexpr void UnityEngine::UIElements::DropdownMenu::__cordl_internal_set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DropdownMenuEventInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* UnityEngine::UIElements::DropdownMenu::MenuItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "MenuItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*, false>(this, ___internal_method);
}
/// @param userData: ::System::Object* (default: nullptr)
inline void UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  action, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*  actionStatusCallback, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionName, action, actionStatusCallback, userData);
}
/// @param status: ::UnityEngine::UIElements::__DropdownMenuAction__Status (default: static_cast<int32_t>(0x1))
inline void UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  action, ::UnityEngine::UIElements::__DropdownMenuAction__Status  status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DropdownMenuAction__Status>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionName, action, status);
}
/// @param subMenuPath: ::StringW (default: nullptr)
inline void UnityEngine::UIElements::DropdownMenu::AppendSeparator(::StringW  subMenuPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "AppendSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subMenuPath);
}
inline void UnityEngine::UIElements::DropdownMenu::InsertSeparator(::StringW  subMenuPath, int32_t  atIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "InsertSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subMenuPath, atIndex);
}
inline void UnityEngine::UIElements::DropdownMenu::PrepareForDisplay(::UnityEngine::UIElements::EventBase*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        "PrepareForDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::DropdownMenu* UnityEngine::UIElements::DropdownMenu::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DropdownMenu*>());
}
inline void UnityEngine::UIElements::DropdownMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenu::DropdownMenu()   {
}
