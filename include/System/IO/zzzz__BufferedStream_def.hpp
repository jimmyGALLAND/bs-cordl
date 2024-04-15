#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct __BufferedStream___CopyToAsyncCore_d__71;
}
namespace System::IO {
struct __BufferedStream___DisposeAsync_d__34;
}
namespace System::IO {
struct __BufferedStream___FlushAsyncInternal_d__38;
}
namespace System::IO {
struct __BufferedStream___FlushWriteAsync_d__42;
}
namespace System::IO {
struct __BufferedStream___ReadFromUnderlyingStreamAsync_d__51;
}
namespace System::IO {
struct __BufferedStream___WriteToUnderlyingStreamAsync_d__63;
}
namespace System::IO {
class __BufferedStream____c;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class BufferedStream;
}
namespace System::IO {
class __BufferedStream____c;
}
namespace System::IO {
struct __BufferedStream___CopyToAsyncCore_d__71;
}
namespace System::IO {
struct __BufferedStream___DisposeAsync_d__34;
}
namespace System::IO {
struct __BufferedStream___FlushAsyncInternal_d__38;
}
namespace System::IO {
struct __BufferedStream___FlushWriteAsync_d__42;
}
namespace System::IO {
struct __BufferedStream___ReadFromUnderlyingStreamAsync_d__51;
}
namespace System::IO {
struct __BufferedStream___WriteToUnderlyingStreamAsync_d__63;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::BufferedStream);
MARK_REF_PTR_T(::System::IO::__BufferedStream____c);
MARK_VAL_T(::System::IO::__BufferedStream___CopyToAsyncCore_d__71);
MARK_VAL_T(::System::IO::__BufferedStream___DisposeAsync_d__34);
MARK_VAL_T(::System::IO::__BufferedStream___FlushAsyncInternal_d__38);
MARK_VAL_T(::System::IO::__BufferedStream___FlushWriteAsync_d__42);
MARK_VAL_T(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51);
MARK_VAL_T(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::BufferedStream::<>c*
class CORDL_TYPE __BufferedStream____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::IO::__BufferedStream____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_1<::System::Threading::SemaphoreSlim*>* __9__10_0;

  static inline ::System::IO::__BufferedStream____c* New_ctor();

  /// @brief Method <LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0, addr 0x27b3ed0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Threading::SemaphoreSlim* _LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0();

  /// @brief Method .ctor, addr 0x27b3ec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::__BufferedStream____c* getStaticF___9();

  static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::System::IO::__BufferedStream____c* value);

  static inline void setStaticF___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BufferedStream____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BufferedStream____c(__BufferedStream____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BufferedStream____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BufferedStream____c(__BufferedStream____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream____c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Type: ::<DisposeAsync>d__34
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<DisposeAsync>d__34
struct CORDL_TYPE __BufferedStream___DisposeAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b3f34, size 0x5d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b4570, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___DisposeAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___DisposeAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                  ::System::Object* __7__wrap1, int32_t __7__wrap2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Object* __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
  int32_t __7__wrap2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___DisposeAsync_d__34, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___DisposeAsync_d__34, __u__2) == 0x50, "Offset mismatch!");

} // namespace System::IO
// Type: ::<FlushAsyncInternal>d__38
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<FlushAsyncInternal>d__38
struct CORDL_TYPE __BufferedStream___FlushAsyncInternal_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b457c, size 0x53c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b4ab8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___FlushAsyncInternal_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_sem_5__2", ty: "::System::Threading::SemaphoreSlim*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___FlushAsyncInternal_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _sem_5__2,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <sem>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* _sem_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___FlushAsyncInternal_d__38, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, _sem_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, __u__1) == 0x38, "Offset mismatch!");

} // namespace System::IO
// Type: ::<FlushWriteAsync>d__42
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<FlushWriteAsync>d__42
struct CORDL_TYPE __BufferedStream___FlushWriteAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b4ac4, size 0x47c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b4f40, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___FlushWriteAsync_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___FlushWriteAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                     ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___FlushWriteAsync_d__42, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___FlushWriteAsync_d__42, __u__2) == 0x40, "Offset mismatch!");

} // namespace System::IO
// Type: ::<ReadFromUnderlyingStreamAsync>d__51
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<ReadFromUnderlyingStreamAsync>d__51
struct CORDL_TYPE __BufferedStream___ReadFromUnderlyingStreamAsync_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b4f4c, size 0x844, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b5790, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___ReadFromUnderlyingStreamAsync_d__51();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __BufferedStream___ReadFromUnderlyingStreamAsync_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder,
                                                                   ::System::Threading::Tasks::Task* semaphoreLockTask, ::System::IO::BufferedStream* __4__this, ::System::Memory_1<uint8_t> buffer,
                                                                   int32_t bytesAlreadySatisfied, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t __7__wrap1,
                                                                   ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field semaphoreLockTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* semaphoreLockTask;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field buffer, offset: 0x38, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> buffer;

  /// @brief Field bytesAlreadySatisfied, offset: 0x48, size: 0x4, def value: None
  int32_t bytesAlreadySatisfied;

  /// @brief Field cancellationToken, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>7__wrap1, offset: 0x68, size: 0x4, def value: None
  int32_t __7__wrap1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, semaphoreLockTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, bytesAlreadySatisfied) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, cancellationToken) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __7__wrap1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, __u__2) == 0x70, "Offset mismatch!");

} // namespace System::IO
// Type: ::<WriteToUnderlyingStreamAsync>d__63
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<WriteToUnderlyingStreamAsync>d__63
struct CORDL_TYPE __BufferedStream___WriteToUnderlyingStreamAsync_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b57e8, size 0xfd4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b67bc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___WriteToUnderlyingStreamAsync_d__63();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::System::ReadOnlyMemory_1<uint8_t>",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___WriteToUnderlyingStreamAsync_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::System::Threading::Tasks::Task* semaphoreLockTask, ::System::IO::BufferedStream* __4__this,
                                                                  ::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field semaphoreLockTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* semaphoreLockTask;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x10, def value: None
  ::System::ReadOnlyMemory_1<uint8_t> buffer;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, semaphoreLockTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, __u__2) == 0x58, "Offset mismatch!");

} // namespace System::IO
// Type: ::<CopyToAsyncCore>d__71
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::BufferedStream::<CopyToAsyncCore>d__71
struct CORDL_TYPE __BufferedStream___CopyToAsyncCore_d__71 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27b67c8, size 0x6f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27b6eb8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BufferedStream___CopyToAsyncCore_d__71();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None
  // }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BufferedStream___CopyToAsyncCore_d__71(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::BufferedStream* __4__this,
                                                     ::System::IO::Stream* destination, ::System::Threading::CancellationToken cancellationToken, int32_t bufferSize,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::BufferedStream* __4__this;

  /// @brief Field destination, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* destination;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field bufferSize, offset: 0x38, size: 0x4, def value: None
  int32_t bufferSize;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__BufferedStream___CopyToAsyncCore_d__71, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, destination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, bufferSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, __u__2) == 0x50, "Offset mismatch!");

} // namespace System::IO
// Type: System.IO::BufferedStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::BufferedStream*
class CORDL_TYPE BufferedStream : public ::System::IO::Stream {
public:
  // Declarations
  using _CopyToAsyncCore_d__71 = ::System::IO::__BufferedStream___CopyToAsyncCore_d__71;

