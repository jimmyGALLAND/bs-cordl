#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditor)
namespace UnityEngine {
struct __TextEditor__Direction;
}
namespace UnityEngine {
struct __TextEditor__TextEditOp;
}
namespace UnityEngine {
class GUIStyle;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct __TextEditor__DblClickSnapping;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
struct __TextEditor__CharacterType;
}
// Forward declare root types
namespace UnityEngine {
struct __TextEditor__CharacterType;
}
namespace UnityEngine {
struct __TextEditor__DblClickSnapping;
}
namespace UnityEngine {
struct __TextEditor__Direction;
}
namespace UnityEngine {
struct __TextEditor__TextEditOp;
}
namespace UnityEngine {
class TextEditor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__TextEditor__CharacterType);
MARK_VAL_T(::UnityEngine::__TextEditor__DblClickSnapping);
MARK_VAL_T(::UnityEngine::__TextEditor__Direction);
MARK_VAL_T(::UnityEngine::__TextEditor__TextEditOp);
MARK_REF_PTR_T(::UnityEngine::TextEditor);
// Type: ::DblClickSnapping
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14612))
// CS Name: ::TextEditor::DblClickSnapping
struct CORDL_TYPE __TextEditor__DblClickSnapping {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____TextEditor__DblClickSnapping_Unwrapped
  enum struct ____TextEditor__DblClickSnapping_Unwrapped : uint8_t {
    __E_WORDS = static_cast<uint8_t>(0x0u),
    __E_PARAGRAPHS = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextEditor__DblClickSnapping_Unwrapped() const noexcept {
    return static_cast<____TextEditor__DblClickSnapping_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TextEditor__DblClickSnapping(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditor__DblClickSnapping();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field WORDS value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::__TextEditor__DblClickSnapping const WORDS;

  /// @brief Field PARAGRAPHS value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::__TextEditor__DblClickSnapping const PARAGRAPHS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextEditor__DblClickSnapping, 0x1>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::CharacterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14613))
// CS Name: ::TextEditor::CharacterType
struct CORDL_TYPE __TextEditor__CharacterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextEditor__CharacterType_Unwrapped
  enum struct ____TextEditor__CharacterType_Unwrapped : int32_t {
    __E_LetterLike = static_cast<int32_t>(0x0),
    __E_Symbol = static_cast<int32_t>(0x1),
    __E_Symbol2 = static_cast<int32_t>(0x2),
    __E_WhiteSpace = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextEditor__CharacterType_Unwrapped() const noexcept {
    return static_cast<____TextEditor__CharacterType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextEditor__CharacterType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditor__CharacterType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LetterLike value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TextEditor__CharacterType const LetterLike;

  /// @brief Field Symbol value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TextEditor__CharacterType const Symbol;

  /// @brief Field Symbol2 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__TextEditor__CharacterType const Symbol2;

  /// @brief Field WhiteSpace value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__TextEditor__CharacterType const WhiteSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextEditor__CharacterType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14614))
// CS Name: ::TextEditor::Direction
struct CORDL_TYPE __TextEditor__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextEditor__Direction_Unwrapped
  enum struct ____TextEditor__Direction_Unwrapped : int32_t {
    __E_Forward = static_cast<int32_t>(0x0),
    __E_Backward = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextEditor__Direction_Unwrapped() const noexcept {
    return static_cast<____TextEditor__Direction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextEditor__Direction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditor__Direction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Forward value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TextEditor__Direction const Forward;

  /// @brief Field Backward value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TextEditor__Direction const Backward;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextEditor__Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::TextEditOp
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14615))
// CS Name: ::TextEditor::TextEditOp
struct CORDL_TYPE __TextEditor__TextEditOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextEditor__TextEditOp_Unwrapped
  enum struct ____TextEditor__TextEditOp_Unwrapped : int32_t {
    __E_MoveLeft = static_cast<int32_t>(0x0),
    __E_MoveRight = static_cast<int32_t>(0x1),
    __E_MoveUp = static_cast<int32_t>(0x2),
    __E_MoveDown = static_cast<int32_t>(0x3),
    __E_MoveLineStart = static_cast<int32_t>(0x4),
    __E_MoveLineEnd = static_cast<int32_t>(0x5),
    __E_MoveTextStart = static_cast<int32_t>(0x6),
    __E_MoveTextEnd = static_cast<int32_t>(0x7),
    __E_MovePageUp = static_cast<int32_t>(0x8),
    __E_MovePageDown = static_cast<int32_t>(0x9),
    __E_MoveGraphicalLineStart = static_cast<int32_t>(0xa),
    __E_MoveGraphicalLineEnd = static_cast<int32_t>(0xb),
    __E_MoveWordLeft = static_cast<int32_t>(0xc),
    __E_MoveWordRight = static_cast<int32_t>(0xd),
    __E_MoveParagraphForward = static_cast<int32_t>(0xe),
    __E_MoveParagraphBackward = static_cast<int32_t>(0xf),
    __E_MoveToStartOfNextWord = static_cast<int32_t>(0x10),
    __E_MoveToEndOfPreviousWord = static_cast<int32_t>(0x11),
    __E_SelectLeft = static_cast<int32_t>(0x12),
    __E_SelectRight = static_cast<int32_t>(0x13),
    __E_SelectUp = static_cast<int32_t>(0x14),
    __E_SelectDown = static_cast<int32_t>(0x15),
    __E_SelectTextStart = static_cast<int32_t>(0x16),
    __E_SelectTextEnd = static_cast<int32_t>(0x17),
    __E_SelectPageUp = static_cast<int32_t>(0x18),
    __E_SelectPageDown = static_cast<int32_t>(0x19),
    __E_ExpandSelectGraphicalLineStart = static_cast<int32_t>(0x1a),
    __E_ExpandSelectGraphicalLineEnd = static_cast<int32_t>(0x1b),
    __E_SelectGraphicalLineStart = static_cast<int32_t>(0x1c),
    __E_SelectGraphicalLineEnd = static_cast<int32_t>(0x1d),
    __E_SelectWordLeft = static_cast<int32_t>(0x1e),
    __E_SelectWordRight = static_cast<int32_t>(0x1f),
    __E_SelectToEndOfPreviousWord = static_cast<int32_t>(0x20),
    __E_SelectToStartOfNextWord = static_cast<int32_t>(0x21),
    __E_SelectParagraphBackward = static_cast<int32_t>(0x22),
    __E_SelectParagraphForward = static_cast<int32_t>(0x23),
    __E_Delete = static_cast<int32_t>(0x24),
    __E_Backspace = static_cast<int32_t>(0x25),
    __E_DeleteWordBack = static_cast<int32_t>(0x26),
    __E_DeleteWordForward = static_cast<int32_t>(0x27),
    __E_DeleteLineBack = static_cast<int32_t>(0x28),
    __E_Cut = static_cast<int32_t>(0x29),
    __E_Copy = static_cast<int32_t>(0x2a),
    __E_Paste = static_cast<int32_t>(0x2b),
    __E_SelectAll = static_cast<int32_t>(0x2c),
    __E_SelectNone = static_cast<int32_t>(0x2d),
    __E_ScrollStart = static_cast<int32_t>(0x2e),
    __E_ScrollEnd = static_cast<int32_t>(0x2f),
    __E_ScrollPageUp = static_cast<int32_t>(0x30),
    __E_ScrollPageDown = static_cast<int32_t>(0x31),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextEditor__TextEditOp_Unwrapped() const noexcept {
    return static_cast<____TextEditor__TextEditOp_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextEditor__TextEditOp(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextEditor__TextEditOp();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MoveLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveLeft;

  /// @brief Field MoveRight value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveRight;

  /// @brief Field MoveUp value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveUp;

  /// @brief Field MoveDown value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveDown;

  /// @brief Field MoveLineStart value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveLineStart;

  /// @brief Field MoveLineEnd value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveLineEnd;

  /// @brief Field MoveTextStart value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveTextStart;

  /// @brief Field MoveTextEnd value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveTextEnd;

  /// @brief Field MovePageUp value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__TextEditor__TextEditOp const MovePageUp;

  /// @brief Field MovePageDown value: static_cast<int32_t>(0x9)
  static ::UnityEngine::__TextEditor__TextEditOp const MovePageDown;

  /// @brief Field MoveGraphicalLineStart value: static_cast<int32_t>(0xa)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveGraphicalLineStart;

  /// @brief Field MoveGraphicalLineEnd value: static_cast<int32_t>(0xb)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveGraphicalLineEnd;

  /// @brief Field MoveWordLeft value: static_cast<int32_t>(0xc)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveWordLeft;

  /// @brief Field MoveWordRight value: static_cast<int32_t>(0xd)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveWordRight;

  /// @brief Field MoveParagraphForward value: static_cast<int32_t>(0xe)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveParagraphForward;

  /// @brief Field MoveParagraphBackward value: static_cast<int32_t>(0xf)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveParagraphBackward;

  /// @brief Field MoveToStartOfNextWord value: static_cast<int32_t>(0x10)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveToStartOfNextWord;

  /// @brief Field MoveToEndOfPreviousWord value: static_cast<int32_t>(0x11)
  static ::UnityEngine::__TextEditor__TextEditOp const MoveToEndOfPreviousWord;

  /// @brief Field SelectLeft value: static_cast<int32_t>(0x12)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectLeft;

  /// @brief Field SelectRight value: static_cast<int32_t>(0x13)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectRight;

  /// @brief Field SelectUp value: static_cast<int32_t>(0x14)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectUp;

  /// @brief Field SelectDown value: static_cast<int32_t>(0x15)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectDown;

  /// @brief Field SelectTextStart value: static_cast<int32_t>(0x16)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectTextStart;

  /// @brief Field SelectTextEnd value: static_cast<int32_t>(0x17)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectTextEnd;

  /// @brief Field SelectPageUp value: static_cast<int32_t>(0x18)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectPageUp;

  /// @brief Field SelectPageDown value: static_cast<int32_t>(0x19)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectPageDown;

  /// @brief Field ExpandSelectGraphicalLineStart value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::__TextEditor__TextEditOp const ExpandSelectGraphicalLineStart;

  /// @brief Field ExpandSelectGraphicalLineEnd value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::__TextEditor__TextEditOp const ExpandSelectGraphicalLineEnd;

  /// @brief Field SelectGraphicalLineStart value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectGraphicalLineStart;

  /// @brief Field SelectGraphicalLineEnd value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectGraphicalLineEnd;

  /// @brief Field SelectWordLeft value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectWordLeft;

  /// @brief Field SelectWordRight value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectWordRight;

  /// @brief Field SelectToEndOfPreviousWord value: static_cast<int32_t>(0x20)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectToEndOfPreviousWord;

  /// @brief Field SelectToStartOfNextWord value: static_cast<int32_t>(0x21)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectToStartOfNextWord;

  /// @brief Field SelectParagraphBackward value: static_cast<int32_t>(0x22)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectParagraphBackward;

  /// @brief Field SelectParagraphForward value: static_cast<int32_t>(0x23)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectParagraphForward;

  /// @brief Field Delete value: static_cast<int32_t>(0x24)
  static ::UnityEngine::__TextEditor__TextEditOp const Delete;

  /// @brief Field Backspace value: static_cast<int32_t>(0x25)
  static ::UnityEngine::__TextEditor__TextEditOp const Backspace;

  /// @brief Field DeleteWordBack value: static_cast<int32_t>(0x26)
  static ::UnityEngine::__TextEditor__TextEditOp const DeleteWordBack;

  /// @brief Field DeleteWordForward value: static_cast<int32_t>(0x27)
  static ::UnityEngine::__TextEditor__TextEditOp const DeleteWordForward;

  /// @brief Field DeleteLineBack value: static_cast<int32_t>(0x28)
  static ::UnityEngine::__TextEditor__TextEditOp const DeleteLineBack;

  /// @brief Field Cut value: static_cast<int32_t>(0x29)
  static ::UnityEngine::__TextEditor__TextEditOp const Cut;

  /// @brief Field Copy value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::__TextEditor__TextEditOp const Copy;

  /// @brief Field Paste value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::__TextEditor__TextEditOp const Paste;

  /// @brief Field SelectAll value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectAll;

  /// @brief Field SelectNone value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::__TextEditor__TextEditOp const SelectNone;

  /// @brief Field ScrollStart value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::__TextEditor__TextEditOp const ScrollStart;

  /// @brief Field ScrollEnd value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::__TextEditor__TextEditOp const ScrollEnd;

  /// @brief Field ScrollPageUp value: static_cast<int32_t>(0x30)
  static ::UnityEngine::__TextEditor__TextEditOp const ScrollPageUp;

  /// @brief Field ScrollPageDown value: static_cast<int32_t>(0x31)
  static ::UnityEngine::__TextEditor__TextEditOp const ScrollPageDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextEditor__TextEditOp, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TextEditor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(14612)),
// TypeDefinitionIndex(TypeDefinitionIndex(10165))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14616)) CS Name: ::UnityEngine::TextEditor*
class CORDL_TYPE TextEditor : public ::System::Object {
public:
  // Declarations
  using TextEditOp = ::UnityEngine::__TextEditor__TextEditOp;

  using Direction = ::UnityEngine::__TextEditor__Direction;

  using CharacterType = ::UnityEngine::__TextEditor__CharacterType;

  using DblClickSnapping = ::UnityEngine::__TextEditor__DblClickSnapping;

  /// @brief Field keyboardOnScreen, offset 0x10, size 0x8
  __declspec(property(get = __get_keyboardOnScreen, put = __set_keyboardOnScreen))::UnityEngine::TouchScreenKeyboard* keyboardOnScreen;

  /// @brief Field controlID, offset 0x18, size 0x4
  __declspec(property(get = __get_controlID, put = __set_controlID)) int32_t controlID;

  /// @brief Field style, offset 0x20, size 0x8
  __declspec(property(get = __get_style, put = __set_style))::UnityEngine::GUIStyle* style;

  /// @brief Field multiline, offset 0x28, size 0x1
  __declspec(property(get = __get_multiline, put = __set_multiline)) bool multiline;

  /// @brief Field hasHorizontalCursorPos, offset 0x29, size 0x1
  __declspec(property(get = __get_hasHorizontalCursorPos, put = __set_hasHorizontalCursorPos)) bool hasHorizontalCursorPos;

  /// @brief Field isPasswordField, offset 0x2a, size 0x1
  __declspec(property(get = __get_isPasswordField, put = __set_isPasswordField)) bool isPasswordField;

  /// @brief Field m_HasFocus, offset 0x2b, size 0x1
  __declspec(property(get = __get_m_HasFocus, put = __set_m_HasFocus)) bool m_HasFocus;

  /// @brief Field scrollOffset, offset 0x2c, size 0x8
  __declspec(property(get = __get_scrollOffset, put = __set_scrollOffset))::UnityEngine::Vector2 scrollOffset;

  /// @brief Field m_Content, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Content, put = __set_m_Content))::UnityEngine::GUIContent* m_Content;

  /// @brief Field m_Position, offset 0x40, size 0x10
  __declspec(property(get = __get_m_Position, put = __set_m_Position))::UnityEngine::Rect m_Position;

  /// @brief Field m_CursorIndex, offset 0x50, size 0x4
  __declspec(property(get = __get_m_CursorIndex, put = __set_m_CursorIndex)) int32_t m_CursorIndex;

  /// @brief Field m_SelectIndex, offset 0x54, size 0x4
  __declspec(property(get = __get_m_SelectIndex, put = __set_m_SelectIndex)) int32_t m_SelectIndex;

  /// @brief Field m_RevealCursor, offset 0x58, size 0x1
  __declspec(property(get = __get_m_RevealCursor, put = __set_m_RevealCursor)) bool m_RevealCursor;

  /// @brief Field graphicalCursorPos, offset 0x5c, size 0x8
  __declspec(property(get = __get_graphicalCursorPos, put = __set_graphicalCursorPos))::UnityEngine::Vector2 graphicalCursorPos;

  /// @brief Field graphicalSelectCursorPos, offset 0x64, size 0x8
  __declspec(property(get = __get_graphicalSelectCursorPos, put = __set_graphicalSelectCursorPos))::UnityEngine::Vector2 graphicalSelectCursorPos;

  /// @brief Field m_MouseDragSelectsWholeWords, offset 0x6c, size 0x1
  __declspec(property(get = __get_m_MouseDragSelectsWholeWords, put = __set_m_MouseDragSelectsWholeWords)) bool m_MouseDragSelectsWholeWords;

  /// @brief Field m_DblClickInitPos, offset 0x70, size 0x4
  __declspec(property(get = __get_m_DblClickInitPos, put = __set_m_DblClickInitPos)) int32_t m_DblClickInitPos;

  /// @brief Field m_DblClickSnap, offset 0x74, size 0x1
  __declspec(property(get = __get_m_DblClickSnap, put = __set_m_DblClickSnap))::UnityEngine::__TextEditor__DblClickSnapping m_DblClickSnap;

  /// @brief Field m_bJustSelected, offset 0x75, size 0x1
  __declspec(property(get = __get_m_bJustSelected, put = __set_m_bJustSelected)) bool m_bJustSelected;

  /// @brief Field m_iAltCursorPos, offset 0x78, size 0x4
  __declspec(property(get = __get_m_iAltCursorPos, put = __set_m_iAltCursorPos)) int32_t m_iAltCursorPos;

  /// @brief Field oldText, offset 0x80, size 0x8
  __declspec(property(get = __get_oldText, put = __set_oldText))::StringW oldText;

  /// @brief Field oldPos, offset 0x88, size 0x4
  __declspec(property(get = __get_oldPos, put = __set_oldPos)) int32_t oldPos;

  /// @brief Field oldSelectPos, offset 0x8c, size 0x4
  __declspec(property(get = __get_oldSelectPos, put = __set_oldSelectPos)) int32_t oldSelectPos;

  /// @brief Field s_Keyactions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Keyactions,
                             put = setStaticF_s_Keyactions))::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>* s_Keyactions;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Rect position;

  __declspec(property(get = get_localPosition))::UnityEngine::Rect localPosition;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_altCursorPosition)) int32_t altCursorPosition;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_SelectedText))::StringW SelectedText;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __get_keyboardOnScreen();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& __get_keyboardOnScreen() const;

  constexpr void __set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value);

