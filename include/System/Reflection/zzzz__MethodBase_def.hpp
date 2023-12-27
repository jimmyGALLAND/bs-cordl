#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodBase)
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Reflection {
class MethodBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MethodBase);
// Type: System.Reflection::MethodBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3477))
// CS Name: ::System.Reflection::MethodBase*
class CORDL_TYPE MethodBase : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_CallingConvention))::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsConstructor)) bool IsConstructor;

  __declspec(property(get = get_IsStatic)) bool IsStatic;

  __declspec(property(get = get_IsVirtual)) bool IsVirtual;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_IsGenericMethod)) bool IsGenericMethod;

  __declspec(property(get = get_IsGenericMethodDefinition)) bool IsGenericMethodDefinition;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_MethodHandle))::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  static inline ::System::Reflection::MethodBase* New_ctor();

  /// @brief Method .ctor addr 0x24e60c0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method GetMethodImplementationFlags addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method get_CallingConvention addr 0x24e8018 size 0x8 virtual true final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_IsAbstract addr 0x24e8020 size 0x20 virtual true final true
  inline bool get_IsAbstract();

  /// @brief Method get_IsConstructor addr 0x24e8040 size 0xa4 virtual true final true
  inline bool get_IsConstructor();

  /// @brief Method get_IsStatic addr 0x24e80e4 size 0x20 virtual true final true
  inline bool get_IsStatic();

  /// @brief Method get_IsVirtual addr 0x24e8104 size 0x20 virtual true final true
  inline bool get_IsVirtual();

  /// @brief Method get_IsPublic addr 0x24e8124 size 0x28 virtual true final true
  inline bool get_IsPublic();

  /// @brief Method get_IsGenericMethod addr 0x24e814c size 0x8 virtual true final false
  inline bool get_IsGenericMethod();

  /// @brief Method get_IsGenericMethodDefinition addr 0x24e8154 size 0x8 virtual true final false
  inline bool get_IsGenericMethodDefinition();

  /// @brief Method GetGenericArguments addr 0x24e815c size 0x50 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method get_ContainsGenericParameters addr 0x24e81ac size 0x8 virtual true final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method Invoke addr 0x24e81b4 size 0x20 virtual true final true
  inline ::System::Object* Invoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method get_MethodHandle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_IsSecurityCritical addr 0x24e81d4 size 0x28 virtual true final false
  inline bool get_IsSecurityCritical();

  /// @brief Method Equals addr 0x24e60f8 size 0x8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x24e6108 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x24e7de4 size 0x1b4 virtual false final false
  static inline bool op_Equality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right);

  /// @brief Method op_Inequality addr 0x24e7dcc size 0x18 virtual false final false
  static inline bool op_Inequality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right);

  /// @brief Method GetParametersInternal addr 0x24e8264 size 0x10 virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetParametersCount addr 0x24e8274 size 0x28 virtual true final false
  inline int32_t GetParametersCount();

  /// @brief Method FormatNameAndSig addr 0x24e829c size 0x12c virtual true final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetParameterTypes addr 0x24e85b4 size 0x108 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetParameterTypes();

  /// @brief Method GetParametersNoCopy addr 0x24e86bc size 0x10 virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersNoCopy();

  /// @brief Method GetMethodFromHandle addr 0x24e86cc size 0x208 virtual false final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle handle);

  /// @brief Method ConstructParameters addr 0x24e83c8 size 0x1ec virtual false final false
  static inline ::StringW ConstructParameters(::ArrayW<::System::Type*, ::Array<::System::Type*>*> parameterTypes, ::System::Reflection::CallingConventions callingConvention, bool serialization);

  // Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodBase(MethodBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodBase(MethodBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodBase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodBase, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MethodBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodBase*, "System.Reflection", "MethodBase");
