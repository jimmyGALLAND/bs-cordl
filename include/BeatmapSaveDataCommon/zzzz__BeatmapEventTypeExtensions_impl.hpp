#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/BeatmapEventTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventTypeExtensions_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions.GetSpecialEventTypes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* (*)()>(&::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::GetSpecialEventTypes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26bd89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>::get(),
                        "GetSpecialEventTypes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::*)()>(&::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bd960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataCommon::BeatmapEventTypeExtensions::GetSpecialEventTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>::get(),
                        "GetSpecialEventTypes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*, false>(nullptr, ___internal_method);
}
inline ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions* BeatmapSaveDataCommon::BeatmapEventTypeExtensions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>());
}
inline void BeatmapSaveDataCommon::BeatmapEventTypeExtensions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::BeatmapEventTypeExtensions()   {
}
