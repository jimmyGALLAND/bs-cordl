#pragma once
// IWYU pragma private; include "GlobalNamespace/TaskExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskExtensions)
namespace GlobalNamespace {
struct __TaskExtensions___WaitAsyncInternal_d__3;
}
namespace GlobalNamespace {
template<typename T>
struct __TaskExtensions___WaitAsyncInternal_d__4_1;
}
namespace GlobalNamespace {
class __TaskExtensions____c__DisplayClass3_0;
}
namespace GlobalNamespace {
template<typename T>
class __TaskExtensions____c__DisplayClass4_0_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
namespace System::Threading::Tasks {
class Task;
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
// Forward declare root types
namespace GlobalNamespace {
class TaskExtensions;
}
namespace GlobalNamespace {
class __TaskExtensions____c__DisplayClass3_0;
}
namespace GlobalNamespace {
template<typename T>
class __TaskExtensions____c__DisplayClass4_0_1;
}
namespace GlobalNamespace {
struct __TaskExtensions___WaitAsyncInternal_d__3;
}
namespace GlobalNamespace {
template<typename T>
struct __TaskExtensions___WaitAsyncInternal_d__4_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TaskExtensions);
MARK_REF_PTR_T(::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__TaskExtensions____c__DisplayClass4_0_1);
MARK_VAL_T(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3);
MARK_GEN_VAL_T(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__4_1);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TaskExtensions::<>c__DisplayClass3_0*
class CORDL_TYPE __TaskExtensions____c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  tcs;

static inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0* New_ctor() ;

/// @brief Method <WaitAsyncInternal>b__0, addr 0x2254ad0, size 0x54, virtual false, abstract: false, final false
inline void _WaitAsyncInternal_b__0() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*> const& __cordl_internal_get_tcs() const;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x2254ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TaskExtensions____c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskExtensions____c__DisplayClass3_0(__TaskExtensions____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskExtensions____c__DisplayClass3_0(__TaskExtensions____c__DisplayClass3_0 const& ) = delete;

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  ___tcs;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0, ___cancellationToken) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::TaskExtensions::<>c__DisplayClass4_0`1<T>*
class CORDL_TYPE __TaskExtensions____c__DisplayClass4_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs;

static inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass4_0_1<T>* New_ctor() ;

/// @brief Method <WaitAsyncInternal>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _WaitAsyncInternal_b__0() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const& __cordl_internal_get_tcs() const;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __TaskExtensions____c__DisplayClass4_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass4_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskExtensions____c__DisplayClass4_0_1(__TaskExtensions____c__DisplayClass4_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass4_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskExtensions____c__DisplayClass4_0_1(__TaskExtensions____c__DisplayClass4_0_1 const& ) = delete;

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<T>*  ___tcs;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<WaitAsyncInternal>d__3
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TaskExtensions::<WaitAsyncInternal>d__3
struct CORDL_TYPE __TaskExtensions___WaitAsyncInternal_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2254b24, size 0x930, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2255454, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __TaskExtensions___WaitAsyncInternal_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr __TaskExtensions___WaitAsyncInternal_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationTokenRegistration  __7__wrap1, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field task, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x68, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, task) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __u__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, __u__3) == 0x68, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<WaitAsyncInternal>d__4`1
// SizeInfo { instance_size: 128, native_size: 144, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ::TaskExtensions::<WaitAsyncInternal>d__4`1<T>
struct CORDL_TYPE __TaskExtensions___WaitAsyncInternal_d__4_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __TaskExtensions___WaitAsyncInternal_d__4_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr __TaskExtensions___WaitAsyncInternal_d__4_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationTokenRegistration  __7__wrap1, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, T  __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<T>*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field task, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<T>*  task;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x58, size: 0x8, def value: None
 T  __7__wrap4;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<T>*>  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__2;

/// @brief Field <>u__3, offset: 0x70, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TaskExtensions*
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
// Declarations
using _WaitAsyncInternal_d__3 = ::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3;

template<typename T>
using _WaitAsyncInternal_d__4_1 = ::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__4_1<T>;

using __c__DisplayClass3_0 = ::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0;

template<typename T>
using __c__DisplayClass4_0_1 = ::GlobalNamespace::__TaskExtensions____c__DisplayClass4_0_1<T>;

/// @brief Method WaitAsync, addr 0x2254914, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitAsync(::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* WaitAsync(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitAsyncInternal, addr 0x22549ec, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitAsyncInternal(::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitAsyncInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* WaitAsyncInternal(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* WithCancellation(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions(TaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions(TaskExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TaskExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TaskExtensions*, "", "TaskExtensions");
NEED_NO_BOX(::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TaskExtensions____c__DisplayClass3_0*, "", "TaskExtensions/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__TaskExtensions____c__DisplayClass4_0_1, "", "TaskExtensions/<>c__DisplayClass4_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__3, "", "TaskExtensions/<WaitAsyncInternal>d__3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__TaskExtensions___WaitAsyncInternal_d__4_1, "", "TaskExtensions/<WaitAsyncInternal>d__4`1");
