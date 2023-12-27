#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConstraintPosition)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintPosition;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintPosition);
// Type: RootMotion.FinalIK::ConstraintPosition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12508)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12509))
// CS Name: ::RootMotion.FinalIK::ConstraintPosition*
class CORDL_TYPE ConstraintPosition : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field position, offset 0x1c, size 0xc
  __declspec(property(get = __get_position, put = __set_position))::UnityEngine::Vector3 position;

  constexpr ::UnityEngine::Vector3& __get_position();

  constexpr ::UnityEngine::Vector3 const& __get_position() const;

  constexpr void __set_position(::UnityEngine::Vector3 value);

  /// @brief Method UpdateConstraint addr 0x12426f4 size 0x98 virtual true final false
  inline void UpdateConstraint();

  static inline ::RootMotion::FinalIK::ConstraintPosition* New_ctor();

  /// @brief Method .ctor addr 0x124278c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::ConstraintPosition* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x1242794 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform);

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintPosition(ConstraintPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintPosition(ConstraintPosition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintPosition();

public:
  /// @brief Field position, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintPosition, 0x28>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintPosition);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintPosition*, "RootMotion.FinalIK", "ConstraintPosition");
