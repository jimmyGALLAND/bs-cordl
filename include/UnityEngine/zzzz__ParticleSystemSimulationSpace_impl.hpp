#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemSimulationSpace.hpp"
#include "UnityEngine/zzzz__ParticleSystemSimulationSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemSimulationSpace::ParticleSystemSimulationSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemSimulationSpace::ParticleSystemSimulationSpace()   {
}
constexpr ::UnityEngine::ParticleSystemSimulationSpace  UnityEngine::ParticleSystemSimulationSpace::Local{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ParticleSystemSimulationSpace  UnityEngine::ParticleSystemSimulationSpace::World{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ParticleSystemSimulationSpace  UnityEngine::ParticleSystemSimulationSpace::Custom{static_cast<int32_t>(0x2)};
