#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRAutoDestroyInMRC)
// Forward declare root types
namespace GlobalNamespace {
class OVRAutoDestroyInMRC;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRAutoDestroyInMRC);
// Type: ::OVRAutoDestroyInMRC
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8077))
// CS Name: ::OVRAutoDestroyInMRC*
class CORDL_TYPE OVRAutoDestroyInMRC : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Start addr 0x27a206c size 0x118 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x27a2184 size 0x4 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRAutoDestroyInMRC* New_ctor();

  /// @brief Method .ctor addr 0x27a2188 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAutoDestroyInMRC(OVRAutoDestroyInMRC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAutoDestroyInMRC(OVRAutoDestroyInMRC const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAutoDestroyInMRC();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAutoDestroyInMRC, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRAutoDestroyInMRC);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAutoDestroyInMRC*, "", "OVRAutoDestroyInMRC");
