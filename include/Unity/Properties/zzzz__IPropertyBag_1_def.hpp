#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyBag_1)
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties {
template<typename TContainer>
class IPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IPropertyBag_1);
// Type: Unity.Properties::IPropertyBag`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// cpp template
template<typename TContainer>
// Is value type: false
// CS Name: ::Unity.Properties::IPropertyBag`1<TContainer>*
class CORDL_TYPE IPropertyBag_1 {
public:
// Declarations
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
constexpr operator  ::Unity::Properties::IPropertyBag*() noexcept;

/// @brief Convert to "::Unity::Properties::IPropertyBag"
constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPropertyBag_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPropertyBag_1(IPropertyBag_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPropertyBag_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPropertyBag_1(IPropertyBag_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IPropertyBag_1, "Unity.Properties", "IPropertyBag`1");
