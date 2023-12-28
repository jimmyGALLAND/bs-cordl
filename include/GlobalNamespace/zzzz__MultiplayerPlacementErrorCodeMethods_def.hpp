#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerPlacementErrorCodeMethods)
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlacementErrorCodeMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlacementErrorCodeMethods);
// Type: ::MultiplayerPlacementErrorCodeMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12739))
// CS Name: ::MultiplayerPlacementErrorCodeMethods*
class CORDL_TYPE MultiplayerPlacementErrorCodeMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToConnectionFailedReason addr 0xe392e4 size 0x20 virtual false final false
  static inline ::GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlacementErrorCodeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlacementErrorCodeMethods(MultiplayerPlacementErrorCodeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlacementErrorCodeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlacementErrorCodeMethods(MultiplayerPlacementErrorCodeMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlacementErrorCodeMethods();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlacementErrorCodeMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlacementErrorCodeMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*, "", "MultiplayerPlacementErrorCodeMethods");