  constexpr int32_t& __get_controlID();

  constexpr int32_t const& __get_controlID() const;

  constexpr void __set_controlID(int32_t value);

  constexpr ::UnityEngine::GUIStyle*& __get_style();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __get_style() const;

  constexpr void __set_style(::UnityEngine::GUIStyle* value);

  constexpr bool& __get_multiline();

  constexpr bool const& __get_multiline() const;

  constexpr void __set_multiline(bool value);

  constexpr bool& __get_hasHorizontalCursorPos();

  constexpr bool const& __get_hasHorizontalCursorPos() const;

  constexpr void __set_hasHorizontalCursorPos(bool value);

  constexpr bool& __get_isPasswordField();

  constexpr bool const& __get_isPasswordField() const;

  constexpr void __set_isPasswordField(bool value);

  constexpr bool& __get_m_HasFocus();

  constexpr bool const& __get_m_HasFocus() const;

  constexpr void __set_m_HasFocus(bool value);

  constexpr ::UnityEngine::Vector2& __get_scrollOffset();

  constexpr ::UnityEngine::Vector2 const& __get_scrollOffset() const;

  constexpr void __set_scrollOffset(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::GUIContent*& __get_m_Content();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIContent*> const& __get_m_Content() const;

  constexpr void __set_m_Content(::UnityEngine::GUIContent* value);

  constexpr ::UnityEngine::Rect& __get_m_Position();

  constexpr ::UnityEngine::Rect const& __get_m_Position() const;

  constexpr void __set_m_Position(::UnityEngine::Rect value);

  constexpr int32_t& __get_m_CursorIndex();

  constexpr int32_t const& __get_m_CursorIndex() const;

  constexpr void __set_m_CursorIndex(int32_t value);

  constexpr int32_t& __get_m_SelectIndex();

  constexpr int32_t const& __get_m_SelectIndex() const;

  constexpr void __set_m_SelectIndex(int32_t value);

  constexpr bool& __get_m_RevealCursor();

  constexpr bool const& __get_m_RevealCursor() const;

  constexpr void __set_m_RevealCursor(bool value);

  constexpr ::UnityEngine::Vector2& __get_graphicalCursorPos();

  constexpr ::UnityEngine::Vector2 const& __get_graphicalCursorPos() const;

  constexpr void __set_graphicalCursorPos(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_graphicalSelectCursorPos();

  constexpr ::UnityEngine::Vector2 const& __get_graphicalSelectCursorPos() const;

  constexpr void __set_graphicalSelectCursorPos(::UnityEngine::Vector2 value);

  constexpr bool& __get_m_MouseDragSelectsWholeWords();

  constexpr bool const& __get_m_MouseDragSelectsWholeWords() const;

  constexpr void __set_m_MouseDragSelectsWholeWords(bool value);

  constexpr int32_t& __get_m_DblClickInitPos();

  constexpr int32_t const& __get_m_DblClickInitPos() const;

  constexpr void __set_m_DblClickInitPos(int32_t value);

  constexpr ::UnityEngine::__TextEditor__DblClickSnapping& __get_m_DblClickSnap();

  constexpr ::UnityEngine::__TextEditor__DblClickSnapping const& __get_m_DblClickSnap() const;

  constexpr void __set_m_DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping value);

  constexpr bool& __get_m_bJustSelected();

  constexpr bool const& __get_m_bJustSelected() const;

  constexpr void __set_m_bJustSelected(bool value);

  constexpr int32_t& __get_m_iAltCursorPos();

  constexpr int32_t const& __get_m_iAltCursorPos() const;

  constexpr void __set_m_iAltCursorPos(int32_t value);

  constexpr ::StringW& __get_oldText();

  constexpr ::StringW const& __get_oldText() const;

  constexpr void __set_oldText(::StringW value);

  constexpr int32_t& __get_oldPos();

  constexpr int32_t const& __get_oldPos() const;

  constexpr void __set_oldPos(int32_t value);

  constexpr int32_t& __get_oldSelectPos();

  constexpr int32_t const& __get_oldSelectPos() const;

  constexpr void __set_oldSelectPos(int32_t value);

  static inline void setStaticF_s_Keyactions(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::__TextEditor__TextEditOp>* getStaticF_s_Keyactions();

  /// @brief Method get_text addr 0x2d049e4 size 0x1c virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x2d04a00 size 0x78 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method get_position addr 0x2d04ab8 size 0xc virtual false final false
  inline ::UnityEngine::Rect get_position();

  /// @brief Method set_position addr 0x2d04ac4 size 0xb8 virtual false final false
  inline void set_position(::UnityEngine::Rect value);

  /// @brief Method get_localPosition addr 0x2d04f20 size 0xc virtual true final false
  inline ::UnityEngine::Rect get_localPosition();

  /// @brief Method get_cursorIndex addr 0x2d04f2c size 0x8 virtual false final false
  inline int32_t get_cursorIndex();

  /// @brief Method set_cursorIndex addr 0x2d04f34 size 0x58 virtual false final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method get_selectIndex addr 0x2d04f8c size 0x8 virtual false final false
  inline int32_t get_selectIndex();

  /// @brief Method set_selectIndex addr 0x2d04f94 size 0x50 virtual false final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method ClearCursorPos addr 0x2d04fe4 size 0x10 virtual false final false
  inline void ClearCursorPos();

  /// @brief Method get_altCursorPosition addr 0x2d04ff4 size 0x8 virtual false final false
  inline int32_t get_altCursorPosition();

  static inline ::UnityEngine::TextEditor* New_ctor();

  /// @brief Method .ctor addr 0x2d04ffc size 0xf8 virtual false final false
  inline void _ctor();

  /// @brief Method OnFocus addr 0x2d050f4 size 0x44 virtual false final false
  inline void OnFocus();

  /// @brief Method OnLostFocus addr 0x2d0517c size 0x54 virtual false final false
  inline void OnLostFocus();

  /// @brief Method GrabGraphicalCursorPos addr 0x2d051d0 size 0x84 virtual false final false
  inline void GrabGraphicalCursorPos();

  /// @brief Method HandleKeyEvent addr 0x2d05254 size 0x1b4 virtual false final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e, bool textIsReadOnly);

  /// @brief Method DeleteLineBack addr 0x2d0623c size 0xb8 virtual false final false
  inline bool DeleteLineBack();

  /// @brief Method DeleteWordBack addr 0x2d06410 size 0x90 virtual false final false
  inline bool DeleteWordBack();

  /// @brief Method DeleteWordForward addr 0x2d06568 size 0x7c virtual false final false
  inline bool DeleteWordForward();

  /// @brief Method Delete addr 0x2d06794 size 0x8c virtual false final false
  inline bool Delete();

  /// @brief Method CanPaste addr 0x2d068e4 size 0x44 virtual false final false
  inline bool CanPaste();

  /// @brief Method Backspace addr 0x2d06928 size 0xa0 virtual false final false
  inline bool Backspace();

  /// @brief Method SelectAll addr 0x2d05138 size 0x44 virtual false final false
  inline void SelectAll();

  /// @brief Method SelectNone addr 0x2d06a88 size 0x24 virtual false final false
  inline void SelectNone();

  /// @brief Method get_hasSelection addr 0x2d062f4 size 0x10 virtual false final false
  inline bool get_hasSelection();

  /// @brief Method get_SelectedText addr 0x2d06aac size 0x8c virtual false final false
  inline ::StringW get_SelectedText();

  /// @brief Method DeleteSelection addr 0x2d06304 size 0x10c virtual false final false
  inline bool DeleteSelection();

  /// @brief Method ReplaceSelection addr 0x2d06b38 size 0x7c virtual false final false
  inline void ReplaceSelection(::StringW replace);

  /// @brief Method Insert addr 0x2d06bb4 size 0x34 virtual false final false
  inline void Insert(char16_t c);

  /// @brief Method MoveSelectionToAltCursor addr 0x2d06be8 size 0xbc virtual false final false
  inline void MoveSelectionToAltCursor();

  /// @brief Method MoveRight addr 0x2d06ca4 size 0x6c virtual false final false
  inline void MoveRight();

  /// @brief Method MoveLeft addr 0x2d06d1c size 0x58 virtual false final false
  inline void MoveLeft();

  /// @brief Method MoveUp addr 0x2d06d74 size 0xb0 virtual false final false
  inline void MoveUp();

  /// @brief Method MoveDown addr 0x2d06e24 size 0xe0 virtual false final false
  inline void MoveDown();

  /// @brief Method MoveLineStart addr 0x2d06f04 size 0x74 virtual false final false
  inline void MoveLineStart();

  /// @brief Method MoveLineEnd addr 0x2d06f78 size 0x90 virtual false final false
  inline void MoveLineEnd();

  /// @brief Method MoveGraphicalLineStart addr 0x2d07008 size 0x48 virtual false final false
  inline void MoveGraphicalLineStart();

  /// @brief Method MoveGraphicalLineEnd addr 0x2d07100 size 0x48 virtual false final false
  inline void MoveGraphicalLineEnd();

  /// @brief Method MoveTextStart addr 0x2d0720c size 0x20 virtual false final false
  inline void MoveTextStart();

  /// @brief Method MoveTextEnd addr 0x2d0722c size 0x40 virtual false final false
  inline void MoveTextEnd();

  /// @brief Method IndexOfEndOfLine addr 0x2d0726c size 0x50 virtual false final false
  inline int32_t IndexOfEndOfLine(int32_t startIndex);

  /// @brief Method MoveParagraphForward addr 0x2d072bc size 0x80 virtual false final false
  inline void MoveParagraphForward();

  /// @brief Method MoveParagraphBackward addr 0x2d0733c size 0x78 virtual false final false
  inline void MoveParagraphBackward();

  /// @brief Method MoveCursorToPosition_Internal addr 0x2d073b4 size 0x88 virtual false final false
  inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift);

  /// @brief Method MoveAltCursorToPosition addr 0x2d0743c size 0x88 virtual false final false
  inline void MoveAltCursorToPosition(::UnityEngine::Vector2 cursorPosition);

  /// @brief Method SelectToPosition addr 0x2d074c4 size 0x1f8 virtual false final false
  inline void SelectToPosition(::UnityEngine::Vector2 cursorPosition);

  /// @brief Method SelectLeft addr 0x2d077d0 size 0x58 virtual false final false
  inline void SelectLeft();

  /// @brief Method SelectRight addr 0x2d07828 size 0x58 virtual false final false
  inline void SelectRight();

  /// @brief Method SelectUp addr 0x2d07880 size 0x64 virtual false final false
  inline void SelectUp();

  /// @brief Method SelectDown addr 0x2d078e4 size 0x80 virtual false final false
  inline void SelectDown();

  /// @brief Method SelectTextEnd addr 0x2d07964 size 0x24 virtual false final false
  inline void SelectTextEnd();

  /// @brief Method SelectTextStart addr 0x2d07988 size 0x8 virtual false final false
  inline void SelectTextStart();

  /// @brief Method MouseDragSelectsWholeWords addr 0x2d07990 size 0x14 virtual false final false
  inline void MouseDragSelectsWholeWords(bool on);

  /// @brief Method DblClickSnap addr 0x2d079a4 size 0x8 virtual false final false
  inline void DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping snapping);

