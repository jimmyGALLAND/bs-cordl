#pragma once
// IWYU pragma private; include "Zenject/IGuiRenderable.hpp"
#include "Zenject/zzzz__IGuiRenderable_def.hpp"
//  Writing Method size for method: ::Zenject::IGuiRenderable.GuiRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IGuiRenderable::*)()>(&::Zenject::IGuiRenderable::GuiRender)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IGuiRenderable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IGuiRenderable*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Zenject::IGuiRenderable::GuiRender()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IGuiRenderable*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
