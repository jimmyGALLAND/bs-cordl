#pragma once
// IWYU pragma private; include "System/Configuration/Assemblies/AssemblyVersionCompatibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyVersionCompatibility)
// Forward declare root types
namespace System::Configuration::Assemblies {
struct AssemblyVersionCompatibility;
}
// Write type traits
MARK_VAL_T(::System::Configuration::Assemblies::AssemblyVersionCompatibility);
// Type: System.Configuration.Assemblies::AssemblyVersionCompatibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Configuration::Assemblies {
// Is value type: true
// CS Name: ::System.Configuration.Assemblies::AssemblyVersionCompatibility
struct CORDL_TYPE AssemblyVersionCompatibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AssemblyVersionCompatibility_Unwrapped
enum struct __AssemblyVersionCompatibility_Unwrapped : int32_t {
__E_SameMachine = static_cast<int32_t>(0x1),
__E_SameProcess = static_cast<int32_t>(0x2),
__E_SameDomain = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyVersionCompatibility_Unwrapped () const noexcept {
return static_cast<__AssemblyVersionCompatibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AssemblyVersionCompatibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyVersionCompatibility(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field SameDomain value: static_cast<int32_t>(0x3)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameDomain;

/// @brief Field SameMachine value: static_cast<int32_t>(0x1)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameMachine;

/// @brief Field SameProcess value: static_cast<int32_t>(0x2)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameProcess;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::Assemblies::AssemblyVersionCompatibility, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Configuration::Assemblies::AssemblyVersionCompatibility, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Configuration::Assemblies
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::Assemblies::AssemblyVersionCompatibility, "System.Configuration.Assemblies", "AssemblyVersionCompatibility");