  /// @brief Method GetGraphicalLineStart addr 0x2d07050 size 0xb0 virtual false final false
  inline int32_t GetGraphicalLineStart(int32_t p);

  /// @brief Method GetGraphicalLineEnd addr 0x2d07148 size 0xc4 virtual false final false
  inline int32_t GetGraphicalLineEnd(int32_t p);

  /// @brief Method FindNextSeperator addr 0x2d079ac size 0x98 virtual false final false
  inline int32_t FindNextSeperator(int32_t startPos);

  /// @brief Method FindPrevSeperator addr 0x2d07b2c size 0x9c virtual false final false
  inline int32_t FindPrevSeperator(int32_t startPos);

  /// @brief Method MoveWordRight addr 0x2d07bc8 size 0x64 virtual false final false
  inline void MoveWordRight();

  /// @brief Method MoveToStartOfNextWord addr 0x2d07c2c size 0x60 virtual false final false
  inline void MoveToStartOfNextWord();

  /// @brief Method MoveToEndOfPreviousWord addr 0x2d07c8c size 0x60 virtual false final false
  inline void MoveToEndOfPreviousWord();

  /// @brief Method SelectToStartOfNextWord addr 0x2d07cec size 0x2c virtual false final false
  inline void SelectToStartOfNextWord();

