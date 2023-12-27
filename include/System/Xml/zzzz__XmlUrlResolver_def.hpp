#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUrlResolver)
namespace System::Xml {
class XmlDownloadManager;
}
namespace System {
class Uri;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net {
class ICredentials;
}
namespace System::Xml {
struct __XmlUrlResolver___GetEntityAsync_d__15;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Xml {
class XmlUrlResolver;
}
namespace System::Xml {
struct __XmlUrlResolver___GetEntityAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUrlResolver);
MARK_VAL_T(::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15);
// Type: ::<GetEntityAsync>d__15
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 2
// }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 899 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(11575)) CS Name: ::XmlUrlResolver::<GetEntityAsync>d__15
struct CORDL_TYPE __XmlUrlResolver___GetEntityAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x28a999c size 0x37c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x28a9d18 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "ofObjectToReturn", ty: "::System::Type*", modifiers: "",
  // def_value: None }, CppParam { name: "absoluteUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlUrlResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None
  // }]
  constexpr __XmlUrlResolver___GetEntityAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::System::Type* ofObjectToReturn,
                                                    ::System::Uri* absoluteUri, ::System::Xml::XmlUrlResolver* __4__this,
                                                    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlUrlResolver___GetEntityAsync_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field ofObjectToReturn, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ofObjectToReturn;

  /// @brief Field absoluteUri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* absoluteUri;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlUrlResolver* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15, 0x48>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlUrlResolver
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11574))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11576))
// CS Name: ::System.Xml::XmlUrlResolver*
class CORDL_TYPE XmlUrlResolver : public ::System::Xml::XmlResolver {
public:
  // Declarations
  using _GetEntityAsync_d__15 = ::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15;

  /// @brief Field _credentials, offset 0x10, size 0x8
  __declspec(property(get = __get__credentials, put = __set__credentials))::System::Net::ICredentials* _credentials;

  /// @brief Field _proxy, offset 0x18, size 0x8
  __declspec(property(get = __get__proxy, put = __set__proxy))::System::Net::IWebProxy* _proxy;

  /// @brief Field _cachePolicy, offset 0x20, size 0x8
  __declspec(property(get = __get__cachePolicy, put = __set__cachePolicy))::System::Net::Cache::RequestCachePolicy* _cachePolicy;

  /// @brief Field s_DownloadManager, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DownloadManager, put = setStaticF_s_DownloadManager))::System::Object* s_DownloadManager;

  constexpr ::System::Net::ICredentials*& __get__credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __get__credentials() const;

  constexpr void __set__credentials(::System::Net::ICredentials* value);

  constexpr ::System::Net::IWebProxy*& __get__proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __get__proxy() const;

  constexpr void __set__proxy(::System::Net::IWebProxy* value);

  constexpr ::System::Net::Cache::RequestCachePolicy*& __get__cachePolicy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& __get__cachePolicy() const;

  constexpr void __set__cachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  static inline void setStaticF_s_DownloadManager(::System::Object* value);

  static inline ::System::Object* getStaticF_s_DownloadManager();

  /// @brief Method get_DownloadManager addr 0x28a9634 size 0xd4 virtual false final false
  static inline ::System::Xml::XmlDownloadManager* get_DownloadManager();

  static inline ::System::Xml::XmlUrlResolver* New_ctor();

  /// @brief Method .ctor addr 0x28a9708 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetEntity addr 0x28a9710 size 0x17c virtual true final false
  inline ::System::Object* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  /// @brief Method ResolveUri addr 0x28a988c size 0x4 virtual true final false
  inline ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);

  /// @brief Method GetEntityAsync addr 0x28a9890 size 0x10c virtual true final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  // Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUrlResolver(XmlUrlResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUrlResolver(XmlUrlResolver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUrlResolver();

public:
  /// @brief Field _credentials, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ICredentials* ____credentials;

  /// @brief Field _proxy, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____proxy;

  /// @brief Field _cachePolicy, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* ____cachePolicy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUrlResolver, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUrlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUrlResolver*, "System.Xml", "XmlUrlResolver");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15, "System.Xml", "XmlUrlResolver/<GetEntityAsync>d__15");
