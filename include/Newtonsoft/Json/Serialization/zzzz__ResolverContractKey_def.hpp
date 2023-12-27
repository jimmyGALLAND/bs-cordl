#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolverContractKey)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::ResolverContractKey);
// Type: Newtonsoft.Json.Serialization::ResolverContractKey
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11919))
// CS Name: ::Newtonsoft.Json.Serialization::ResolverContractKey
struct CORDL_TYPE ResolverContractKey {
public:
  // Declarations
  /// @brief Method .ctor addr 0x266ecbc size 0x8 virtual false final false
  inline void _ctor(::System::Type* resolverType, ::System::Type* contractType);

  /// @brief Method GetHashCode addr 0x266ecc4 size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x266ed0c size 0x88 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x266ed94 size 0x24 virtual false final false
  inline bool Equals(::Newtonsoft::Json::Serialization::ResolverContractKey other);

  // Ctor Parameters [CppParam { name: "_resolverType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_contractType", ty: "::System::Type*", modifiers: "", def_value: None
  // }]
  constexpr ResolverContractKey(::System::Type* _resolverType, ::System::Type* _contractType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolverContractKey();

  /// @brief Field _resolverType, offset: 0x0, size: 0x8, def value: None
  ::System::Type* _resolverType;

  /// @brief Field _contractType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _contractType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ResolverContractKey, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ResolverContractKey, "Newtonsoft.Json.Serialization", "ResolverContractKey");
