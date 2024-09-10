#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Viewport.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_Viewport._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_Viewport::*)(bool)>(&::HoudiniEngineUnity::HAPI_Viewport::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x39c539c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Viewport>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_Viewport.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_Viewport::*)()>(&::HoudiniEngineUnity::HAPI_Viewport::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x39c5424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Viewport>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_Viewport::_ctor(bool  initializeFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Viewport>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializeFields);
}
inline void HoudiniEngineUnity::HAPI_Viewport::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Viewport>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Viewport::HAPI_Viewport(::ArrayW<float_t,::Array<float_t>*>  position, ::ArrayW<float_t,::Array<float_t>*>  rotationQuaternion, float_t  offset) noexcept  {
this->position = position;
this->rotationQuaternion = rotationQuaternion;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Viewport::HAPI_Viewport()   {
}
