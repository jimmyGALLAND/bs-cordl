#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__ReadState_def.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream)
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
struct __WebResponseStream___InitReadAsync_d__52;
}
namespace System::Net {
class WebReadStream;
}
namespace System {
class Exception;
}
namespace System::Net {
struct ReadState;
}
namespace System::Net {
class __WebResponseStream____c__DisplayClass41_0;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
struct __WebResponseStream___ReadAsync_d__40;
}
namespace System::Net {
class WebException;
}
namespace System {
class Version;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class __WebResponseStream____c__DisplayClass41_0;
}
namespace System::Net {
struct __WebResponseStream___InitReadAsync_d__52;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
struct __WebResponseStream___ReadAsync_d__40;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebResponseStream);
MARK_REF_PTR_T(::System::Net::__WebResponseStream____c__DisplayClass41_0);
MARK_VAL_T(::System::Net::__WebResponseStream___InitReadAsync_d__52);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAllAsync_d__48);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAsync_d__40);
// Type: ::<ReadAsync>d__40
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98
// }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 2 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9239)) CS Name: ::WebResponseStream::<ReadAsync>d__40
struct CORDL_TYPE __WebResponseStream___ReadAsync_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29e8ff4 size 0x8e4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29e98d8 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None
  // }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __WebResponseStream___ReadAsync_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                  ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                  ::System::Net::WebResponseStream* __4__this, ::System::Net::WebCompletionSource* _completion_5__2, int32_t _nbytes_5__3,
                                                  ::System::Exception* _throwMe_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*> __u__1,
                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebResponseStream___ReadAsync_d__40();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field <completion>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* _completion_5__2;

  /// @brief Field <nbytes>5__3, offset: 0x48, size: 0x4, def value: None
  int32_t _nbytes_5__3;

  /// @brief Field <throwMe>5__4, offset: 0x50, size: 0x8, def value: None
  ::System::Exception* _throwMe_5__4;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAsync_d__40, 0x78>, "Size mismatch!");

} // namespace System::Net
// Type: ::<>c__DisplayClass41_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9240))
// CS Name: ::WebResponseStream::<>c__DisplayClass41_0*
class CORDL_TYPE __WebResponseStream____c__DisplayClass41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Net::WebResponseStream* __4__this;

  /// @brief Field buffer, offset 0x18, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset 0x20, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) int32_t offset;

  /// @brief Field size, offset 0x24, size 0x4
  __declspec(property(get = __get_size, put = __set_size)) int32_t size;

  constexpr ::System::Net::WebResponseStream*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Net::WebResponseStream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_offset();

  constexpr int32_t const& __get_offset() const;

  constexpr void __set_offset(int32_t value);

  constexpr int32_t& __get_size();

  constexpr int32_t const& __get_size() const;

  constexpr void __set_size(int32_t value);

  static inline ::System::Net::__WebResponseStream____c__DisplayClass41_0* New_ctor();

  /// @brief Method .ctor addr 0x29e7b18 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ProcessRead>b__0 addr 0x29e9930 size 0x3c virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* _ProcessRead_b__0(::System::Threading::CancellationToken ct);

  /// @brief Method <ProcessRead>b__1 addr 0x29e996c size 0x40 virtual false final false
  inline void _ProcessRead_b__1();

  /// @brief Method <ProcessRead>b__2 addr 0x29e99ac size 0x24 virtual false final false
  inline bool _ProcessRead_b__2();

  // Ctor Parameters [CppParam { name: "", ty: "__WebResponseStream____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebResponseStream____c__DisplayClass41_0(__WebResponseStream____c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebResponseStream____c__DisplayClass41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebResponseStream____c__DisplayClass41_0(__WebResponseStream____c__DisplayClass41_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebResponseStream____c__DisplayClass41_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::WebResponseStream* _____4__this;

  /// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field size, offset: 0x24, size: 0x4, def value: None
  int32_t ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream____c__DisplayClass41_0, 0x28>, "Size mismatch!");

} // namespace System::Net
// Type: ::<ReadAllAsyncInner>d__47
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98
// }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 873 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(9241)) CS
// Name: ::WebResponseStream::<ReadAllAsyncInner>d__47
struct CORDL_TYPE __WebResponseStream___ReadAllAsyncInner_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29e99d0 size 0x56c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29e9f3c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam {
  // name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_ms_5__3", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name:
  // "_buffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __WebResponseStream___ReadAllAsyncInner_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                          ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebResponseStream* __4__this, int64_t _maximumSize_5__2,
                                                          ::System::IO::MemoryStream* _ms_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4,
                                                          ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebResponseStream___ReadAllAsyncInner_d__47();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field <maximumSize>5__2, offset: 0x30, size: 0x8, def value: None
  int64_t _maximumSize_5__2;

