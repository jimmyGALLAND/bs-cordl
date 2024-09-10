#pragma once
// IWYU pragma private; include "LiteNetLib/ConnectRequestResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectRequestResult)
// Forward declare root types
namespace LiteNetLib {
struct ConnectRequestResult;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::ConnectRequestResult);
// Type: LiteNetLib::ConnectRequestResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::LiteNetLib::ConnectRequestResult
struct CORDL_TYPE ConnectRequestResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectRequestResult_Unwrapped
enum struct __ConnectRequestResult_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_P2PLose = static_cast<int32_t>(0x1),
__E_Reconnection = static_cast<int32_t>(0x2),
__E_NewConnection = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectRequestResult_Unwrapped () const noexcept {
return static_cast<__ConnectRequestResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectRequestResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectRequestResult(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field NewConnection value: static_cast<int32_t>(0x3)
static ::LiteNetLib::ConnectRequestResult const NewConnection;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::LiteNetLib::ConnectRequestResult const None;

/// @brief Field P2PLose value: static_cast<int32_t>(0x1)
static ::LiteNetLib::ConnectRequestResult const P2PLose;

/// @brief Field Reconnection value: static_cast<int32_t>(0x2)
static ::LiteNetLib::ConnectRequestResult const Reconnection;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectRequestResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectRequestResult, value__) == 0x0, "Offset mismatch!");

} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectRequestResult, "LiteNetLib", "ConnectRequestResult");
