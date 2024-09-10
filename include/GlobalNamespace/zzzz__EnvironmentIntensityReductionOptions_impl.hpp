#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIntensityReductionOptions.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType::__EnvironmentIntensityReductionOptions__CompressExpandReductionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType::__EnvironmentIntensityReductionOptions__CompressExpandReductionType()   {
}
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType::Keep{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType::RemoveWithStrobeFilter{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType::__EnvironmentIntensityReductionOptions__RotateRingsReductionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType::__EnvironmentIntensityReductionOptions__RotateRingsReductionType()   {
}
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType::Keep{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType::RemoveWithStrobeFilter{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions.get_compressExpand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType (::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&::GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26618bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        "get_compressExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions.get_rotateRings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType (::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&::GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26618c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        "get_rotateRings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIntensityReductionOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&::GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26618cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__compressExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressExpand;
}
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__compressExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressExpand;
}
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_set__compressExpand(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressExpand = value;
}
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__rotateRings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateRings;
}
constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const& GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_get__rotateRings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateRings;
}
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__cordl_internal_set__rotateRings(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateRings = value;
}
inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        "get_compressExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        "get_rotateRings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* GlobalNamespace::EnvironmentIntensityReductionOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentIntensityReductionOptions*>());
}
inline void GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions::EnvironmentIntensityReductionOptions()   {
}
