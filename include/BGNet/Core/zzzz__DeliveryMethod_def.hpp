#pragma once
// IWYU pragma private; include "BGNet/Core/DeliveryMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeliveryMethod)
// Forward declare root types
namespace BGNet::Core {
struct DeliveryMethod;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::DeliveryMethod);
// Type: BGNet.Core::DeliveryMethod
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: true
// CS Name: ::BGNet.Core::DeliveryMethod
struct CORDL_TYPE DeliveryMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DeliveryMethod_Unwrapped
enum struct __DeliveryMethod_Unwrapped : uint8_t {
__E_Unreliable = static_cast<uint8_t>(0x0u),
__E_ReliableOrdered = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeliveryMethod_Unwrapped () const noexcept {
return static_cast<__DeliveryMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeliveryMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeliveryMethod(uint8_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

/// @brief Field ReliableOrdered value: static_cast<uint8_t>(0x1u)
static ::BGNet::Core::DeliveryMethod const ReliableOrdered;

/// @brief Field Unreliable value: static_cast<uint8_t>(0x0u)
static ::BGNet::Core::DeliveryMethod const Unreliable;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DeliveryMethod, 0x1>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::DeliveryMethod, value__) == 0x0, "Offset mismatch!");

} // namespace end def BGNet::Core
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DeliveryMethod, "BGNet.Core", "DeliveryMethod");
