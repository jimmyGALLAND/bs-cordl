#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(DuplicateNodeError)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
class DuplicateNodeError;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError);
// Type: UnityEngine.ProBuilder.KdTree::DuplicateNodeError
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15915))
// CS Name: ::UnityEngine.ProBuilder.KdTree::DuplicateNodeError*
class CORDL_TYPE DuplicateNodeError : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError* New_ctor();

  /// @brief Method .ctor addr 0x2b2d434 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DuplicateNodeError(DuplicateNodeError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DuplicateNodeError(DuplicateNodeError const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DuplicateNodeError();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError, 0x90>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*, "UnityEngine.ProBuilder.KdTree", "DuplicateNodeError");
