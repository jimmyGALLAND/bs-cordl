#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionTunnel)
namespace System::Net {
struct __WebConnectionTunnel___Initialize_d__42;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System {
class Version;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
struct __WebConnectionTunnel___ReadHeaders_d__43;
}
namespace System::Net {
struct __WebConnectionTunnel__NtlmAuthState;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
struct __WebConnectionTunnel__NtlmAuthState;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct __WebConnectionTunnel___Initialize_d__42;
}
namespace System::Net {
struct __WebConnectionTunnel___ReadHeaders_d__43;
}
// Write type traits
MARK_VAL_T(::System::Net::__WebConnectionTunnel__NtlmAuthState);
MARK_REF_PTR_T(::System::Net::WebConnectionTunnel);
MARK_VAL_T(::System::Net::__WebConnectionTunnel___Initialize_d__42);
MARK_VAL_T(::System::Net::__WebConnectionTunnel___ReadHeaders_d__43);
// Type: ::NtlmAuthState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9221))
// CS Name: ::WebConnectionTunnel::NtlmAuthState
struct CORDL_TYPE __WebConnectionTunnel__NtlmAuthState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____WebConnectionTunnel__NtlmAuthState_Unwrapped
  enum struct ____WebConnectionTunnel__NtlmAuthState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Challenge = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____WebConnectionTunnel__NtlmAuthState_Unwrapped() const noexcept {
    return static_cast<____WebConnectionTunnel__NtlmAuthState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __WebConnectionTunnel__NtlmAuthState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnectionTunnel__NtlmAuthState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::__WebConnectionTunnel__NtlmAuthState const None;

  /// @brief Field Challenge value: static_cast<int32_t>(0x1)
  static ::System::Net::__WebConnectionTunnel__NtlmAuthState const Challenge;

  /// @brief Field Response value: static_cast<int32_t>(0x2)
  static ::System::Net::__WebConnectionTunnel__NtlmAuthState const Response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnectionTunnel__NtlmAuthState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Type: ::<Initialize>d__42
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2508)),
// TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(9091)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5332 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 871 }), TypeDefinitionIndex(TypeDefinitionIndex(3401))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9222)) CS
// Name: ::WebConnectionTunnel::<Initialize>d__42
struct CORDL_TYPE __WebConnectionTunnel___Initialize_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29e0940 size 0xdd4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29e1714 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value:
  // None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>",
  // modifiers: "", def_value: None }]
  constexpr __WebConnectionTunnel___Initialize_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnectionTunnel* __4__this,
                                                     ::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
                                                         ::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>
                                                         __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnectionTunnel___Initialize_d__42();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* __4__this;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <have_auth>5__2, offset: 0x38, size: 0x1, def value: None
  bool _have_auth_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>
      __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnectionTunnel___Initialize_d__42, 0x60>, "Size mismatch!");

} // namespace System::Net
// Type: ::<ReadHeaders>d__43
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5332 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(9091)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2508)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 871 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(9223)) CS Name: ::WebConnectionTunnel::<ReadHeaders>d__43
struct CORDL_TYPE __WebConnectionTunnel___ReadHeaders_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29e1720 size 0x7bc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29e1edc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None }, CppParam { name: "_retBuffer_5__2", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__4", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __WebConnectionTunnel___ReadHeaders_d__43(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> _retBuffer_5__2,
      int32_t _status_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4, ::System::IO::MemoryStream* _ms_5__5,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnectionTunnel___ReadHeaders_d__43();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* __4__this;

  /// @brief Field <retBuffer>5__2, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _retBuffer_5__2;

  /// @brief Field <status>5__3, offset: 0x40, size: 0x4, def value: None
  int32_t _status_5__3;

  /// @brief Field <buffer>5__4, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4;

  /// @brief Field <ms>5__5, offset: 0x50, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__5;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnectionTunnel___ReadHeaders_d__43, 0x68>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::WebConnectionTunnel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9221))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9224))
// CS Name: ::System.Net::WebConnectionTunnel*
class CORDL_TYPE WebConnectionTunnel : public ::System::Object {
public:
  // Declarations
  using _ReadHeaders_d__43 = ::System::Net::__WebConnectionTunnel___ReadHeaders_d__43;

  using _Initialize_d__42 = ::System::Net::__WebConnectionTunnel___Initialize_d__42;

