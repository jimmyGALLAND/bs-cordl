#pragma once
// IWYU pragma private; include "Unity/Properties/IProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IProperty)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class IProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IProperty);
// Type: Unity.Properties::IProperty
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::Unity.Properties::IProperty*
class CORDL_TYPE IProperty {
public:
// Declarations
/// @brief Method DeclaredValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* DeclaredValueType() ;

// Ctor Parameters [CppParam { name: "", ty: "IProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IProperty(IProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProperty(IProperty const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Properties
NEED_NO_BOX(::Unity::Properties::IProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IProperty*, "Unity.Properties", "IProperty");
