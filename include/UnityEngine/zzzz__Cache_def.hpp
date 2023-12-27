#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cache)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct Cache;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Cache);
// Type: UnityEngine::Cache
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10145))
// CS Name: ::UnityEngine::Cache
struct CORDL_TYPE Cache {
public:
  // Declarations
  __declspec(property(get = get_handle)) int32_t handle;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_path))::StringW path;

  __declspec(property(put = set_maximumAvailableStorageSpace)) int64_t maximumAvailableStorageSpace;

  __declspec(property(put = set_expirationDelay)) int32_t expirationDelay;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Cache>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Cache>*();

  /// @brief Method get_handle addr 0x2cc6538 size 0x8 virtual false final false
  inline int32_t get_handle();

  /// @brief Method GetHashCode addr 0x2cc6540 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2cc6548 size 0x78 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2cc65c0 size 0x10 virtual true final true
  inline bool Equals(::UnityEngine::Cache other);

  /// @brief Method get_valid addr 0x2cc6280 size 0x3c virtual false final false
  inline bool get_valid();

  /// @brief Method Cache_IsValid addr 0x2cc65d0 size 0x3c virtual false final false
  static inline bool Cache_IsValid(int32_t handle);

  /// @brief Method get_path addr 0x2cc660c size 0x3c virtual false final false
  inline ::StringW get_path();

  /// @brief Method Cache_GetPath addr 0x2cc6648 size 0x3c virtual false final false
  static inline ::StringW Cache_GetPath(int32_t handle);

  /// @brief Method set_maximumAvailableStorageSpace addr 0x2cc6684 size 0x44 virtual false final false
  inline void set_maximumAvailableStorageSpace(int64_t value);

  /// @brief Method Cache_SetMaximumDiskSpaceAvailable addr 0x2cc66c8 size 0x44 virtual false final false
  static inline void Cache_SetMaximumDiskSpaceAvailable(int32_t handle, int64_t value);

  /// @brief Method set_expirationDelay addr 0x2cc670c size 0x44 virtual false final false
  inline void set_expirationDelay(int32_t value);

  /// @brief Method Cache_SetExpirationDelay addr 0x2cc6750 size 0x44 virtual false final false
  static inline void Cache_SetExpirationDelay(int32_t handle, int32_t value);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cache(int32_t m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cache();

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cache, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cache, "UnityEngine", "Cache");
