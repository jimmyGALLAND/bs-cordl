#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ByRefParameterExpression.hpp"
#include "System/Linq/Expressions/zzzz__TypedParameterExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__ByRefParameterExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ByRefParameterExpression._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ByRefParameterExpression::*)(::System::Type*, ::StringW)>(&::System::Linq::Expressions::ByRefParameterExpression::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x402acac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ByRefParameterExpression*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ByRefParameterExpression.GetIsByRef
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::ByRefParameterExpression::*)()>(&::System::Linq::Expressions::ByRefParameterExpression::GetIsByRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x402adac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ByRefParameterExpression*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ByRefParameterExpression*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::ByRefParameterExpression* System::Linq::Expressions::ByRefParameterExpression::New_ctor(::System::Type*  type, ::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::ByRefParameterExpression*>(type, name));
}
inline void System::Linq::Expressions::ByRefParameterExpression::_ctor(::System::Type*  type, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ByRefParameterExpression*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, name);
}
inline bool System::Linq::Expressions::ByRefParameterExpression::GetIsByRef()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ByRefParameterExpression*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ByRefParameterExpression::ByRefParameterExpression()   {
}
