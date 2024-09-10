#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/Offset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Offset)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct Offset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::Offset);
// Type: UnityEngine.TextCore.Text::Offset
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::Offset
struct CORDL_TYPE Offset {
public:
// Declarations
 __declspec(property(get=get_bottom)) float_t  bottom;

/// @brief Field k_ZeroOffset, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_k_ZeroOffset, put=setStaticF_k_ZeroOffset)) ::UnityEngine::TextCore::Text::Offset  k_ZeroOffset;

 __declspec(property(get=get_left)) float_t  left;

 __declspec(property(get=get_right)) float_t  right;

 __declspec(property(get=get_top)) float_t  top;

/// @brief Method Equals, addr 0x48b3f70, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x48b3f0c, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x48b3ebc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  left, float_t  right, float_t  top, float_t  bottom) ;

static inline ::UnityEngine::TextCore::Text::Offset getStaticF_k_ZeroOffset() ;

/// @brief Method get_bottom, addr 0x48b3e58, size 0x8, virtual false, abstract: false, final false
inline float_t get_bottom() ;

/// @brief Method get_left, addr 0x48b3e40, size 0x8, virtual false, abstract: false, final false
inline float_t get_left() ;

/// @brief Method get_right, addr 0x48b3e48, size 0x8, virtual false, abstract: false, final false
inline float_t get_right() ;

/// @brief Method get_top, addr 0x48b3e50, size 0x8, virtual false, abstract: false, final false
inline float_t get_top() ;

/// @brief Method get_zero, addr 0x48b3e60, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::Offset get_zero() ;

/// @brief Method op_Equality, addr 0x48b3ec8, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::TextCore::Text::Offset  lhs, ::UnityEngine::TextCore::Text::Offset  rhs) ;

/// @brief Method op_Multiply, addr 0x48b3ef8, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::Offset op_Multiply(::UnityEngine::TextCore::Text::Offset  a, float_t  b) ;

static inline void setStaticF_k_ZeroOffset(::UnityEngine::TextCore::Text::Offset  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Offset() ;

// Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr Offset(float_t  m_Left, float_t  m_Right, float_t  m_Top, float_t  m_Bottom) noexcept;

/// @brief Field m_Left, offset: 0x0, size: 0x4, def value: None
 float_t  m_Left;

/// @brief Field m_Right, offset: 0x4, size: 0x4, def value: None
 float_t  m_Right;

/// @brief Field m_Top, offset: 0x8, size: 0x4, def value: None
 float_t  m_Top;

/// @brief Field m_Bottom, offset: 0xc, size: 0x4, def value: None
 float_t  m_Bottom;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::Offset, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Offset, m_Left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Offset, m_Right) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Offset, m_Top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Offset, m_Bottom) == 0xc, "Offset mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::Offset, "UnityEngine.TextCore.Text", "Offset");
