#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureConstructedGenericType)
namespace System {
class Type;
}
namespace System::Reflection {
class SignatureType;
}
// Forward declare root types
namespace System::Reflection {
class SignatureConstructedGenericType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureConstructedGenericType);
// Type: System.Reflection::SignatureConstructedGenericType
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3495))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3492))
// CS Name: ::System.Reflection::SignatureConstructedGenericType*
class CORDL_TYPE SignatureConstructedGenericType : public ::System::Reflection::SignatureType {
public:
  // Declarations
  /// @brief Field _genericTypeDefinition, offset 0x18, size 0x8
  __declspec(property(get = __get__genericTypeDefinition, put = __set__genericTypeDefinition))::System::Type* _genericTypeDefinition;

  /// @brief Field _genericTypeArguments, offset 0x20, size 0x8
  __declspec(property(get = __get__genericTypeArguments, put = __set__genericTypeArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _genericTypeArguments;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_ElementType))::System::Reflection::SignatureType* ElementType;

  __declspec(property(get = get_GenericTypeArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericTypeArguments;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  constexpr ::System::Type*& __get__genericTypeDefinition();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__genericTypeDefinition() const;

  constexpr void __set__genericTypeDefinition(::System::Type* value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get__genericTypeArguments();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get__genericTypeArguments() const;

  constexpr void __set__genericTypeArguments(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::System::Reflection::SignatureConstructedGenericType* New_ctor(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method .ctor addr 0x24ea0c0 size 0x1a4 virtual false final false
  inline void _ctor(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method get_IsGenericTypeDefinition addr 0x24ea2bc size 0x8 virtual true final true
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method HasElementTypeImpl addr 0x24ea2c4 size 0x8 virtual true final true
  inline bool HasElementTypeImpl();

  /// @brief Method IsArrayImpl addr 0x24ea2cc size 0x8 virtual true final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl addr 0x24ea2d4 size 0x8 virtual true final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl addr 0x24ea2dc size 0x8 virtual true final true
  inline bool IsPointerImpl();

  /// @brief Method get_IsSZArray addr 0x24ea2e4 size 0x8 virtual true final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray addr 0x24ea2ec size 0x8 virtual true final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_IsConstructedGenericType addr 0x24ea2f4 size 0x8 virtual true final true
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsGenericParameter addr 0x24ea2fc size 0x8 virtual true final true
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericMethodParameter addr 0x24ea304 size 0x8 virtual true final true
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_ContainsGenericParameters addr 0x24ea30c size 0x78 virtual true final true
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_ElementType addr 0x24ea384 size 0x8 virtual true final true
  inline ::System::Reflection::SignatureType* get_ElementType();

  /// @brief Method GetArrayRank addr 0x24ea38c size 0x50 virtual true final true
  inline int32_t GetArrayRank();

  /// @brief Method GetGenericTypeDefinition addr 0x24ea3dc size 0x8 virtual true final true
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetGenericArguments addr 0x24ea3e4 size 0x10 virtual true final true
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method get_GenericTypeArguments addr 0x24ea3f4 size 0x78 virtual true final true
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericTypeArguments();

  /// @brief Method get_GenericParameterPosition addr 0x24ea46c size 0x50 virtual true final true
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_Name addr 0x24ea4bc size 0x20 virtual true final true
  inline ::StringW get_Name();

  /// @brief Method get_Namespace addr 0x24ea4dc size 0x24 virtual true final true
  inline ::StringW get_Namespace();

  /// @brief Method ToString addr 0x24ea500 size 0x124 virtual true final true
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureConstructedGenericType(SignatureConstructedGenericType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureConstructedGenericType(SignatureConstructedGenericType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureConstructedGenericType();

public:
  /// @brief Field _genericTypeDefinition, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____genericTypeDefinition;

  /// @brief Field _genericTypeArguments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____genericTypeArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureConstructedGenericType, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureConstructedGenericType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureConstructedGenericType*, "System.Reflection", "SignatureConstructedGenericType");
