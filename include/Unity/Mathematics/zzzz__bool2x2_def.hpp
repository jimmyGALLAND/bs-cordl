#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2x2)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool2x2);
// Type: Unity.Mathematics::bool2x2
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool2x2
struct CORDL_TYPE bool2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::bool2  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool2x2>*() ;

/// @brief Method Equals, addr 0x45c4418, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x45c43cc, size 0x4c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x45c44c4, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x45c4540, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x45c40f0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) ;

/// @brief Method .ctor, addr 0x45c40fc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  m00, bool  m01, bool  m10, bool  m11) ;

/// @brief Method .ctor, addr 0x45c4124, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method get_Item, addr 0x45c43c4, size 0x8, virtual false, abstract: false, final false
inline ByRef<::Unity::Mathematics::bool2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2x2>* i___System__IEquatable_1___Unity__Mathematics__bool2x2_() ;

/// @brief Method op_BitwiseAnd, addr 0x45c4270, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseAnd(::Unity::Mathematics::bool2x2  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c4280, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseAnd(::Unity::Mathematics::bool2x2  lhs, bool  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x45c42a8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseAnd(bool  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c42cc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseOr(::Unity::Mathematics::bool2x2  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c42dc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseOr(::Unity::Mathematics::bool2x2  lhs, bool  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x45c430c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_BitwiseOr(bool  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_Equality, addr 0x45c4158, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::bool2x2  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_Equality, addr 0x45c4168, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::bool2x2  lhs, bool  rhs) ;

/// @brief Method op_Equality, addr 0x45c41a8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(bool  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c433c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_ExclusiveOr(::Unity::Mathematics::bool2x2  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c434c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_ExclusiveOr(::Unity::Mathematics::bool2x2  lhs, bool  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x45c4388, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_ExclusiveOr(bool  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x45c4140, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Implicit___Unity__Mathematics__bool2x2(bool  v) ;

/// @brief Method op_Inequality, addr 0x45c41e8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::bool2x2  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x45c41f8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::bool2x2  lhs, bool  rhs) ;

/// @brief Method op_Inequality, addr 0x45c422c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(bool  lhs, ::Unity::Mathematics::bool2x2  rhs) ;

/// @brief Method op_LogicalNot, addr 0x45c4260, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LogicalNot(::Unity::Mathematics::bool2x2  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool2", modifiers: "", def_value: None }]
constexpr bool2x2(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) noexcept;

/// @brief Field c0, offset: 0x0, size: 0x2, def value: None
 ::Unity::Mathematics::bool2  c0;

/// @brief Field c1, offset: 0x2, size: 0x2, def value: None
 ::Unity::Mathematics::bool2  c1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2x2, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2x2, c1) == 0x2, "Offset mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2x2, "Unity.Mathematics", "bool2x2");
