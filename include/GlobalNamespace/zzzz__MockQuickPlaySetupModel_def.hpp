#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockQuickPlaySetupModel)
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MockQuickPlaySetupModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockQuickPlaySetupModel);
// Type: ::MockQuickPlaySetupModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5187))
// CS Name: ::MockQuickPlaySetupModel*
class CORDL_TYPE MockQuickPlaySetupModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _quickPlaySetupData, offset 0x10, size 0x8
  __declspec(property(get = __get__quickPlaySetupData, put = __set__quickPlaySetupData))::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  /// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept;

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __get__quickPlaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& __get__quickPlaySetupData() const;

  constexpr void __set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  /// @brief Method GetQuickPlaySetupAsync addr 0x22444f0 size 0x70 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockQuickPlaySetupModel* New_ctor();

  /// @brief Method .ctor addr 0x2244560 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockQuickPlaySetupModel(MockQuickPlaySetupModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockQuickPlaySetupModel(MockQuickPlaySetupModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockQuickPlaySetupModel();

public:
  /// @brief Field _quickPlaySetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData* ____quickPlaySetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockQuickPlaySetupModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockQuickPlaySetupModel*, "", "MockQuickPlaySetupModel");
