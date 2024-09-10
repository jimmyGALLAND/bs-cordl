#pragma once
// IWYU pragma private; include "System/Data/DataRowAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowAction)
// Forward declare root types
namespace System::Data {
struct DataRowAction;
}
// Write type traits
MARK_VAL_T(::System::Data::DataRowAction);
// Type: System.Data::DataRowAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::DataRowAction
struct CORDL_TYPE DataRowAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DataRowAction_Unwrapped
enum struct __DataRowAction_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Delete = static_cast<int32_t>(0x1),
__E_Change = static_cast<int32_t>(0x2),
__E_Rollback = static_cast<int32_t>(0x4),
__E_Commit = static_cast<int32_t>(0x8),
__E_Add = static_cast<int32_t>(0x10),
__E_ChangeOriginal = static_cast<int32_t>(0x20),
__E_ChangeCurrentAndOriginal = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DataRowAction_Unwrapped () const noexcept {
return static_cast<__DataRowAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DataRowAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataRowAction(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Add value: static_cast<int32_t>(0x10)
static ::System::Data::DataRowAction const Add;

/// @brief Field Change value: static_cast<int32_t>(0x2)
static ::System::Data::DataRowAction const Change;

/// @brief Field ChangeCurrentAndOriginal value: static_cast<int32_t>(0x40)
static ::System::Data::DataRowAction const ChangeCurrentAndOriginal;

/// @brief Field ChangeOriginal value: static_cast<int32_t>(0x20)
static ::System::Data::DataRowAction const ChangeOriginal;

/// @brief Field Commit value: static_cast<int32_t>(0x8)
static ::System::Data::DataRowAction const Commit;

/// @brief Field Delete value: static_cast<int32_t>(0x1)
static ::System::Data::DataRowAction const Delete;

/// @brief Field Nothing value: static_cast<int32_t>(0x0)
static ::System::Data::DataRowAction const Nothing;

/// @brief Field Rollback value: static_cast<int32_t>(0x4)
static ::System::Data::DataRowAction const Rollback;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRowAction, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowAction, "System.Data", "DataRowAction");
