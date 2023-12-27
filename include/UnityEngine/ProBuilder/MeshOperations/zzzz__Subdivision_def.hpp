#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Subdivision)
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Subdivision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Subdivision);
// Type: UnityEngine.ProBuilder.MeshOperations::Subdivision
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12280))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::Subdivision*
class CORDL_TYPE Subdivision : public ::System::Object {
public:
  // Declarations
  /// @brief Method Subdivide addr 0x2bbf134 size 0xb4 virtual false final false
  static inline ::UnityEngine::ProBuilder::ActionResult* Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh* pb);

  /// @brief Method Subdivide addr 0x2bbf1e8 size 0x8 virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                                                                 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces);

  // Ctor Parameters [CppParam { name: "", ty: "Subdivision", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Subdivision(Subdivision&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Subdivision", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Subdivision(Subdivision const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Subdivision();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Subdivision, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Subdivision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Subdivision*, "UnityEngine.ProBuilder.MeshOperations", "Subdivision");
