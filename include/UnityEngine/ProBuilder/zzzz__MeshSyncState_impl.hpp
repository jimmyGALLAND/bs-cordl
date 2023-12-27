#pragma once
#include "UnityEngine/ProBuilder/zzzz__MeshSyncState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshSyncState::MeshSyncState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshSyncState::MeshSyncState() {}
constexpr ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::MeshSyncState::Null{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::MeshSyncState::InstanceIDMismatch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::MeshSyncState::Lightmap{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::MeshSyncState::InSync{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
