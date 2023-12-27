#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeTypeHandle)
namespace System::Reflection {
struct CorElementType;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
struct TypeAttributes;
}
// Forward declare root types
namespace System {
struct RuntimeTypeHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeTypeHandle);
// Type: System::RuntimeTypeHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2618))
// CS Name: ::System::RuntimeTypeHandle
struct CORDL_TYPE RuntimeTypeHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method .ctor addr 0x25ff87c size 0x8 virtual false final false
  inline void _ctor(void* val);

  /// @brief Method .ctor addr 0x25ff884 size 0x1c virtual false final false
  inline void _ctor(::System::RuntimeType* type);

  /// @brief Method .ctor addr 0x25ff8a0 size 0x1b4 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Value addr 0x25ffa54 size 0x8 virtual false final false
  inline void* get_Value();

  /// @brief Method GetObjectData addr 0x25ffa5c size 0x1b8 virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals addr 0x25ffc14 size 0xfc virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x25ffd10 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetAttributes addr 0x25ffd18 size 0x4 virtual false final false
  static inline ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);

  /// @brief Method GetMetadataToken addr 0x25ffd1c size 0x4 virtual false final false
  static inline int32_t GetMetadataToken(::System::RuntimeType* type);

  /// @brief Method GetToken addr 0x25ffd20 size 0x4 virtual false final false
  static inline int32_t GetToken(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition_impl addr 0x25ffd24 size 0x4 virtual false final false
  static inline ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition addr 0x25ffd28 size 0x4 virtual false final false
  static inline ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method IsPrimitive addr 0x25ffd2c size 0x3c virtual false final false
  static inline bool IsPrimitive(::System::RuntimeType* type);

  /// @brief Method IsByRef addr 0x25ffd6c size 0x1c virtual false final false
  static inline bool IsByRef(::System::RuntimeType* type);

  /// @brief Method IsPointer addr 0x25ffd88 size 0x1c virtual false final false
  static inline bool IsPointer(::System::RuntimeType* type);

  /// @brief Method IsArray addr 0x25ffda4 size 0x28 virtual false final false
  static inline bool IsArray(::System::RuntimeType* type);

  /// @brief Method IsSzArray addr 0x25ffdcc size 0x1c virtual false final false
  static inline bool IsSzArray(::System::RuntimeType* type);

  /// @brief Method HasElementType addr 0x25ffde8 size 0x3c virtual false final false
  static inline bool HasElementType(::System::RuntimeType* type);

  /// @brief Method GetCorElementType addr 0x25ffd68 size 0x4 virtual false final false
  static inline ::System::Reflection::CorElementType GetCorElementType(::System::RuntimeType* type);

  /// @brief Method HasInstantiation addr 0x25ffe24 size 0x4 virtual false final false
  static inline bool HasInstantiation(::System::RuntimeType* type);

  /// @brief Method IsComObject addr 0x25ffe28 size 0x4 virtual false final false
  static inline bool IsComObject(::System::RuntimeType* type);

  /// @brief Method IsInstanceOfType addr 0x25ffe2c size 0x4 virtual false final false
  static inline bool IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o);

  /// @brief Method HasReferences addr 0x25ffe30 size 0x4 virtual false final false
  static inline bool HasReferences(::System::RuntimeType* type);

  /// @brief Method IsComObject addr 0x25ffe34 size 0x10 virtual false final false
  static inline bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);

  /// @brief Method IsContextful addr 0x25ffe44 size 0x94 virtual false final false
  static inline bool IsContextful(::System::RuntimeType* type);

  /// @brief Method IsEquivalentTo addr 0x25ffed8 size 0x8 virtual false final false
  static inline bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);

  /// @brief Method IsInterface addr 0x25ffee0 size 0x20 virtual false final false
  static inline bool IsInterface(::System::RuntimeType* type);

  /// @brief Method GetArrayRank addr 0x25fff00 size 0x4 virtual false final false
  static inline int32_t GetArrayRank(::System::RuntimeType* type);

  /// @brief Method GetAssembly addr 0x25fff04 size 0x4 virtual false final false
  static inline ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);

  /// @brief Method GetElementType addr 0x25fff08 size 0x4 virtual false final false
  static inline ::System::RuntimeType* GetElementType(::System::RuntimeType* type);

  /// @brief Method GetModule addr 0x25fff0c size 0x4 virtual false final false
  static inline ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);

  /// @brief Method IsGenericVariable addr 0x25fff10 size 0x4 virtual false final false
  static inline bool IsGenericVariable(::System::RuntimeType* type);

  /// @brief Method GetBaseType addr 0x25fff14 size 0x4 virtual false final false
  static inline ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);

  /// @brief Method CanCastTo addr 0x25fff18 size 0x10 virtual false final false
  static inline bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);

  /// @brief Method type_is_assignable_from addr 0x25fff28 size 0x4 virtual false final false
  static inline bool type_is_assignable_from(::System::Type* a, ::System::Type* b);

  /// @brief Method IsGenericTypeDefinition addr 0x25fff2c size 0x4 virtual false final false
  static inline bool IsGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method GetGenericParameterInfo addr 0x25fff30 size 0x4 virtual false final false
  static inline void* GetGenericParameterInfo(::System::RuntimeType* type);

  /// @brief Method IsSubclassOf addr 0x25fff34 size 0x20 virtual false final false
  static inline bool IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType);

  /// @brief Method is_subclass_of addr 0x25fff54 size 0x4 virtual false final false
  static inline bool is_subclass_of(void* childType, void* baseType);

  /// @brief Method internal_from_name addr 0x25fff58 size 0x10 virtual false final false
  static inline ::System::RuntimeType* internal_from_name(::StringW name, ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly, bool throwOnError,
                                                          bool ignoreCase, bool reflectionOnly);

  /// @brief Method GetTypeByName addr 0x25fff68 size 0x368 virtual false final false
  static inline ::System::RuntimeType* GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                     bool loadTypeFromPartialName);

  // Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeTypeHandle(void* value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTypeHandle();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  void* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeTypeHandle, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
