#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelColorSchemeSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelColorSchemeSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData.IsDefault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&::GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26ad918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                        "IsDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&::GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ada74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_get_useOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOverride;
}
constexpr bool const& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_get_useOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOverride;
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_set_useOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useOverride = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme*& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_get_colorScheme()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorScheme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorScheme*> const& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_get_colorScheme() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorScheme;
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__cordl_internal_set_colorScheme(::GlobalNamespace::__PlayerSaveData__ColorScheme*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                        "IsDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* GlobalNamespace::BeatmapLevelColorSchemeSaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>());
}
inline void GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelColorSchemeSaveData::BeatmapLevelColorSchemeSaveData()   {
}
