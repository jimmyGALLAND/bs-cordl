#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeasureFunction)
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::MeasureFunction);
// Type: UnityEngine.Yoga::MeasureFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15367))
// CS Name: ::UnityEngine.Yoga::MeasureFunction*
class CORDL_TYPE MeasureFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Yoga::MeasureFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2ea531c size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2ea544c size 0x14 virtual true final false
  inline ::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                              ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  // Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeasureFunction(MeasureFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeasureFunction(MeasureFunction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeasureFunction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::MeasureFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::MeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureFunction*, "UnityEngine.Yoga", "MeasureFunction");
