#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3x4)
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
struct bool3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool3x4);
// Type: Unity.Mathematics::bool3x4
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool3x4
struct CORDL_TYPE bool3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::bool3  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool3x4>*() ;

/// @brief Method Equals, addr 0x45c9354, size 0x14c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45c9270, size 0xe4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x45c94a0, size 0x184, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45c9624, size 0x3ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x45c85f4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method .ctor, addr 0x45c8628, size 0x78, virtual false, abstract: false, final false
inline void _ctor(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method .ctor, addr 0x45c86a0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method get_Item, addr 0x45c9260, size 0x10, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::bool3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x4>* i___System__IEquatable_1___Unity__Mathematics__bool3x4_() ;

/// @brief Method op_BitwiseAnd, addr 0x45c8c48, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c8ce8, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c8d78, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c8e08, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c8ea0, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c8f5c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Equality, addr 0x45c8724, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Equality, addr 0x45c87cc, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_Equality, addr 0x45c88c4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c9018, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c90b0, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c9188, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x45c86dc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Implicit___Unity__Mathematics__bool3x4(bool  v) ;

/// @brief Method op_Inequality, addr 0x45c89bc, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x45c8a54, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_Inequality, addr 0x45c8b0c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_LogicalNot, addr 0x45c8bc4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LogicalNot(::Unity::Mathematics::bool3x4  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }]
constexpr bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c0;

/// @brief Field c1, offset: 0x3, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c1;

/// @brief Field c2, offset: 0x6, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c2;

/// @brief Field c3, offset: 0x9, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3x4, 0xc>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c1) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c2) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c3) == 0x9, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3x4, "Unity.Mathematics", "bool3x4");
