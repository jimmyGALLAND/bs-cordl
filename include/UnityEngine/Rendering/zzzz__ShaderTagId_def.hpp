#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderTagId)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderTagId);
// Type: UnityEngine.Rendering::ShaderTagId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10356))
// CS Name: ::UnityEngine.Rendering::ShaderTagId
struct CORDL_TYPE ShaderTagId {
public:
  // Declarations
  __declspec(property(get = get_id, put = set_id)) int32_t id;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>*();

  /// @brief Method .ctor addr 0x2cedc88 size 0x20 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method get_id addr 0x2cedca8 size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method set_id addr 0x2cedcb0 size 0x8 virtual false final false
  inline void set_id(int32_t value);

  /// @brief Method Equals addr 0x2cedcb8 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2cedd30 size 0x10 virtual true final true
  inline bool Equals(::UnityEngine::Rendering::ShaderTagId other);

  /// @brief Method GetHashCode addr 0x2cedd40 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderTagId(int32_t m_Id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderTagId();

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderTagId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");
