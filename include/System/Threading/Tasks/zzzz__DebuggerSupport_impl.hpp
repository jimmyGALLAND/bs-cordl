#pragma once
// IWYU pragma private; include "System/Threading/Tasks/DebuggerSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__DebuggerSupport_def.hpp"
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityRelation_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.get_LoggingOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Tasks::DebuggerSupport::get_LoggingOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3dcf8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "get_LoggingOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationCreation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::StringW, uint64_t)>(&::System::Threading::Tasks::DebuggerSupport::TraceOperationCreation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dcf8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationCreation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationCompletion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::Internal::Runtime::Augments::AsyncStatus)>(&::System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dcf900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Runtime::Augments::AsyncStatus>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationRelation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::CausalityRelation)>(&::System::Threading::Tasks::DebuggerSupport::TraceOperationRelation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dcf904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationRelation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityRelation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::CausalitySynchronousWork)>(&::System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dcf908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceSynchronousWorkStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkCompletion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork)>(&::System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dcf90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceSynchronousWorkCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.AddToActiveTasks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::AddToActiveTasks)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3dcf910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "AddToActiveTasks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.AddToActiveTasksNonInlined
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3dcf9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "AddToActiveTasksNonInlined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3dcfb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "RemoveFromActiveTasks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasksNonInlined
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3dcfc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "RemoveFromActiveTasksNonInlined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::DebuggerSupport::setStaticF_s_activeTasks(::System::Collections::Generic::LowLevelDictionary_2<int32_t,::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::LowLevelDictionary_2<int32_t,::System::Threading::Tasks::Task*>*, "s_activeTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get>(std::forward<::System::Collections::Generic::LowLevelDictionary_2<int32_t,::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t,::System::Threading::Tasks::Task*>* System::Threading::Tasks::DebuggerSupport::getStaticF_s_activeTasks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::LowLevelDictionary_2<int32_t,::System::Threading::Tasks::Task*>*, "s_activeTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get>();
}
inline void System::Threading::Tasks::DebuggerSupport::setStaticF_s_activeTasksLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Threading::Tasks::DebuggerSupport::getStaticF_s_activeTasksLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get>();
}
inline bool System::Threading::Tasks::DebuggerSupport::get_LoggingOn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "get_LoggingOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel  traceLevel, ::System::Threading::Tasks::Task*  task, ::StringW  operationName, uint64_t  relatedContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationCreation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, operationName, relatedContext);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel  traceLevel, ::System::Threading::Tasks::Task*  task, ::Internal::Runtime::Augments::AsyncStatus  status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Runtime::Augments::AsyncStatus>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, status);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel  traceLevel, ::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::CausalityRelation  relation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceOperationRelation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityRelation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, relation);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel  traceLevel, ::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::CausalitySynchronousWork  work)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceSynchronousWorkStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, work);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel  traceLevel, ::System::Threading::Tasks::CausalitySynchronousWork  work)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "TraceSynchronousWorkCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::CausalitySynchronousWork>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, work);
}
inline void System::Threading::Tasks::DebuggerSupport::AddToActiveTasks(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "AddToActiveTasks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "AddToActiveTasksNonInlined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "RemoveFromActiveTasks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::DebuggerSupport*>::get(),
                        "RemoveFromActiveTasksNonInlined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::DebuggerSupport::DebuggerSupport()   {
}
