#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(int32_t, ::StringW, int32_t, bool, int32_t)>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x23c1c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.set_hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(bool)>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c19a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "set_hide",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)()>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c1eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__playerNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scoreText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__scoreText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__positionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__positionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__positionText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____backgroundImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__backgroundImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__normalPlayerTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalPlayerTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__normalPlayerTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalPlayerTextColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__normalPlayerTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____normalPlayerTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__failedPlayerTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failedPlayerTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__failedPlayerTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failedPlayerTextColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__failedPlayerTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____failedPlayerTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__firstPlayerBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstPlayerBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__firstPlayerBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstPlayerBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__firstPlayerBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____firstPlayerBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__lastPlayerBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastPlayerBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__lastPlayerBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastPlayerBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__lastPlayerBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastPlayerBackgroundColor = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevPosition;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevPosition;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____prevPosition = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPlayerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevPlayerName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPlayerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevPlayerName;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevPlayerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevPlayerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevScore;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevScore;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____prevScore = value;
}
constexpr bool& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevFailed;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____prevFailed = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevNumberOfPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevNumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevNumberOfPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prevNumberOfPlayers;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevNumberOfPlayers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____prevNumberOfPlayers = value;
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, playerName, score, failed, numberOfPlayers);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "set_hide",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelItem* GlobalNamespace::MultiplayerLeaderboardPanelItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>());
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLeaderboardPanelItem::MultiplayerLeaderboardPanelItem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
