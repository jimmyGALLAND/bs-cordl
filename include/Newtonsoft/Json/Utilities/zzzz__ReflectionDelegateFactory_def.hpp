#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionDelegateFactory)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Type;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
// Type: Newtonsoft.Json.Utilities::ReflectionDelegateFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11851))
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionDelegateFactory*
class CORDL_TYPE ReflectionDelegateFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CreateMethodCall addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* CreateMethodCall(::System::Reflection::MethodBase* method);

  /// @brief Method CreateParameterizedConstructor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* method);

  /// @brief Method CreateDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_1<T>* CreateDefaultConstructor(::System::Type* type);

  /// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::PropertyInfo* propertyInfo);

  static inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* New_ctor();

  /// @brief Method .ctor addr 0x265a4dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionDelegateFactory(ReflectionDelegateFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionDelegateFactory(ReflectionDelegateFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionDelegateFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
