#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType::__BurstCompilerService__BurstLogType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType::__BurstCompilerService__BurstLogType()   {
}
constexpr ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType  Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType::Info{static_cast<int32_t>(0x0)};
constexpr ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType  Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType::Warning{static_cast<int32_t>(0x1)};
constexpr ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType  Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType::Error{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetDisassembly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodInfo*, ::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x47ce844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetDisassembly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.CompileAsyncDelegateMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Object*, ::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x47ce888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "CompileAsyncDelegateMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47ce8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetAsyncCompiledAsyncDelegateMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetOrCreateSharedMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(ByRef<::UnityEngine::Hash128>, uint32_t, uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x47ce0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetOrCreateSharedMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Hash128>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.SetCurrentExecutionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::SetCurrentExecutionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47ce908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "SetCurrentExecutionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetCurrentExecutionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::Unity::Burst::LowLevel::BurstCompilerService::GetCurrentExecutionMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x47ce944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetCurrentExecutionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.Log
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::Log)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47ce96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.RuntimeLog
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47ce9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "RuntimeLog",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.LoadBurstLibrary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47cea44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "LoadBurstLibrary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly(::System::Reflection::MethodInfo*  m, ::StringW  compilerOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetDisassembly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, m, compilerOptions);
}
inline int32_t Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod(::System::Object*  delegateMethod, ::StringW  compilerOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "CompileAsyncDelegateMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, delegateMethod, compilerOptions);
}
inline ::cordl_internals::Ptr<void> Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(int32_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetAsyncCompiledAsyncDelegateMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, userID);
}
inline ::cordl_internals::Ptr<void> Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory(ByRef<::UnityEngine::Hash128>  key, uint32_t  size_of, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetOrCreateSharedMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Hash128>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, key, size_of, alignment);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::SetCurrentExecutionMode(uint32_t  environment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "SetCurrentExecutionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, environment);
}
inline uint32_t Unity::Burst::LowLevel::BurstCompilerService::GetCurrentExecutionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetCurrentExecutionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::Log(::cordl_internals::Ptr<void>  userData, ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType  logType, ::cordl_internals::Ptr<uint8_t>  message, ::cordl_internals::Ptr<uint8_t>  filename, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "Log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog(::cordl_internals::Ptr<void>  userData, ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType  logType, ::cordl_internals::Ptr<uint8_t>  message, ::cordl_internals::Ptr<uint8_t>  filename, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "RuntimeLog",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline bool Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary(::StringW  fullPathToLibBurstGenerated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "LoadBurstLibrary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullPathToLibBurstGenerated);
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::BurstCompilerService::BurstCompilerService()   {
}
