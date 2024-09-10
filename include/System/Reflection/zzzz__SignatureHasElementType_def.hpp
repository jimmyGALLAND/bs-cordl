#pragma once
// IWYU pragma private; include "System/Reflection/SignatureHasElementType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureHasElementType)
namespace System::Reflection {
class SignatureType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class SignatureHasElementType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureHasElementType);
// Type: System.Reflection::SignatureHasElementType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::SignatureHasElementType*
class CORDL_TYPE SignatureHasElementType : public ::System::Reflection::SignatureType {
public:
// Declarations
 __declspec(property(get=get_ContainsGenericParameters)) bool  ContainsGenericParameters;

 __declspec(property(get=get_ElementType)) ::System::Reflection::SignatureType*  ElementType;

 __declspec(property(get=get_GenericParameterPosition)) int32_t  GenericParameterPosition;

 __declspec(property(get=get_GenericTypeArguments)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  GenericTypeArguments;

 __declspec(property(get=get_IsConstructedGenericType)) bool  IsConstructedGenericType;

 __declspec(property(get=get_IsGenericMethodParameter)) bool  IsGenericMethodParameter;

 __declspec(property(get=get_IsGenericParameter)) bool  IsGenericParameter;

 __declspec(property(get=get_IsGenericTypeDefinition)) bool  IsGenericTypeDefinition;

 __declspec(property(get=get_IsSZArray)) bool  IsSZArray;

 __declspec(property(get=get_IsVariableBoundArray)) bool  IsVariableBoundArray;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_Suffix)) ::StringW  Suffix;

/// @brief Field _elementType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::System::Reflection::SignatureType*  _elementType;

/// @brief Method GetArrayRank, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetArrayRank() ;

/// @brief Method GetGenericArguments, addr 0x3c95b68, size 0x8c, virtual true, abstract: false, final true
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetGenericArguments() ;

/// @brief Method GetGenericTypeDefinition, addr 0x3c95b1c, size 0x4c, virtual true, abstract: false, final true
inline ::System::Type* GetGenericTypeDefinition() ;

/// @brief Method HasElementTypeImpl, addr 0x3c95ad0, size 0x8, virtual true, abstract: false, final true
inline bool HasElementTypeImpl() ;

/// @brief Method IsArrayImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsArrayImpl() ;

/// @brief Method IsByRefImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsByRefImpl() ;

/// @brief Method IsPointerImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsPointerImpl() ;

static inline ::System::Reflection::SignatureHasElementType* New_ctor(::System::Reflection::SignatureType*  elementType) ;

/// @brief Method ToString, addr 0x3c95d44, size 0x54, virtual true, abstract: false, final true
inline ::StringW ToString() ;

constexpr ::System::Reflection::SignatureType*& __cordl_internal_get__elementType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::SignatureType*> const& __cordl_internal_get__elementType() const;

constexpr void __cordl_internal_set__elementType(::System::Reflection::SignatureType*  value) ;

/// @brief Method .ctor, addr 0x3c9537c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::SignatureType*  elementType) ;

/// @brief Method get_ContainsGenericParameters, addr 0x3c95af0, size 0x24, virtual true, abstract: false, final true
inline bool get_ContainsGenericParameters() ;

/// @brief Method get_ElementType, addr 0x3c95b14, size 0x8, virtual true, abstract: false, final true
inline ::System::Reflection::SignatureType* get_ElementType() ;

/// @brief Method get_GenericParameterPosition, addr 0x3c95c80, size 0x4c, virtual true, abstract: false, final true
inline int32_t get_GenericParameterPosition() ;

/// @brief Method get_GenericTypeArguments, addr 0x3c95bf4, size 0x8c, virtual true, abstract: false, final true
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> get_GenericTypeArguments() ;

/// @brief Method get_IsConstructedGenericType, addr 0x3c95ad8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericMethodParameter, addr 0x3c95ae8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsGenericMethodParameter() ;

/// @brief Method get_IsGenericParameter, addr 0x3c95ae0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericTypeDefinition, addr 0x3c95ac8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsGenericTypeDefinition() ;

/// @brief Method get_IsSZArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsVariableBoundArray() ;

/// @brief Method get_Name, addr 0x3c95ccc, size 0x54, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0x3c95d20, size 0x24, virtual true, abstract: false, final true
inline ::StringW get_Namespace() ;

/// @brief Method get_Suffix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Suffix() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignatureHasElementType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignatureHasElementType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureHasElementType(SignatureHasElementType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureHasElementType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureHasElementType(SignatureHasElementType const& ) = delete;

/// @brief Field _elementType, offset: 0x18, size: 0x8, def value: None
 ::System::Reflection::SignatureType*  ____elementType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureHasElementType, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::SignatureHasElementType, ____elementType) == 0x18, "Offset mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureHasElementType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureHasElementType*, "System.Reflection", "SignatureHasElementType");
