#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorMessage)
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ErrorMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ErrorMessage);
// Type: System.Runtime.Remoting.Messaging::ErrorMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3164))
// CS Name: ::System.Runtime.Remoting.Messaging::ErrorMessage*
class CORDL_TYPE ErrorMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field _uri, offset 0x10, size 0x8
  __declspec(property(get = __get__uri, put = __set__uri))::StringW _uri;

  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_MethodBase))::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName))::StringW MethodName;

  __declspec(property(get = get_MethodSignature))::System::Object* MethodSignature;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_Uri))::StringW Uri;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  constexpr ::StringW& __get__uri();

  constexpr ::StringW const& __get__uri() const;

  constexpr void __set__uri(::StringW value);

  static inline ::System::Runtime::Remoting::Messaging::ErrorMessage* New_ctor();

  /// @brief Method .ctor addr 0x24a33ac size 0x50 virtual false final false
  inline void _ctor();

  /// @brief Method get_ArgCount addr 0x24ad5c8 size 0x8 virtual true final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args addr 0x24ad5d0 size 0x8 virtual true final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_MethodBase addr 0x24ad5d8 size 0x8 virtual true final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName addr 0x24ad5e0 size 0x40 virtual true final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature addr 0x24ad620 size 0x8 virtual true final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_Properties addr 0x24ad628 size 0x8 virtual true final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_TypeName addr 0x24ad630 size 0x40 virtual true final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri addr 0x24ad670 size 0x8 virtual true final true
  inline ::StringW get_Uri();

  /// @brief Method GetArg addr 0x24ad678 size 0x8 virtual true final true
  inline ::System::Object* GetArg(int32_t arg_num);

  /// @brief Method get_LogicalCallContext addr 0x24ad680 size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  // Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorMessage(ErrorMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorMessage(ErrorMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorMessage();

public:
  /// @brief Field _uri, offset: 0x10, size: 0x8, def value: None
  ::StringW ____uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ErrorMessage, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ErrorMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ErrorMessage*, "System.Runtime.Remoting.Messaging", "ErrorMessage");
