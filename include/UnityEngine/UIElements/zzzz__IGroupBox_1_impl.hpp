#pragma once
#include "UnityEngine/UIElements/zzzz__IGroupBox_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
template <typename T> constexpr UnityEngine::UIElements::IGroupBox_1<T>::operator ::UnityEngine::UIElements::IGroupBox*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
