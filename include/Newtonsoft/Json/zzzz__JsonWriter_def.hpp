#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonWriter)
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class JsonWriterException;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct WriteState;
}
namespace Newtonsoft::Json {
struct __JsonWriter__State;
}
namespace Newtonsoft::Json {
struct __JsonWriter___AutoCompleteAsync_d__1;
}
namespace Newtonsoft::Json {
struct __JsonWriter___InternalWriteStartAsync_d__20;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteConstructorDateAsync_d__32;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteTokenAsync_d__30;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteTokenSyncReadingAsync_d__31;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
class IConvertible;
}
namespace System {
class IDisposable;
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
struct __JsonWriter__State;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct __JsonWriter___AutoCompleteAsync_d__1;
}
namespace Newtonsoft::Json {
struct __JsonWriter___InternalWriteStartAsync_d__20;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteConstructorDateAsync_d__32;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteTokenAsync_d__30;
}
namespace Newtonsoft::Json {
struct __JsonWriter___WriteTokenSyncReadingAsync_d__31;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d;
}
namespace Newtonsoft::Json {
struct __JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter__State);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonWriter);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d);
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::State
struct CORDL_TYPE __JsonWriter__State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____JsonWriter__State_Unwrapped
enum struct ____JsonWriter__State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Property = static_cast<int32_t>(0x1),
__E_ObjectStart = static_cast<int32_t>(0x2),
__E_Object = static_cast<int32_t>(0x3),
__E_ArrayStart = static_cast<int32_t>(0x4),
__E_Array = static_cast<int32_t>(0x5),
__E_ConstructorStart = static_cast<int32_t>(0x6),
__E_Constructor = static_cast<int32_t>(0x7),
__E_Closed = static_cast<int32_t>(0x8),
__E_Error = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____JsonWriter__State_Unwrapped () const noexcept {
return static_cast<____JsonWriter__State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter__State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __JsonWriter__State(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Array value: static_cast<int32_t>(0x5)
static ::Newtonsoft::Json::__JsonWriter__State const Array;

/// @brief Field ArrayStart value: static_cast<int32_t>(0x4)
static ::Newtonsoft::Json::__JsonWriter__State const ArrayStart;

/// @brief Field Closed value: static_cast<int32_t>(0x8)
static ::Newtonsoft::Json::__JsonWriter__State const Closed;

/// @brief Field Constructor value: static_cast<int32_t>(0x7)
static ::Newtonsoft::Json::__JsonWriter__State const Constructor;

/// @brief Field ConstructorStart value: static_cast<int32_t>(0x6)
static ::Newtonsoft::Json::__JsonWriter__State const ConstructorStart;

/// @brief Field Error value: static_cast<int32_t>(0x9)
static ::Newtonsoft::Json::__JsonWriter__State const Error;

/// @brief Field Object value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::__JsonWriter__State const Object;

/// @brief Field ObjectStart value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::__JsonWriter__State const ObjectStart;

/// @brief Field Property value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::__JsonWriter__State const Property;

/// @brief Field Start value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::__JsonWriter__State const Start;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter__State, value__) == 0x0, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<<InternalWriteEndAsync>g__AwaitEnd|11_2>d
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<<InternalWriteEndAsync>g__AwaitEnd|11_2>d
struct CORDL_TYPE __JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2a370, size 0x290, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2a600, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "LevelsToComplete", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonWriter*  __4__this, int32_t  LevelsToComplete, ::System::Threading::CancellationToken  CancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field LevelsToComplete, offset: 0x30, size: 0x4, def value: None
 int32_t  LevelsToComplete;

/// @brief Field CancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  CancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, LevelsToComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, CancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<<InternalWriteEndAsync>g__AwaitIndent|11_1>d
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<<InternalWriteEndAsync>g__AwaitIndent|11_1>d
struct CORDL_TYPE __JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2a668, size 0x370, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2a9d8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "LevelsToComplete", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonWriter*  __4__this, ::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  CancellationToken, int32_t  LevelsToComplete, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field token, offset: 0x30, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  token;

/// @brief Field CancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  CancellationToken;

/// @brief Field LevelsToComplete, offset: 0x40, size: 0x4, def value: None
 int32_t  LevelsToComplete;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, CancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, LevelsToComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, __u__1) == 0x48, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<<InternalWriteEndAsync>g__AwaitProperty|11_0>d
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<<InternalWriteEndAsync>g__AwaitProperty|11_0>d
struct CORDL_TYPE __JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2aa40, size 0x45c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2ae9c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None }, CppParam { name: "LevelsToComplete", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  task, ::Newtonsoft::Json::JsonWriter*  __4__this, ::System::Threading::CancellationToken  CancellationToken, ::Newtonsoft::Json::JsonToken  token, int32_t  LevelsToComplete, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field CancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  CancellationToken;

/// @brief Field token, offset: 0x38, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  token;

/// @brief Field LevelsToComplete, offset: 0x3c, size: 0x4, def value: None
 int32_t  LevelsToComplete;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, CancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, token) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, LevelsToComplete) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<<InternalWriteEndAsync>g__AwaitRemaining|11_3>d
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<<InternalWriteEndAsync>g__AwaitRemaining|11_3>d
struct CORDL_TYPE __JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2af04, size 0x3e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2b2e4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "LevelsToComplete", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_token_5__2", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  __4__this, ::System::Threading::CancellationToken  CancellationToken, int32_t  LevelsToComplete, ::Newtonsoft::Json::JsonToken  _token_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field CancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  CancellationToken;

