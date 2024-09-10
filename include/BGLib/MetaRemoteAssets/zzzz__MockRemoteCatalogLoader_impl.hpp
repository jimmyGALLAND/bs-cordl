#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MockRemoteCatalogLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MockRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader.LoadRemoteCatalogAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::*)(::System::Threading::CancellationToken)>(&::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::LoadRemoteCatalogAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x225fe60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>::get(),
                        "LoadRemoteCatalogAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::*)()>(&::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225fec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr  BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::operator ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*() noexcept {
return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::i___BGLib__MetaRemoteAssets__IRemoteCatalogLoader() noexcept {
return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::LoadRemoteCatalogAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>::get(),
                        "LoadRemoteCatalogAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
inline ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>());
}
inline void BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::MockRemoteCatalogLoader()   {
}
