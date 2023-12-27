#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureType)
namespace System::Reflection {
class EventInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class Module;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
namespace System {
class Array;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System::Reflection {
class SignatureType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureType);
// Type: System.Reflection::SignatureType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2494))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3495))
// CS Name: ::System.Reflection::SignatureType*
class CORDL_TYPE SignatureType : public ::System::Type {
public:
  // Declarations
  __declspec(property(get = get_IsSignatureType)) bool IsSignatureType;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_GenericTypeArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericTypeArguments;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_ElementType))::System::Reflection::SignatureType* ElementType;

  __declspec(property(get = get_UnderlyingSystemType))::System::Type* UnderlyingSystemType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_AssemblyQualifiedName))::StringW AssemblyQualifiedName;

  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_DeclaringMethod))::System::Reflection::MethodBase* DeclaringMethod;

  __declspec(property(get = get_GenericParameterAttributes))::System::Reflection::GenericParameterAttributes GenericParameterAttributes;

  __declspec(property(get = get_GUID))::System::Guid GUID;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsSerializable)) bool IsSerializable;

  __declspec(property(get = get_TypeHandle))::System::RuntimeTypeHandle TypeHandle;

  /// @brief Method get_IsSignatureType addr 0x24ea9b8 size 0x8 virtual true final true
  inline bool get_IsSignatureType();

  /// @brief Method HasElementTypeImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool HasElementTypeImpl();

  /// @brief Method IsArrayImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsArrayImpl();

  /// @brief Method get_IsSZArray addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsVariableBoundArray();

  /// @brief Method IsByRefImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsPointerImpl();

  /// @brief Method get_IsGenericType addr 0x24ea9c0 size 0x40 virtual true final true
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsConstructedGenericType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsGenericParameter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericMethodParameter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_ContainsGenericParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_MemberType addr 0x24eaa00 size 0x8 virtual true final true
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method MakeArrayType addr 0x24eaa08 size 0x6c virtual true final true
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType addr 0x24eaa74 size 0xb4 virtual true final true
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType addr 0x24eab28 size 0x60 virtual true final true
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakePointerType addr 0x24eab88 size 0x60 virtual true final true
  inline ::System::Type* MakePointerType();

  /// @brief Method MakeGenericType addr 0x24eabe8 size 0x50 virtual true final true
  inline ::System::Type* MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method GetElementType addr 0x24eac38 size 0x10 virtual true final true
  inline ::System::Type* GetElementType();

  /// @brief Method GetArrayRank addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetArrayRank();

  /// @brief Method GetGenericTypeDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method get_GenericTypeArguments addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericTypeArguments();

  /// @brief Method GetGenericArguments addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method get_GenericParameterPosition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_ElementType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::SignatureType* get_ElementType();

  /// @brief Method get_UnderlyingSystemType addr 0x24eac48 size 0x4 virtual true final true
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Namespace();

  /// @brief Method get_FullName addr 0x24eac4c size 0x8 virtual true final true
  inline ::StringW get_FullName();

  /// @brief Method get_AssemblyQualifiedName addr 0x24eac54 size 0x8 virtual true final true
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_Assembly addr 0x24eac5c size 0x50 virtual true final true
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_Module addr 0x24eacac size 0x50 virtual true final true
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_ReflectedType addr 0x24eacfc size 0x50 virtual true final true
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_BaseType addr 0x24ead4c size 0x50 virtual true final true
  inline ::System::Type* get_BaseType();

  /// @brief Method GetInterfaces addr 0x24ead9c size 0x50 virtual true final true
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method IsAssignableFrom addr 0x24eadec size 0x50 virtual true final true
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method get_MetadataToken addr 0x24eae3c size 0x50 virtual true final true
  inline int32_t get_MetadataToken();

  /// @brief Method get_DeclaringType addr 0x24eae8c size 0x50 virtual true final true
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_DeclaringMethod addr 0x24eaedc size 0x50 virtual true final true
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method GetGenericParameterConstraints addr 0x24eaf2c size 0x50 virtual true final true
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericParameterConstraints();

  /// @brief Method get_GenericParameterAttributes addr 0x24eaf7c size 0x50 virtual true final true
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method IsEnumDefined addr 0x24eafcc size 0x50 virtual true final true
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method GetEnumName addr 0x24eb01c size 0x50 virtual true final true
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames addr 0x24eb06c size 0x50 virtual true final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnumNames();

  /// @brief Method GetEnumUnderlyingType addr 0x24eb0bc size 0x50 virtual true final true
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues addr 0x24eb10c size 0x50 virtual true final true
  inline ::System::Array* GetEnumValues();

  /// @brief Method get_GUID addr 0x24eb15c size 0x50 virtual true final true
  inline ::System::Guid get_GUID();

  /// @brief Method GetTypeCodeImpl addr 0x24eb1ac size 0x50 virtual true final true
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method GetAttributeFlagsImpl addr 0x24eb1fc size 0x50 virtual true final true
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetConstructors addr 0x24eb24c size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvent addr 0x24eb29c size 0x50 virtual true final true
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents addr 0x24eb2ec size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField addr 0x24eb33c size 0x50 virtual true final true
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields addr 0x24eb38c size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethods addr 0x24eb3dc size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType addr 0x24eb42c size 0x50 virtual true final true
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties addr 0x24eb47c size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method InvokeMember addr 0x24eb4cc size 0x50 virtual true final true
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParameters);

  /// @brief Method GetMethodImpl addr 0x24eb51c size 0x50 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetPropertyImpl addr 0x24eb56c size 0x50 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMember addr 0x24eb5bc size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMember addr 0x24eb60c size 0x50 virtual true final true
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                            ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes addr 0x24eb65c size 0x50 virtual true final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24eb6ac size 0x50 virtual true final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefined addr 0x24eb6fc size 0x50 virtual true final true
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetConstructorImpl addr 0x24eb74c size 0x50 virtual true final true
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method IsCOMObjectImpl addr 0x24eb79c size 0x50 virtual true final true
  inline bool IsCOMObjectImpl();

  /// @brief Method IsPrimitiveImpl addr 0x24eb7ec size 0x50 virtual true final true
  inline bool IsPrimitiveImpl();

  /// @brief Method IsContextfulImpl addr 0x24eb83c size 0x50 virtual true final true
  inline bool IsContextfulImpl();

  /// @brief Method get_IsEnum addr 0x24eb88c size 0x50 virtual true final true
  inline bool get_IsEnum();

  /// @brief Method IsEquivalentTo addr 0x24eb8dc size 0x50 virtual true final true
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method IsInstanceOfType addr 0x24eb92c size 0x50 virtual true final true
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsMarshalByRefImpl addr 0x24eb97c size 0x50 virtual true final true
  inline bool IsMarshalByRefImpl();

  /// @brief Method get_IsSerializable addr 0x24eb9cc size 0x50 virtual true final true
  inline bool get_IsSerializable();

  /// @brief Method IsSubclassOf addr 0x24eba1c size 0x50 virtual true final true
  inline bool IsSubclassOf(::System::Type* c);

  /// @brief Method IsValueTypeImpl addr 0x24eba6c size 0x50 virtual true final true
  inline bool IsValueTypeImpl();

  /// @brief Method get_TypeHandle addr 0x24ebabc size 0x50 virtual true final true
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  static inline ::System::Reflection::SignatureType* New_ctor();

  /// @brief Method .ctor addr 0x24ea264 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SignatureType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureType(SignatureType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureType(SignatureType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureType, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureType*, "System.Reflection", "SignatureType");
