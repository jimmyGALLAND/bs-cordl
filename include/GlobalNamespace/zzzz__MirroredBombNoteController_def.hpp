#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MirroredBombNoteController)
namespace GlobalNamespace {
class __MirroredBombNoteController__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class __MirroredBombNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredBombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__MirroredBombNoteController__Pool);
// Type: ::MirroredBombNoteController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4747)), TypeDefinitionIndex(TypeDefinitionIndex(4756)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4756), inst: 4620
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4752)) CS Name: ::MirroredBombNoteController*
class CORDL_TYPE MirroredBombNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::INoteMirrorable*> {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MirroredBombNoteController__Pool;

  static inline ::GlobalNamespace::MirroredBombNoteController* New_ctor();

  /// @brief Method .ctor addr 0x2386134 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredBombNoteController(MirroredBombNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredBombNoteController(MirroredBombNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredBombNoteController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredBombNoteController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2815 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)),
// TypeDefinitionIndex(TypeDefinitionIndex(4752))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4751)) CS Name: ::MirroredBombNoteController::Pool*
class CORDL_TYPE __MirroredBombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredBombNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MirroredBombNoteController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x238617c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredBombNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MirroredBombNoteController__Pool(__MirroredBombNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredBombNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MirroredBombNoteController__Pool(__MirroredBombNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirroredBombNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirroredBombNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBombNoteController*, "", "MirroredBombNoteController");
NEED_NO_BOX(::GlobalNamespace::__MirroredBombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirroredBombNoteController__Pool*, "", "MirroredBombNoteController/Pool");