  using NtlmAuthState = ::System::Net::__WebConnectionTunnel__NtlmAuthState;

  /// @brief Field <Request>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Request_k__BackingField, put = __set__Request_k__BackingField))::System::Net::HttpWebRequest* _Request_k__BackingField;

  /// @brief Field <ConnectUri>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ConnectUri_k__BackingField, put = __set__ConnectUri_k__BackingField))::System::Uri* _ConnectUri_k__BackingField;

  /// @brief Field connectRequest, offset 0x20, size 0x8
  __declspec(property(get = __get_connectRequest, put = __set_connectRequest))::System::Net::HttpWebRequest* connectRequest;

  /// @brief Field ntlmAuthState, offset 0x28, size 0x4
  __declspec(property(get = __get_ntlmAuthState, put = __set_ntlmAuthState))::System::Net::__WebConnectionTunnel__NtlmAuthState ntlmAuthState;

  /// @brief Field <Success>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __get__Success_k__BackingField, put = __set__Success_k__BackingField)) bool _Success_k__BackingField;

  /// @brief Field <CloseConnection>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __get__CloseConnection_k__BackingField, put = __set__CloseConnection_k__BackingField)) bool _CloseConnection_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__StatusCode_k__BackingField, put = __set__StatusCode_k__BackingField)) int32_t _StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__StatusDescription_k__BackingField, put = __set__StatusDescription_k__BackingField))::StringW _StatusDescription_k__BackingField;

  /// @brief Field <Challenge>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__Challenge_k__BackingField, put = __set__Challenge_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _Challenge_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__Headers_k__BackingField, put = __set__Headers_k__BackingField))::System::Net::WebHeaderCollection* _Headers_k__BackingField;

  /// @brief Field <ProxyVersion>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__ProxyVersion_k__BackingField, put = __set__ProxyVersion_k__BackingField))::System::Version* _ProxyVersion_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__Data_k__BackingField, put = __set__Data_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _Data_k__BackingField;

  __declspec(property(get = get_Request))::System::Net::HttpWebRequest* Request;

  __declspec(property(get = get_ConnectUri))::System::Uri* ConnectUri;

  __declspec(property(get = get_Success, put = set_Success)) bool Success;

  __declspec(property(get = get_CloseConnection, put = set_CloseConnection)) bool CloseConnection;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  __declspec(property(put = set_StatusDescription))::StringW StatusDescription;

  __declspec(property(get = get_Challenge, put = set_Challenge))::ArrayW<::StringW, ::Array<::StringW>*> Challenge;

  __declspec(property(get = get_Headers, put = set_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ProxyVersion, put = set_ProxyVersion))::System::Version* ProxyVersion;

