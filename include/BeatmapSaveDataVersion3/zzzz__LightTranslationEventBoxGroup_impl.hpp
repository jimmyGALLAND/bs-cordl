#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightTranslationEventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::*)(float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>*)>(&::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26bc2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup.CopyWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup* (::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26bc340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>::get(),
                        "CopyWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup* BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationEventBox*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup* BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::CopyWith(::System::Nullable_1<float_t>  newBeat, ::System::Nullable_1<int32_t>  newGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*>::get(),
                        "CopyWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightTranslationEventBoxGroup::LightTranslationEventBoxGroup()   {
}
