#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__NotImplementedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointOnEdgeException)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointOnEdgeException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException);
// Type: UnityEngine.ProBuilder.Poly2Tri::PointOnEdgeException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2445))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15334))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PointOnEdgeException*
class CORDL_TYPE PointOnEdgeException : public ::System::NotImplementedException {
public:
  // Declarations
  /// @brief Field A, offset 0x90, size 0x8
  __declspec(property(get = __get_A, put = __set_A))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A;

  /// @brief Field B, offset 0x98, size 0x8
  __declspec(property(get = __get_B, put = __set_B))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B;

  /// @brief Field C, offset 0xa0, size 0x8
  __declspec(property(get = __get_C, put = __set_C))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_A();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_A() const;

  constexpr void __set_A(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_B();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_B() const;

  constexpr void __set_B(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_C();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_C() const;

  constexpr void __set_C(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException* New_ctor(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b,
                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c);

  /// @brief Method .ctor addr 0x2b33418 size 0x3c virtual false final false
  inline void _ctor(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b,
                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c);

  // Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointOnEdgeException(PointOnEdgeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointOnEdgeException(PointOnEdgeException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointOnEdgeException();

public:
  /// @brief Field A, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___A;

  /// @brief Field B, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___B;

  /// @brief Field C, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___C;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*, "UnityEngine.ProBuilder.Poly2Tri", "PointOnEdgeException");
