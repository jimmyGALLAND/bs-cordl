#pragma once
// IWYU pragma private; include "System/Data/XmlReadMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReadMode)
// Forward declare root types
namespace System::Data {
struct XmlReadMode;
}
// Write type traits
MARK_VAL_T(::System::Data::XmlReadMode);
// Type: System.Data::XmlReadMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::XmlReadMode
struct CORDL_TYPE XmlReadMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlReadMode_Unwrapped
enum struct __XmlReadMode_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_ReadSchema = static_cast<int32_t>(0x1),
__E_IgnoreSchema = static_cast<int32_t>(0x2),
__E_InferSchema = static_cast<int32_t>(0x3),
__E_DiffGram = static_cast<int32_t>(0x4),
__E_Fragment = static_cast<int32_t>(0x5),
__E_InferTypedSchema = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlReadMode_Unwrapped () const noexcept {
return static_cast<__XmlReadMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlReadMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlReadMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::System::Data::XmlReadMode const Auto;

/// @brief Field DiffGram value: static_cast<int32_t>(0x4)
static ::System::Data::XmlReadMode const DiffGram;

/// @brief Field Fragment value: static_cast<int32_t>(0x5)
static ::System::Data::XmlReadMode const Fragment;

/// @brief Field IgnoreSchema value: static_cast<int32_t>(0x2)
static ::System::Data::XmlReadMode const IgnoreSchema;

/// @brief Field InferSchema value: static_cast<int32_t>(0x3)
static ::System::Data::XmlReadMode const InferSchema;

/// @brief Field InferTypedSchema value: static_cast<int32_t>(0x6)
static ::System::Data::XmlReadMode const InferTypedSchema;

/// @brief Field ReadSchema value: static_cast<int32_t>(0x1)
static ::System::Data::XmlReadMode const ReadSchema;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::XmlReadMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::XmlReadMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlReadMode, "System.Data", "XmlReadMode");