/// @brief Field LevelsToComplete, offset: 0x30, size: 0x4, def value: None
 int32_t  LevelsToComplete;

/// @brief Field <token>5__2, offset: 0x34, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  _token_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, CancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, LevelsToComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, _token_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<AutoCompleteAsync>d__1
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<AutoCompleteAsync>d__1
struct CORDL_TYPE __JsonWriter___AutoCompleteAsync_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2b34c, size 0x2a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2b5f4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter___AutoCompleteAsync_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter___AutoCompleteAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, __u__1) == 0x30, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<InternalWriteStartAsync>d__20
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<InternalWriteStartAsync>d__20
struct CORDL_TYPE __JsonWriter___InternalWriteStartAsync_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2b65c, size 0x208, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2b864, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter___InternalWriteStartAsync_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter___InternalWriteStartAsync_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  __4__this, ::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::JsonContainerType  container, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field token, offset: 0x28, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  token;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field container, offset: 0x38, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonContainerType  container;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, container) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteConstructorDateAsync>d__32
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<WriteConstructorDateAsync>d__32
struct CORDL_TYPE __JsonWriter___WriteConstructorDateAsync_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2b8cc, size 0x6d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2c058, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter___WriteConstructorDateAsync_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "_date_5__2", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JsonWriter___WriteConstructorDateAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::JsonWriter*  __4__this, ::System::DateTime  _date_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field <date>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  _date_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, _date_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, __u__2) == 0x50, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteTokenAsync>d__30
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<WriteTokenAsync>d__30
struct CORDL_TYPE __JsonWriter___WriteTokenAsync_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2c0c0, size 0x62c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2c6fc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter___WriteTokenAsync_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "writeDateConstructorAsDate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "writeComments", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "writeChildren", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_initialDepth_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr __JsonWriter___WriteTokenAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  __4__this, ::Newtonsoft::Json::JsonReader*  reader, bool  writeDateConstructorAsDate, ::System::Threading::CancellationToken  cancellationToken, bool  writeComments, bool  writeChildren, int32_t  _initialDepth_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__2) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field reader, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field writeDateConstructorAsDate, offset: 0x30, size: 0x1, def value: None
 bool  writeDateConstructorAsDate;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field writeComments, offset: 0x40, size: 0x1, def value: None
 bool  writeComments;

/// @brief Field writeChildren, offset: 0x41, size: 0x1, def value: None
 bool  writeChildren;

/// @brief Field <initialDepth>5__2, offset: 0x44, size: 0x4, def value: None
 int32_t  _initialDepth_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, reader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, writeDateConstructorAsDate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, writeComments) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, writeChildren) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, _initialDepth_5__2) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, __u__2) == 0x58, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: ::<WriteTokenSyncReadingAsync>d__31
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::<WriteTokenSyncReadingAsync>d__31
struct CORDL_TYPE __JsonWriter___WriteTokenSyncReadingAsync_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e2c764, size 0x484, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e2cbe8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JsonWriter___WriteTokenSyncReadingAsync_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_initialDepth_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr __JsonWriter___WriteTokenSyncReadingAsync_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  __4__this, ::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken, int32_t  _initialDepth_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  __4__this;

