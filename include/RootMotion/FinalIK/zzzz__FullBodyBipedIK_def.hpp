#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FullBodyBipedIK)
namespace RootMotion {
class BipedReferences;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FullBodyBipedIK);
// Type: RootMotion.FinalIK::FullBodyBipedIK
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12535))
// CS Name: ::RootMotion.FinalIK::FullBodyBipedIK*
class CORDL_TYPE FullBodyBipedIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field references, offset 0x38, size 0x8
  __declspec(property(get = __get_references, put = __set_references))::RootMotion::BipedReferences* references;

  /// @brief Field solver, offset 0x40, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverFullBodyBiped* solver;

  constexpr ::RootMotion::BipedReferences*& __get_references();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BipedReferences*> const& __get_references() const;

  constexpr void __set_references(::RootMotion::BipedReferences* value);

  constexpr ::RootMotion::FinalIK::IKSolverFullBodyBiped*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverFullBodyBiped*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverFullBodyBiped* value);

  /// @brief Method OpenUserManual addr 0x124e754 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x124e798 size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method OpenSetupTutorial addr 0x124e7dc size 0x44 virtual false final false
  inline void OpenSetupTutorial();

  /// @brief Method OpenInspectorTutorial addr 0x124e820 size 0x44 virtual false final false
  inline void OpenInspectorTutorial();

  /// @brief Method SupportGroup addr 0x124e864 size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x124e8a8 size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method SetReferences addr 0x124e8ec size 0x24 virtual false final false
  inline void SetReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode);

  /// @brief Method GetIKSolver addr 0x124e910 size 0x8 virtual true final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  /// @brief Method ReferencesError addr 0x124e918 size 0x1bc virtual false final false
  inline bool ReferencesError(ByRef<::StringW> errorMessage);

  /// @brief Method ReferencesWarning addr 0x124ead4 size 0x4b0 virtual false final false
  inline bool ReferencesWarning(ByRef<::StringW> warningMessage);

  /// @brief Method Reinitiate addr 0x124ef84 size 0x20 virtual false final false
  inline void Reinitiate();

  /// @brief Method AutoDetectReferences addr 0x124efa4 size 0xd8 virtual false final false
  inline void AutoDetectReferences();

  static inline ::RootMotion::FinalIK::FullBodyBipedIK* New_ctor();

  /// @brief Method .ctor addr 0x124f07c size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FullBodyBipedIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullBodyBipedIK(FullBodyBipedIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullBodyBipedIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullBodyBipedIK(FullBodyBipedIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullBodyBipedIK();

public:
  /// @brief Field references, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::BipedReferences* ___references;

  /// @brief Field solver, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverFullBodyBiped* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FullBodyBipedIK, 0x48>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FullBodyBipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedIK*, "RootMotion.FinalIK", "FullBodyBipedIK");
