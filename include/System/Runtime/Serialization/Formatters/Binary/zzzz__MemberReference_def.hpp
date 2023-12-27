#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemberReference)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MemberReference);
// Type: System.Runtime.Serialization.Formatters.Binary::MemberReference
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3272))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::MemberReference*
class CORDL_TYPE MemberReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field idRef, offset 0x10, size 0x4
  __declspec(property(get = __get_idRef, put = __set_idRef)) int32_t idRef;

  constexpr int32_t& __get_idRef();

  constexpr int32_t const& __get_idRef() const;

  constexpr void __set_idRef(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::MemberReference* New_ctor();

  /// @brief Method .ctor addr 0x24c336c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Set addr 0x24c3374 size 0x8 virtual false final false
  inline void Set(int32_t idRef);

  /// @brief Method Write addr 0x24c337c size 0x54 virtual true final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read addr 0x24c33d0 size 0x28 virtual true final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump addr 0x24c33f8 size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "MemberReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberReference(MemberReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberReference(MemberReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberReference();

public:
  /// @brief Field idRef, offset: 0x10, size: 0x4, def value: None
  int32_t ___idRef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MemberReference, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberReference*, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
