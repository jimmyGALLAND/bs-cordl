#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/StreamingContextStates.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingContextStates)
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::StreamingContextStates);
// Type: System.Runtime.Serialization::StreamingContextStates
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: ::System.Runtime.Serialization::StreamingContextStates
struct CORDL_TYPE StreamingContextStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StreamingContextStates_Unwrapped
enum struct __StreamingContextStates_Unwrapped : int32_t {
__E_CrossProcess = static_cast<int32_t>(0x1),
__E_CrossMachine = static_cast<int32_t>(0x2),
__E_File = static_cast<int32_t>(0x4),
__E_Persistence = static_cast<int32_t>(0x8),
__E_Remoting = static_cast<int32_t>(0x10),
__E_Other = static_cast<int32_t>(0x20),
__E_Clone = static_cast<int32_t>(0x40),
__E_CrossAppDomain = static_cast<int32_t>(0x80),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StreamingContextStates_Unwrapped () const noexcept {
return static_cast<__StreamingContextStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StreamingContextStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamingContextStates(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::System::Runtime::Serialization::StreamingContextStates const All;

/// @brief Field Clone value: static_cast<int32_t>(0x40)
static ::System::Runtime::Serialization::StreamingContextStates const Clone;

/// @brief Field CrossAppDomain value: static_cast<int32_t>(0x80)
static ::System::Runtime::Serialization::StreamingContextStates const CrossAppDomain;

/// @brief Field CrossMachine value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::StreamingContextStates const CrossMachine;

/// @brief Field CrossProcess value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::StreamingContextStates const CrossProcess;

/// @brief Field File value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::StreamingContextStates const File;

/// @brief Field Other value: static_cast<int32_t>(0x20)
static ::System::Runtime::Serialization::StreamingContextStates const Other;

/// @brief Field Persistence value: static_cast<int32_t>(0x8)
static ::System::Runtime::Serialization::StreamingContextStates const Persistence;

/// @brief Field Remoting value: static_cast<int32_t>(0x10)
static ::System::Runtime::Serialization::StreamingContextStates const Remoting;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContextStates, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::StreamingContextStates, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContextStates, "System.Runtime.Serialization", "StreamingContextStates");
