#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask)
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace GlobalNamespace {
class __ValueTask__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System::Threading::Tasks {
class __ValueTask__ValueTaskSourceAsTask;
}
// Forward declare root types
namespace GlobalNamespace {
class __ValueTask__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
class __ValueTask__ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c);
MARK_REF_PTR_T(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask);
MARK_VAL_T(::System::Threading::Tasks::ValueTask);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2762))
// CS Name: ::ValueTask::ValueTaskSourceAsTask::<>c*
class CORDL_TYPE __ValueTask__ValueTaskSourceAsTask____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* __9;

  static inline void setStaticF___9(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* value);

  static inline ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* getStaticF___9();

  static inline ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* New_ctor();

  /// @brief Method .ctor addr 0x2621e8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__4_0 addr 0x2621e94 size 0x2a4 virtual false final false
  inline void __cctor_b__4_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask__ValueTaskSourceAsTask____c(__ValueTask__ValueTaskSourceAsTask____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask__ValueTaskSourceAsTask____c(__ValueTask__ValueTaskSourceAsTask____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask__ValueTaskSourceAsTask____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ValueTaskSourceAsTask
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 900 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2794))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2763)) CS Name: ::ValueTask::ValueTaskSourceAsTask*
class CORDL_TYPE __ValueTask__ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c;

  /// @brief Field _source, offset 0x58, size 0x8
  __declspec(property(get = __get__source, put = __set__source))::System::Threading::Tasks::Sources::IValueTaskSource* _source;

  /// @brief Field _token, offset 0x60, size 0x2
  __declspec(property(get = __get__token, put = __set__token)) int16_t _token;

  /// @brief Field s_completionAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_completionAction, put = setStaticF_s_completionAction))::System::Action_1<::System::Object*>* s_completionAction;

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource*& __get__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource*> const& __get__source() const;

  constexpr void __set__source(::System::Threading::Tasks::Sources::IValueTaskSource* value);

  constexpr int16_t& __get__token();

  constexpr int16_t const& __get__token() const;

  constexpr void __set__token(int16_t value);

  static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction();

  static inline ::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  /// @brief Method .ctor addr 0x262193c size 0x120 virtual false final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask__ValueTaskSourceAsTask(__ValueTask__ValueTaskSourceAsTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask__ValueTaskSourceAsTask(__ValueTask__ValueTaskSourceAsTask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask__ValueTaskSourceAsTask();

public:
  /// @brief Field _source, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Sources::IValueTaskSource* ____source;

  /// @brief Field _token, offset: 0x60, size: 0x2, def value: None
  int16_t ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask, 0x68>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 27, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2764))
// CS Name: ::System.Threading.Tasks::ValueTask
struct CORDL_TYPE ValueTask {
public:
  // Declarations
  using ValueTaskSourceAsTask = ::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask;

  /// @brief Field s_canceledTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_canceledTask, put = setStaticF_s_canceledTask))::System::Threading::Tasks::Task* s_canceledTask;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
  constexpr operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*();

  static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task* value);

  static inline ::System::Threading::Tasks::Task* getStaticF_s_canceledTask();

  /// @brief Method get_CompletedTask addr 0x2621318 size 0x88 virtual false final false
  static inline ::System::Threading::Tasks::Task* get_CompletedTask();

  /// @brief Method .ctor addr 0x26213a0 size 0x38 virtual false final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method .ctor addr 0x26213d8 size 0x3c virtual false final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  /// @brief Method .ctor addr 0x2621414 size 0x14 virtual false final false
  inline void _ctor(::System::Object* obj, int16_t token, bool continueOnCapturedContext);

  /// @brief Method GetHashCode addr 0x2621428 size 0x18 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2621440 size 0x88 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x26214c8 size 0x24 virtual true final true
  inline bool Equals(::System::Threading::Tasks::ValueTask other);

  /// @brief Method AsTask addr 0x26214ec size 0xb8 virtual false final false
  inline ::System::Threading::Tasks::Task* AsTask();

  /// @brief Method GetTaskForValueTaskSource addr 0x26215a4 size 0x2d8 virtual false final false
  inline ::System::Threading::Tasks::Task* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* t);

  /// @brief Method get_IsCompleted addr 0x2621a5c size 0x104 virtual false final false
  inline bool get_IsCompleted();

  /// @brief Method ThrowIfCompletedUnsuccessfully addr 0x2621b60 size 0x104 virtual false final false
  inline void ThrowIfCompletedUnsuccessfully();

  /// @brief Method GetAwaiter addr 0x2621c64 size 0xc virtual false final false
  inline ::System::Runtime::CompilerServices::ValueTaskAwaiter GetAwaiter();

  /// @brief Method ConfigureAwait addr 0x2621c70 size 0x18 virtual false final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);

  // Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
  constexpr ValueTask(::System::Object* _obj, int16_t _token, bool _continueOnCapturedContext) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask();

  /// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _obj;

  /// @brief Field _token, offset: 0x8, size: 0x2, def value: None
  int16_t _token;

  /// @brief Field _continueOnCapturedContext, offset: 0xa, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ValueTask, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask/<>c");
NEED_NO_BOX(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask, "System.Threading.Tasks", "ValueTask");
