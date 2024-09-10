#pragma once
// IWYU pragma private; include "System/Data/MissingSchemaAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissingSchemaAction)
// Forward declare root types
namespace System::Data {
struct MissingSchemaAction;
}
// Write type traits
MARK_VAL_T(::System::Data::MissingSchemaAction);
// Type: System.Data::MissingSchemaAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::MissingSchemaAction
struct CORDL_TYPE MissingSchemaAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MissingSchemaAction_Unwrapped
enum struct __MissingSchemaAction_Unwrapped : int32_t {
__E_Add = static_cast<int32_t>(0x1),
__E_Ignore = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
__E_AddWithKey = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MissingSchemaAction_Unwrapped () const noexcept {
return static_cast<__MissingSchemaAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MissingSchemaAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MissingSchemaAction(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Add value: static_cast<int32_t>(0x1)
static ::System::Data::MissingSchemaAction const Add;

/// @brief Field AddWithKey value: static_cast<int32_t>(0x4)
static ::System::Data::MissingSchemaAction const AddWithKey;

/// @brief Field Error value: static_cast<int32_t>(0x3)
static ::System::Data::MissingSchemaAction const Error;

/// @brief Field Ignore value: static_cast<int32_t>(0x2)
static ::System::Data::MissingSchemaAction const Ignore;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::MissingSchemaAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::MissingSchemaAction, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::MissingSchemaAction, "System.Data", "MissingSchemaAction");
