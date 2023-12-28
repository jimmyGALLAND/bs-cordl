#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
CORDL_MODULE_EXPORT(Prism)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Prism;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Prism);
// Type: UnityEngine.ProBuilder.Shapes::Prism
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12231))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Prism*
class CORDL_TYPE Prism : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Method CopyShape addr 0x2b8c3a4 size 0x4 virtual true final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method RebuildMesh addr 0x2b8c3a8 size 0x814 virtual true final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::ProBuilder::Shapes::Prism* New_ctor();

  /// @brief Method .ctor addr 0x2b8cbbc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Prism", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Prism(Prism&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Prism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Prism(Prism const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Prism();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Prism, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Prism);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Prism*, "UnityEngine.ProBuilder.Shapes", "Prism");
