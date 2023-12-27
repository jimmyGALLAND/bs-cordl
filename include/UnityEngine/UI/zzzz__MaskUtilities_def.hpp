#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::MaskUtilities);
// Type: UnityEngine.UI::MaskUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13100))
// CS Name: ::UnityEngine.UI::MaskUtilities*
class CORDL_TYPE MaskUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method Notify2DMaskStateChanged addr 0x2d7c29c size 0x25c virtual false final false
  static inline void Notify2DMaskStateChanged(::UnityEngine::Component* mask);

  /// @brief Method NotifyStencilStateChanged addr 0x2d7a96c size 0x258 virtual false final false
  static inline void NotifyStencilStateChanged(::UnityEngine::Component* mask);

  /// @brief Method FindRootSortOverrideCanvas addr 0x2d7b0c8 size 0x1a0 virtual false final false
  static inline ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* start);

  /// @brief Method GetStencilDepth addr 0x2d7b268 size 0x288 virtual false final false
  static inline int32_t GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter);

  /// @brief Method IsDescendantOrSelf addr 0x2d7c4f8 size 0x150 virtual false final false
  static inline bool IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child);

  /// @brief Method GetRectMaskForClippable addr 0x2d7bcec size 0x41c virtual false final false
  static inline ::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method GetRectMasksForClip addr 0x2d7c648 size 0x364 virtual false final false
  static inline void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* masks);

  static inline ::UnityEngine::UI::MaskUtilities* New_ctor();

  /// @brief Method .ctor addr 0x2d7c9ac size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskUtilities(MaskUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskUtilities(MaskUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MaskUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MaskUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskUtilities*, "UnityEngine.UI", "MaskUtilities");
