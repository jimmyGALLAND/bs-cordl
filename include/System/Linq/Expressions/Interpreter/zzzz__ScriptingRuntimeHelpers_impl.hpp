#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ScriptingRuntimeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ScriptingRuntimeHelpers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers.Int32ToObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::Int32ToObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4059d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>::get(),
                        "Int32ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers.GetPrimitiveDefaultValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::GetPrimitiveDefaultValue)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x406839c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>::get(),
                        "GetPrimitiveDefaultValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::Int32ToObject(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>::get(),
                        "Int32ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, i);
}
inline ::System::Object* System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::GetPrimitiveDefaultValue(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>::get(),
                        "GetPrimitiveDefaultValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::ScriptingRuntimeHelpers()   {
}
