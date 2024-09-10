#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JConstructor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JConstructor)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json::Linq {
struct __JConstructor___LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct __JConstructor___WriteToAsync_d__0;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
namespace Newtonsoft::Json::Linq {
struct __JConstructor___LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct __JConstructor___WriteToAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JConstructor);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0);
// Type: ::<LoadAsync>d__2
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JConstructor::<LoadAsync>d__2
struct CORDL_TYPE __JConstructor___LoadAsync_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e8034c, size 0x654, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e80a8c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JConstructor___LoadAsync_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JConstructor*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam { name: "_c_5__2", ty: "::Newtonsoft::Json::Linq::JConstructor*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __JConstructor___LoadAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JConstructor*>  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::Newtonsoft::Json::Linq::JConstructor*  _c_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JConstructor*>  __t__builder;

/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field settings, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings;

/// @brief Field <c>5__2, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JConstructor*  _c_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, _c_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, __u__2) == 0x50, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// Type: ::<WriteToAsync>d__0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 100, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JConstructor::<WriteToAsync>d__0
struct CORDL_TYPE __JConstructor___WriteToAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3e80b08, size 0x438, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3e80f40, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __JConstructor___WriteToAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JConstructor*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "converters", ty: "::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __JConstructor___WriteToAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Linq::JConstructor*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__2) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field writer, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  writer;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JConstructor*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field converters, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, writer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, converters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, _i_5__2) == 0x50, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JConstructor
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JConstructor*
class CORDL_TYPE JConstructor : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using _LoadAsync_d__2 = ::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2;

using _WriteToAsync_d__0 = ::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0;

 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

/// @brief Field _name, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _values, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  _values;

/// @brief Method CloneToken, addr 0x3e7f754, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method DeepEquals, addr 0x3e7f3e4, size 0xa0, virtual true, abstract: false, final false
inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken*  node) ;

/// @brief Method GetDeepHashCode, addr 0x3e7faf4, size 0x44, virtual true, abstract: false, final false
inline int32_t GetDeepHashCode() ;

/// @brief Method IndexOfItem, addr 0x3e7de64, size 0x64, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Load, addr 0x3e7fe38, size 0x8, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Load, addr 0x3e7fe40, size 0x204, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// @brief Method LoadAsync, addr 0x3e7dd54, size 0xc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* LoadAsync(::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LoadAsync, addr 0x3e7dd60, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* LoadAsync(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method MergeItem, addr 0x3e7dec8, size 0xb0, virtual true, abstract: false, final false
inline void MergeItem(::System::Object*  content, ::Newtonsoft::Json::Linq::JsonMergeSettings*  settings) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor() ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW  name) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW  name, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  content) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW  name, ::System::Object*  content) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor*  other) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method WriteTo, addr 0x3e7f7bc, size 0xe8, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method WriteToAsync, addr 0x3e7dc68, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter*  writer, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get__values() const;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method .ctor, addr 0x3e7ecec, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3e7f2c4, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x3e7f25c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  content) ;

/// @brief Method .ctor, addr 0x3e7f290, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Object*  content) ;

/// @brief Method .ctor, addr 0x3e7edbc, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JConstructor*  other) ;

/// @brief Method .ctor, addr 0x3e7f1b8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JConstructor*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0x3e7de5c, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Item, addr 0x3e7f8a4, size 0x124, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object*  key) ;

/// @brief Method get_Name, addr 0x3e7ecd4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Type, addr 0x3e7ece4, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method set_Item, addr 0x3e7f9c8, size 0x12c, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  key, ::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method set_Name, addr 0x3e7ecdc, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JConstructor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JConstructor(JConstructor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JConstructor(JConstructor const& ) = delete;

/// @brief Field _name, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _values, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JConstructor, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____name) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____values) == 0x60, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JConstructor*, "Newtonsoft.Json.Linq", "JConstructor");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JConstructor___LoadAsync_d__2, "Newtonsoft.Json.Linq", "JConstructor/<LoadAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JConstructor___WriteToAsync_d__0, "Newtonsoft.Json.Linq", "JConstructor/<WriteToAsync>d__0");
