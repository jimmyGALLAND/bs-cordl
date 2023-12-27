#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMockBeatmapDataProvider)
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMockBeatmapDataProvider);
// Type: ::IMockBeatmapDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15507))
// CS Name: ::IMockBeatmapDataProvider*
class CORDL_TYPE IMockBeatmapDataProvider {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetBeatmapData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GetBeatmapData(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IMockBeatmapDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMockBeatmapDataProvider(IMockBeatmapDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMockBeatmapDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMockBeatmapDataProvider(IMockBeatmapDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMockBeatmapDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMockBeatmapDataProvider*, "", "IMockBeatmapDataProvider");
