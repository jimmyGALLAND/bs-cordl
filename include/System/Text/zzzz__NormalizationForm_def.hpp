#pragma once
// IWYU pragma private; include "System/Text/NormalizationForm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizationForm)
// Forward declare root types
namespace System::Text {
struct NormalizationForm;
}
// Write type traits
MARK_VAL_T(::System::Text::NormalizationForm);
// Type: System.Text::NormalizationForm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: true
// CS Name: ::System.Text::NormalizationForm
struct CORDL_TYPE NormalizationForm {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NormalizationForm_Unwrapped
enum struct __NormalizationForm_Unwrapped : int32_t {
__E_FormC = static_cast<int32_t>(0x1),
__E_FormD = static_cast<int32_t>(0x2),
__E_FormKC = static_cast<int32_t>(0x5),
__E_FormKD = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NormalizationForm_Unwrapped () const noexcept {
return static_cast<__NormalizationForm_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NormalizationForm() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NormalizationForm(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field FormC value: static_cast<int32_t>(0x1)
static ::System::Text::NormalizationForm const FormC;

/// @brief Field FormD value: static_cast<int32_t>(0x2)
static ::System::Text::NormalizationForm const FormD;

/// @brief Field FormKC value: static_cast<int32_t>(0x5)
static ::System::Text::NormalizationForm const FormKC;

/// @brief Field FormKD value: static_cast<int32_t>(0x6)
static ::System::Text::NormalizationForm const FormKD;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::NormalizationForm, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Text::NormalizationForm, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::NormalizationForm, "System.Text", "NormalizationForm");
