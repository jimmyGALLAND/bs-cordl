#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/HighlightState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__Offset_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HighlightState)
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
struct Offset;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct HighlightState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::HighlightState);
// Type: UnityEngine.TextCore.Text::HighlightState
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::HighlightState
struct CORDL_TYPE HighlightState {
public:
// Declarations
/// @brief Method Equals, addr 0x48b41e8, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x48b417c, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x48b4030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color32  color, ::UnityEngine::TextCore::Text::Offset  padding) ;

/// @brief Method op_Equality, addr 0x48b4040, size 0xf4, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::TextCore::Text::HighlightState  lhs, ::UnityEngine::TextCore::Text::HighlightState  rhs) ;

/// @brief Method op_Inequality, addr 0x48b4134, size 0x48, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::TextCore::Text::HighlightState  lhs, ::UnityEngine::TextCore::Text::HighlightState  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr HighlightState() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "::UnityEngine::TextCore::Text::Offset", modifiers: "", def_value: None }]
constexpr HighlightState(::UnityEngine::Color32  color, ::UnityEngine::TextCore::Text::Offset  padding) noexcept;

/// @brief Field color, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Color32  color;

/// @brief Field padding, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::TextCore::Text::Offset  padding;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::HighlightState, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::HighlightState, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::HighlightState, padding) == 0x4, "Offset mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::HighlightState, "UnityEngine.TextCore.Text", "HighlightState");