  /// @brief Field <ms>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__3;

  /// @brief Field <buffer>5__4, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47, 0x58>, "Size mismatch!");

} // namespace System::Net
// Type: ::<ReadAllAsync>d__48
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(2787)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 873 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 400 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(9242)) CS Name: ::WebResponseStream::<ReadAllAsync>d__48
struct CORDL_TYPE __WebResponseStream___ReadAllAsync_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29e9f94 size 0x95c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29ea8f0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutCts_5__3", ty:
  // "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr __WebResponseStream___ReadAllAsync_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this,
                                                     ::System::Threading::CancellationToken cancellationToken, bool resending, ::System::Net::WebCompletionSource* _completion_5__2,
                                                     ::System::Threading::CancellationTokenSource* _timeoutCts_5__3, ::System::Threading::Tasks::Task* _timeoutTask_5__4,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebResponseStream___ReadAllAsync_d__48();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field resending, offset: 0x30, size: 0x1, def value: None
  bool resending;

  /// @brief Field <completion>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* _completion_5__2;

  /// @brief Field <timeoutCts>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _timeoutCts_5__3;

  /// @brief Field <timeoutTask>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAllAsync_d__48, 0x70>, "Size mismatch!");

} // namespace System::Net
// Type: ::<InitReadAsync>d__52
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9214)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(9243)) CS
// Name: ::WebResponseStream::<InitReadAsync>d__52
struct CORDL_TYPE __WebResponseStream___InitReadAsync_d__52 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x29ea8fc size 0x6bc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x29eafb8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty:
  // "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: None }, CppParam { name:
  // "_position_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __WebResponseStream___InitReadAsync_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this,
                                                      ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize* _buffer_5__2, ::System::Net::ReadState _state_5__3,
                                                      int32_t _position_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebResponseStream___InitReadAsync_d__52();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebResponseStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* _buffer_5__2;

  /// @brief Field <state>5__3, offset: 0x38, size: 0x4, def value: None
  ::System::Net::ReadState _state_5__3;

  /// @brief Field <position>5__4, offset: 0x3c, size: 0x4, def value: None
  int32_t _position_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___InitReadAsync_d__52, 0x50>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::WebResponseStream
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 170, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9027)), TypeDefinitionIndex(TypeDefinitionIndex(9220))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9244))
// CS Name: ::System.Net::WebResponseStream*
class CORDL_TYPE WebResponseStream : public ::System::Net::WebConnectionStream {
public:
  // Declarations
  using _InitReadAsync_d__52 = ::System::Net::__WebResponseStream___InitReadAsync_d__52;

  using _ReadAllAsync_d__48 = ::System::Net::__WebResponseStream___ReadAllAsync_d__48;

  using _ReadAllAsyncInner_d__47 = ::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47;

  using __c__DisplayClass41_0 = ::System::Net::__WebResponseStream____c__DisplayClass41_0;

  using _ReadAsync_d__40 = ::System::Net::__WebResponseStream___ReadAsync_d__40;

  /// @brief Field innerStream, offset 0x58, size 0x8
  __declspec(property(get = __get_innerStream, put = __set_innerStream))::System::Net::WebReadStream* innerStream;

  /// @brief Field nextReadCalled, offset 0x60, size 0x1
  __declspec(property(get = __get_nextReadCalled, put = __set_nextReadCalled)) bool nextReadCalled;

  /// @brief Field bufferedEntireContent, offset 0x61, size 0x1
  __declspec(property(get = __get_bufferedEntireContent, put = __set_bufferedEntireContent)) bool bufferedEntireContent;

  /// @brief Field pendingRead, offset 0x68, size 0x8
  __declspec(property(get = __get_pendingRead, put = __set_pendingRead))::System::Net::WebCompletionSource* pendingRead;

  /// @brief Field locker, offset 0x70, size 0x8
  __declspec(property(get = __get_locker, put = __set_locker))::System::Object* locker;

  /// @brief Field nestedRead, offset 0x78, size 0x4
  __declspec(property(get = __get_nestedRead, put = __set_nestedRead)) int32_t nestedRead;

  /// @brief Field read_eof, offset 0x7c, size 0x1
  __declspec(property(get = __get_read_eof, put = __set_read_eof)) bool read_eof;