/// @brief Field reader, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <initialDepth>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  _initialDepth_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, reader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, _initialDepth_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, __u__1) == 0x40, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
// Type: Newtonsoft.Json::JsonWriter
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonWriter*
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
// Declarations
using State = ::Newtonsoft::Json::__JsonWriter__State;

using _AutoCompleteAsync_d__1 = ::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1;

using _InternalWriteStartAsync_d__20 = ::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20;

using _WriteConstructorDateAsync_d__32 = ::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32;

using _WriteTokenAsync_d__30 = ::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30;

using _WriteTokenSyncReadingAsync_d__31 = ::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31;

using __InternalWriteEndAsync_g__AwaitEnd_11_2_d = ::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d;

using __InternalWriteEndAsync_g__AwaitIndent_11_1_d = ::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d;

using __InternalWriteEndAsync_g__AwaitProperty_11_0_d = ::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d;

using __InternalWriteEndAsync_g__AwaitRemaining_11_3_d = ::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d;

 __declspec(property(get=get_AutoCompleteOnClose, put=set_AutoCompleteOnClose)) bool  AutoCompleteOnClose;

 __declspec(property(get=get_CloseOutput, put=set_CloseOutput)) bool  CloseOutput;

 __declspec(property(get=get_ContainerPath)) ::StringW  ContainerPath;

 __declspec(property(get=get_Culture, put=set_Culture)) ::System::Globalization::CultureInfo*  Culture;

 __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling  DateFormatHandling;

 __declspec(property(get=get_DateFormatString, put=set_DateFormatString)) ::StringW  DateFormatString;

 __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  DateTimeZoneHandling;

 __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling)) ::Newtonsoft::Json::FloatFormatHandling  FloatFormatHandling;

 __declspec(property(get=get_Formatting, put=set_Formatting)) ::Newtonsoft::Json::Formatting  Formatting;

 __declspec(property(get=get_Path)) ::StringW  Path;

/// @brief Field StateArray, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_StateArray, put=setStaticF_StateArray)) ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>  StateArray;

/// @brief Field StateArrayTemplate, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_StateArrayTemplate, put=setStaticF_StateArrayTemplate)) ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>  StateArrayTemplate;

 __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling  StringEscapeHandling;

 __declspec(property(get=get_Top)) int32_t  Top;

 __declspec(property(get=get_WriteState)) ::Newtonsoft::Json::WriteState  WriteState;

/// @brief Field <AutoCompleteOnClose>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__AutoCompleteOnClose_k__BackingField, put=__cordl_internal_set__AutoCompleteOnClose_k__BackingField)) bool  _AutoCompleteOnClose_k__BackingField;

/// @brief Field <CloseOutput>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__CloseOutput_k__BackingField, put=__cordl_internal_set__CloseOutput_k__BackingField)) bool  _CloseOutput_k__BackingField;

/// @brief Field _culture, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _currentPosition, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentPosition, put=__cordl_internal_set__currentPosition)) ::Newtonsoft::Json::JsonPosition  _currentPosition;

/// @brief Field _currentState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::Newtonsoft::Json::__JsonWriter__State  _currentState;

/// @brief Field _dateFormatHandling, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateFormatHandling, put=__cordl_internal_set__dateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling  _dateFormatHandling;

/// @brief Field _dateFormatString, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateTimeZoneHandling, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  _dateTimeZoneHandling;

/// @brief Field _floatFormatHandling, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__floatFormatHandling, put=__cordl_internal_set__floatFormatHandling)) ::Newtonsoft::Json::FloatFormatHandling  _floatFormatHandling;

/// @brief Field _formatting, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__formatting, put=__cordl_internal_set__formatting)) ::Newtonsoft::Json::Formatting  _formatting;

/// @brief Field _stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stack, put=__cordl_internal_set__stack)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  _stack;

/// @brief Field _stringEscapeHandling, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__stringEscapeHandling, put=__cordl_internal_set__stringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling  _stringEscapeHandling;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AutoComplete, addr 0x3e27f4c, size 0x208, virtual false, abstract: false, final false
inline void AutoComplete(::Newtonsoft::Json::JsonToken  tokenBeingWritten) ;

/// @brief Method AutoCompleteAll, addr 0x3e27190, size 0x40, virtual false, abstract: false, final false
inline void AutoCompleteAll() ;

