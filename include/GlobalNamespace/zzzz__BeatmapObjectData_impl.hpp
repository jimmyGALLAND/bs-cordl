#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectData.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.get_beat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectData::*)()>(&::GlobalNamespace::BeatmapObjectData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2203794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                        "get_beat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectData::*)(float_t, float_t, int32_t)>(&::GlobalNamespace::BeatmapObjectData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220379c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.Mirror
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectData::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectData::Mirror)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__beat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beat_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__beat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beat_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapObjectData::__cordl_internal_set__beat_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beat_k__BackingField = value;
}
inline float_t GlobalNamespace::BeatmapObjectData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                        "get_beat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectData* GlobalNamespace::BeatmapObjectData::New_ctor(float_t  time, float_t  beat, int32_t  subtypeIdentifier)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectData*>(time, beat, subtypeIdentifier));
}
inline void GlobalNamespace::BeatmapObjectData::_ctor(float_t  time, float_t  beat, int32_t  subtypeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, beat, subtypeIdentifier);
}
inline void GlobalNamespace::BeatmapObjectData::Mirror(int32_t  lineCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectData*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineCount);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectData::BeatmapObjectData()   {
}
