#pragma once
// IWYU pragma private; include "System/Drawing/Rectangle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rectangle)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Rectangle;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Rectangle);
// Type: System.Drawing::Rectangle
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Drawing {
// Is value type: true
// CS Name: ::System.Drawing::Rectangle
struct CORDL_TYPE Rectangle {
public:
// Declarations
 __declspec(property(get=get_Height)) int32_t  Height;

 __declspec(property(get=get_Width)) int32_t  Width;

 __declspec(property(get=get_X)) int32_t  X;

 __declspec(property(get=get_Y)) int32_t  Y;

/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Rectangle>"
constexpr operator  ::System::IEquatable_1<::System::Drawing::Rectangle>*() ;

/// @brief Method Equals, addr 0x417fd30, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x417fde0, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::System::Drawing::Rectangle  other) ;

/// @brief Method GetHashCode, addr 0x417fe60, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x417fedc, size 0x1b4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Height, addr 0x417fd28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Height() ;

/// @brief Method get_Width, addr 0x417fd20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

/// @brief Method get_X, addr 0x417fd10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_X() ;

/// @brief Method get_Y, addr 0x417fd18, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Y() ;

/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Rectangle>"
constexpr ::System::IEquatable_1<::System::Drawing::Rectangle>* i___System__IEquatable_1___System__Drawing__Rectangle_() ;

/// @brief Method op_Equality, addr 0x417fe24, size 0x3c, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Drawing::Rectangle  left, ::System::Drawing::Rectangle  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr Rectangle() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Rectangle(int32_t  x, int32_t  y, int32_t  width, int32_t  height) noexcept;

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 int32_t  height;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Drawing::Rectangle, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, height) == 0xc, "Offset mismatch!");

} // namespace end def System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Rectangle, "System.Drawing", "Rectangle");