/// @brief Method AutoCompleteAsync, addr 0x3e20728, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AutoCompleteAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method AutoCompleteAsync, addr 0x3e204b0, size 0x278, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AutoCompleteAsync(::Newtonsoft::Json::JsonToken  tokenBeingWritten, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method AutoCompleteClose, addr 0x3e27e80, size 0xbc, virtual false, abstract: false, final false
inline void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method BuildStateArray, addr 0x3e265f4, size 0x278, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> BuildStateArray() ;

/// @brief Method CalculateLevelsToComplete, addr 0x3e2126c, size 0xf8, virtual false, abstract: false, final false
inline int32_t CalculateLevelsToComplete(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method CalculateWriteTokenFinalDepth, addr 0x3e27e18, size 0x68, virtual false, abstract: false, final false
inline int32_t CalculateWriteTokenFinalDepth(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method CalculateWriteTokenInitialDepth, addr 0x3e27c70, size 0x6c, virtual false, abstract: false, final false
inline int32_t CalculateWriteTokenInitialDepth(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Close, addr 0x3e27180, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CloseAsync, addr 0x3e207f8, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CreateUnsupportedTypeException, addr 0x3e2653c, size 0xb8, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value) ;

/// @brief Method Dispose, addr 0x3e2a0b8, size 0x24, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0x3e208cc, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetCloseTokenForType, addr 0x3e21434, size 0x9c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method InternalWriteComment, addr 0x3e29fdc, size 0x8, virtual false, abstract: false, final false
inline void InternalWriteComment() ;

/// @brief Method InternalWriteCommentAsync, addr 0x3e14540, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalWriteCommentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalWriteEnd, addr 0x3e27224, size 0x4, virtual false, abstract: false, final false
inline void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType  container) ;

/// @brief Method InternalWriteEndAsync, addr 0x3e21024, size 0x248, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalWriteEndAsync(::Newtonsoft::Json::JsonContainerType  type, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalWritePropertyName, addr 0x3e27260, size 0x10, virtual false, abstract: false, final false
inline void InternalWritePropertyName(::StringW  name) ;

/// @brief Method InternalWritePropertyNameAsync, addr 0x3e14fe4, size 0xbc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalWritePropertyNameAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalWriteRaw, addr 0x3e281a8, size 0x4, virtual false, abstract: false, final false
inline void InternalWriteRaw() ;

/// @brief Method InternalWriteStart, addr 0x3e271dc, size 0x40, virtual false, abstract: false, final false
inline void InternalWriteStart(::Newtonsoft::Json::JsonToken  token, ::Newtonsoft::Json::JsonContainerType  container) ;

/// @brief Method InternalWriteStartAsync, addr 0x3e15bfc, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalWriteStartAsync(::Newtonsoft::Json::JsonToken  token, ::Newtonsoft::Json::JsonContainerType  container, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalWriteValue, addr 0x3e28170, size 0x18, virtual false, abstract: false, final false
inline void InternalWriteValue(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method InternalWriteValueAsync, addr 0x3e16a18, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalWriteValueAsync(::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalWriteWhitespace, addr 0x3e29fe8, size 0x60, virtual false, abstract: false, final false
inline void InternalWriteWhitespace(::StringW  ws) ;

/// @brief Method IsWriteTokenIncomplete, addr 0x3e27da8, size 0x70, virtual false, abstract: false, final false
inline bool IsWriteTokenIncomplete(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, int32_t  initialDepth) ;

static inline ::Newtonsoft::Json::JsonWriter* New_ctor() ;

/// @brief Method OnStringEscapeHandlingChanged, addr 0x3e26f48, size 0x4, virtual true, abstract: false, final false
inline void OnStringEscapeHandlingChanged() ;

/// @brief Method Peek, addr 0x3e2101c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Pop, addr 0x3e21364, size 0xd0, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Push, addr 0x3e26ff8, size 0x188, virtual false, abstract: false, final false
inline void Push(::Newtonsoft::Json::JsonContainerType  value) ;

/// @brief Method ResolveConvertibleValue, addr 0x3e263a4, size 0x198, virtual false, abstract: false, final false
static inline void ResolveConvertibleValue(::System::IConvertible*  convertible, ByRef<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>  typeCode, ByRef<::System::Object*>  value) ;

/// @brief Method SetWriteState, addr 0x3e2a0dc, size 0x1b8, virtual false, abstract: false, final false
inline void SetWriteState(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value) ;

/// @brief Method SetWriteStateAsync, addr 0x3e25008, size 0x254, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetWriteStateAsync(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method System.IDisposable.Dispose, addr 0x3e2a048, size 0x70, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method UpdateCurrentState, addr 0x3e217a0, size 0xb4, virtual false, abstract: false, final false
inline void UpdateCurrentState() ;

/// @brief Method UpdateScopeWithFinishedValue, addr 0x3e24ff0, size 0x18, virtual false, abstract: false, final false
inline void UpdateScopeWithFinishedValue() ;

/// @brief Method WriteComment, addr 0x3e29fd4, size 0x8, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteCommentAsync, addr 0x3e21e40, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteCommentAsync(::StringW  text, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteConstructorDate, addr 0x3e27cdc, size 0xcc, virtual false, abstract: false, final false
inline void WriteConstructorDate(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteConstructorDateAsync, addr 0x3e22bc8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteConstructorDateAsync(::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEnd, addr 0x3e27280, size 0x8, virtual true, abstract: false, final false
inline void WriteEnd() ;

/// @brief Method WriteEnd, addr 0x3e27f3c, size 0x4, virtual true, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteEnd, addr 0x3e27288, size 0xdc, virtual false, abstract: false, final false
inline void WriteEnd(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method WriteEndArray, addr 0x3e27234, size 0x8, virtual true, abstract: false, final false
inline void WriteEndArray() ;

/// @brief Method WriteEndArrayAsync, addr 0x3e21854, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndArrayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndAsync, addr 0x3e20dd4, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndAsync, addr 0x3e209a0, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndAsync(::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndConstructor, addr 0x3e27248, size 0x8, virtual true, abstract: false, final false
inline void WriteEndConstructor() ;

/// @brief Method WriteEndConstructorAsync, addr 0x3e21928, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndConstructorAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndInternalAsync, addr 0x3e20ea8, size 0x174, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndInternalAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteEndObject, addr 0x3e2721c, size 0x8, virtual true, abstract: false, final false
inline void WriteEndObject() ;

/// @brief Method WriteEndObjectAsync, addr 0x3e219fc, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteEndObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIndent, addr 0x3e27f40, size 0x4, virtual true, abstract: false, final false
inline void WriteIndent() ;

/// @brief Method WriteIndentAsync, addr 0x3e20a7c, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIndentAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteIndentSpace, addr 0x3e27f48, size 0x4, virtual true, abstract: false, final false
inline void WriteIndentSpace() ;

/// @brief Method WriteIndentSpaceAsync, addr 0x3e20c24, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteIndentSpaceAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteNull, addr 0x3e28154, size 0x1c, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WriteNullAsync, addr 0x3e21ad0, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteNullAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WritePropertyName, addr 0x3e27250, size 0x10, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0x3e27270, size 0x10, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// @brief Method WritePropertyNameAsync, addr 0x3e21ba4, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WritePropertyNameAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WritePropertyNameAsync, addr 0x3e21c80, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WritePropertyNameAsync(::StringW  name, bool  escape, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteRaw, addr 0x3e281a4, size 0x4, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteRawAsync, addr 0x3e20cf8, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteRawAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteRawValue, addr 0x3e281ac, size 0x50, virtual true, abstract: false, final false
inline void WriteRawValue(::StringW  json) ;

/// @brief Method WriteRawValueAsync, addr 0x3e21f1c, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteRawValueAsync(::StringW  json, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartArray, addr 0x3e27228, size 0xc, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartArrayAsync, addr 0x3e21d6c, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartArrayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartConstructor, addr 0x3e2723c, size 0xc, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartConstructorAsync, addr 0x3e21ff8, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartConstructorAsync(::StringW  name, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteStartObject, addr 0x3e271d0, size 0xc, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteStartObjectAsync, addr 0x3e220d4, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteStartObjectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteToken, addr 0x3e27364, size 0x8, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteToken, addr 0x3e1f64c, size 0x80, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren) ;

/// @brief Method WriteToken, addr 0x3e27a50, size 0x220, virtual true, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments) ;

/// @brief Method WriteToken, addr 0x3e27a48, size 0x8, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method WriteToken, addr 0x3e2736c, size 0x6dc, virtual false, abstract: false, final false
inline void WriteToken(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value) ;

/// @brief Method WriteTokenAsync, addr 0x3e221a8, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteTokenAsync, addr 0x3e221b4, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteTokenAsync, addr 0x3e229dc, size 0x114, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteTokenAsync, addr 0x3e22244, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteTokenAsync, addr 0x3e22250, size 0x78c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteTokenSyncReadingAsync, addr 0x3e22af0, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteTokenSyncReadingAsync(::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteUndefined, addr 0x3e28188, size 0x1c, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// @brief Method WriteUndefinedAsync, addr 0x3e24e40, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteUndefinedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValue, addr 0x3e28c9c, size 0x30, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteValue, addr 0x3e281fc, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0x3e28384, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0x3e283a0, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0x3e28368, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0x3e283bc, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0x3e28a80, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method WriteValue, addr 0x3e28b0c, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method WriteValue, addr 0x3e28a00, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteValue, addr 0x3e28b8c, size 0x84, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteValue, addr 0x3e28c10, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::TimeSpan>  value) ;

/// @brief Method WriteValue, addr 0x3e28710, size 0x84, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<bool>  value) ;

/// @brief Method WriteValue, addr 0x3e2888c, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28684, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28604, size 0x80, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28794, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e283f4, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteValue, addr 0x3e284ec, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28984, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int8_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28810, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28470, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28578, size 0x8c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28908, size 0x7c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint8_t>  value) ;

/// @brief Method WriteValue, addr 0x3e28d78, size 0x134, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0x3e283d8, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue, addr 0x3e28ccc, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0x3e282c0, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0x3e28314, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0x3e282a4, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0x3e28288, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0x3e282dc, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0x3e28218, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0x3e28250, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue, addr 0x3e2834c, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue, addr 0x3e282f8, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue, addr 0x3e28234, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue, addr 0x3e2826c, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0x3e28330, size 0x1c, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteValue, addr 0x3e28eac, size 0x1128, virtual false, abstract: false, final false
static inline void WriteValue(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  typeCode, ::System::Object*  value) ;

/// @brief Method WriteValueAsync, addr 0x3e23010, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24588, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e232a4, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTime  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e2346c, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTimeOffset  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23650, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Decimal  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23bd8, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Guid  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23380, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::DateTime>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23558, size 0xf8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::DateTimeOffset>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e2373c, size 0x11c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::Decimal>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23cc4, size 0xf8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::Guid>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24740, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<::System::TimeSpan>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e22d7c, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<bool>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e231c8, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<char16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23934, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<double_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23afc, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<float_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e244ac, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23e98, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24050, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e242f4, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<int8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24d64, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint16_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24908, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint32_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24ac0, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint64_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e22f34, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Nullable_1<uint8_t>  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e2413c, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Object*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24664, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::TimeSpan  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24bac, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(::System::Uri*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e22ca0, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(bool  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e230ec, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(char16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23858, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(double_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23a20, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(float_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e243d0, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23dbc, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int32_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e23f74, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int64_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24218, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(int8_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e24c88, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint16_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e2482c, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint32_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e249e4, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint64_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e22e58, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueAsync(uint8_t  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueAsync, addr 0x3e2525c, size 0x1148, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteValueAsync(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  typeCode, ::System::Object*  value, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteValueDelimiter, addr 0x3e27f44, size 0x4, virtual true, abstract: false, final false
inline void WriteValueDelimiter() ;

/// @brief Method WriteValueDelimiterAsync, addr 0x3e20b50, size 0xd4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteValueDelimiterAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteWhitespace, addr 0x3e29fe4, size 0x4, virtual true, abstract: false, final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteWhitespaceAsync, addr 0x3e24f14, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteWhitespaceAsync(::StringW  ws, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method <InternalWriteEndAsync>g__AwaitEnd|11_2, addr 0x3e216b4, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitEnd_11_2(::System::Threading::Tasks::Task*  task, int32_t  LevelsToComplete, ::System::Threading::CancellationToken  CancellationToken) ;

/// @brief Method <InternalWriteEndAsync>g__AwaitIndent|11_1, addr 0x3e215bc, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitIndent_11_1(::System::Threading::Tasks::Task*  task, int32_t  LevelsToComplete, ::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  CancellationToken) ;

/// @brief Method <InternalWriteEndAsync>g__AwaitProperty|11_0, addr 0x3e214d0, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitProperty_11_0(::System::Threading::Tasks::Task*  task, int32_t  LevelsToComplete, ::Newtonsoft::Json::JsonToken  token, ::System::Threading::CancellationToken  CancellationToken) ;

/// @brief Method <InternalWriteEndAsync>g__AwaitRemaining|11_3, addr 0x3e2a294, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitRemaining_11_3(int32_t  LevelsToComplete, ::System::Threading::CancellationToken  CancellationToken) ;

constexpr bool const& __cordl_internal_get__AutoCompleteOnClose_k__BackingField() const;

constexpr bool& __cordl_internal_get__AutoCompleteOnClose_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CloseOutput_k__BackingField() const;

constexpr bool& __cordl_internal_get__CloseOutput_k__BackingField() ;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__culture() const;

constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition() ;

constexpr ::Newtonsoft::Json::__JsonWriter__State const& __cordl_internal_get__currentState() const;

constexpr ::Newtonsoft::Json::__JsonWriter__State& __cordl_internal_get__currentState() ;

constexpr ::Newtonsoft::Json::DateFormatHandling const& __cordl_internal_get__dateFormatHandling() const;

constexpr ::Newtonsoft::Json::DateFormatHandling& __cordl_internal_get__dateFormatHandling() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::FloatFormatHandling const& __cordl_internal_get__floatFormatHandling() const;

constexpr ::Newtonsoft::Json::FloatFormatHandling& __cordl_internal_get__floatFormatHandling() ;

constexpr ::Newtonsoft::Json::Formatting const& __cordl_internal_get__formatting() const;

constexpr ::Newtonsoft::Json::Formatting& __cordl_internal_get__formatting() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& __cordl_internal_get__stack() const;

constexpr ::Newtonsoft::Json::StringEscapeHandling const& __cordl_internal_get__stringEscapeHandling() const;

constexpr ::Newtonsoft::Json::StringEscapeHandling& __cordl_internal_get__stringEscapeHandling() ;

constexpr void __cordl_internal_set__AutoCompleteOnClose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CloseOutput_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition  value) ;

constexpr void __cordl_internal_set__currentState(::Newtonsoft::Json::__JsonWriter__State  value) ;

constexpr void __cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

constexpr void __cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value) ;

constexpr void __cordl_internal_set__formatting(::Newtonsoft::Json::Formatting  value) ;

constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  value) ;

constexpr void __cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value) ;

/// @brief Method .ctor, addr 0x3e26fcc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> getStaticF_StateArray() ;

static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> getStaticF_StateArrayTemplate() ;

/// @brief Method get_AutoCompleteOnClose, addr 0x3e26b10, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoCompleteOnClose() ;

/// @brief Method get_CloseOutput, addr 0x3e26afc, size 0x8, virtual false, abstract: false, final false
inline bool get_CloseOutput() ;

/// @brief Method get_ContainerPath, addr 0x3e26bd4, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_ContainerPath() ;

/// @brief Method get_Culture, addr 0x3e16ae4, size 0x68, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method get_DateFormatHandling, addr 0x3e26e04, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// @brief Method get_DateFormatString, addr 0x3e26fb4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DateFormatString() ;

/// @brief Method get_DateTimeZoneHandling, addr 0x3e26e6c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method get_FloatFormatHandling, addr 0x3e26f4c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method get_Formatting, addr 0x3e26d9c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method get_Path, addr 0x3e26c80, size 0x11c, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_StringEscapeHandling, addr 0x3e26ed4, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method get_Top, addr 0x3e13f68, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Top() ;

/// @brief Method get_WriteState, addr 0x3e26b24, size 0xb0, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::WriteState get_WriteState() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_StateArray(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>  value) ;

static inline void setStaticF_StateArrayTemplate(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>,::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State,::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>  value) ;

/// @brief Method set_AutoCompleteOnClose, addr 0x3e26b18, size 0xc, virtual false, abstract: false, final false
inline void set_AutoCompleteOnClose(bool  value) ;

/// @brief Method set_CloseOutput, addr 0x3e26b04, size 0xc, virtual false, abstract: false, final false
inline void set_CloseOutput(bool  value) ;

/// @brief Method set_Culture, addr 0x3e26fc4, size 0x8, virtual false, abstract: false, final false
inline void set_Culture(::System::Globalization::CultureInfo*  value) ;

/// @brief Method set_DateFormatHandling, addr 0x3e26e0c, size 0x60, virtual false, abstract: false, final false
inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value) ;

/// @brief Method set_DateFormatString, addr 0x3e26fbc, size 0x8, virtual false, abstract: false, final false
inline void set_DateFormatString(::StringW  value) ;

/// @brief Method set_DateTimeZoneHandling, addr 0x3e26e74, size 0x60, virtual false, abstract: false, final false
inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

/// @brief Method set_FloatFormatHandling, addr 0x3e26f54, size 0x60, virtual false, abstract: false, final false
inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value) ;