  /// @brief Method SelectToEndOfPreviousWord addr 0x2d07d18 size 0x2c virtual false final false
  inline void SelectToEndOfPreviousWord();

  /// @brief Method ClassifyChar addr 0x2d07a44 size 0xe8 virtual false final false
  inline ::UnityEngine::__TextEditor__CharacterType ClassifyChar(int32_t index);

  /// @brief Method FindStartOfNextWord addr 0x2d065e4 size 0x1b0 virtual false final false
  inline int32_t FindStartOfNextWord(int32_t p);

  /// @brief Method FindEndOfPreviousWord addr 0x2d064a0 size 0xc8 virtual false final false
  inline int32_t FindEndOfPreviousWord(int32_t p);

  /// @brief Method MoveWordLeft addr 0x2d07d44 size 0x48 virtual false final false
  inline void MoveWordLeft();

  /// @brief Method SelectWordRight addr 0x2d07d8c size 0x68 virtual false final false
  inline void SelectWordRight();

  /// @brief Method SelectWordLeft addr 0x2d07df4 size 0x68 virtual false final false
  inline void SelectWordLeft();

  /// @brief Method ExpandSelectGraphicalLineStart addr 0x2d07e5c size 0x64 virtual false final false
  inline void ExpandSelectGraphicalLineStart();

