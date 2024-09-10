#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3x2)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool3x2);
// Type: Unity.Mathematics::bool3x2
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool3x2
struct CORDL_TYPE bool3x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::bool3  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool3x2>*() ;

/// @brief Method Equals, addr 0x45c7260, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45c71f4, size 0x6c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method GetHashCode, addr 0x45c7334, size 0xbc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45c73f0, size 0x22c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x45c6c5c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) ;

/// @brief Method .ctor, addr 0x45c6c78, size 0x34, virtual false, abstract: false, final false
inline void _ctor(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21) ;

/// @brief Method .ctor, addr 0x45c6cac, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method get_Item, addr 0x45c71e4, size 0x10, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::bool3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x2>* i___System__IEquatable_1___Unity__Mathematics__bool3x2_() ;

/// @brief Method op_BitwiseAnd, addr 0x45c6f1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c6f30, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(::Unity::Mathematics::bool3x2  lhs, bool  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c6f78, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseAnd(bool  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c6fbc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c6fd0, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(::Unity::Mathematics::bool3x2  lhs, bool  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c7028, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_BitwiseOr(bool  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_Equality, addr 0x45c6cf4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_Equality, addr 0x45c6d08, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::bool3x2  lhs, bool  rhs) ;

/// @brief Method op_Equality, addr 0x45c6dac, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(bool  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c7080, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c7094, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(::Unity::Mathematics::bool3x2  lhs, bool  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c713c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_ExclusiveOr(bool  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_Implicit, addr 0x45c6cd8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Implicit___Unity__Mathematics__bool3x2(bool  v) ;

/// @brief Method op_Inequality, addr 0x45c6e50, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_Inequality, addr 0x45c6e64, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::bool3x2  lhs, bool  rhs) ;

/// @brief Method op_Inequality, addr 0x45c6eb8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(bool  lhs, ::Unity::Mathematics::bool3x2  rhs) ;

/// @brief Method op_LogicalNot, addr 0x45c6f0c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LogicalNot(::Unity::Mathematics::bool3x2  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool3x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }]
constexpr bool3x2(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c0;

/// @brief Field c1, offset: 0x3, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x6};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3x2, 0x6>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x2, c1) == 0x3, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3x2, "Unity.Mathematics", "bool3x2");
