#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightRotationEventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::LightRotationEventBoxGroup::*)(float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>*)>(&::BeatmapSaveDataVersion3::LightRotationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26bc188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup.CopyWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup* (::BeatmapSaveDataVersion3::LightRotationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::LightRotationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26bc1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>::get(),
                        "CopyWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup* BeatmapSaveDataVersion3::LightRotationEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::LightRotationEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightRotationEventBox*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup* BeatmapSaveDataVersion3::LightRotationEventBoxGroup::CopyWith(::System::Nullable_1<float_t>  newBeat, ::System::Nullable_1<int32_t>  newGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*>::get(),
                        "CopyWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::LightRotationEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightRotationEventBoxGroup::LightRotationEventBoxGroup()   {
}
