#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
CORDL_MODULE_EXPORT(FixedJoint)
// Forward declare root types
namespace UnityEngine {
class FixedJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::FixedJoint);
// Type: UnityEngine::FixedJoint
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::FixedJoint*
class CORDL_TYPE FixedJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  static inline ::UnityEngine::FixedJoint* New_ctor();

  /// @brief Method .ctor, addr 0x3262d48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedJoint(FixedJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedJoint(FixedJoint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FixedJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::FixedJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FixedJoint*, "UnityEngine", "FixedJoint");