  /// @brief Method ExpandSelectGraphicalLineEnd addr 0x2d07ec0 size 0x64 virtual false final false
  inline void ExpandSelectGraphicalLineEnd();

  /// @brief Method SelectGraphicalLineStart addr 0x2d07f24 size 0x2c virtual false final false
  inline void SelectGraphicalLineStart();

  /// @brief Method SelectGraphicalLineEnd addr 0x2d07f50 size 0x2c virtual false final false
  inline void SelectGraphicalLineEnd();

  /// @brief Method SelectParagraphForward addr 0x2d07f7c size 0x88 virtual false final false
  inline void SelectParagraphForward();

  /// @brief Method SelectParagraphBackward addr 0x2d08004 size 0xa4 virtual false final false
  inline void SelectParagraphBackward();

  /// @brief Method SelectCurrentWord addr 0x2d080a8 size 0x6c virtual false final false
  inline void SelectCurrentWord();

  /// @brief Method FindEndOfClassification addr 0x2d076bc size 0x114 virtual false final false
  inline int32_t FindEndOfClassification(int32_t p, ::UnityEngine::__TextEditor__Direction dir);

  /// @brief Method SelectCurrentParagraph addr 0x2d08114 size 0x8c virtual false final false
  inline void SelectCurrentParagraph();

