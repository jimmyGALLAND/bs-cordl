#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConstructorBuilder)
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System {
class Object;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class ConstructorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::ConstructorBuilder);
// Type: System.Reflection.Emit::ConstructorBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3535))
// CS Name: ::System.Reflection.Emit::ConstructorBuilder*
class CORDL_TYPE ConstructorBuilder : public ::System::Reflection::ConstructorInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_MethodHandle))::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Method get_Attributes addr 0x24f98c4 size 0x40 virtual true final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_DeclaringType addr 0x24f9904 size 0x40 virtual true final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name addr 0x24f9944 size 0x40 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method GetParameters addr 0x24f9984 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetMethodImplementationFlags addr 0x24f99c4 size 0x40 virtual true final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method get_MethodHandle addr 0x24f9a04 size 0x40 virtual true final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method Invoke addr 0x24f9a44 size 0x40 virtual true final false
  inline ::System::Object* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                  ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined addr 0x24f9a84 size 0x40 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f9ac4 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f9b04 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method get_ReflectedType addr 0x24f9b44 size 0x40 virtual true final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method Invoke addr 0x24f9b84 size 0x40 virtual true final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  // Ctor Parameters [CppParam { name: "", ty: "ConstructorBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructorBuilder(ConstructorBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructorBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructorBuilder(ConstructorBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructorBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::ConstructorBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::ConstructorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ConstructorBuilder*, "System.Reflection.Emit", "ConstructorBuilder");
