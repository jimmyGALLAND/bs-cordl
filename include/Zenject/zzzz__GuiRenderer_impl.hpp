#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__GuiRenderer_def.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::GuiRenderer.Construct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::GuiRenderer::*)(::Zenject::GuiRenderableManager*)>(&::Zenject::GuiRenderer::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f12f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "Construct", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GuiRenderableManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.OnGUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::GuiRenderer::*)()>(&::Zenject::GuiRenderer::OnGUI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f12f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "OnGUI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::GuiRenderer::*)()>(&::Zenject::GuiRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f12fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::GuiRenderer::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f12fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "__zenInjectMethod0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2f13088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "__zenCreateInjectTypeInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::GuiRenderableManager*& Zenject::GuiRenderer::__get__renderableManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderableManager;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GuiRenderableManager*> const& Zenject::GuiRenderer::__get__renderableManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderableManager;
}
constexpr void Zenject::GuiRenderer::__set__renderableManager(::Zenject::GuiRenderableManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderableManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::GuiRenderer::Construct(::Zenject::GuiRenderableManager* renderableManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "Construct", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GuiRenderableManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderableManager);
}
inline void Zenject::GuiRenderer::OnGUI() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "OnGUI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::GuiRenderer* Zenject::GuiRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::GuiRenderer*>());
}
inline void Zenject::GuiRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::GuiRenderer::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "__zenInjectMethod0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderer*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderer::GuiRenderer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
