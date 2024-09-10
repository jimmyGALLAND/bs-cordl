#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextWriter)
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___CloseBufferAndWriterAsync_d__9;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoCloseAsync_d__8;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteCommentAsync_d__115;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWritePropertyNameAsync_d__30;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWritePropertyNameAsync_d__32;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteRawValueAsync_d__121;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartArrayAsync_d__35;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartConstructorAsync_d__40;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartObjectAsync_d__38;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteUndefinedAsync_d__43;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__60;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__64;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__78;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__97;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__99;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteIndentAsync_d__13;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteIntegerValueAsync_d__24;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueInternalAsync_d__15;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueNonNullAsync_d__54;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueNotNullAsync_d__110;
}
namespace System::IO {
class TextWriter;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___CloseBufferAndWriterAsync_d__9;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoCloseAsync_d__8;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteCommentAsync_d__115;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWritePropertyNameAsync_d__30;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWritePropertyNameAsync_d__32;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteRawValueAsync_d__121;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartArrayAsync_d__35;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartConstructorAsync_d__40;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteStartObjectAsync_d__38;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteUndefinedAsync_d__43;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__60;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__64;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__78;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__97;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___DoWriteValueAsync_d__99;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteIndentAsync_d__13;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteIntegerValueAsync_d__24;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueInternalAsync_d__15;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueNonNullAsync_d__54;
}
namespace Newtonsoft::Json {
struct __JsonTextWriter___WriteValueNotNullAsync_d__110;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonTextWriter);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54);
MARK_VAL_T(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110);
// Type: ::<CloseBufferAndWriterAsync>d__9
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<CloseBufferAndWriterAsync>d__9
struct CORDL_TYPE __JsonTextWriter___CloseBufferAndWriterAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e139d4, size 0x230, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e13c04, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___CloseBufferAndWriterAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___CloseBufferAndWriterAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, __u__1) == 0x28, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoCloseAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoCloseAsync>d__8
struct CORDL_TYPE __JsonTextWriter___DoCloseAsync_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e13c6c, size 0x2fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e13fb8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoCloseAsync_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoCloseAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteCommentAsync>d__115
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteCommentAsync>d__115
struct CORDL_TYPE __JsonTextWriter___DoWriteCommentAsync_d__115 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e14020, size 0x520, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e1454c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteCommentAsync_d__115() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteCommentAsync_d__115(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  text, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field text, offset: 0x30, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWritePropertyNameAsync>d__30
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWritePropertyNameAsync>d__30
struct CORDL_TYPE __JsonTextWriter___DoWritePropertyNameAsync_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e145b4, size 0x378, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e1492c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWritePropertyNameAsync_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWritePropertyNameAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::StringW  name, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field name, offset: 0x30, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWritePropertyNameAsync>d__32
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWritePropertyNameAsync>d__32
struct CORDL_TYPE __JsonTextWriter___DoWritePropertyNameAsync_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e14994, size 0x650, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e150a0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWritePropertyNameAsync_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "escape", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWritePropertyNameAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::StringW  name, ::System::Threading::CancellationToken  cancellationToken, bool  escape, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field name, offset: 0x28, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field escape, offset: 0x38, size: 0x1, def value: None
 bool  escape;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, escape) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteRawValueAsync>d__121
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteRawValueAsync>d__121
struct CORDL_TYPE __JsonTextWriter___DoWriteRawValueAsync_d__121 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e15108, size 0x28c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e15394, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteRawValueAsync_d__121() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteRawValueAsync_d__121(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::StringW  json, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field json, offset: 0x30, size: 0x8, def value: None
 ::StringW  json;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, json) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteStartArrayAsync>d__35
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteStartArrayAsync>d__35
struct CORDL_TYPE __JsonTextWriter___DoWriteStartArrayAsync_d__35 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e153fc, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e156c0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteStartArrayAsync_d__35() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteStartArrayAsync_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteStartConstructorAsync>d__40
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteStartConstructorAsync>d__40
struct CORDL_TYPE __JsonTextWriter___DoWriteStartConstructorAsync_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e15728, size 0x4d4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e15ce8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteStartConstructorAsync_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteStartConstructorAsync_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  name, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field name, offset: 0x30, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteStartObjectAsync>d__38
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteStartObjectAsync>d__38
struct CORDL_TYPE __JsonTextWriter___DoWriteStartObjectAsync_d__38 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e15d50, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e16014, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteStartObjectAsync_d__38() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteStartObjectAsync_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteUndefinedAsync>d__43
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteUndefinedAsync>d__43
struct CORDL_TYPE __JsonTextWriter___DoWriteUndefinedAsync_d__43 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e1607c, size 0x2f8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e16374, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteUndefinedAsync_d__43() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteUndefinedAsync_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteValueAsync>d__60
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteValueAsync>d__60
struct CORDL_TYPE __JsonTextWriter___DoWriteValueAsync_d__60 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e163dc, size 0x63c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e16b4c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteValueAsync_d__60() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteValueAsync_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::DateTime  value, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  value;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteValueAsync>d__64
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteValueAsync>d__64
struct CORDL_TYPE __JsonTextWriter___DoWriteValueAsync_d__64 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e16bb4, size 0x5f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e171a8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteValueAsync_d__64() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteValueAsync_d__64(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::DateTimeOffset  value, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field value, offset: 0x30, size: 0x10, def value: None
 ::System::DateTimeOffset  value;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteValueAsync>d__78
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteValueAsync>d__78
struct CORDL_TYPE __JsonTextWriter___DoWriteValueAsync_d__78 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e17210, size 0x50c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e1771c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteValueAsync_d__78() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteValueAsync_d__78(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Guid  value, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field value, offset: 0x30, size: 0x10, def value: None
 ::System::Guid  value;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteValueAsync>d__97
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteValueAsync>d__97
struct CORDL_TYPE __JsonTextWriter___DoWriteValueAsync_d__97 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e17784, size 0x328, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e17aac, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteValueAsync_d__97() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteValueAsync_d__97(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::StringW  value, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field value, offset: 0x28, size: 0x8, def value: None
 ::StringW  value;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<DoWriteValueAsync>d__99
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<DoWriteValueAsync>d__99
struct CORDL_TYPE __JsonTextWriter___DoWriteValueAsync_d__99 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e17b14, size 0x550, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e18064, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___DoWriteValueAsync_d__99() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___DoWriteValueAsync_d__99(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::TimeSpan  value, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 ::System::TimeSpan  value;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteIndentAsync>d__13
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<WriteIndentAsync>d__13
struct CORDL_TYPE __JsonTextWriter___WriteIndentAsync_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e180cc, size 0x3c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e18490, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___WriteIndentAsync_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "newLineLen", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentIndentCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___WriteIndentAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, int32_t  newLineLen, int32_t  currentIndentCount, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field newLineLen, offset: 0x28, size: 0x4, def value: None
 int32_t  newLineLen;

/// @brief Field currentIndentCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  currentIndentCount;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, newLineLen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, currentIndentCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteIntegerValueAsync>d__24
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<WriteIntegerValueAsync>d__24
struct CORDL_TYPE __JsonTextWriter___WriteIntegerValueAsync_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e184f8, size 0x290, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e18788, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___WriteIntegerValueAsync_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "uvalue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "negative", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___WriteIntegerValueAsync_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, uint64_t  uvalue, bool  negative, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field uvalue, offset: 0x30, size: 0x8, def value: None
 uint64_t  uvalue;

/// @brief Field negative, offset: 0x38, size: 0x1, def value: None
 bool  negative;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, uvalue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, negative) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, __u__1) == 0x48, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteValueInternalAsync>d__15
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<WriteValueInternalAsync>d__15
struct CORDL_TYPE __JsonTextWriter___WriteValueInternalAsync_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e187f0, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e18ab4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___WriteValueInternalAsync_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___WriteValueInternalAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::StringW  value, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 ::StringW  value;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteValueNonNullAsync>d__54
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<WriteValueNonNullAsync>d__54
struct CORDL_TYPE __JsonTextWriter___WriteValueNonNullAsync_d__54 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e18b1c, size 0x574, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e19090, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___WriteValueNonNullAsync_d__54() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___WriteValueNonNullAsync_d__54(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  value;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteValueNotNullAsync>d__110
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonTextWriter::<WriteValueNotNullAsync>d__110
struct CORDL_TYPE __JsonTextWriter___WriteValueNotNullAsync_d__110 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e190f8, size 0x2ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e193a4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonTextWriter___WriteValueNotNullAsync_d__110() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonTextWriter___WriteValueNotNullAsync_d__110(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonTextWriter*  __4__this, ::System::Uri*  value, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  __4__this;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 ::System::Uri*  value;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: Newtonsoft.Json::JsonTextWriter
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonTextWriter*
class CORDL_TYPE JsonTextWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
using _CloseBufferAndWriterAsync_d__9 = ::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9;

using _DoCloseAsync_d__8 = ::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8;

using _DoWriteCommentAsync_d__115 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115;

using _DoWritePropertyNameAsync_d__30 = ::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30;

using _DoWritePropertyNameAsync_d__32 = ::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32;

using _DoWriteRawValueAsync_d__121 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121;

using _DoWriteStartArrayAsync_d__35 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35;

using _DoWriteStartConstructorAsync_d__40 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40;

using _DoWriteStartObjectAsync_d__38 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38;

using _DoWriteUndefinedAsync_d__43 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43;

using _DoWriteValueAsync_d__60 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60;

using _DoWriteValueAsync_d__64 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64;

using _DoWriteValueAsync_d__78 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78;

using _DoWriteValueAsync_d__97 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97;

using _DoWriteValueAsync_d__99 = ::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99;

using _WriteIndentAsync_d__13 = ::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13;

using _WriteIntegerValueAsync_d__24 = ::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24;

using _WriteValueInternalAsync_d__15 = ::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15;

using _WriteValueNonNullAsync_d__54 = ::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54;

using _WriteValueNotNullAsync_d__110 = ::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110;

 __declspec(property(get=get_ArrayPool, put=set_ArrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ArrayPool;

 __declspec(property(get=get_Base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  Base64Encoder;

 __declspec(property(get=get_IndentChar, put=set_IndentChar)) char16_t  IndentChar;

 __declspec(property(get=get_Indentation, put=set_Indentation)) int32_t  Indentation;

 __declspec(property(get=get_QuoteChar, put=set_QuoteChar)) char16_t  QuoteChar;

 __declspec(property(get=get_QuoteName, put=set_QuoteName)) bool  QuoteName;

/// @brief Field _arrayPool, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayPool, put=__cordl_internal_set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  _arrayPool;

/// @brief Field _base64Encoder, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Encoder, put=__cordl_internal_set__base64Encoder)) ::Newtonsoft::Json::Utilities::Base64Encoder*  _base64Encoder;

/// @brief Field _charEscapeFlags, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__charEscapeFlags, put=__cordl_internal_set__charEscapeFlags)) ::ArrayW<bool,::Array<bool>*>  _charEscapeFlags;

/// @brief Field _indentChar, offset 0x78, size 0x2 
 __declspec(property(get=__cordl_internal_get__indentChar, put=__cordl_internal_set__indentChar)) char16_t  _indentChar;

/// @brief Field _indentChars, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__indentChars, put=__cordl_internal_set__indentChars)) ::ArrayW<char16_t,::Array<char16_t>*>  _indentChars;

/// @brief Field _indentation, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__indentation, put=__cordl_internal_set__indentation)) int32_t  _indentation;

/// @brief Field _quoteChar, offset 0x80, size 0x2 
 __declspec(property(get=__cordl_internal_get__quoteChar, put=__cordl_internal_set__quoteChar)) char16_t  _quoteChar;

/// @brief Field _quoteName, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__quoteName, put=__cordl_internal_set__quoteName)) bool  _quoteName;

/// @brief Field _safeAsync, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__safeAsync, put=__cordl_internal_set__safeAsync)) bool  _safeAsync;

/// @brief Field _writeBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeBuffer, put=__cordl_internal_set__writeBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _writeBuffer;

/// @brief Field _writer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::TextWriter*  _writer;

/// @brief Method Close, addr 0x3e11dd0, size 0x1c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CloseAsync, addr 0x3e0e45c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CloseBufferAndWriter, addr 0x3e11dec, size 0x48, virtual false, abstract: false, final false
inline void CloseBufferAndWriter() ;

/// @brief Method CloseBufferAndWriterAsync, addr 0x3e0e540, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseBufferAndWriterAsync() ;

/// @brief Method DoCloseAsync, addr 0x3e0e470, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoCloseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoFlushAsync, addr 0x3e0e1e4, size 0x94, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoFlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteCommentAsync, addr 0x3e1166c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteCommentAsync(::StringW  text, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteEndAsync, addr 0x3e0e310, size 0x14c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteEndAsync(::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteIndentAsync, addr 0x3e0e630, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteIndentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteIndentSpaceAsync, addr 0x3e0eaa0, size 0x70, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteIndentSpaceAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteNullAsync, addr 0x3e0ebac, size 0x74, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteNullAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWritePropertyNameAsync, addr 0x3e0f090, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWritePropertyNameAsync, addr 0x3e0f2e8, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::StringW  name, bool  escape, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWritePropertyNameAsync, addr 0x3e0f1e4, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::System::Threading::Tasks::Task*  task, ::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteRawAsync, addr 0x3e0eb24, size 0x74, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteRawAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteRawValueAsync, addr 0x3e117c4, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteRawValueAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteRawValueAsync, addr 0x3e11890, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteRawValueAsync(::System::Threading::Tasks::Task*  task, ::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteStartArrayAsync, addr 0x3e0f3e8, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteStartArrayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteStartArrayAsync, addr 0x3e0f4b4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteStartArrayAsync(::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteStartConstructorAsync, addr 0x3e0f758, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteStartConstructorAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteStartObjectAsync, addr 0x3e0f5a0, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteStartObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteStartObjectAsync, addr 0x3e0f66c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteStartObjectAsync(::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteUndefinedAsync, addr 0x3e0f844, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteUndefinedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteUndefinedAsync, addr 0x3e0f940, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteUndefinedAsync(::System::Threading::Tasks::Task*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10f34, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Threading::Tasks::Task*  task, ::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10e0c, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0fef4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::DateTime  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10074, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::DateTimeOffset  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10244, size 0x8c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Decimal  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e106cc, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Guid  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0ffe0, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<::System::DateTime>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e101b0, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<::System::DateTimeOffset>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10344, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<::System::Decimal>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10808, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<::System::Guid>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e1111c, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<::System::TimeSpan>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0fb64, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<bool>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0fe60, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<char16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10d68, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<int16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e108d0, size 0x8c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<int32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e1099c, size 0x8c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<int64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e10c8c, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<int8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e115d4, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<uint16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e111d4, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<uint32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e1128c, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<uint64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0fc28, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Nullable_1<uint8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e11030, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(::System::TimeSpan  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0facc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(bool  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueAsync, addr 0x3e0fdc8, size 0x7c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueAsync(char16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteValueDelimiterAsync, addr 0x3e0e28c, size 0x70, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteValueDelimiterAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DoWriteWhitespaceAsync, addr 0x3e0fa2c, size 0x84, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DoWriteWhitespaceAsync(::StringW  ws, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EnsureWriteBuffer, addr 0x3e11978, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<char16_t,::Array<char16_t>*> EnsureWriteBuffer(int32_t  length, int32_t  copyTo) ;

/// @brief Method EnsureWriteBuffer, addr 0x3e126d0, size 0x2c, virtual false, abstract: false, final false
inline void EnsureWriteBuffer() ;

/// @brief Method Flush, addr 0x3e11db0, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0x3e0e1d0, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Newtonsoft::Json::JsonTextWriter* New_ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method OnStringEscapeHandlingChanged, addr 0x3e12234, size 0x4, virtual true, abstract: false, final false
inline void OnStringEscapeHandlingChanged() ;

/// @brief Method SetIndentChars, addr 0x3e0e6f4, size 0xe8, virtual false, abstract: false, final false
inline int32_t SetIndentChars() ;

/// @brief Method UpdateCharEscapeFlags, addr 0x3e11bbc, size 0x6c, virtual false, abstract: false, final false
inline void UpdateCharEscapeFlags() ;

/// @brief Method WriteComment, addr 0x3e137ac, size 0xb8, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteCommentAsync, addr 0x3e11658, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteCommentAsync(::StringW  text, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteDigitsAsync, addr 0x3e0ec20, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteDigitsAsync(uint64_t  uvalue, bool  negative, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEnd, addr 0x3e11f58, size 0xf4, virtual true, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteEndArrayAsync, addr 0x3e11744, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndArrayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndAsync, addr 0x3e0e604, size 0x18, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndAsync, addr 0x3e0e2fc, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndAsync(::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndConstructorAsync, addr 0x3e11768, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndConstructorAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndObjectAsync, addr 0x3e1178c, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEscapedString, addr 0x3e1209c, size 0xd4, virtual false, abstract: false, final false
inline void WriteEscapedString(::StringW  value, bool  quote) ;

/// @brief Method WriteEscapedStringAsync, addr 0x3e0efc8, size 0xb4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEscapedStringAsync(::StringW  value, bool  quote, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIndent, addr 0x3e12238, size 0x128, virtual true, abstract: false, final false
inline void WriteIndent() ;

/// @brief Method WriteIndentAsync, addr 0x3e0e61c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIndentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIndentAsync, addr 0x3e0e7dc, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIndentAsync(int32_t  currentIndentCount, int32_t  newLineLen, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIndentSpace, addr 0x3e12388, size 0x28, virtual true, abstract: false, final false
inline void WriteIndentSpace() ;

/// @brief Method WriteIndentSpaceAsync, addr 0x3e0ea8c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIndentSpaceAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIntegerValue, addr 0x3e1272c, size 0x4c, virtual false, abstract: false, final false
inline void WriteIntegerValue(int32_t  value) ;

/// @brief Method WriteIntegerValue, addr 0x3e127a8, size 0x4c, virtual false, abstract: false, final false
inline void WriteIntegerValue(int64_t  value) ;

/// @brief Method WriteIntegerValue, addr 0x3e13964, size 0x70, virtual false, abstract: false, final false
inline void WriteIntegerValue(uint32_t  value, bool  negative) ;

/// @brief Method WriteIntegerValue, addr 0x3e12858, size 0x70, virtual false, abstract: false, final false
inline void WriteIntegerValue(uint64_t  value, bool  negative) ;

/// @brief Method WriteIntegerValueAsync, addr 0x3e0eeac, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIntegerValueAsync(::System::Threading::Tasks::Task*  task, uint64_t  uvalue, bool  negative, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIntegerValueAsync, addr 0x3e0efbc, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIntegerValueAsync(uint64_t  uvalue, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIntegerValueAsync, addr 0x3e0eddc, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIntegerValueAsync(uint64_t  uvalue, bool  negative, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIntegerValueAsync, addr 0x3e0efa4, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIntegerValueAsync(int64_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteNull, addr 0x3e124e4, size 0x84, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WriteNullAsync, addr 0x3e0eb98, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteNullAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteNumberToBuffer, addr 0x3e138a4, size 0xc0, virtual false, abstract: false, final false
inline int32_t WriteNumberToBuffer(uint32_t  value, bool  negative) ;

/// @brief Method WriteNumberToBuffer, addr 0x3e0ecfc, size 0xe0, virtual false, abstract: false, final false
inline int32_t WriteNumberToBuffer(uint64_t  value, bool  negative) ;

/// @brief Method WritePropertyName, addr 0x3e1204c, size 0x50, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0x3e12170, size 0xc4, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// @brief Method WritePropertyNameAsync, addr 0x3e0f07c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WritePropertyNameAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WritePropertyNameAsync, addr 0x3e0f2cc, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WritePropertyNameAsync(::StringW  name, bool  escape, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteRaw, addr 0x3e125ec, size 0x40, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteRawAsync, addr 0x3e0eb10, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteRawAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteRawValueAsync, addr 0x3e117b0, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteRawValueAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartArray, addr 0x3e11e70, size 0x3c, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartArrayAsync, addr 0x3e0f3d4, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartArrayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartConstructor, addr 0x3e11eac, size 0xac, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartConstructorAsync, addr 0x3e0f744, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartConstructorAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartObject, addr 0x3e11e34, size 0x3c, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteStartObjectAsync, addr 0x3e0f58c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteUndefined, addr 0x3e12568, size 0x84, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// @brief Method WriteUndefinedAsync, addr 0x3e0f830, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteUndefinedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValue, addr 0x3e13154, size 0xb8, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteValue, addr 0x3e1262c, size 0xa4, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0x3e12ea4, size 0x184, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0x3e1320c, size 0x15c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0x3e12e04, size 0xa0, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0x3e134dc, size 0xfc, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0x3e12b14, size 0x100, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0x3e12974, size 0xf4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0x3e123d4, size 0x110, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0x3e135d8, size 0x114, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue, addr 0x3e136ec, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0x3e12c14, size 0x98, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0x3e12d0c, size 0x98, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0x3e12a68, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0x3e128c8, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0x3e12cac, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0x3e126fc, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0x3e127f4, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue, addr 0x3e12dd4, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue, addr 0x3e12cdc, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue, addr 0x3e12778, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue, addr 0x3e12824, size 0x34, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0x3e12da4, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteValueAsync, addr 0x3e0fcac, size 0x30, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10df8, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fee0, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTime  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10060, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTimeOffset  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10230, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Decimal  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e106b8, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Guid  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0ffcc, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::DateTime>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e1015c, size 0x54, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::DateTimeOffset>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e102d0, size 0x74, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::Decimal>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e107b4, size 0x54, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::Guid>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e11108, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::TimeSpan>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fb48, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<bool>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fe44, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<char16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10480, size 0xc0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<double_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e105fc, size 0xbc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<float_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10d4c, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e108bc, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10988, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10c70, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e115b8, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e111c0, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e11278, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fc0c, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10a28, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Numerics::BigInteger  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10ae8, size 0x158, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Object*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e1101c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::TimeSpan  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e11310, size 0xcc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Uri*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fab0, size 0x1c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(bool  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fdb4, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(char16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e103c4, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(double_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e103e4, size 0x9c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(double_t  value, bool  nullable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10540, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(float_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10560, size 0x9c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(float_t  value, bool  nullable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10d1c, size 0x30, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e1088c, size 0x30, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int32_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e1095c, size 0x2c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int64_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e10c40, size 0x30, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int8_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e11594, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e1119c, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint32_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e11258, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint64_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e0fbe8, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint8_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueDelimiter, addr 0x3e12360, size 0x28, virtual true, abstract: false, final false
inline void WriteValueDelimiter() ;

/// @brief Method WriteValueDelimiterAsync, addr 0x3e0e278, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueDelimiterAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueInternal, addr 0x3e123b0, size 0x24, virtual false, abstract: false, final false
inline void WriteValueInternal(::StringW  value, ::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteValueInternalAsync, addr 0x3e0e9a4, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueInternalAsync(::System::Threading::Tasks::Task*  task, ::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueInternalAsync, addr 0x3e0e8c4, size 0xe0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueInternalAsync(::Newtonsoft::Json::JsonToken  token, ::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueNonNullAsync, addr 0x3e0fcdc, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueNonNullAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueNotNullAsync, addr 0x3e114ac, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueNotNullAsync(::System::Threading::Tasks::Task*  task, ::System::Uri*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueNotNullAsync, addr 0x3e113dc, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueNotNullAsync(::System::Uri*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueToBuffer, addr 0x3e13028, size 0x12c, virtual false, abstract: false, final false
inline int32_t WriteValueToBuffer(::System::DateTime  value) ;

/// @brief Method WriteValueToBuffer, addr 0x3e13368, size 0x174, virtual false, abstract: false, final false
inline int32_t WriteValueToBuffer(::System::DateTimeOffset  value) ;

/// @brief Method WriteWhitespace, addr 0x3e13864, size 0x40, virtual true, abstract: false, final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteWhitespaceAsync, addr 0x3e0fa18, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteWhitespaceAsync(::StringW  ws, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::IArrayPool_1<char16_t>*> const& __cordl_internal_get__arrayPool() const;

constexpr ::Newtonsoft::Json::Utilities::Base64Encoder*& __cordl_internal_get__base64Encoder() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::Base64Encoder*> const& __cordl_internal_get__base64Encoder() const;

constexpr ::ArrayW<bool,::Array<bool>*> const& __cordl_internal_get__charEscapeFlags() const;

constexpr ::ArrayW<bool,::Array<bool>*>& __cordl_internal_get__charEscapeFlags() ;

constexpr char16_t const& __cordl_internal_get__indentChar() const;

constexpr char16_t& __cordl_internal_get__indentChar() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__indentChars() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__indentChars() ;

constexpr int32_t const& __cordl_internal_get__indentation() const;

constexpr int32_t& __cordl_internal_get__indentation() ;

constexpr char16_t const& __cordl_internal_get__quoteChar() const;

constexpr char16_t& __cordl_internal_get__quoteChar() ;

constexpr bool const& __cordl_internal_get__quoteName() const;

constexpr bool& __cordl_internal_get__quoteName() ;

constexpr bool const& __cordl_internal_get__safeAsync() const;

constexpr bool& __cordl_internal_get__safeAsync() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__writeBuffer() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__writeBuffer() ;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__writer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get__writer() const;

constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

constexpr void __cordl_internal_set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder*  value) ;

constexpr void __cordl_internal_set__charEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr void __cordl_internal_set__indentChar(char16_t  value) ;

constexpr void __cordl_internal_set__indentChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__indentation(int32_t  value) ;

constexpr void __cordl_internal_set__quoteChar(char16_t  value) ;

constexpr void __cordl_internal_set__quoteName(bool  value) ;

constexpr void __cordl_internal_set__safeAsync(bool  value) ;

constexpr void __cordl_internal_set__writeBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0x3e11c5c, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  textWriter) ;

/// @brief Method get_ArrayPool, addr 0x3e11a80, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* get_ArrayPool() ;

/// @brief Method get_Base64Encoder, addr 0x3e11a14, size 0x6c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder() ;

/// @brief Method get_IndentChar, addr 0x3e11c28, size 0x8, virtual false, abstract: false, final false
inline char16_t get_IndentChar() ;

/// @brief Method get_Indentation, addr 0x3e11ae4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Indentation() ;

/// @brief Method get_QuoteChar, addr 0x3e11b48, size 0x8, virtual false, abstract: false, final false
inline char16_t get_QuoteChar() ;

/// @brief Method get_QuoteName, addr 0x3e11c48, size 0x8, virtual false, abstract: false, final false
inline bool get_QuoteName() ;

/// @brief Method set_ArrayPool, addr 0x3e11a88, size 0x5c, virtual false, abstract: false, final false
inline void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

/// @brief Method set_IndentChar, addr 0x3e11c30, size 0x18, virtual false, abstract: false, final false
inline void set_IndentChar(char16_t  value) ;

/// @brief Method set_Indentation, addr 0x3e11aec, size 0x5c, virtual false, abstract: false, final false
inline void set_Indentation(int32_t  value) ;

/// @brief Method set_QuoteChar, addr 0x3e11b50, size 0x6c, virtual false, abstract: false, final false
inline void set_QuoteChar(char16_t  value) ;

/// @brief Method set_QuoteName, addr 0x3e11c50, size 0xc, virtual false, abstract: false, final false
inline void set_QuoteName(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonTextWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTextWriter(JsonTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTextWriter(JsonTextWriter const& ) = delete;

/// @brief Field _safeAsync, offset: 0x60, size: 0x1, def value: None
 bool  ____safeAsync;

/// @brief Field _writer, offset: 0x68, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____writer;

/// @brief Field _base64Encoder, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Utilities::Base64Encoder*  ____base64Encoder;

/// @brief Field _indentChar, offset: 0x78, size: 0x2, def value: None
 char16_t  ____indentChar;

/// @brief Field _indentation, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____indentation;

/// @brief Field _quoteChar, offset: 0x80, size: 0x2, def value: None
 char16_t  ____quoteChar;

/// @brief Field _quoteName, offset: 0x82, size: 0x1, def value: None
 bool  ____quoteName;

/// @brief Field _charEscapeFlags, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<bool,::Array<bool>*>  ____charEscapeFlags;

/// @brief Field _writeBuffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____writeBuffer;

/// @brief Field _arrayPool, offset: 0x98, size: 0x8, def value: None
 ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ____arrayPool;

/// @brief Field _indentChars, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____indentChars;

/// @brief Field IndentCharBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  IndentCharBufferSize{static_cast<int32_t>(0xc)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextWriter, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____safeAsync) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____writer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____base64Encoder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentChar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____quoteChar) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____quoteName) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____charEscapeFlags) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____writeBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____arrayPool) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextWriter, ____indentChars) == 0xa0, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextWriter*, "Newtonsoft.Json", "JsonTextWriter");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___CloseBufferAndWriterAsync_d__9, "Newtonsoft.Json", "JsonTextWriter/<CloseBufferAndWriterAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoCloseAsync_d__8, "Newtonsoft.Json", "JsonTextWriter/<DoCloseAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteCommentAsync_d__115, "Newtonsoft.Json", "JsonTextWriter/<DoWriteCommentAsync>d__115");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__30, "Newtonsoft.Json", "JsonTextWriter/<DoWritePropertyNameAsync>d__30");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWritePropertyNameAsync_d__32, "Newtonsoft.Json", "JsonTextWriter/<DoWritePropertyNameAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteRawValueAsync_d__121, "Newtonsoft.Json", "JsonTextWriter/<DoWriteRawValueAsync>d__121");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartArrayAsync_d__35, "Newtonsoft.Json", "JsonTextWriter/<DoWriteStartArrayAsync>d__35");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartConstructorAsync_d__40, "Newtonsoft.Json", "JsonTextWriter/<DoWriteStartConstructorAsync>d__40");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteStartObjectAsync_d__38, "Newtonsoft.Json", "JsonTextWriter/<DoWriteStartObjectAsync>d__38");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteUndefinedAsync_d__43, "Newtonsoft.Json", "JsonTextWriter/<DoWriteUndefinedAsync>d__43");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__60, "Newtonsoft.Json", "JsonTextWriter/<DoWriteValueAsync>d__60");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__64, "Newtonsoft.Json", "JsonTextWriter/<DoWriteValueAsync>d__64");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__78, "Newtonsoft.Json", "JsonTextWriter/<DoWriteValueAsync>d__78");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__97, "Newtonsoft.Json", "JsonTextWriter/<DoWriteValueAsync>d__97");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___DoWriteValueAsync_d__99, "Newtonsoft.Json", "JsonTextWriter/<DoWriteValueAsync>d__99");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___WriteIndentAsync_d__13, "Newtonsoft.Json", "JsonTextWriter/<WriteIndentAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___WriteIntegerValueAsync_d__24, "Newtonsoft.Json", "JsonTextWriter/<WriteIntegerValueAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___WriteValueInternalAsync_d__15, "Newtonsoft.Json", "JsonTextWriter/<WriteValueInternalAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___WriteValueNonNullAsync_d__54, "Newtonsoft.Json", "JsonTextWriter/<WriteValueNonNullAsync>d__54");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonTextWriter___WriteValueNotNullAsync_d__110, "Newtonsoft.Json", "JsonTextWriter/<WriteValueNotNullAsync>d__110");