  using _DisposeAsync_d__34 = ::System::IO::__BufferedStream___DisposeAsync_d__34;

  using _FlushAsyncInternal_d__38 = ::System::IO::__BufferedStream___FlushAsyncInternal_d__38;

  using _FlushWriteAsync_d__42 = ::System::IO::__BufferedStream___FlushWriteAsync_d__42;

  using _ReadFromUnderlyingStreamAsync_d__51 = ::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51;

  using _WriteToUnderlyingStreamAsync_d__63 = ::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63;

  using __c = ::System::IO::__BufferedStream____c;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field _asyncActiveSemaphore, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncActiveSemaphore, put = __cordl_internal_set__asyncActiveSemaphore))::System::Threading::SemaphoreSlim* _asyncActiveSemaphore;

  /// @brief Field _buffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _bufferSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferSize, put = __cordl_internal_set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _lastSyncCompletedReadTask, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSyncCompletedReadTask,
                      put = __cordl_internal_set__lastSyncCompletedReadTask))::System::Threading::Tasks::Task_1<int32_t>* _lastSyncCompletedReadTask;

  /// @brief Field _readLen, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__readLen, put = __cordl_internal_set__readLen)) int32_t _readLen;

  /// @brief Field _readPos, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__readPos, put = __cordl_internal_set__readPos)) int32_t _readPos;

  /// @brief Field _stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream))::System::IO::Stream* _stream;

  /// @brief Field _writePos, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__writePos, put = __cordl_internal_set__writePos)) int32_t _writePos;

  /// @brief Method BeginRead, addr 0x27b29d0, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x27b38e4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method ClearReadBufferBeforeWrite, addr 0x27b1a68, size 0x94, virtual false, abstract: false, final false
  inline void ClearReadBufferBeforeWrite();

  /// @brief Method CopyTo, addr 0x27b3c1c, size 0x90, virtual true, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync, addr 0x27b3cac, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CopyToAsyncCore, addr 0x27b3d70, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsyncCore(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x27b16b0, size 0x13c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DisposeAsync, addr 0x27b1604, size 0xac, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method EndRead, addr 0x27b2a84, size 0x48, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x27b3998, size 0xc, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method EnsureBufferAllocated, addr 0x27b13c8, size 0x58, virtual false, abstract: false, final false
  inline void EnsureBufferAllocated();

  /// @brief Method EnsureCanRead, addr 0x27b120c, size 0x74, virtual false, abstract: false, final false
  inline void EnsureCanRead();

  /// @brief Method EnsureCanSeek, addr 0x27b1198, size 0x74, virtual false, abstract: false, final false
  inline void EnsureCanSeek();

  /// @brief Method EnsureCanWrite, addr 0x27b1280, size 0x74, virtual false, abstract: false, final false
  inline void EnsureCanWrite();

  /// @brief Method EnsureNotClosed, addr 0x27b1134, size 0x64, virtual false, abstract: false, final false
  inline void EnsureNotClosed();

  /// @brief Method EnsureShadowBufferAllocated, addr 0x27b12f4, size 0xd4, virtual false, abstract: false, final false
  inline void EnsureShadowBufferAllocated();

  /// @brief Method Flush, addr 0x27b17ec, size 0xbc, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x27b18ec, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushAsyncInternal, addr 0x27b198c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlushRead, addr 0x27b18a8, size 0x44, virtual false, abstract: false, final false
  inline void FlushRead();

  /// @brief Method FlushWrite, addr 0x27b14a4, size 0x50, virtual false, abstract: false, final false
  inline void FlushWrite();

  /// @brief Method FlushWriteAsync, addr 0x27b1afc, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushWriteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LastSyncCompletedReadTask, addr 0x27b21a0, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* LastSyncCompletedReadTask(int32_t val);

  /// @brief Method LazyEnsureAsyncActiveSemaphoreInitialized, addr 0x27b0e50, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::SemaphoreSlim* LazyEnsureAsyncActiveSemaphoreInitialized();

  static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream* stream);

  static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream* stream, int32_t bufferSize);

  /// @brief Method Read, addr 0x27b1e18, size 0x224, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Read, addr 0x27b203c, size 0x164, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadAsync, addr 0x27b2250, size 0x3c8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x27b2734, size 0x29c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x27b2acc, size 0x50, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadByteSlow, addr 0x27b2b1c, size 0x90, virtual false, abstract: false, final false
  inline int32_t ReadByteSlow();

  /// @brief Method ReadFromBuffer, addr 0x27b1bd8, size 0x64, virtual false, abstract: false, final false
  inline int32_t ReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method ReadFromBuffer, addr 0x27b1d7c, size 0x9c, virtual false, abstract: false, final false
  inline int32_t ReadFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ByRef<::System::Exception*> error);

  /// @brief Method ReadFromBuffer, addr 0x27b1c3c, size 0x140, virtual false, abstract: false, final false
  inline int32_t ReadFromBuffer(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadFromUnderlyingStreamAsync, addr 0x27b2618, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                                        int32_t bytesAlreadySatisfied, ::System::Threading::Tasks::Task* semaphoreLockTask);

  /// @brief Method Seek, addr 0x27b3a30, size 0x128, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x27b3b58, size 0xc4, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x27b2e24, size 0x30c, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x27b3130, size 0x2d0, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync, addr 0x27b3400, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x27b35d4, size 0x214, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x27b39a4, size 0x8c, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteToBuffer, addr 0x27b2c88, size 0x19c, virtual false, abstract: false, final false
  inline int32_t WriteToBuffer(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteToBuffer, addr 0x27b2bac, size 0xdc, virtual false, abstract: false, final false
  inline void WriteToBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> array, ByRef<int32_t> offset, ByRef<int32_t> count);

  /// @brief Method WriteToUnderlyingStreamAsync, addr 0x27b37e8, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Threading::Tasks::Task* semaphoreLockTask);

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__asyncActiveSemaphore();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get__asyncActiveSemaphore() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__bufferSize() const;

  constexpr int32_t& __cordl_internal_get__bufferSize();

  constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __cordl_internal_get__lastSyncCompletedReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& __cordl_internal_get__lastSyncCompletedReadTask() const;

  constexpr int32_t const& __cordl_internal_get__readLen() const;

  constexpr int32_t& __cordl_internal_get__readLen();

  constexpr int32_t const& __cordl_internal_get__readPos() const;

  constexpr int32_t& __cordl_internal_get__readPos();

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__stream() const;

  constexpr int32_t const& __cordl_internal_get__writePos() const;

  constexpr int32_t& __cordl_internal_get__writePos();

  constexpr void __cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__bufferSize(int32_t value);

  constexpr void __cordl_internal_set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  constexpr void __cordl_internal_set__readLen(int32_t value);

  constexpr void __cordl_internal_set__readPos(int32_t value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__writePos(int32_t value);

  /// @brief Method .ctor, addr 0x27b0f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x27b0f50, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, int32_t bufferSize);

  /// @brief Method get_CanRead, addr 0x27b1420, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x27b1450, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x27b1438, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x27b1468, size 0x3c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x27b14f4, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x27b1540, size 0xc4, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedStream(BufferedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedStream(BufferedStream const&) = delete;

  /// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _bufferSize, offset: 0x38, size: 0x4, def value: None
  int32_t ____bufferSize;

  /// @brief Field _readPos, offset: 0x3c, size: 0x4, def value: None
  int32_t ____readPos;

  /// @brief Field _readLen, offset: 0x40, size: 0x4, def value: None
  int32_t ____readLen;

  /// @brief Field _writePos, offset: 0x44, size: 0x4, def value: None
  int32_t ____writePos;

  /// @brief Field _lastSyncCompletedReadTask, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* ____lastSyncCompletedReadTask;

  /// @brief Field _asyncActiveSemaphore, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____asyncActiveSemaphore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::BufferedStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____bufferSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____readPos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____readLen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____writePos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____lastSyncCompletedReadTask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____asyncActiveSemaphore) == 0x50, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::BufferedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BufferedStream*, "System.IO", "BufferedStream");
NEED_NO_BOX(::System::IO::__BufferedStream____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream____c*, "System.IO", "BufferedStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___CopyToAsyncCore_d__71, "System.IO", "BufferedStream/<CopyToAsyncCore>d__71");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___DisposeAsync_d__34, "System.IO", "BufferedStream/<DisposeAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___FlushAsyncInternal_d__38, "System.IO", "BufferedStream/<FlushAsyncInternal>d__38");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___FlushWriteAsync_d__42, "System.IO", "BufferedStream/<FlushWriteAsync>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51, "System.IO", "BufferedStream/<ReadFromUnderlyingStreamAsync>d__51");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63, "System.IO", "BufferedStream/<WriteToUnderlyingStreamAsync>d__63");
