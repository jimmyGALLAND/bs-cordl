#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleInt)
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
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleInt);
// Type: UnityEngine.UIElements::StyleInt
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleInt
struct CORDL_TYPE StyleInt {
public:
// Declarations
 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

 __declspec(property(get=get_value)) int32_t  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>*() ;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<int32_t>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<int32_t>*() ;

/// @brief Method Equals, addr 0x49ef6b8, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x49ef698, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleInt  other) ;

/// @brief Method GetHashCode, addr 0x49ef73c, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x49ef750, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x49ef670, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor, addr 0x49edc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method get_keyword, addr 0x49ef668, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method get_value, addr 0x49ef650, size 0x18, virtual true, abstract: false, final true
inline int32_t get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>* i___System__IEquatable_1___UnityEngine__UIElements__StyleInt_() ;

/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<int32_t>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<int32_t>* i___UnityEngine__UIElements__IStyleValue_1_int32_t_() ;

/// @brief Method op_Equality, addr 0x49ef678, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleInt  lhs, ::UnityEngine::UIElements::StyleInt  rhs) ;

/// @brief Method op_Implicit, addr 0x49edc90, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleInt op_Implicit___UnityEngine__UIElements__StyleInt(::UnityEngine::UIElements::StyleKeyword  keyword) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleInt() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleInt(int32_t  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Value;

/// @brief Field m_Keyword, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleInt, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleInt, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleInt, m_Keyword) == 0x4, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleInt, "UnityEngine.UIElements", "StyleInt");
