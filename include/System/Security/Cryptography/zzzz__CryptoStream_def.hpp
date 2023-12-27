#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoStream)
namespace System {
class Object;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Security::Cryptography {
struct __CryptoStream___ReadAsyncInternal_d__37;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IAsyncResult;
}
namespace System::Security::Cryptography {
struct __CryptoStream___ReadAsyncCore_d__42;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Security::Cryptography {
struct __CryptoStream___WriteAsyncInternal_d__46;
}
namespace System::Security::Cryptography {
struct __CryptoStream___WriteAsyncCore_d__49;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class __CryptoStream____c;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ValueTaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class __CryptoStream____c;
}
namespace System::Security::Cryptography {
struct __CryptoStream___ReadAsyncCore_d__42;
}
namespace System::Security::Cryptography {
struct __CryptoStream___ReadAsyncInternal_d__37;
}
namespace System::Security::Cryptography {
struct __CryptoStream___WriteAsyncCore_d__49;
}
namespace System::Security::Cryptography {
struct __CryptoStream___WriteAsyncInternal_d__46;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoStream);
MARK_REF_PTR_T(::System::Security::Cryptography::__CryptoStream____c);
MARK_VAL_T(::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42);
MARK_VAL_T(::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37);
MARK_VAL_T(::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49);
MARK_VAL_T(::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46);
// Type: ::<ReadAsyncInternal>d__37
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2769)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 98 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2908)) CS Name: ::CryptoStream::<ReadAsyncInternal>d__37
struct CORDL_TYPE __CryptoStream___ReadAsyncInternal_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x245873c size 0x3c4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2458b00 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr __CryptoStream___ReadAsyncInternal_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                     ::System::Security::Cryptography::CryptoStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                     ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _semaphore_5__2,
                                                     ::System::Threading::Tasks::ForceAsyncAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoStream___ReadAsyncInternal_d__37();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <semaphore>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* _semaphore_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::ForceAsyncAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37, 0x58>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: ::<ReadAsyncCore>d__42
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3391)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3391), inst: 98 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(2909)) CS Name: ::CryptoStream::<ReadAsyncCore>d__42
struct CORDL_TYPE __CryptoStream___ReadAsyncCore_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2458b58 size 0x1100 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2459cc0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: None }, CppParam {
  // name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_bytesToDeliver_5__2", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_currentOutputIndex_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numWholeBlocksInBytes_5__4", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_tempInputBuffer_5__5", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_tempOutputBuffer_5__6", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr __CryptoStream___ReadAsyncCore_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, int32_t count, int32_t offset,
                                                 ::System::Security::Cryptography::CryptoStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool useAsync,
                                                 ::System::Threading::CancellationToken cancellationToken, int32_t _bytesToDeliver_5__2, int32_t _currentOutputIndex_5__3,
                                                 int32_t _numWholeBlocksInBytes_5__4, ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempInputBuffer_5__5,
                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6, ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoStream___ReadAsyncCore_d__42();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t count;

  /// @brief Field offset, offset: 0x24, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field useAsync, offset: 0x38, size: 0x1, def value: None
  bool useAsync;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <bytesToDeliver>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t _bytesToDeliver_5__2;

  /// @brief Field <currentOutputIndex>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t _currentOutputIndex_5__3;

  /// @brief Field <numWholeBlocksInBytes>5__4, offset: 0x50, size: 0x4, def value: None
  int32_t _numWholeBlocksInBytes_5__4;

  /// @brief Field <tempInputBuffer>5__5, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempInputBuffer_5__5;

  /// @brief Field <tempOutputBuffer>5__6, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6;

