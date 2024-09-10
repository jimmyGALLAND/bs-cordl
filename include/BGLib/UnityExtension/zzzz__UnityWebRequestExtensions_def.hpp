#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/UnityWebRequestExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestExtensions)
namespace BGLib::UnityExtension {
struct __UnityWebRequestExtensions___SendWebRequestAsync_d__0;
}
namespace BGLib::UnityExtension {
class __UnityWebRequestExtensions____c__DisplayClass1_0;
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
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class UnityWebRequestExtensions;
}
namespace BGLib::UnityExtension {
class __UnityWebRequestExtensions____c__DisplayClass1_0;
}
namespace BGLib::UnityExtension {
struct __UnityWebRequestExtensions___SendWebRequestAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::UnityWebRequestExtensions);
MARK_REF_PTR_T(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0);
MARK_VAL_T(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::UnityWebRequestExtensions::<>c__DisplayClass1_0*
class CORDL_TYPE __UnityWebRequestExtensions____c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*  tcs;

/// @brief Field webRequestOperation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_webRequestOperation, put=__cordl_internal_set_webRequestOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  webRequestOperation;

static inline ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0* New_ctor() ;

/// @brief Method <GetAwaiter>g__SetResult|0, addr 0x226b05c, size 0xd4, virtual false, abstract: false, final false
inline void _GetAwaiter_g__SetResult_0(::UnityEngine::AsyncOperation*  _) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*& __cordl_internal_get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*> const& __cordl_internal_get_tcs() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_webRequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const& __cordl_internal_get_webRequestOperation() const;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*  value) ;

constexpr void __cordl_internal_set_webRequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

/// @brief Method .ctor, addr 0x226b054, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __UnityWebRequestExtensions____c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestExtensions____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnityWebRequestExtensions____c__DisplayClass1_0(__UnityWebRequestExtensions____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestExtensions____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnityWebRequestExtensions____c__DisplayClass1_0(__UnityWebRequestExtensions____c__DisplayClass1_0 const& ) = delete;

/// @brief Field webRequestOperation, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___webRequestOperation;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0, ___webRequestOperation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0, ___tcs) == 0x18, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension
// Type: ::<SendWebRequestAsync>d__0
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: ::UnityWebRequestExtensions::<SendWebRequestAsync>d__0
struct CORDL_TYPE __UnityWebRequestExtensions___SendWebRequestAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x226b130, size 0x83c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x226b96c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __UnityWebRequestExtensions___SendWebRequestAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_cancellationTokenRegistration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::UnityEngine::Networking::__UnityWebRequest__Result", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr __UnityWebRequestExtensions___SendWebRequestAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::__UnityWebRequest__Result>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::UnityEngine::Networking::UnityWebRequest*  request, ::System::Threading::CancellationTokenRegistration  _cancellationTokenRegistration_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>  __u__1, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, ::UnityEngine::Networking::__UnityWebRequest__Result  __7__wrap4, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Networking::__UnityWebRequest__Result>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field <cancellationTokenRegistration>5__2, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  _cancellationTokenRegistration_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>  __u__1;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x58, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::Networking::__UnityWebRequest__Result  __7__wrap4;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, 0x70>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, _cancellationTokenRegistration_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __7__wrap3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __7__wrap4) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, __u__2) == 0x60, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension
// Type: BGLib.UnityExtension::UnityWebRequestExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::BGLib.UnityExtension::UnityWebRequestExtensions*
class CORDL_TYPE UnityWebRequestExtensions : public ::System::Object {
public:
// Declarations
using _SendWebRequestAsync_d__0 = ::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0;

using __c__DisplayClass1_0 = ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0;

/// @brief Method GetAwaiter, addr 0x226aadc, size 0x18c, virtual false, abstract: false, final false
static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  webRequestOperation) ;

/// @brief Method SendWebRequestAsync, addr 0x226af64, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::Networking::__UnityWebRequest__Result>* SendWebRequestAsync(::UnityEngine::Networking::UnityWebRequest*  request, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestExtensions(UnityWebRequestExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestExtensions(UnityWebRequestExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::UnityWebRequestExtensions, 0x10>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::UnityWebRequestExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::UnityWebRequestExtensions*, "BGLib.UnityExtension", "UnityWebRequestExtensions");
NEED_NO_BOX(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass1_0*, "BGLib.UnityExtension", "UnityWebRequestExtensions/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__UnityWebRequestExtensions___SendWebRequestAsync_d__0, "BGLib.UnityExtension", "UnityWebRequestExtensions/<SendWebRequestAsync>d__0");
