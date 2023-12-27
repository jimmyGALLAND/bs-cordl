#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodInfo)
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Object;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Reflection {
class MethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MethodInfo);
// Type: System.Reflection::MethodInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3477))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3479))
// CS Name: ::System.Reflection::MethodInfo*
class CORDL_TYPE MethodInfo : public ::System::Reflection::MethodBase {
public:
  // Declarations
  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_ReturnParameter))::System::Reflection::ParameterInfo* ReturnParameter;

  __declspec(property(get = get_ReturnType))::System::Type* ReturnType;

  __declspec(property(get = get_GenericParameterCount)) int32_t GenericParameterCount;

  static inline ::System::Reflection::MethodInfo* New_ctor();

  /// @brief Method .ctor addr 0x24e88dc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_MemberType addr 0x24e88e4 size 0x8 virtual true final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_ReturnParameter addr 0x24e88ec size 0x28 virtual true final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType addr 0x24e8914 size 0x28 virtual true final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method GetGenericArguments addr 0x24e893c size 0x50 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition addr 0x24e898c size 0x50 virtual true final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method MakeGenericMethod addr 0x24e89dc size 0x50 virtual true final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method GetBaseDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method CreateDelegate addr 0x24e8a2c size 0x50 virtual true final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method Equals addr 0x24e8a7c size 0x8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x24e8a84 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x24e8238 size 0x2c virtual false final false
  static inline bool op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

  /// @brief Method op_Inequality addr 0x24e81fc size 0x3c virtual false final false
  static inline bool op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right);

  /// @brief Method get_GenericParameterCount addr 0x24e8a8c size 0x28 virtual true final false
  inline int32_t get_GenericParameterCount();

  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodInfo(MethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodInfo(MethodInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
