#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncStateId)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct SyncStateId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SyncStateId);
// Type: ::SyncStateId
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12988))
// CS Name: ::SyncStateId
struct CORDL_TYPE SyncStateId {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SyncStateId>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::SyncStateId>*();

  /// @brief Method .ctor addr 0xe5ac3c size 0x8 virtual false final false
  inline void _ctor(uint8_t id);

  /// @brief Method Equals addr 0xe5ac44 size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::SyncStateId other);

  /// @brief Method Equals addr 0xe5ac54 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xe5accc size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0xe5acec size 0x20 virtual true final false
  inline ::StringW ToString();

  /// @brief Method op_Equality addr 0xe5ad0c size 0x10 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b);

  /// @brief Method op_Inequality addr 0xe5ad1c size 0x10 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b);

  /// @brief Method Increment addr 0xe5ad2c size 0x10 virtual false final false
  inline ::GlobalNamespace::SyncStateId Increment();

  /// @brief Method Before addr 0xe5ad3c size 0x2c virtual false final false
  inline bool Before(::GlobalNamespace::SyncStateId other);

  /// @brief Method Serialize addr 0xe59f00 size 0x24 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SerializeWithFlag addr 0xe59cb0 size 0x34 virtual false final false
  inline void SerializeWithFlag(::LiteNetLib::Utils::NetDataWriter* writer, bool flag);

  /// @brief Method Deserialize addr 0xe59f74 size 0x20 virtual false final false
  static inline ::GlobalNamespace::SyncStateId Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method DeserializeWithFlag addr 0xe59d4c size 0x2c virtual false final false
  static inline ::GlobalNamespace::SyncStateId DeserializeWithFlag(::LiteNetLib::Utils::NetDataReader* reader, ByRef<bool> flag);

  /// @brief Method CreateFromSerializedData addr 0xe5ad68 size 0x24 virtual true final true
  inline ::GlobalNamespace::SyncStateId CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "_id", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr SyncStateId(uint8_t _id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncStateId();

  /// @brief Field _id, offset: 0x0, size: 0x1, def value: None
  uint8_t _id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field kMaxValue offset 0xffffffff size 0x1
  static constexpr uint8_t kMaxValue{ static_cast<uint8_t>(0x80u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncStateId, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncStateId, "", "SyncStateId");