  __declspec(property(get = get_Data, put = set_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  constexpr ::System::Net::HttpWebRequest*& __get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& __get__Request_k__BackingField() const;

  constexpr void __set__Request_k__BackingField(::System::Net::HttpWebRequest* value);

  constexpr ::System::Uri*& __get__ConnectUri_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get__ConnectUri_k__BackingField() const;

  constexpr void __set__ConnectUri_k__BackingField(::System::Uri* value);

  constexpr ::System::Net::HttpWebRequest*& __get_connectRequest();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& __get_connectRequest() const;

  constexpr void __set_connectRequest(::System::Net::HttpWebRequest* value);

  constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState& __get_ntlmAuthState();

  constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState const& __get_ntlmAuthState() const;

  constexpr void __set_ntlmAuthState(::System::Net::__WebConnectionTunnel__NtlmAuthState value);

  constexpr bool& __get__Success_k__BackingField();

  constexpr bool const& __get__Success_k__BackingField() const;

  constexpr void __set__Success_k__BackingField(bool value);

  constexpr bool& __get__CloseConnection_k__BackingField();

  constexpr bool const& __get__CloseConnection_k__BackingField() const;

  constexpr void __set__CloseConnection_k__BackingField(bool value);

  constexpr int32_t& __get__StatusCode_k__BackingField();

  constexpr int32_t const& __get__StatusCode_k__BackingField() const;

  constexpr void __set__StatusCode_k__BackingField(int32_t value);

  constexpr ::StringW& __get__StatusDescription_k__BackingField();

  constexpr ::StringW const& __get__StatusDescription_k__BackingField() const;

  constexpr void __set__StatusDescription_k__BackingField(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__Challenge_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__Challenge_k__BackingField() const;

  constexpr void __set__Challenge_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Net::WebHeaderCollection*& __get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get__Headers_k__BackingField() const;

  constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value);

  constexpr ::System::Version*& __get__ProxyVersion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get__ProxyVersion_k__BackingField() const;

  constexpr void __set__ProxyVersion_k__BackingField(::System::Version* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__Data_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__Data_k__BackingField() const;

  constexpr void __set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Request addr 0x29e0714 size 0x8 virtual false final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Method get_ConnectUri addr 0x29e071c size 0x8 virtual false final false
  inline ::System::Uri* get_ConnectUri();

  static inline ::System::Net::WebConnectionTunnel* New_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri);

  /// @brief Method .ctor addr 0x29dee70 size 0x2c virtual false final false
  inline void _ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri);

  /// @brief Method get_Success addr 0x29e0724 size 0x8 virtual false final false
  inline bool get_Success();

  /// @brief Method set_Success addr 0x29e072c size 0xc virtual false final false
  inline void set_Success(bool value);

  /// @brief Method get_CloseConnection addr 0x29e0738 size 0x8 virtual false final false
  inline bool get_CloseConnection();

  /// @brief Method set_CloseConnection addr 0x29e0740 size 0xc virtual false final false
  inline void set_CloseConnection(bool value);

  /// @brief Method get_StatusCode addr 0x29e074c size 0x8 virtual false final false
  inline int32_t get_StatusCode();

  /// @brief Method set_StatusCode addr 0x29e0754 size 0x8 virtual false final false
  inline void set_StatusCode(int32_t value);

  /// @brief Method set_StatusDescription addr 0x29e075c size 0x8 virtual false final false
  inline void set_StatusDescription(::StringW value);

  /// @brief Method get_Challenge addr 0x29e0764 size 0x8 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Challenge();

  /// @brief Method set_Challenge addr 0x29e076c size 0x8 virtual false final false
  inline void set_Challenge(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_Headers addr 0x29e0774 size 0x8 virtual false final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method set_Headers addr 0x29e077c size 0x8 virtual false final false
  inline void set_Headers(::System::Net::WebHeaderCollection* value);

  /// @brief Method get_ProxyVersion addr 0x29e0784 size 0x8 virtual false final false
  inline ::System::Version* get_ProxyVersion();

  /// @brief Method set_ProxyVersion addr 0x29e078c size 0x8 virtual false final false
  inline void set_ProxyVersion(::System::Version* value);

  /// @brief Method get_Data addr 0x29e0794 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method set_Data addr 0x29e079c size 0x8 virtual false final false
  inline void set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method Initialize addr 0x29dee9c size 0xe4 virtual false final false
  inline ::System::Threading::Tasks::Task* Initialize(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadHeaders addr 0x29e07a4 size 0x108 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>*
  ReadHeaders(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushContents addr 0x29e08ac size 0x94 virtual false final false
  inline void FlushContents(::System::IO::Stream* stream, int32_t contentLength);

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnectionTunnel(WebConnectionTunnel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnectionTunnel(WebConnectionTunnel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionTunnel();

public:
  /// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ____Request_k__BackingField;

  /// @brief Field <ConnectUri>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ____ConnectUri_k__BackingField;

  /// @brief Field connectRequest, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ___connectRequest;

  /// @brief Field ntlmAuthState, offset: 0x28, size: 0x4, def value: None
  ::System::Net::__WebConnectionTunnel__NtlmAuthState ___ntlmAuthState;

  /// @brief Field <Success>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____Success_k__BackingField;

  /// @brief Field <CloseConnection>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool ____CloseConnection_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____StatusDescription_k__BackingField;

  /// @brief Field <Challenge>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____Challenge_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____Headers_k__BackingField;

  /// @brief Field <ProxyVersion>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Version* ____ProxyVersion_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionTunnel, 0x60>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnectionTunnel__NtlmAuthState, "System.Net", "WebConnectionTunnel/NtlmAuthState");
NEED_NO_BOX(::System::Net::WebConnectionTunnel);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel*, "System.Net", "WebConnectionTunnel");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnectionTunnel___Initialize_d__42, "System.Net", "WebConnectionTunnel/<Initialize>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnectionTunnel___ReadHeaders_d__43, "System.Net", "WebConnectionTunnel/<ReadHeaders>d__43");
