#pragma once
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ILayoutSelfController::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
