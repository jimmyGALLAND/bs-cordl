#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TInput, typename TOutput> inline ::System::Converter_2<TInput, TOutput>* System::Converter_2<TInput, TOutput>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Converter_2<TInput, TOutput>*>(object, method));
}
template <typename TInput, typename TOutput> inline void System::Converter_2<TInput, TOutput>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Converter_2<TInput, TOutput>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TInput, typename TOutput> inline TOutput System::Converter_2<TInput, TOutput>::Invoke(TInput input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Converter_2<TInput, TOutput>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInput>::get() })));
  return ::cordl_internals::RunMethodRethrow<TOutput, false>(this, ___internal_method, input);
}
// Ctor Parameters []
template <typename TInput, typename TOutput> constexpr ::System::Converter_2<TInput, TOutput>::Converter_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
