#pragma once
// IWYU pragma private; include "System/Drawing/Point.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Point)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Point;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Point);
// Type: System.Drawing::Point
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Drawing {
// Is value type: true
// CS Name: ::System.Drawing::Point
struct CORDL_TYPE Point {
public:
// Declarations
 __declspec(property(get=get_X)) int32_t  X;

 __declspec(property(get=get_Y)) int32_t  Y;

/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Point>"
constexpr operator  ::System::IEquatable_1<::System::Drawing::Point>*() ;

/// @brief Method Equals, addr 0x417f880, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x417f904, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::System::Drawing::Point  other) ;

/// @brief Method GetHashCode, addr 0x417f924, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x417f984, size 0x124, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_X, addr 0x417f850, size 0x8, virtual false, abstract: false, final false
inline int32_t get_X() ;

/// @brief Method get_Y, addr 0x417f858, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Y() ;

/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Point>"
constexpr ::System::IEquatable_1<::System::Drawing::Point>* i___System__IEquatable_1___System__Drawing__Point_() ;

/// @brief Method op_Equality, addr 0x417f860, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Drawing::Point  left, ::System::Drawing::Point  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr Point() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Point(int32_t  x, int32_t  y) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Drawing::Point, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Drawing::Point, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Point, y) == 0x4, "Offset mismatch!");

} // namespace end def System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Point, "System.Drawing", "Point");