  /// @brief Method UpdateScrollOffset addr 0x2d04b7c size 0x3a4 virtual false final false
  inline void UpdateScrollOffset();

  /// @brief Method PerformOperation addr 0x2d05e64 size 0x3d8 virtual false final false
  inline bool PerformOperation(::UnityEngine::__TextEditor__TextEditOp operation, bool textIsReadOnly);

  /// @brief Method SaveBackup addr 0x2d08300 size 0x24 virtual false final false
  inline void SaveBackup();

  /// @brief Method Cut addr 0x2d081a0 size 0x2c virtual false final false
  inline bool Cut();

  /// @brief Method Copy addr 0x2d081cc size 0x90 virtual false final false
  inline void Copy();

  /// @brief Method ReplaceNewlinesWithSpaces addr 0x2d08324 size 0x94 virtual false final false
  static inline ::StringW ReplaceNewlinesWithSpaces(::StringW value);

  /// @brief Method Paste addr 0x2d0825c size 0xa4 virtual false final false
  inline bool Paste();

  /// @brief Method MapKey addr 0x2d083b8 size 0x8c virtual false final false
  static inline void MapKey(::StringW key, ::UnityEngine::__TextEditor__TextEditOp action);

  /// @brief Method InitKeyActions addr 0x2d05408 size 0xa5c virtual false final false
  inline void InitKeyActions();

