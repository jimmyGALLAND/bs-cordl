#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags::__EnvironmentInfoSO__Tags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags::__EnvironmentInfoSO__Tags()   {
}
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags  GlobalNamespace::__EnvironmentInfoSO__Tags::Branded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags  GlobalNamespace::__EnvironmentInfoSO__Tags::InDevelopment{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_sceneInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SceneInfo> (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_sceneInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_sceneInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266184c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_colorScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ColorSchemeSO> (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_colorScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_serializedName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_serializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266185c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_serializedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentType (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentSizeData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData* (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266186c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentSizeData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentIntensityReductionOptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentIntensityReductionOptions* (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentIntensityReductionOptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentKeywords
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266187c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentKeywords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_environmentLightGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IEnvironmentLightGroups* (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_environmentLightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentLightGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_defaultLightshowAsset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_defaultLightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266188c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_defaultLightshowAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_order
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2661894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_isBranded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_isBranded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266189c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_isBranded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO.get_isInDevelopment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::get_isInDevelopment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26618a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_isInDevelopment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentInfoSO._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentInfoSO::*)()>(&::GlobalNamespace::EnvironmentInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26618b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEnvironmentInfo"
constexpr  GlobalNamespace::EnvironmentInfoSO::operator ::GlobalNamespace::IEnvironmentInfo*() noexcept {
return static_cast<::GlobalNamespace::IEnvironmentInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnvironmentInfo"
constexpr ::GlobalNamespace::IEnvironmentInfo* GlobalNamespace::EnvironmentInfoSO::i___GlobalNamespace__IEnvironmentInfo() noexcept {
return static_cast<::GlobalNamespace::IEnvironmentInfo*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentName;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentName;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__colorScheme()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__colorScheme() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorScheme;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__sceneInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__sceneInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfo;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__sceneInfo(::UnityW<::GlobalNamespace::SceneInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__serializedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializedName;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__serializedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializedName;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__serializedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__tags(::GlobalNamespace::__EnvironmentInfoSO__Tags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tags = value;
}
constexpr ::GlobalNamespace::EnvironmentType& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentType;
}
constexpr ::GlobalNamespace::EnvironmentType const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentType;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentType(::GlobalNamespace::EnvironmentType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____environmentType = value;
}
constexpr ::GlobalNamespace::EnvironmentSizeData*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentSizeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentSizeData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSizeData*> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentSizeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentSizeData;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentSizeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentIntensityReductionOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentIntensityReductionOptions;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentIntensityReductionOptions*> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentIntensityReductionOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentIntensityReductionOptions;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentIntensityReductionOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentKeywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentKeywords;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__environmentKeywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentKeywords;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentLightGroups*& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__lightGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightGroups;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentLightGroups*> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__lightGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightGroups;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__lightGroups(::GlobalNamespace::EnvironmentLightGroups*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__defaultLightshowAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLightshowAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__defaultLightshowAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLightshowAsset;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__defaultLightshowAsset(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLightshowAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order;
}
constexpr int32_t const& GlobalNamespace::EnvironmentInfoSO::__cordl_internal_get__order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order;
}
constexpr void GlobalNamespace::EnvironmentInfoSO::__cordl_internal_set__order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order = value;
}
inline ::UnityW<::GlobalNamespace::SceneInfo> GlobalNamespace::EnvironmentInfoSO::get_sceneInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_sceneInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SceneInfo>, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentInfoSO::get_environmentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ColorSchemeSO> GlobalNamespace::EnvironmentInfoSO::get_colorScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_colorScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ColorSchemeSO>, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentInfoSO::get_serializedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_serializedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentInfoSO::get_environmentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData* GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentSizeData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentSizeData*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentIntensityReductionOptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentIntensityReductionOptions*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentKeywords",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IEnvironmentLightGroups* GlobalNamespace::EnvironmentInfoSO::get_environmentLightGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_environmentLightGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEnvironmentLightGroups*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::EnvironmentInfoSO::get_defaultLightshowAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_defaultLightshowAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::EnvironmentInfoSO::get_order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentInfoSO::get_isBranded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_isBranded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentInfoSO::get_isInDevelopment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        "get_isInDevelopment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::EnvironmentInfoSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentInfoSO*>());
}
inline void GlobalNamespace::EnvironmentInfoSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentInfoSO::EnvironmentInfoSO()   {
}
