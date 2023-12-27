#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SByteEnumEqualityComparer_1)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class SByteEnumEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SByteEnumEqualityComparer_1);
// Type: System.Collections.Generic::SByteEnumEqualityComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3874)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 1672 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3875))
// CS Name: ::System.Collections.Generic::SByteEnumEqualityComparer`1<T>*
class CORDL_TYPE SByteEnumEqualityComparer_1 : public ::System::Collections::Generic::EnumEqualityComparer_1<T> {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* information,
                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode(T obj);

  // Ctor Parameters [CppParam { name: "", ty: "SByteEnumEqualityComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SByteEnumEqualityComparer_1(SByteEnumEqualityComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SByteEnumEqualityComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SByteEnumEqualityComparer_1(SByteEnumEqualityComparer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SByteEnumEqualityComparer_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SByteEnumEqualityComparer_1, "System.Collections.Generic", "SByteEnumEqualityComparer`1");
