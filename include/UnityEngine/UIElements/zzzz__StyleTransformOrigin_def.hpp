#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleTransformOrigin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTransformOrigin)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTransformOrigin);
// Type: UnityEngine.UIElements::StyleTransformOrigin
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleTransformOrigin
struct CORDL_TYPE StyleTransformOrigin {
public:
// Declarations
 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::TransformOrigin  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>*() ;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>*() ;

/// @brief Method Equals, addr 0x49f08e0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x49f0854, size 0x8c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleTransformOrigin  other) ;

/// @brief Method GetHashCode, addr 0x49f0970, size 0x24, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x49f0994, size 0x88, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x49f07a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor, addr 0x49f07b4, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::TransformOrigin  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method get_keyword, addr 0x49f07a0, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method get_value, addr 0x49f070c, size 0x7c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::TransformOrigin get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>* i___System__IEquatable_1___UnityEngine__UIElements__StyleTransformOrigin_() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__TransformOrigin_() ;

/// @brief Method op_Equality, addr 0x49f07cc, size 0x7c, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleTransformOrigin  lhs, ::UnityEngine::UIElements::StyleTransformOrigin  rhs) ;

/// @brief Method op_Implicit, addr 0x49f0848, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleTransformOrigin op_Implicit___UnityEngine__UIElements__StyleTransformOrigin(::UnityEngine::UIElements::StyleKeyword  keyword) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleTransformOrigin() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

/// @brief Field m_Value, offset: 0x0, size: 0x14, def value: None
 ::UnityEngine::UIElements::TransformOrigin  m_Value;

/// @brief Field m_Keyword, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTransformOrigin, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTransformOrigin, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTransformOrigin, m_Keyword) == 0x14, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTransformOrigin, "UnityEngine.UIElements", "StyleTransformOrigin");
