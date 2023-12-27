#pragma once
#include "Zenject/zzzz__InjectSources_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::InjectSources::InjectSources(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::InjectSources::InjectSources() {}
constexpr ::Zenject::InjectSources Zenject::InjectSources::Any{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::InjectSources Zenject::InjectSources::Local{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::InjectSources Zenject::InjectSources::Parent{ static_cast<int32_t>(0x2) };
constexpr ::Zenject::InjectSources Zenject::InjectSources::AnyParent{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
