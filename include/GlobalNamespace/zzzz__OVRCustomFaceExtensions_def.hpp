#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRCustomFaceExtensions)
namespace GlobalNamespace {
class OVRCustomFace;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCustomFaceExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomFaceExtensions);
// Type: ::OVRCustomFaceExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8089))
// CS Name: ::OVRCustomFaceExtensions*
class CORDL_TYPE OVRCustomFaceExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AutoGenerateMapping addr 0x27a8e9c size 0x26c virtual false final false
  static inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>
  AutoGenerateMapping(::UnityEngine::Mesh* skinnedMesh, ::ArrayW<::StringW, ::Array<::StringW>*> blendShapeNames,
                      ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> faceExpressions, bool allowDuplicateMapping);

  /// @brief Method FindBestMatch addr 0x27a9608 size 0x3f0 virtual false final false
  static inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression
  FindBestMatch(::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*, ::Array<::System::Collections::Generic::HashSet_1<::StringW>*>*> tokenizedOptions, ::StringW searchString,
                ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> expressions,
                ::GlobalNamespace::__OVRFaceExpressions__FaceExpression fallback);

  /// @brief Method IsLipsToward addr 0x27a99f8 size 0xfc virtual false final false
  static inline bool IsLipsToward(::StringW blendshapeName);

  /// @brief Method TokenizeString addr 0x27a9108 size 0x500 virtual false final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* TokenizeString(::StringW s);

  /// @brief Method SplitCamelCase addr 0x27a9af4 size 0x9c virtual false final false
  static inline ::StringW SplitCamelCase(::StringW input);

  /// @brief Method AutoMapBlendshapes addr 0x27a9b90 size 0x2f4 virtual false final false
  static inline void AutoMapBlendshapes(::GlobalNamespace::OVRCustomFace* customFace);

  /// @brief Method ClearBlendshapes addr 0x27a9fec size 0xbc virtual false final false
  static inline void ClearBlendshapes(::GlobalNamespace::OVRCustomFace* customFace);

  /// @brief Method OculusFaceAutoGenerateMapping addr 0x27a9e84 size 0x120 virtual false final false
  static inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>
  OculusFaceAutoGenerateMapping(::UnityEngine::Mesh* sharedMesh, bool allowDuplicateMapping);

  /// @brief Method CustomAutoGeneratedMapping addr 0x27a9fa4 size 0x48 virtual false final false
  static inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>
  CustomAutoGeneratedMapping(::GlobalNamespace::OVRCustomFace* customFace, ::UnityEngine::Mesh* sharedMesh, bool allowDuplicateMapping);

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFaceExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCustomFaceExtensions(OVRCustomFaceExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFaceExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCustomFaceExtensions(OVRCustomFaceExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCustomFaceExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFaceExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCustomFaceExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFaceExtensions*, "", "OVRCustomFaceExtensions");
