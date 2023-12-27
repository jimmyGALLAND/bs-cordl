#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransparentProxy)
namespace System {
class RuntimeType;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class TransparentProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::TransparentProxy);
// Type: System.Runtime.Remoting.Proxies::TransparentProxy
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2229)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3087))
// CS Name: ::System.Runtime.Remoting.Proxies::TransparentProxy*
class CORDL_TYPE TransparentProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rp, offset 0x10, size 0x8
  __declspec(property(get = __get__rp, put = __set__rp))::System::Runtime::Remoting::Proxies::RealProxy* _rp;

  /// @brief Field _class, offset 0x18, size 0x8
  __declspec(property(get = __get__class, put = __set__class))::Mono::RuntimeRemoteClassHandle _class;

  /// @brief Field _custom_type_info, offset 0x20, size 0x1
  __declspec(property(get = __get__custom_type_info, put = __set__custom_type_info)) bool _custom_type_info;

  __declspec(property(get = get_IsContextBoundObject)) bool IsContextBoundObject;

  __declspec(property(get = get_TargetContext))::System::Runtime::Remoting::Contexts::Context* TargetContext;

  constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& __get__rp();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Proxies::RealProxy*> const& __get__rp() const;

  constexpr void __set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value);

  constexpr ::Mono::RuntimeRemoteClassHandle& __get__class();

  constexpr ::Mono::RuntimeRemoteClassHandle const& __get__class() const;

  constexpr void __set__class(::Mono::RuntimeRemoteClassHandle value);

  constexpr bool& __get__custom_type_info();

  constexpr bool const& __get__custom_type_info() const;

  constexpr void __set__custom_type_info(bool value);

  /// @brief Method GetProxyType addr 0x2496560 size 0xd0 virtual false final false
  inline ::System::RuntimeType* GetProxyType();

  /// @brief Method get_IsContextBoundObject addr 0x2496630 size 0x1c virtual false final false
  inline bool get_IsContextBoundObject();

  /// @brief Method get_TargetContext addr 0x249664c size 0x1c virtual false final false
  inline ::System::Runtime::Remoting::Contexts::Context* get_TargetContext();

  /// @brief Method InCurrentContext addr 0x2496668 size 0x40 virtual false final false
  inline bool InCurrentContext();

  /// @brief Method LoadRemoteFieldNew addr 0x24966a8 size 0x2d8 virtual false final false
  inline ::System::Object* LoadRemoteFieldNew(void* classPtr, void* fieldPtr);

  /// @brief Method StoreRemoteField addr 0x249738c size 0x2d8 virtual false final false
  inline void StoreRemoteField(void* classPtr, void* fieldPtr, ::System::Object* arg);

  static inline ::System::Runtime::Remoting::Proxies::TransparentProxy* New_ctor();

  /// @brief Method .ctor addr 0x2497664 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransparentProxy(TransparentProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransparentProxy(TransparentProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransparentProxy();

public:
  /// @brief Field _rp, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Proxies::RealProxy* ____rp;

  /// @brief Field _class, offset: 0x18, size: 0x8, def value: None
  ::Mono::RuntimeRemoteClassHandle ____class;

  /// @brief Field _custom_type_info, offset: 0x20, size: 0x1, def value: None
  bool ____custom_type_info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::TransparentProxy, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::TransparentProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::TransparentProxy*, "System.Runtime.Remoting.Proxies", "TransparentProxy");