/// @brief Method set_Formatting, addr 0x3e26da4, size 0x60, virtual false, abstract: false, final false
inline void set_Formatting(::Newtonsoft::Json::Formatting  value) ;

/// @brief Method set_StringEscapeHandling, addr 0x3e26edc, size 0x6c, virtual false, abstract: false, final false
inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonWriter(JsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonWriter(JsonWriter const& ) = delete;

/// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  ____stack;

/// @brief Field _currentPosition, offset: 0x18, size: 0x18, def value: None
 ::Newtonsoft::Json::JsonPosition  ____currentPosition;

/// @brief Field _currentState, offset: 0x30, size: 0x4, def value: None
 ::Newtonsoft::Json::__JsonWriter__State  ____currentState;

/// @brief Field _formatting, offset: 0x34, size: 0x4, def value: None
 ::Newtonsoft::Json::Formatting  ____formatting;

/// @brief Field <CloseOutput>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____CloseOutput_k__BackingField;

/// @brief Field <AutoCompleteOnClose>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____AutoCompleteOnClose_k__BackingField;

/// @brief Field _dateFormatHandling, offset: 0x3c, size: 0x4, def value: None
 ::Newtonsoft::Json::DateFormatHandling  ____dateFormatHandling;

/// @brief Field _dateTimeZoneHandling, offset: 0x40, size: 0x4, def value: None
 ::Newtonsoft::Json::DateTimeZoneHandling  ____dateTimeZoneHandling;

/// @brief Field _stringEscapeHandling, offset: 0x44, size: 0x4, def value: None
 ::Newtonsoft::Json::StringEscapeHandling  ____stringEscapeHandling;

/// @brief Field _floatFormatHandling, offset: 0x48, size: 0x4, def value: None
 ::Newtonsoft::Json::FloatFormatHandling  ____floatFormatHandling;

/// @brief Field _dateFormatString, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// @brief Field _culture, offset: 0x58, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonWriter, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____formatting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____CloseOutput_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____AutoCompleteOnClose_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatHandling) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateTimeZoneHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stringEscapeHandling) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____floatFormatHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____culture) == 0x58, "Offset mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter__State, "Newtonsoft.Json", "JsonWriter/State");
NEED_NO_BOX(::Newtonsoft::Json::JsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriter*, "Newtonsoft.Json", "JsonWriter");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter___AutoCompleteAsync_d__1, "Newtonsoft.Json", "JsonWriter/<AutoCompleteAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter___InternalWriteStartAsync_d__20, "Newtonsoft.Json", "JsonWriter/<InternalWriteStartAsync>d__20");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter___WriteConstructorDateAsync_d__32, "Newtonsoft.Json", "JsonWriter/<WriteConstructorDateAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter___WriteTokenAsync_d__30, "Newtonsoft.Json", "JsonWriter/<WriteTokenAsync>d__30");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter___WriteTokenSyncReadingAsync_d__31, "Newtonsoft.Json", "JsonWriter/<WriteTokenSyncReadingAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitEnd_11_2_d, "Newtonsoft.Json", "JsonWriter/<<InternalWriteEndAsync>g__AwaitEnd|11_2>d");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitIndent_11_1_d, "Newtonsoft.Json", "JsonWriter/<<InternalWriteEndAsync>g__AwaitIndent|11_1>d");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitProperty_11_0_d, "Newtonsoft.Json", "JsonWriter/<<InternalWriteEndAsync>g__AwaitProperty|11_0>d");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter____InternalWriteEndAsync_g__AwaitRemaining_11_3_d, "Newtonsoft.Json", "JsonWriter/<<InternalWriteEndAsync>g__AwaitRemaining|11_3>d");
