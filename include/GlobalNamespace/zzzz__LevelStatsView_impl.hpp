#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelStatsView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelStatsView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.Hide
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a7ac74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        "Hide",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.ShowStats
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)(ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::PlayerData*)>(&::GlobalNamespace::LevelStatsView::ShowStats)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3a7ac98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        "ShowStats",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a7ae24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__highScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__highScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highScoreText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__highScoreText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highScoreText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxComboText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxComboText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxComboText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxComboText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__maxComboText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxComboText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxRankText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRankText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxRankText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRankText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__maxRankText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxRankText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelStatsView::Hide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        "Hide",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelStatsView::ShowStats(ByRef<::GlobalNamespace::BeatmapKey>  beatmapKey, ::GlobalNamespace::PlayerData*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        "ShowStats",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey, playerData);
}
inline ::GlobalNamespace::LevelStatsView* GlobalNamespace::LevelStatsView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelStatsView*>());
}
inline void GlobalNamespace::LevelStatsView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelStatsView::LevelStatsView()   {
}
