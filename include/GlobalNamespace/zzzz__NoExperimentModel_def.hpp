#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoExperimentModel)
namespace GlobalNamespace {
class IExperimentModel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IExperimentData;
}
// Forward declare root types
namespace GlobalNamespace {
class NoExperimentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoExperimentModel);
// Type: ::NoExperimentModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4187))
// CS Name: ::NoExperimentModel*
class CORDL_TYPE NoExperimentModel : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IExperimentModel"
  constexpr operator ::GlobalNamespace::IExperimentModel*() noexcept;

  /// @brief Method IsEmployee addr 0x2323130 size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsEmployee();

  /// @brief Method IsInTest addr 0x2323198 size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData* data);

  static inline ::GlobalNamespace::NoExperimentModel* New_ctor();

  /// @brief Method .ctor addr 0x2323200 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoExperimentModel(NoExperimentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoExperimentModel(NoExperimentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoExperimentModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoExperimentModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoExperimentModel*, "", "NoExperimentModel");
