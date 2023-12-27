#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConstraintPositionOffset)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintPositionOffset;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintPositionOffset);
// Type: RootMotion.FinalIK::ConstraintPositionOffset
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12508)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12510))
// CS Name: ::RootMotion.FinalIK::ConstraintPositionOffset*
class CORDL_TYPE ConstraintPositionOffset : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field offset, offset 0x1c, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field defaultLocalPosition, offset 0x28, size 0xc
  __declspec(property(get = __get_defaultLocalPosition, put = __set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field lastLocalPosition, offset 0x34, size 0xc
  __declspec(property(get = __get_lastLocalPosition, put = __set_lastLocalPosition))::UnityEngine::Vector3 lastLocalPosition;

  /// @brief Field initiated, offset 0x40, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  __declspec(property(get = get_positionChanged)) bool positionChanged;

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_defaultLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_defaultLocalPosition() const;

  constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_lastLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastLocalPosition() const;

  constexpr void __set_lastLocalPosition(::UnityEngine::Vector3 value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  /// @brief Method UpdateConstraint addr 0x12427bc size 0x104 virtual true final false
  inline void UpdateConstraint();

  static inline ::RootMotion::FinalIK::ConstraintPositionOffset* New_ctor();

  /// @brief Method .ctor addr 0x124291c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::ConstraintPositionOffset* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x1242924 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method get_positionChanged addr 0x12428c0 size 0x5c virtual false final false
  inline bool get_positionChanged();

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintPositionOffset(ConstraintPositionOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintPositionOffset(ConstraintPositionOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintPositionOffset();

public:
  /// @brief Field offset, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field defaultLocalPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalPosition;

  /// @brief Field lastLocalPosition, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastLocalPosition;

  /// @brief Field initiated, offset: 0x40, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintPositionOffset, 0x48>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintPositionOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintPositionOffset*, "RootMotion.FinalIK", "ConstraintPositionOffset");
