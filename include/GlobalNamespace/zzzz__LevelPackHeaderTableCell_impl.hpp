#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelPackHeaderTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SetData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::StringW)>(&::GlobalNamespace::LevelPackHeaderTableCell::SetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b68570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SelectionDidChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b68594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.HighlightDidChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b68634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.RefreshVisuals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b68598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        "RefreshVisuals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b68638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__nameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__nameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameText;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__backgroundImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__backgroundImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundImage;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__highlightBackgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__highlightBackgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__highlightBackgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedBackgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedBackgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__selectedBackgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedAndHighlightedBackgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedAndHighlightedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedAndHighlightedBackgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedAndHighlightedBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedAndHighlightedBackgroundColor = value;
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SetData(::StringW  headerText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headerText);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        "RefreshVisuals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackHeaderTableCell* GlobalNamespace::LevelPackHeaderTableCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelPackHeaderTableCell*>());
}
inline void GlobalNamespace::LevelPackHeaderTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackHeaderTableCell::LevelPackHeaderTableCell()   {
}