  /// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42, 0x78>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: ::<WriteAsyncInternal>d__46
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(2769))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2910)) CS Name: ::CryptoStream::<WriteAsyncInternal>d__46
struct CORDL_TYPE __CryptoStream___WriteAsyncInternal_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2459d18 size 0x320 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x245a038 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers:
  // "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
  // None }]
  constexpr __CryptoStream___WriteAsyncInternal_d__46(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                      ::System::Security::Cryptography::CryptoStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _semaphore_5__2,
                                                      ::System::Threading::Tasks::ForceAsyncAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoStream___WriteAsyncInternal_d__46();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <semaphore>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* _semaphore_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::ForceAsyncAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46, 0x58>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: ::<WriteAsyncCore>d__49
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2911))
// CS Name: ::CryptoStream::<WriteAsyncCore>d__49
struct CORDL_TYPE __CryptoStream___WriteAsyncCore_d__49 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x245a044 size 0x11cc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x245b210 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: None }, CppParam { name:
  // "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr __CryptoStream___WriteAsyncCore_d__49(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t count, int32_t offset,
                                                  ::System::Security::Cryptography::CryptoStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool useAsync,
                                                  ::System::Threading::CancellationToken cancellationToken, int32_t _bytesToWrite_5__2, int32_t _currentInputIndex_5__3, int32_t _numOutputBytes_5__4,
                                                  ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__1, int32_t _numWholeBlocksInBytes_5__5,
                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoStream___WriteAsyncCore_d__49();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t count;

  /// @brief Field offset, offset: 0x24, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field useAsync, offset: 0x38, size: 0x1, def value: None
  bool useAsync;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <bytesToWrite>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t _bytesToWrite_5__2;

  /// @brief Field <currentInputIndex>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t _currentInputIndex_5__3;

  /// @brief Field <numOutputBytes>5__4, offset: 0x50, size: 0x4, def value: None
  int32_t _numOutputBytes_5__4;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__1;

  /// @brief Field <numWholeBlocksInBytes>5__5, offset: 0x68, size: 0x4, def value: None
  int32_t _numWholeBlocksInBytes_5__5;

  /// @brief Field <tempOutputBuffer>5__6, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49, 0x78>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2912))
// CS Name: ::CryptoStream::<>c*
class CORDL_TYPE __CryptoStream____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Security::Cryptography::__CryptoStream____c* __9;

  /// @brief Field <>9__54_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__54_0, put = setStaticF___9__54_0))::System::Func_1<::System::Threading::SemaphoreSlim*>* __9__54_0;

  static inline void setStaticF___9(::System::Security::Cryptography::__CryptoStream____c* value);

  static inline ::System::Security::Cryptography::__CryptoStream____c* getStaticF___9();

  static inline void setStaticF___9__54_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value);

  static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__54_0();

  static inline ::System::Security::Cryptography::__CryptoStream____c* New_ctor();

  /// @brief Method .ctor addr 0x245b280 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_AsyncActiveSemaphore>b__54_0 addr 0x245b288 size 0x64 virtual false final false
  inline ::System::Threading::SemaphoreSlim* _get_AsyncActiveSemaphore_b__54_0();

  // Ctor Parameters [CppParam { name: "", ty: "__CryptoStream____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CryptoStream____c(__CryptoStream____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CryptoStream____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CryptoStream____c(__CryptoStream____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoStream____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__CryptoStream____c, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: System.Security.Cryptography::CryptoStream
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2914)), TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2913))
// CS Name: ::System.Security.Cryptography::CryptoStream*
class CORDL_TYPE CryptoStream : public ::System::IO::Stream {
public:
  // Declarations
  using __c = ::System::Security::Cryptography::__CryptoStream____c;

  using _WriteAsyncCore_d__49 = ::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49;

  using _WriteAsyncInternal_d__46 = ::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46;

  using _ReadAsyncCore_d__42 = ::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42;

  using _ReadAsyncInternal_d__37 = ::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37;

  /// @brief Field _stream, offset 0x28, size 0x8
  __declspec(property(get = __get__stream, put = __set__stream))::System::IO::Stream* _stream;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::System::Security::Cryptography::ICryptoTransform* _transform;

  /// @brief Field _transformMode, offset 0x38, size 0x4
  __declspec(property(get = __get__transformMode, put = __set__transformMode))::System::Security::Cryptography::CryptoStreamMode _transformMode;

