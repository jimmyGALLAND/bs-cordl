#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamicMethod)
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Object;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class DynamicMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::DynamicMethod);
// Type: System.Reflection.Emit::DynamicMethod
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3536))
// CS Name: ::System.Reflection.Emit::DynamicMethod*
class CORDL_TYPE DynamicMethod : public ::System::Reflection::MethodInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_MethodHandle))::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Method get_Attributes addr 0x24f9bc4 size 0x40 virtual true final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_DeclaringType addr 0x24f9c04 size 0x40 virtual true final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name addr 0x24f9c44 size 0x40 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method GetParameters addr 0x24f9c84 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method get_MethodHandle addr 0x24f9cc4 size 0x40 virtual true final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_ReflectedType addr 0x24f9d04 size 0x40 virtual true final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method GetCustomAttributes addr 0x24f9d44 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f9d84 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetMethodImplementationFlags addr 0x24f9dc4 size 0x40 virtual true final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetBaseDefinition addr 0x24f9e04 size 0x40 virtual true final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method Invoke addr 0x24f9e44 size 0x40 virtual true final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined addr 0x24f9e84 size 0x40 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  // Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicMethod(DynamicMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicMethod(DynamicMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::DynamicMethod, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::DynamicMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::DynamicMethod*, "System.Reflection.Emit", "DynamicMethod");