  /// @brief Method DetectFocusChange addr 0x2d06d10 size 0xc virtual false final false
  inline void DetectFocusChange();

  /// @brief Method OnDetectFocusChange addr 0x2d08444 size 0x9c virtual true final false
  inline void OnDetectFocusChange();

  /// @brief Method OnCursorIndexChange addr 0x2d084e0 size 0x4 virtual true final false
  inline void OnCursorIndexChange();

  /// @brief Method OnSelectIndexChange addr 0x2d084e4 size 0x4 virtual true final false
  inline void OnSelectIndexChange();

  /// @brief Method ClampTextIndex addr 0x2d084e8 size 0x3c virtual false final false
  inline void ClampTextIndex(ByRef<int32_t> index);

  /// @brief Method EnsureValidCodePointIndex addr 0x2d04a78 size 0x40 virtual false final false
  inline void EnsureValidCodePointIndex(ByRef<int32_t> index);

  /// @brief Method IsValidCodePointIndex addr 0x2d08524 size 0xb8 virtual false final false
  inline bool IsValidCodePointIndex(int32_t index);

  /// @brief Method PreviousCodePointIndex addr 0x2d069c8 size 0xc0 virtual false final false
  inline int32_t PreviousCodePointIndex(int32_t index);

  /// @brief Method NextCodePointIndex addr 0x2d06820 size 0xc4 virtual false final false
  inline int32_t NextCodePointIndex(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditor(TextEditor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditor(TextEditor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditor();

public:
  /// @brief Field keyboardOnScreen, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___keyboardOnScreen;

  /// @brief Field controlID, offset: 0x18, size: 0x4, def value: None
  int32_t ___controlID;

  /// @brief Field style, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___style;

  /// @brief Field multiline, offset: 0x28, size: 0x1, def value: None
  bool ___multiline;

  /// @brief Field hasHorizontalCursorPos, offset: 0x29, size: 0x1, def value: None
  bool ___hasHorizontalCursorPos;

  /// @brief Field isPasswordField, offset: 0x2a, size: 0x1, def value: None
  bool ___isPasswordField;

  /// @brief Field m_HasFocus, offset: 0x2b, size: 0x1, def value: None
  bool ___m_HasFocus;

  /// @brief Field scrollOffset, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scrollOffset;

  /// @brief Field m_Content, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GUIContent* ___m_Content;

  /// @brief Field m_Position, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_Position;

  /// @brief Field m_CursorIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_CursorIndex;

  /// @brief Field m_SelectIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_SelectIndex;

  /// @brief Field m_RevealCursor, offset: 0x58, size: 0x1, def value: None
  bool ___m_RevealCursor;

  /// @brief Field graphicalCursorPos, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___graphicalCursorPos;

  /// @brief Field graphicalSelectCursorPos, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___graphicalSelectCursorPos;

  /// @brief Field m_MouseDragSelectsWholeWords, offset: 0x6c, size: 0x1, def value: None
  bool ___m_MouseDragSelectsWholeWords;

  /// @brief Field m_DblClickInitPos, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_DblClickInitPos;

  /// @brief Field m_DblClickSnap, offset: 0x74, size: 0x1, def value: None
  ::UnityEngine::__TextEditor__DblClickSnapping ___m_DblClickSnap;

  /// @brief Field m_bJustSelected, offset: 0x75, size: 0x1, def value: None
  bool ___m_bJustSelected;

  /// @brief Field m_iAltCursorPos, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_iAltCursorPos;

  /// @brief Field oldText, offset: 0x80, size: 0x8, def value: None
  ::StringW ___oldText;

  /// @brief Field oldPos, offset: 0x88, size: 0x4, def value: None
  int32_t ___oldPos;

  /// @brief Field oldSelectPos, offset: 0x8c, size: 0x4, def value: None
  int32_t ___oldSelectPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditor, 0x90>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextEditor__CharacterType, "UnityEngine", "TextEditor/CharacterType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextEditor__DblClickSnapping, "UnityEngine", "TextEditor/DblClickSnapping");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextEditor__Direction, "UnityEngine", "TextEditor/Direction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextEditor__TextEditOp, "UnityEngine", "TextEditor/TextEditOp");
NEED_NO_BOX(::UnityEngine::TextEditor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditor*, "UnityEngine", "TextEditor");
