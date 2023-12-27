#pragma once
#include "GlobalNamespace/zzzz__BloomPrePass_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePass__Mode::__BloomPrePass__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePass__Mode::__BloomPrePass__Mode() {}
constexpr ::GlobalNamespace::__BloomPrePass__Mode GlobalNamespace::__BloomPrePass__Mode::RenderAndSetData{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__BloomPrePass__Mode GlobalNamespace::__BloomPrePass__Mode::SetDataOnly{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2102840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.LazyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::LazyInit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2102844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "LazyInit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2102a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPreRender)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2102b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnPreRender",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPostRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPostRender)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2103d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnPostRender",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.SetMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)(::GlobalNamespace::__BloomPrePass__Mode)>(
    &::GlobalNamespace::BloomPrePass::SetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2103db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "SetMode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePass__Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2103dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassRendererSO*& GlobalNamespace::BloomPrePass::__get__bloomPrepassRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> const& GlobalNamespace::BloomPrePass::__get__bloomPrepassRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrepassRenderer;
}
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrepassRenderer(::GlobalNamespace::BloomPrePassRendererSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrepassRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO*& GlobalNamespace::BloomPrePass::__get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> const& GlobalNamespace::BloomPrePass::__get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO*& GlobalNamespace::BloomPrePass::__get__bloomPrePassRenderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassRenderData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRenderDataSO*> const& GlobalNamespace::BloomPrePass::__get__bloomPrePassRenderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassRenderData;
}
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrePassRenderData(::GlobalNamespace::BloomPrePassRenderDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassRenderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BloomPrePass__Mode& GlobalNamespace::BloomPrePass::__get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::__BloomPrePass__Mode const& GlobalNamespace::BloomPrePass::__get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::BloomPrePass::__set__mode(::GlobalNamespace::__BloomPrePass__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mode = value;
}
constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data*& GlobalNamespace::BloomPrePass::__get__renderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> const& GlobalNamespace::BloomPrePass::__get__renderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderData;
}
constexpr void GlobalNamespace::BloomPrePass::__set__renderData(::GlobalNamespace::__BloomPrePassRenderDataSO__Data* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePass::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "LazyInit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPreRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnPreRender",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPostRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "OnPostRender",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::SetMode(::GlobalNamespace::__BloomPrePass__Mode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), "SetMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePass__Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline ::GlobalNamespace::BloomPrePass* GlobalNamespace::BloomPrePass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePass*>());
}
inline void GlobalNamespace::BloomPrePass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePass::BloomPrePass() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
