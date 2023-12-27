#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EssentialHelpers)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EssentialHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EssentialHelpers);
// Type: ::EssentialHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15853))
// CS Name: ::EssentialHelpers*
class CORDL_TYPE EssentialHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_CurrentTimeStamp addr 0xe27ac0 size 0xb4 virtual false final false
  static inline double_t get_CurrentTimeStamp();

  /// @brief Method SafeDestroy addr 0xe27b74 size 0xa8 virtual false final false
  static inline void SafeDestroy(::UnityEngine::Object* obj);

  /// @brief Method GetOrAddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  // Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EssentialHelpers(EssentialHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EssentialHelpers(EssentialHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EssentialHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EssentialHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EssentialHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EssentialHelpers*, "", "EssentialHelpers");
