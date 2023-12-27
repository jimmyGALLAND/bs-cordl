#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoPlatformInit)
namespace GlobalNamespace {
class IPlatformInit;
}
namespace Zenject {
class IInitializable;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPlatformInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoPlatformInit);
// Type: ::NoPlatformInit
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15981))
// CS Name: ::NoPlatformInit*
class CORDL_TYPE NoPlatformInit : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformInit"
  constexpr operator ::GlobalNamespace::IPlatformInit*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Initialize addr 0x27fddd0 size 0x4 virtual true final true
  inline void Initialize();

  /// @brief Method get_IsInitialized addr 0x27fddd4 size 0x8 virtual true final true
  inline bool get_IsInitialized();

  /// @brief Method InitializeAsync addr 0x27fdddc size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  static inline ::GlobalNamespace::NoPlatformInit* New_ctor();

  /// @brief Method .ctor addr 0x27fde44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoPlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPlatformInit(NoPlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPlatformInit(NoPlatformInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPlatformInit();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoPlatformInit, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoPlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPlatformInit*, "", "NoPlatformInit");
