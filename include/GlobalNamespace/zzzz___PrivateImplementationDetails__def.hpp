#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_PrivateImplementationDetails_)
// Forward declare root types
namespace GlobalNamespace {
class _PrivateImplementationDetails_;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::_PrivateImplementationDetails_);
// Type: ::<PrivateImplementationDetails>
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15570))
// CS Name: ::<PrivateImplementationDetails>*
class CORDL_TYPE _PrivateImplementationDetails_ : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeStringHash addr 0x28027a8 size 0x7c virtual false final false
  static inline uint32_t ComputeStringHash(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _PrivateImplementationDetails_(_PrivateImplementationDetails_&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _PrivateImplementationDetails_(_PrivateImplementationDetails_ const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _PrivateImplementationDetails_();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::_PrivateImplementationDetails_, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::_PrivateImplementationDetails_);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::_PrivateImplementationDetails_*, "", "<PrivateImplementationDetails>");
