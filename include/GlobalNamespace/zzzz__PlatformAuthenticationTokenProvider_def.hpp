#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformAuthenticationTokenProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformAuthenticationTokenProvider)
namespace BGNet::Core {
class IPlatformAccessTokenFetcher;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformAuthenticationTokenProvider);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19);
// Type: ::<GetAuthenticationToken>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformAuthenticationTokenProvider::<GetAuthenticationToken>d__16
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3fedb78, size 0x3f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3fedf6c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>  __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetXPlatformAccessToken>d__18
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformAuthenticationTokenProvider::<GetXPlatformAccessToken>d__18
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3fedfe8, size 0x3e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3fee3cc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "skipCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>  __t__builder, bool  skipCache, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>  __t__builder;

/// @brief Field skipCache, offset: 0x20, size: 0x1, def value: None
 bool  skipCache;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, skipCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlatformAuthenticationTokenProvider::<RequestXPlatformAccessToken>d__19
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3fee448, size 0x3d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3fee820, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>  __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __u__1) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlatformAuthenticationTokenProvider
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformAuthenticationTokenProvider*
class CORDL_TYPE PlatformAuthenticationTokenProvider : public ::System::Object {
public:
// Declarations
using _GetAuthenticationToken_d__16 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;

using _GetXPlatformAccessToken_d__18 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;

using _RequestXPlatformAccessToken_d__19 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;

/// @brief Field _cachedXPlatformAccessToken, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__cachedXPlatformAccessToken, put=__cordl_internal_set__cachedXPlatformAccessToken)) ::GlobalNamespace::XPlatformAccessTokenData  _cachedXPlatformAccessToken;

/// @brief Field _hashedUserId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hashedUserId, put=__cordl_internal_set__hashedUserId)) ::StringW  _hashedUserId;

/// @brief Field _platform, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__platform, put=__cordl_internal_set__platform)) ::GlobalNamespace::__AuthenticationToken__Platform  _platform;

/// @brief Field _platformUserModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformUserModel, put=__cordl_internal_set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel*  _platformUserModel;

/// @brief Field _userId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__userId, put=__cordl_internal_set__userId)) ::StringW  _userId;

/// @brief Field _userName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__userName, put=__cordl_internal_set__userName)) ::StringW  _userName;

/// @brief Field _xPlatformAccessTokenTask, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__xPlatformAccessTokenTask, put=__cordl_internal_set__xPlatformAccessTokenTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*  _xPlatformAccessTokenTask;

/// @brief Field _xPlatformTokenRetryDelayExpiration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__xPlatformTokenRetryDelayExpiration, put=__cordl_internal_set__xPlatformTokenRetryDelayExpiration)) float_t  _xPlatformTokenRetryDelayExpiration;

 __declspec(property(get=get_hashedUserId)) ::StringW  hashedUserId;

 __declspec(property(get=get_platform)) ::GlobalNamespace::__AuthenticationToken__Platform  platform;

 __declspec(property(get=get_userName)) ::StringW  userName;

/// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr operator  ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr operator  ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

/// @brief Method GetAuthenticationToken, addr 0x3fed820, size 0xf0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken() ;

/// @brief Method GetTokenPlatform, addr 0x3fed910, size 0x60, virtual true, abstract: false, final true
inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment  tokenPlatformEnvironment) ;

/// @brief Method GetXPlatformAccessToken, addr 0x3fed970, size 0x10c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken, bool  skipCache) ;

static inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* New_ctor(::GlobalNamespace::IPlatformUserModel*  platformUserModel, ::GlobalNamespace::UserInfo*  userInfo) ;

/// @brief Method RequestXPlatformAccessToken, addr 0x3feda7c, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* RequestXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::GlobalNamespace::XPlatformAccessTokenData const& __cordl_internal_get__cachedXPlatformAccessToken() const;

constexpr ::GlobalNamespace::XPlatformAccessTokenData& __cordl_internal_get__cachedXPlatformAccessToken() ;

constexpr ::StringW const& __cordl_internal_get__hashedUserId() const;

constexpr ::StringW& __cordl_internal_get__hashedUserId() ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __cordl_internal_get__platform() const;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __cordl_internal_get__platform() ;

constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __cordl_internal_get__platformUserModel() const;

constexpr ::StringW const& __cordl_internal_get__userId() const;

constexpr ::StringW& __cordl_internal_get__userId() ;

constexpr ::StringW const& __cordl_internal_get__userName() const;

constexpr ::StringW& __cordl_internal_get__userName() ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*& __cordl_internal_get__xPlatformAccessTokenTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*> const& __cordl_internal_get__xPlatformAccessTokenTask() const;

constexpr float_t const& __cordl_internal_get__xPlatformTokenRetryDelayExpiration() const;

constexpr float_t& __cordl_internal_get__xPlatformTokenRetryDelayExpiration() ;

constexpr void __cordl_internal_set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData  value) ;

constexpr void __cordl_internal_set__hashedUserId(::StringW  value) ;

constexpr void __cordl_internal_set__platform(::GlobalNamespace::__AuthenticationToken__Platform  value) ;

constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel*  value) ;

constexpr void __cordl_internal_set__userId(::StringW  value) ;

constexpr void __cordl_internal_set__userName(::StringW  value) ;

constexpr void __cordl_internal_set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*  value) ;

constexpr void __cordl_internal_set__xPlatformTokenRetryDelayExpiration(float_t  value) ;

/// @brief Method .ctor, addr 0x3fed730, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::IPlatformUserModel*  platformUserModel, ::GlobalNamespace::UserInfo*  userInfo) ;

/// @brief Method get_hashedUserId, addr 0x3fed718, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_hashedUserId() ;

/// @brief Method get_platform, addr 0x3fed728, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform() ;

/// @brief Method get_userName, addr 0x3fed720, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_userName() ;

/// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept;

/// @brief Convert to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr ::GlobalNamespace::IAuthenticationTokenProvider* i___GlobalNamespace__IAuthenticationTokenProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformAuthenticationTokenProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider const& ) = delete;

/// @brief Field _platformUserModel, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::IPlatformUserModel*  ____platformUserModel;

/// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____userId;

/// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____userName;

/// @brief Field _hashedUserId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____hashedUserId;

/// @brief Field _platform, offset: 0x30, size: 0x1, def value: None
 ::GlobalNamespace::__AuthenticationToken__Platform  ____platform;

/// @brief Field _cachedXPlatformAccessToken, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::XPlatformAccessTokenData  ____cachedXPlatformAccessToken;

/// @brief Field _xPlatformAccessTokenTask, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*  ____xPlatformAccessTokenTask;

/// @brief Field _xPlatformTokenRetryDelayExpiration, offset: 0x50, size: 0x4, def value: None
 float_t  ____xPlatformTokenRetryDelayExpiration;

/// @brief Field kXPlatformTokenRetryDelayLengthSeconds offset 0xffffffff size 0x4
static constexpr int32_t  kXPlatformTokenRetryDelayLengthSeconds{static_cast<int32_t>(0x1e)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platformUserModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____hashedUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____cachedXPlatformAccessToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____xPlatformAccessTokenTask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____xPlatformTokenRetryDelayExpiration) == 0x50, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider*, "", "PlatformAuthenticationTokenProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, "", "PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, "", "PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, "", "PlatformAuthenticationTokenProvider/<RequestXPlatformAccessToken>d__19");