  /// @brief Field <RequestStream>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__RequestStream_k__BackingField, put = __set__RequestStream_k__BackingField))::System::Net::WebRequestStream* _RequestStream_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__Headers_k__BackingField, put = __set__Headers_k__BackingField))::System::Net::WebHeaderCollection* _Headers_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __get__StatusCode_k__BackingField, put = __set__StatusCode_k__BackingField))::System::Net::HttpStatusCode _StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__StatusDescription_k__BackingField, put = __set__StatusDescription_k__BackingField))::StringW _StatusDescription_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__Version_k__BackingField, put = __set__Version_k__BackingField))::System::Version* _Version_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __get__KeepAlive_k__BackingField, put = __set__KeepAlive_k__BackingField)) bool _KeepAlive_k__BackingField;

  /// @brief Field <ChunkedRead>k__BackingField, offset 0xa9, size 0x1
  __declspec(property(get = __get__ChunkedRead_k__BackingField, put = __set__ChunkedRead_k__BackingField)) bool _ChunkedRead_k__BackingField;

  __declspec(property(get = get_RequestStream))::System::Net::WebRequestStream* RequestStream;

  __declspec(property(get = get_Headers, put = set_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_StatusCode, put = set_StatusCode))::System::Net::HttpStatusCode StatusCode;

  __declspec(property(get = get_StatusDescription, put = set_StatusDescription))::StringW StatusDescription;

  __declspec(property(get = get_Version, put = set_Version))::System::Version* Version;

  __declspec(property(get = get_KeepAlive, put = set_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_ChunkedRead, put = set_ChunkedRead)) bool ChunkedRead;

  __declspec(property(get = get_ExpectContent)) bool ExpectContent;

  constexpr ::System::Net::WebReadStream*& __get_innerStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebReadStream*> const& __get_innerStream() const;

  constexpr void __set_innerStream(::System::Net::WebReadStream* value);

  constexpr bool& __get_nextReadCalled();

  constexpr bool const& __get_nextReadCalled() const;

  constexpr void __set_nextReadCalled(bool value);

  constexpr bool& __get_bufferedEntireContent();

  constexpr bool const& __get_bufferedEntireContent() const;

  constexpr void __set_bufferedEntireContent(bool value);

  constexpr ::System::Net::WebCompletionSource*& __get_pendingRead();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> const& __get_pendingRead() const;

  constexpr void __set_pendingRead(::System::Net::WebCompletionSource* value);

  constexpr ::System::Object*& __get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_locker() const;

  constexpr void __set_locker(::System::Object* value);

  constexpr int32_t& __get_nestedRead();

  constexpr int32_t const& __get_nestedRead() const;

  constexpr void __set_nestedRead(int32_t value);

  constexpr bool& __get_read_eof();

  constexpr bool const& __get_read_eof() const;

  constexpr void __set_read_eof(bool value);

  constexpr ::System::Net::WebRequestStream*& __get__RequestStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> const& __get__RequestStream_k__BackingField() const;

  constexpr void __set__RequestStream_k__BackingField(::System::Net::WebRequestStream* value);

  constexpr ::System::Net::WebHeaderCollection*& __get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get__Headers_k__BackingField() const;

  constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value);

  constexpr ::System::Net::HttpStatusCode& __get__StatusCode_k__BackingField();

  constexpr ::System::Net::HttpStatusCode const& __get__StatusCode_k__BackingField() const;

  constexpr void __set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value);

  constexpr ::StringW& __get__StatusDescription_k__BackingField();

  constexpr ::StringW const& __get__StatusDescription_k__BackingField() const;

  constexpr void __set__StatusDescription_k__BackingField(::StringW value);

  constexpr ::System::Version*& __get__Version_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get__Version_k__BackingField() const;

  constexpr void __set__Version_k__BackingField(::System::Version* value);

  constexpr bool& __get__KeepAlive_k__BackingField();

  constexpr bool const& __get__KeepAlive_k__BackingField() const;

  constexpr void __set__KeepAlive_k__BackingField(bool value);

  constexpr bool& __get__ChunkedRead_k__BackingField();

  constexpr bool const& __get__ChunkedRead_k__BackingField() const;

  constexpr void __set__ChunkedRead_k__BackingField(bool value);

  /// @brief Method get_RequestStream addr 0x29e7660 size 0x8 virtual false final false
  inline ::System::Net::WebRequestStream* get_RequestStream();

  /// @brief Method get_Headers addr 0x29e7668 size 0x8 virtual false final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method set_Headers addr 0x29e7670 size 0x8 virtual false final false
  inline void set_Headers(::System::Net::WebHeaderCollection* value);

  /// @brief Method get_StatusCode addr 0x29e7678 size 0x8 virtual false final false
  inline ::System::Net::HttpStatusCode get_StatusCode();

  /// @brief Method set_StatusCode addr 0x29e7680 size 0x8 virtual false final false
  inline void set_StatusCode(::System::Net::HttpStatusCode value);

  /// @brief Method get_StatusDescription addr 0x29e7688 size 0x8 virtual false final false
  inline ::StringW get_StatusDescription();

  /// @brief Method set_StatusDescription addr 0x29e7690 size 0x8 virtual false final false
  inline void set_StatusDescription(::StringW value);

  /// @brief Method get_Version addr 0x29e7698 size 0x8 virtual false final false
  inline ::System::Version* get_Version();

  /// @brief Method set_Version addr 0x29e76a0 size 0x8 virtual false final false
  inline void set_Version(::System::Version* value);

  /// @brief Method get_KeepAlive addr 0x29e76a8 size 0x8 virtual false final false
  inline bool get_KeepAlive();

  /// @brief Method set_KeepAlive addr 0x29e76b0 size 0xc virtual false final false
  inline void set_KeepAlive(bool value);

  static inline ::System::Net::WebResponseStream* New_ctor(::System::Net::WebRequestStream* request);

  /// @brief Method .ctor addr 0x29e76bc size 0x84 virtual false final false
  inline void _ctor(::System::Net::WebRequestStream* request);

  /// @brief Method get_CanRead addr 0x29e7740 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite addr 0x29e7748 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_ChunkedRead addr 0x29e7750 size 0x8 virtual false final false
  inline bool get_ChunkedRead();

  /// @brief Method set_ChunkedRead addr 0x29e7758 size 0xc virtual false final false
  inline void set_ChunkedRead(bool value);

  /// @brief Method ReadAsync addr 0x29e7764 size 0x134 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ProcessRead addr 0x29e7898 size 0x280 virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryReadFromBufferedContent addr 0x29e7b20 size 0xcc virtual true final false
  inline bool TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ByRef<int32_t> result);

  /// @brief Method get_ExpectContent addr 0x29e7bec size 0x90 virtual false final false
  inline bool get_ExpectContent();

  /// @brief Method Initialize addr 0x29e7c7c size 0x52c virtual false final false
  inline void Initialize(::System::Net::BufferOffsetSize* buffer);

  /// @brief Method ReadAllAsyncInner addr 0x29e81a8 size 0x100 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ReadAllAsyncInner(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllAsync addr 0x29e82a8 size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task* ReadAllAsync(bool resending, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x29e839c size 0x9c virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Close_internal addr 0x29e8438 size 0x8c virtual true final false
  inline void Close_internal(ByRef<bool> disposed);

  /// @brief Method GetReadException addr 0x29e84c4 size 0x29c virtual false final false
  inline ::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus status, ::System::Exception* error, ::StringW where);

  /// @brief Method InitReadAsync addr 0x29e8760 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetResponse addr 0x29e883c size 0x7b8 virtual false final false
  inline bool GetResponse(::System::Net::BufferOffsetSize* buffer, ByRef<int32_t> pos, ByRef<::System::Net::ReadState> state);

  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebResponseStream(WebResponseStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebResponseStream(WebResponseStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebResponseStream();

public:
  /// @brief Field innerStream, offset: 0x58, size: 0x8, def value: None
  ::System::Net::WebReadStream* ___innerStream;

  /// @brief Field nextReadCalled, offset: 0x60, size: 0x1, def value: None
  bool ___nextReadCalled;

  /// @brief Field bufferedEntireContent, offset: 0x61, size: 0x1, def value: None
  bool ___bufferedEntireContent;

  /// @brief Field pendingRead, offset: 0x68, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* ___pendingRead;

  /// @brief Field locker, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field nestedRead, offset: 0x78, size: 0x4, def value: None
  int32_t ___nestedRead;

  /// @brief Field read_eof, offset: 0x7c, size: 0x1, def value: None
  bool ___read_eof;

  /// @brief Field <RequestStream>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Net::WebRequestStream* ____RequestStream_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____Headers_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x90, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ____StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____StatusDescription_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Version* ____Version_k__BackingField;

  /// @brief Field <KeepAlive>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____KeepAlive_k__BackingField;

  /// @brief Field <ChunkedRead>k__BackingField, offset: 0xa9, size: 0x1, def value: None
  bool ____ChunkedRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream, 0xb0>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream*, "System.Net", "WebResponseStream");
NEED_NO_BOX(::System::Net::__WebResponseStream____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream____c__DisplayClass41_0*, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___InitReadAsync_d__52, "System.Net", "WebResponseStream/<InitReadAsync>d__52");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47, "System.Net", "WebResponseStream/<ReadAllAsyncInner>d__47");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAllAsync_d__48, "System.Net", "WebResponseStream/<ReadAllAsync>d__48");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAsync_d__40, "System.Net", "WebResponseStream/<ReadAsync>d__40");
