#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__TextEditor_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextEditor__DblClickSnapping::__TextEditor__DblClickSnapping(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextEditor__DblClickSnapping::__TextEditor__DblClickSnapping() {}
constexpr ::UnityEngine::__TextEditor__DblClickSnapping UnityEngine::__TextEditor__DblClickSnapping::WORDS{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::__TextEditor__DblClickSnapping UnityEngine::__TextEditor__DblClickSnapping::PARAGRAPHS{ static_cast<uint8_t>(0x1u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextEditor__CharacterType::__TextEditor__CharacterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextEditor__CharacterType::__TextEditor__CharacterType() {}
constexpr ::UnityEngine::__TextEditor__CharacterType UnityEngine::__TextEditor__CharacterType::LetterLike{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextEditor__CharacterType UnityEngine::__TextEditor__CharacterType::Symbol{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__TextEditor__CharacterType UnityEngine::__TextEditor__CharacterType::Symbol2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__TextEditor__CharacterType UnityEngine::__TextEditor__CharacterType::WhiteSpace{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextEditor__Direction::__TextEditor__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextEditor__Direction::__TextEditor__Direction() {}
constexpr ::UnityEngine::__TextEditor__Direction UnityEngine::__TextEditor__Direction::Forward{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextEditor__Direction UnityEngine::__TextEditor__Direction::Backward{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextEditor__TextEditOp::__TextEditor__TextEditOp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextEditor__TextEditOp::__TextEditor__TextEditOp() {}
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveRight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveUp{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveDown{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveLineStart{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveLineEnd{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveTextStart{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveTextEnd{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MovePageUp{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MovePageDown{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveGraphicalLineStart{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveGraphicalLineEnd{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveWordLeft{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveWordRight{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveParagraphForward{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveParagraphBackward{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveToStartOfNextWord{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::MoveToEndOfPreviousWord{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectLeft{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectRight{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectUp{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectDown{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectTextStart{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectTextEnd{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectPageUp{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectPageDown{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ExpandSelectGraphicalLineStart{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ExpandSelectGraphicalLineEnd{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectGraphicalLineStart{ static_cast<int32_t>(0x1c) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectGraphicalLineEnd{ static_cast<int32_t>(0x1d) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectWordLeft{ static_cast<int32_t>(0x1e) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectWordRight{ static_cast<int32_t>(0x1f) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectToEndOfPreviousWord{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectToStartOfNextWord{ static_cast<int32_t>(0x21) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectParagraphBackward{ static_cast<int32_t>(0x22) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectParagraphForward{ static_cast<int32_t>(0x23) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::Delete{ static_cast<int32_t>(0x24) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::Backspace{ static_cast<int32_t>(0x25) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::DeleteWordBack{ static_cast<int32_t>(0x26) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::DeleteWordForward{ static_cast<int32_t>(0x27) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::DeleteLineBack{ static_cast<int32_t>(0x28) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::Cut{ static_cast<int32_t>(0x29) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::Copy{ static_cast<int32_t>(0x2a) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::Paste{ static_cast<int32_t>(0x2b) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectAll{ static_cast<int32_t>(0x2c) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::SelectNone{ static_cast<int32_t>(0x2d) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ScrollStart{ static_cast<int32_t>(0x2e) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ScrollEnd{ static_cast<int32_t>(0x2f) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ScrollPageUp{ static_cast<int32_t>(0x30) };
constexpr ::UnityEngine::__TextEditor__TextEditOp UnityEngine::__TextEditor__TextEditOp::ScrollPageDown{ static_cast<int32_t>(0x31) };
//  Writing Method size for method: ::UnityEngine::TextEditor.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_text)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d049e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_text",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::set_text)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d04a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_text", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d04ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_position",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Rect)>(&::UnityEngine::TextEditor::set_position)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d04ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_localPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d04f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_cursorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_cursorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d04f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_cursorIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_cursorIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::set_cursorIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d04f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_cursorIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_selectIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_selectIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d04f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_selectIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_selectIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::set_selectIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d04f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_selectIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClearCursorPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ClearCursorPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d04fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClearCursorPos",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_altCursorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_altCursorPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d04ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_altCursorPosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d04ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnFocus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d050f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnFocus",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnLostFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnLostFocus)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d0517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnLostFocus",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GrabGraphicalCursorPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::GrabGraphicalCursorPos)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d051d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GrabGraphicalCursorPos",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.HandleKeyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(::UnityEngine::Event*, bool)>(&::UnityEngine::TextEditor::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2d05254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "HandleKeyEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteLineBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteLineBack)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d0623c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteLineBack",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteWordBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteWordBack)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d06410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteWordBack",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteWordForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteWordForward)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d06568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteWordForward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Delete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d06794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Delete",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.CanPaste
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::CanPaste)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d068e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "CanPaste",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Backspace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Backspace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d06928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Backspace",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectAll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d05138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectNone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectNone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d06a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectNone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_hasSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_hasSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d062f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_hasSelection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_SelectedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_SelectedText)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d06aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_SelectedText",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteSelection)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d06304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteSelection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ReplaceSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::ReplaceSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d06b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ReplaceSelection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(char16_t)>(&::UnityEngine::TextEditor::Insert)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d06bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveSelectionToAltCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveSelectionToAltCursor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d06be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveSelectionToAltCursor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveRight)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d06ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveRight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLeft)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d06d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLeft",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d06d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveUp",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveDown)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d06e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveDown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLineStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d06f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLineStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLineEnd)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d06f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLineEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveGraphicalLineStart)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d07008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveGraphicalLineStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d07100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveGraphicalLineEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveTextStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveTextStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d0720c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveTextStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveTextEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveTextEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d0722c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveTextEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.IndexOfEndOfLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::IndexOfEndOfLine)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d0726c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "IndexOfEndOfLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveParagraphForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveParagraphForward)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d072bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveParagraphForward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveParagraphBackward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveParagraphBackward)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d0733c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveParagraphBackward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveCursorToPosition_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2, bool)>(
    &::UnityEngine::TextEditor::MoveCursorToPosition_Internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d073b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveCursorToPosition_Internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveAltCursorToPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::MoveAltCursorToPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d0743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveAltCursorToPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::SelectToPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2d074c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectLeft)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d077d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectLeft",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectRight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d07828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectRight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectUp)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d07880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectUp",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectDown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d078e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectDown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectTextEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectTextEnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d07964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectTextEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectTextStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectTextStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d07988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectTextStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MouseDragSelectsWholeWords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(bool)>(&::UnityEngine::TextEditor::MouseDragSelectsWholeWords)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d07990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MouseDragSelectsWholeWords", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DblClickSnap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::__TextEditor__DblClickSnapping)>(
    &::UnityEngine::TextEditor::DblClickSnap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d079a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DblClickSnap", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__DblClickSnapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GetGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::GetGraphicalLineStart)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d07050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GetGraphicalLineStart", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GetGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::GetGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d07148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GetGraphicalLineEnd", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindNextSeperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindNextSeperator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d079ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindNextSeperator", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindPrevSeperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindPrevSeperator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d07b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindPrevSeperator", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveWordRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveWordRight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d07bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveWordRight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveToStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveToStartOfNextWord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d07c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveToStartOfNextWord",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d07c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveToEndOfPreviousWord",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectToStartOfNextWord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d07cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToStartOfNextWord",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d07d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToEndOfPreviousWord",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClassifyChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__TextEditor__CharacterType (::UnityEngine::TextEditor::*)(int32_t)>(
    &::UnityEngine::TextEditor::ClassifyChar)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2d07a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClassifyChar", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindStartOfNextWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindStartOfNextWord)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2d065e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindStartOfNextWord", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d064a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindEndOfPreviousWord", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveWordLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveWordLeft)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d07d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveWordLeft",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectWordRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectWordRight)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d07d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectWordRight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectWordLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectWordLeft)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d07df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectWordLeft",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ExpandSelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ExpandSelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d07e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                               "ExpandSelectGraphicalLineStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ExpandSelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ExpandSelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d07ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                               "ExpandSelectGraphicalLineEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectGraphicalLineStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d07f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectGraphicalLineStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectGraphicalLineEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d07f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectGraphicalLineEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectParagraphForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectParagraphForward)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d07f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectParagraphForward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectParagraphBackward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectParagraphBackward)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d08004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectParagraphBackward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d080a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectCurrentWord",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindEndOfClassification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t, ::UnityEngine::__TextEditor__Direction)>(
    &::UnityEngine::TextEditor::FindEndOfClassification)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d076bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindEndOfClassification", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentParagraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d08114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectCurrentParagraph",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.UpdateScrollOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::UpdateScrollOffset)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2d04b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "UpdateScrollOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.PerformOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(::UnityEngine::__TextEditor__TextEditOp, bool)>(
    &::UnityEngine::TextEditor::PerformOperation)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2d05e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "PerformOperation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__TextEditOp>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SaveBackup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SaveBackup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d08300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SaveBackup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Cut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Cut)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d081a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Cut", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Copy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d081cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Copy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ReplaceNewlinesWithSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::TextEditor::ReplaceNewlinesWithSpaces)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d08324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ReplaceNewlinesWithSpaces", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Paste
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Paste)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d0825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Paste",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::__TextEditor__TextEditOp)>(&::UnityEngine::TextEditor::MapKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d083b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MapKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__TextEditOp>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.InitKeyActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::InitKeyActions)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x2d05408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "InitKeyActions",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DetectFocusChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DetectFocusChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d06d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DetectFocusChange",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnDetectFocusChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnDetectFocusChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d08444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnCursorIndexChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnCursorIndexChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d084e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnSelectIndexChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnSelectIndexChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d084e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClampTextIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(ByRef<int32_t>)>(&::UnityEngine::TextEditor::ClampTextIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d084e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClampTextIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.EnsureValidCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(ByRef<int32_t>)>(&::UnityEngine::TextEditor::EnsureValidCodePointIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d04a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "EnsureValidCodePointIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.IsValidCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::IsValidCodePointIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d08524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "IsValidCodePointIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.PreviousCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d069c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "PreviousCodePointIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.NextCodePointIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::NextCodePointIndex)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d06820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "NextCodePointIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TouchScreenKeyboard*& UnityEngine::TextEditor::__get_keyboardOnScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyboardOnScreen;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& UnityEngine::TextEditor::__get_keyboardOnScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyboardOnScreen;
}
constexpr void UnityEngine::TextEditor::__set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardOnScreen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextEditor::__get_controlID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___controlID;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_controlID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___controlID;
}
constexpr void UnityEngine::TextEditor::__set_controlID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___controlID = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::TextEditor::__get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___style;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& UnityEngine::TextEditor::__get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___style;
}
constexpr void UnityEngine::TextEditor::__set_style(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___style)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextEditor::__get_multiline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiline;
}
constexpr bool const& UnityEngine::TextEditor::__get_multiline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiline;
}
constexpr void UnityEngine::TextEditor::__set_multiline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___multiline = value;
}
constexpr bool& UnityEngine::TextEditor::__get_hasHorizontalCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr bool const& UnityEngine::TextEditor::__get_hasHorizontalCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr void UnityEngine::TextEditor::__set_hasHorizontalCursorPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hasHorizontalCursorPos = value;
}
constexpr bool& UnityEngine::TextEditor::__get_isPasswordField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isPasswordField;
}
constexpr bool const& UnityEngine::TextEditor::__get_isPasswordField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isPasswordField;
}
constexpr void UnityEngine::TextEditor::__set_isPasswordField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isPasswordField = value;
}
constexpr bool& UnityEngine::TextEditor::__get_m_HasFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HasFocus;
}
constexpr bool const& UnityEngine::TextEditor::__get_m_HasFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HasFocus;
}
constexpr void UnityEngine::TextEditor::__set_m_HasFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_HasFocus = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__get_scrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scrollOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__get_scrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scrollOffset;
}
constexpr void UnityEngine::TextEditor::__set_scrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___scrollOffset = value;
}
constexpr ::UnityEngine::GUIContent*& UnityEngine::TextEditor::__get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Content;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIContent*> const& UnityEngine::TextEditor::__get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::TextEditor::__set_m_Content(::UnityEngine::GUIContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& UnityEngine::TextEditor::__get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::Rect const& UnityEngine::TextEditor::__get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::TextEditor::__set_m_Position(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Position = value;
}
constexpr int32_t& UnityEngine::TextEditor::__get_m_CursorIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorIndex;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_m_CursorIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorIndex;
}
constexpr void UnityEngine::TextEditor::__set_m_CursorIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CursorIndex = value;
}
constexpr int32_t& UnityEngine::TextEditor::__get_m_SelectIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SelectIndex;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_m_SelectIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SelectIndex;
}
constexpr void UnityEngine::TextEditor::__set_m_SelectIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_SelectIndex = value;
}
constexpr bool& UnityEngine::TextEditor::__get_m_RevealCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RevealCursor;
}
constexpr bool const& UnityEngine::TextEditor::__get_m_RevealCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RevealCursor;
}
constexpr void UnityEngine::TextEditor::__set_m_RevealCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_RevealCursor = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__get_graphicalCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___graphicalCursorPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__get_graphicalCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___graphicalCursorPos;
}
constexpr void UnityEngine::TextEditor::__set_graphicalCursorPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___graphicalCursorPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__get_graphicalSelectCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___graphicalSelectCursorPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__get_graphicalSelectCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___graphicalSelectCursorPos;
}
constexpr void UnityEngine::TextEditor::__set_graphicalSelectCursorPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___graphicalSelectCursorPos = value;
}
constexpr bool& UnityEngine::TextEditor::__get_m_MouseDragSelectsWholeWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr bool const& UnityEngine::TextEditor::__get_m_MouseDragSelectsWholeWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr void UnityEngine::TextEditor::__set_m_MouseDragSelectsWholeWords(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MouseDragSelectsWholeWords = value;
}
constexpr int32_t& UnityEngine::TextEditor::__get_m_DblClickInitPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DblClickInitPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_m_DblClickInitPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DblClickInitPos;
}
constexpr void UnityEngine::TextEditor::__set_m_DblClickInitPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_DblClickInitPos = value;
}
constexpr ::UnityEngine::__TextEditor__DblClickSnapping& UnityEngine::TextEditor::__get_m_DblClickSnap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DblClickSnap;
}
constexpr ::UnityEngine::__TextEditor__DblClickSnapping const& UnityEngine::TextEditor::__get_m_DblClickSnap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DblClickSnap;
}
constexpr void UnityEngine::TextEditor::__set_m_DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_DblClickSnap = value;
}
constexpr bool& UnityEngine::TextEditor::__get_m_bJustSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_bJustSelected;
}
constexpr bool const& UnityEngine::TextEditor::__get_m_bJustSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_bJustSelected;
}
constexpr void UnityEngine::TextEditor::__set_m_bJustSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_bJustSelected = value;
}
constexpr int32_t& UnityEngine::TextEditor::__get_m_iAltCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_iAltCursorPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_m_iAltCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_iAltCursorPos;
}
constexpr void UnityEngine::TextEditor::__set_m_iAltCursorPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_iAltCursorPos = value;
}
constexpr ::StringW& UnityEngine::TextEditor::__get_oldText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldText;
}
constexpr ::StringW const& UnityEngine::TextEditor::__get_oldText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldText;
}
constexpr void UnityEngine::TextEditor::__set_oldText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oldText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextEditor::__get_oldPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_oldPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldPos;
}
constexpr void UnityEngine::TextEditor::__set_oldPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___oldPos = value;
}
constexpr int32_t& UnityEngine::TextEditor::__get_oldSelectPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldSelectPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__get_oldSelectPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oldSelectPos;
}
constexpr void UnityEngine::TextEditor::__set_oldSelectPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___oldSelectPos = value;
}
inline void UnityEngine::TextEditor::setStaticF_s_Keyactions(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>*, "s_Keyactions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>* UnityEngine::TextEditor::getStaticF_s_Keyactions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>*, "s_Keyactions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get>();
}
inline ::StringW UnityEngine::TextEditor::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_text",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_text", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::TextEditor::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_position",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_position(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::TextEditor::get_localPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_localPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditor::get_cursorIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_cursorIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_cursorIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextEditor::get_selectIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_selectIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "set_selectIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::TextEditor::ClearCursorPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClearCursorPos",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditor::get_altCursorPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_altCursorPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::TextEditor* UnityEngine::TextEditor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextEditor*>());
}
inline void UnityEngine::TextEditor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnFocus",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnLostFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnLostFocus",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::GrabGraphicalCursorPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GrabGraphicalCursorPos",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::HandleKeyEvent(::UnityEngine::Event* e, bool textIsReadOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "HandleKeyEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, textIsReadOnly);
}
inline bool UnityEngine::TextEditor::DeleteLineBack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteLineBack",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::DeleteWordBack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteWordBack",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::DeleteWordForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteWordForward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::Delete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Delete",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::CanPaste() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "CanPaste",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::Backspace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Backspace",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectNone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectNone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_hasSelection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextEditor::get_SelectedText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "get_SelectedText",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::DeleteSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DeleteSelection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::ReplaceSelection(::StringW replace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ReplaceSelection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, replace);
}
inline void UnityEngine::TextEditor::Insert(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void UnityEngine::TextEditor::MoveSelectionToAltCursor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveSelectionToAltCursor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveRight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLeft",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveUp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveDown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLineStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveLineEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveGraphicalLineStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveGraphicalLineEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveTextStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveTextStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveTextEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveTextEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditor::IndexOfEndOfLine(int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "IndexOfEndOfLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startIndex);
}
inline void UnityEngine::TextEditor::MoveParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveParagraphForward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveParagraphBackward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveCursorToPosition_Internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursorPosition, shift);
}
inline void UnityEngine::TextEditor::MoveAltCursorToPosition(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveAltCursorToPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursorPosition);
}
inline void UnityEngine::TextEditor::SelectToPosition(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursorPosition);
}
inline void UnityEngine::TextEditor::SelectLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectLeft",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectRight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectUp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectDown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectTextEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectTextEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectTextStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectTextStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MouseDragSelectsWholeWords(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MouseDragSelectsWholeWords", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void UnityEngine::TextEditor::DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping snapping) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DblClickSnap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__DblClickSnapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, snapping);
}
inline int32_t UnityEngine::TextEditor::GetGraphicalLineStart(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GetGraphicalLineStart", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextEditor::GetGraphicalLineEnd(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "GetGraphicalLineEnd", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextEditor::FindNextSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindNextSeperator", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos);
}
inline int32_t UnityEngine::TextEditor::FindPrevSeperator(int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindPrevSeperator", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startPos);
}
inline void UnityEngine::TextEditor::MoveWordRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveWordRight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveToStartOfNextWord",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MoveToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveToEndOfPreviousWord",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectToStartOfNextWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToStartOfNextWord",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectToEndOfPreviousWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectToEndOfPreviousWord",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::__TextEditor__CharacterType UnityEngine::TextEditor::ClassifyChar(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClassifyChar", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__TextEditor__CharacterType, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextEditor::FindStartOfNextWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindStartOfNextWord", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline int32_t UnityEngine::TextEditor::FindEndOfPreviousWord(int32_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindEndOfPreviousWord", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
inline void UnityEngine::TextEditor::MoveWordLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MoveWordLeft",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectWordRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectWordRight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectWordLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectWordLeft",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::ExpandSelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(),
                                                                             "ExpandSelectGraphicalLineStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::ExpandSelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ExpandSelectGraphicalLineEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectGraphicalLineStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectGraphicalLineStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectGraphicalLineEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectGraphicalLineEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectParagraphForward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectParagraphForward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectParagraphBackward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectParagraphBackward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectCurrentWord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectCurrentWord",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditor::FindEndOfClassification(int32_t p, ::UnityEngine::__TextEditor__Direction dir) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "FindEndOfClassification", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p, dir);
}
inline void UnityEngine::TextEditor::SelectCurrentParagraph() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SelectCurrentParagraph",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::UpdateScrollOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "UpdateScrollOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::PerformOperation(::UnityEngine::__TextEditor__TextEditOp operation, bool textIsReadOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "PerformOperation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__TextEditOp>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, operation, textIsReadOnly);
}
inline void UnityEngine::TextEditor::SaveBackup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "SaveBackup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::Cut() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Cut", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::Copy() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Copy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextEditor::ReplaceNewlinesWithSpaces(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ReplaceNewlinesWithSpaces", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::TextEditor::Paste() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "Paste", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::MapKey(::StringW key, ::UnityEngine::__TextEditor__TextEditOp action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "MapKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextEditor__TextEditOp>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, action);
}
inline void UnityEngine::TextEditor::InitKeyActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "InitKeyActions",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::DetectFocusChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "DetectFocusChange",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnDetectFocusChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnDetectFocusChange",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnCursorIndexChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnCursorIndexChange",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnSelectIndexChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "OnSelectIndexChange",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::ClampTextIndex(ByRef<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "ClampTextIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::TextEditor::EnsureValidCodePointIndex(ByRef<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "EnsureValidCodePointIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline bool UnityEngine::TextEditor::IsValidCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "IsValidCodePointIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextEditor::PreviousCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "PreviousCodePointIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextEditor::NextCodePointIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), "NextCodePointIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditor::TextEditor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