  /// @brief Field _inputBuffer, offset 0x40, size 0x8
  __declspec(property(get = __get__inputBuffer, put = __set__inputBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _inputBuffer;

  /// @brief Field _inputBufferIndex, offset 0x48, size 0x4
  __declspec(property(get = __get__inputBufferIndex, put = __set__inputBufferIndex)) int32_t _inputBufferIndex;

  /// @brief Field _inputBlockSize, offset 0x4c, size 0x4
  __declspec(property(get = __get__inputBlockSize, put = __set__inputBlockSize)) int32_t _inputBlockSize;

  /// @brief Field _outputBuffer, offset 0x50, size 0x8
  __declspec(property(get = __get__outputBuffer, put = __set__outputBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _outputBuffer;

  /// @brief Field _outputBufferIndex, offset 0x58, size 0x4
  __declspec(property(get = __get__outputBufferIndex, put = __set__outputBufferIndex)) int32_t _outputBufferIndex;

  /// @brief Field _outputBlockSize, offset 0x5c, size 0x4
  __declspec(property(get = __get__outputBlockSize, put = __set__outputBlockSize)) int32_t _outputBlockSize;

  /// @brief Field _canRead, offset 0x60, size 0x1
  __declspec(property(get = __get__canRead, put = __set__canRead)) bool _canRead;

  /// @brief Field _canWrite, offset 0x61, size 0x1
  __declspec(property(get = __get__canWrite, put = __set__canWrite)) bool _canWrite;

  /// @brief Field _finalBlockTransformed, offset 0x62, size 0x1
  __declspec(property(get = __get__finalBlockTransformed, put = __set__finalBlockTransformed)) bool _finalBlockTransformed;

  /// @brief Field _lazyAsyncActiveSemaphore, offset 0x68, size 0x8
  __declspec(property(get = __get__lazyAsyncActiveSemaphore, put = __set__lazyAsyncActiveSemaphore))::System::Threading::SemaphoreSlim* _lazyAsyncActiveSemaphore;

  /// @brief Field _leaveOpen, offset 0x70, size 0x1
  __declspec(property(get = __get__leaveOpen, put = __set__leaveOpen)) bool _leaveOpen;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_HasFlushedFinalBlock)) bool HasFlushedFinalBlock;

  __declspec(property(get = get_AsyncActiveSemaphore))::System::Threading::SemaphoreSlim* AsyncActiveSemaphore;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::IO::Stream*& __get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__stream() const;

  constexpr void __set__stream(::System::IO::Stream* value);

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& __get__transform() const;

  constexpr void __set__transform(::System::Security::Cryptography::ICryptoTransform* value);

  constexpr ::System::Security::Cryptography::CryptoStreamMode& __get__transformMode();

  constexpr ::System::Security::Cryptography::CryptoStreamMode const& __get__transformMode() const;

  constexpr void __set__transformMode(::System::Security::Cryptography::CryptoStreamMode value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__inputBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__inputBuffer() const;

  constexpr void __set__inputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__inputBufferIndex();

  constexpr int32_t const& __get__inputBufferIndex() const;

  constexpr void __set__inputBufferIndex(int32_t value);

  constexpr int32_t& __get__inputBlockSize();

  constexpr int32_t const& __get__inputBlockSize() const;

  constexpr void __set__inputBlockSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__outputBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__outputBuffer() const;

  constexpr void __set__outputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__outputBufferIndex();

  constexpr int32_t const& __get__outputBufferIndex() const;

  constexpr void __set__outputBufferIndex(int32_t value);

  constexpr int32_t& __get__outputBlockSize();

  constexpr int32_t const& __get__outputBlockSize() const;

  constexpr void __set__outputBlockSize(int32_t value);

  constexpr bool& __get__canRead();

  constexpr bool const& __get__canRead() const;

  constexpr void __set__canRead(bool value);

  constexpr bool& __get__canWrite();

  constexpr bool const& __get__canWrite() const;

  constexpr void __set__canWrite(bool value);

  constexpr bool& __get__finalBlockTransformed();

  constexpr bool const& __get__finalBlockTransformed() const;

  constexpr void __set__finalBlockTransformed(bool value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__lazyAsyncActiveSemaphore();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__lazyAsyncActiveSemaphore() const;

  constexpr void __set__lazyAsyncActiveSemaphore(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__leaveOpen();

  constexpr bool const& __get__leaveOpen() const;

  constexpr void __set__leaveOpen(bool value);

  static inline ::System::Security::Cryptography::CryptoStream* New_ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                         ::System::Security::Cryptography::CryptoStreamMode mode);

  /// @brief Method .ctor addr 0x24571bc size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform, ::System::Security::Cryptography::CryptoStreamMode mode);

  static inline ::System::Security::Cryptography::CryptoStream* New_ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                         ::System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen);

  /// @brief Method .ctor addr 0x24571c4 size 0x1c8 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform, ::System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen);

  /// @brief Method get_CanRead addr 0x24574d8 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x24574e0 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x24574e8 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x24574f0 size 0x50 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x2457540 size 0x50 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x2457590 size 0x50 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method get_HasFlushedFinalBlock addr 0x24575e0 size 0x8 virtual false final false
  inline bool get_HasFlushedFinalBlock();

  /// @brief Method FlushFinalBlock addr 0x24575e8 size 0x230 virtual false final false
  inline void FlushFinalBlock();

  /// @brief Method Flush addr 0x2457818 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x245781c size 0x168 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek addr 0x2457984 size 0x50 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x24579d4 size 0x50 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method ReadAsync addr 0x2457a24 size 0x48 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginRead addr 0x2457cd8 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead addr 0x2457d8c size 0x48 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method ReadAsyncInternal addr 0x2457bb4 size 0x124 virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsyncInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                        ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte addr 0x2457dd4 size 0x7c virtual true final false
  inline int32_t ReadByte();

  /// @brief Method WriteByte addr 0x2457e50 size 0x54 virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Read addr 0x2457ea4 size 0xc4 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method CheckReadArguments addr 0x2457a6c size 0x148 virtual false final false
  inline void CheckReadArguments(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsyncCore addr 0x2457f68 size 0x144 virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsyncCore(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                    ::System::Threading::CancellationToken cancellationToken, bool useAsync);

  /// @brief Method WriteAsync addr 0x24580ac size 0x48 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginWrite addr 0x2458338 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x24583ec size 0xc virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method WriteAsyncInternal addr 0x245823c size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Write addr 0x24583f8 size 0x70 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method CheckWriteArguments addr 0x24580f4 size 0x148 virtual false final false
  inline void CheckWriteArguments(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteAsyncCore addr 0x2458468 size 0x11c virtual false final false
  inline ::System::Threading::Tasks::Task* WriteAsyncCore(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken,
                                                          bool useAsync);

  /// @brief Method Clear addr 0x2458584 size 0x10 virtual false final false
  inline void Clear();

  /// @brief Method Dispose addr 0x2458594 size 0xb0 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method InitializeBuffer addr 0x245738c size 0x14c virtual false final false
  inline void InitializeBuffer();

  /// @brief Method get_AsyncActiveSemaphore addr 0x2458644 size 0xf8 virtual false final false
  inline ::System::Threading::SemaphoreSlim* get_AsyncActiveSemaphore();

  // Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoStream(CryptoStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoStream(CryptoStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoStream();

public:
  /// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::ICryptoTransform* ____transform;

  /// @brief Field _transformMode, offset: 0x38, size: 0x4, def value: None
  ::System::Security::Cryptography::CryptoStreamMode ____transformMode;

  /// @brief Field _inputBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____inputBuffer;

  /// @brief Field _inputBufferIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ____inputBufferIndex;

  /// @brief Field _inputBlockSize, offset: 0x4c, size: 0x4, def value: None
  int32_t ____inputBlockSize;

  /// @brief Field _outputBuffer, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____outputBuffer;

  /// @brief Field _outputBufferIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ____outputBufferIndex;

  /// @brief Field _outputBlockSize, offset: 0x5c, size: 0x4, def value: None
  int32_t ____outputBlockSize;

  /// @brief Field _canRead, offset: 0x60, size: 0x1, def value: None
  bool ____canRead;

  /// @brief Field _canWrite, offset: 0x61, size: 0x1, def value: None
  bool ____canWrite;

  /// @brief Field _finalBlockTransformed, offset: 0x62, size: 0x1, def value: None
  bool ____finalBlockTransformed;

  /// @brief Field _lazyAsyncActiveSemaphore, offset: 0x68, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____lazyAsyncActiveSemaphore;

  /// @brief Field _leaveOpen, offset: 0x70, size: 0x1, def value: None
  bool ____leaveOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoStream, 0x78>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoStream*, "System.Security.Cryptography", "CryptoStream");
NEED_NO_BOX(::System::Security::Cryptography::__CryptoStream____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__CryptoStream____c*, "System.Security.Cryptography", "CryptoStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42, "System.Security.Cryptography", "CryptoStream/<ReadAsyncCore>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37, "System.Security.Cryptography", "CryptoStream/<ReadAsyncInternal>d__37");
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49, "System.Security.Cryptography", "CryptoStream/<WriteAsyncCore>d__49");
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46, "System.Security.Cryptography", "CryptoStream/<WriteAsyncInternal>d__46");
