#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TaskManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TaskManager_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_TaskManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39de6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.GetTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Task* (*)(::System::Guid)>(&::HoudiniEngineUnity::HEU_TaskManager::GetTask)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x39de6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "GetTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.AddTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&::HoudiniEngineUnity::HEU_TaskManager::AddTask)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x39de840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "AddTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.KillTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*, bool)>(&::HoudiniEngineUnity::HEU_TaskManager::KillTask)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x39de98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "KillTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.KillTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid, bool)>(&::HoudiniEngineUnity::HEU_TaskManager::KillTask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39debb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "KillTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.RemoveTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&::HoudiniEngineUnity::HEU_TaskManager::RemoveTask)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x39dea74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "RemoveTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.ExecuteTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&::HoudiniEngineUnity::HEU_TaskManager::ExecuteTask)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x39dec50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "ExecuteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.CompleteTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*, ::HoudiniEngineUnity::__HEU_Task__TaskResult)>(&::HoudiniEngineUnity::HEU_TaskManager::CompleteTask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39ddffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "CompleteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Task__TaskResult>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager.InternalCompleteTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&::HoudiniEngineUnity::HEU_TaskManager::InternalCompleteTask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39dec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "InternalCompleteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TaskManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TaskManager::*)()>(&::HoudiniEngineUnity::HEU_TaskManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39dece8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_TaskManager::setStaticF__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_tasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>(std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*>(value));
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* HoudiniEngineUnity::HEU_TaskManager::getStaticF__tasks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_tasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>();
}
inline void HoudiniEngineUnity::HEU_TaskManager::setStaticF__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_pendingAdd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>(std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*>(value));
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* HoudiniEngineUnity::HEU_TaskManager::getStaticF__pendingAdd()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_pendingAdd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>();
}
inline void HoudiniEngineUnity::HEU_TaskManager::setStaticF__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_pendingRemove", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>(std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*>(value));
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* HoudiniEngineUnity::HEU_TaskManager::getStaticF__pendingRemove()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>*, "_pendingRemove", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get>();
}
inline void HoudiniEngineUnity::HEU_TaskManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Task* HoudiniEngineUnity::HEU_TaskManager::GetTask(::System::Guid  taskGuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "GetTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Task*, false>(nullptr, ___internal_method, taskGuid);
}
inline void HoudiniEngineUnity::HEU_TaskManager::AddTask(::HoudiniEngineUnity::HEU_Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "AddTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void HoudiniEngineUnity::HEU_TaskManager::KillTask(::HoudiniEngineUnity::HEU_Task*  task, bool  bRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "KillTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, bRemove);
}
inline void HoudiniEngineUnity::HEU_TaskManager::KillTask(::System::Guid  taskGuid, bool  bRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "KillTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskGuid, bRemove);
}
inline void HoudiniEngineUnity::HEU_TaskManager::RemoveTask(::HoudiniEngineUnity::HEU_Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "RemoveTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void HoudiniEngineUnity::HEU_TaskManager::ExecuteTask(::HoudiniEngineUnity::HEU_Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "ExecuteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline void HoudiniEngineUnity::HEU_TaskManager::CompleteTask(::HoudiniEngineUnity::HEU_Task*  task, ::HoudiniEngineUnity::__HEU_Task__TaskResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "CompleteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Task__TaskResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, result);
}
inline void HoudiniEngineUnity::HEU_TaskManager::InternalCompleteTask(::HoudiniEngineUnity::HEU_Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        "InternalCompleteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
inline ::HoudiniEngineUnity::HEU_TaskManager* HoudiniEngineUnity::HEU_TaskManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_TaskManager*>());
}
inline void HoudiniEngineUnity::HEU_TaskManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TaskManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TaskManager::HEU_TaskManager()   {
}
