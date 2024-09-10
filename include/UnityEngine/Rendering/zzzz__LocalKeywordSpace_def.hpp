#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeywordSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeywordSpace)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeywordSpace);
// Type: UnityEngine.Rendering::LocalKeywordSpace
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::LocalKeywordSpace
struct CORDL_TYPE LocalKeywordSpace {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*() ;

/// @brief Method Equals, addr 0x48380bc, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x4838138, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

/// @brief Method GetHashCode, addr 0x48380b4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>* i___System__IEquatable_1___UnityEngine__Rendering__LocalKeywordSpace_() ;

/// @brief Method op_Equality, addr 0x4838074, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Rendering::LocalKeywordSpace  lhs, ::UnityEngine::Rendering::LocalKeywordSpace  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalKeywordSpace() ;

// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LocalKeywordSpace(::System::IntPtr  m_KeywordSpace) noexcept;

/// @brief Field m_KeywordSpace, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_KeywordSpace;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LocalKeywordSpace, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LocalKeywordSpace, m_KeywordSpace) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeywordSpace, "UnityEngine.Rendering", "LocalKeywordSpace");
