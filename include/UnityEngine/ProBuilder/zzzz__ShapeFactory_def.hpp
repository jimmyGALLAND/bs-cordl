#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShapeFactory)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace System {
class Type;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ShapeFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ShapeFactory);
// Type: UnityEngine.ProBuilder::ShapeFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12196))
// CS Name: ::UnityEngine.ProBuilder::ShapeFactory*
class CORDL_TYPE ShapeFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate(::UnityEngine::ProBuilder::PivotLocation pivotType);

  /// @brief Method Instantiate addr 0x2b6d7d0 size 0x294 virtual false final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate(::System::Type* shapeType, ::UnityEngine::ProBuilder::PivotLocation pivotType);

  /// @brief Method Instantiate addr 0x2b6da64 size 0x258 virtual false final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation pivotType);

  // Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShapeFactory(ShapeFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShapeFactory(ShapeFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShapeFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ShapeFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ShapeFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeFactory*, "UnityEngine.ProBuilder", "ShapeFactory");
