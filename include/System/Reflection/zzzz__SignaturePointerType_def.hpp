#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureHasElementType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignaturePointerType)
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignaturePointerType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignaturePointerType);
// Type: System.Reflection::SignaturePointerType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3493))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3494))
// CS Name: ::System.Reflection::SignaturePointerType*
class CORDL_TYPE SignaturePointerType : public ::System::Reflection::SignatureHasElementType {
public:
  // Declarations
  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Suffix))::StringW Suffix;

  static inline ::System::Reflection::SignaturePointerType* New_ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method .ctor addr 0x24ea8dc size 0x24 virtual false final false
  inline void _ctor(::System::Reflection::SignatureType* elementType);

  /// @brief Method IsArrayImpl addr 0x24ea900 size 0x8 virtual true final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl addr 0x24ea908 size 0x8 virtual true final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl addr 0x24ea910 size 0x8 virtual true final true
  inline bool IsPointerImpl();

  /// @brief Method get_IsSZArray addr 0x24ea918 size 0x8 virtual true final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray addr 0x24ea920 size 0x8 virtual true final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method GetArrayRank addr 0x24ea928 size 0x50 virtual true final true
  inline int32_t GetArrayRank();

  /// @brief Method get_Suffix addr 0x24ea978 size 0x40 virtual true final true
  inline ::StringW get_Suffix();

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePointerType(SignaturePointerType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePointerType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePointerType(SignaturePointerType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePointerType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignaturePointerType, 0x20>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignaturePointerType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignaturePointerType*, "System.Reflection", "SignaturePointerType");
