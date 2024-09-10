#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogDataEntry_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "entries", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__ContentCatalogData__Bucket(int32_t  dataOffset, ::ArrayW<int32_t,::Array<int32_t>*>  entries) noexcept  {
this->dataOffset = dataOffset;
this->entries = entries;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__ContentCatalogData__Bucket()   {
}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_InternalId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_InternalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_InternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_ProviderId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_Dependencies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Dependencies)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x446baf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_Dependencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_HasDependencies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_HasDependencies)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x446bba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_HasDependencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_DependencyHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_DependencyHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_DependencyHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_PrimaryKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_PrimaryKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.set_PrimaryKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "set_PrimaryKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_ResourceType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ResourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_ResourceType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bbdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.Hash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::System::Type*)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::Hash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x446bbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "Hash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::StringW, ::StringW, ::System::Object*, ::System::Object*, int32_t, ::StringW, ::System::Type*)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x446a29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr  UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept {
return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Locator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Locator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locator;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Locator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_InternalId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_InternalId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_InternalId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_ProviderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_ProviderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_ProviderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Dependency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dependency;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Dependency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dependency;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_Dependency(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dependency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_Data(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_HashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_HashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_HashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HashCode = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_DependencyHashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DependencyHashCode;
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_DependencyHashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DependencyHashCode;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_DependencyHashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DependencyHashCode = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_PrimaryKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryKey;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_PrimaryKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryKey;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_PrimaryKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrimaryKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__cordl_internal_set_m_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_InternalId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_InternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_Dependencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, false>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_HasDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_HasDependencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_DependencyHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_DependencyHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_PrimaryKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_PrimaryKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::set_PrimaryKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "set_PrimaryKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ResourceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "get_ResourceType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::Hash(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        "Hash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, t);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>(locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type));
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__ContentCatalogData__CompactLocation()   {
}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446bc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c._GetData_b__45_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::_GetData_b__45_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x446bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get(),
                        "<GetData>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::setStaticF___9(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get>(std::forward<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>(value));
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get>();
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::setStaticF___9__45_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get>(std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get>();
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>());
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::_GetData_b__45_0(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c*>::get(),
                        "<GetData>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, d);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData____c::__ContentCatalogData____c()   {
}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ProviderId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InstanceProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4469818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_InstanceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_InstanceProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x446982c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_InstanceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_SceneProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4469840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_SceneProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_SceneProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4469854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_SceneProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ResourceProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ResourceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ResourceProviderData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_ResourceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4469878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4469900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446997c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ProviderIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InternalIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_InternalIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.LoadFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* (*)(::StringW, int32_t)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x446998c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "LoadFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.SaveToFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x44699dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "SaveToFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CleanData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4468020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CleanData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateCustomLocator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4462b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CreateCustomLocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateLocator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x4469a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CreateLocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.GetData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData)> {
  constexpr static std::size_t size = 0xd6c;
  constexpr static std::size_t addrs = 0x446a438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "GetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.ExpandInternalId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW,::Array<::StringW>*>, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x446a1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "ExpandInternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_localHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHash;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_localHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHash;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_localHash(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___location)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_LocatorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocatorId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_LocatorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocatorId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_LocatorId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocatorId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BuildResultHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildResultHash;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BuildResultHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildResultHash;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_BuildResultHash(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BuildResultHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InstanceProviderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceProviderData;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InstanceProviderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceProviderData;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceProviderData = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_SceneProviderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SceneProviderData;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_SceneProviderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SceneProviderData;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SceneProviderData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ResourceProviderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceProviderData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ResourceProviderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceProviderData;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceProviderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_Entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_Entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_Entries(::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ProviderIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderIds;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ProviderIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderIds;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ProviderIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalIds;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalIds;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InternalIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_KeyDataString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_KeyDataString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_KeyDataString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyDataString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BucketDataString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BucketDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BucketDataString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BucketDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_BucketDataString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BucketDataString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_EntryDataString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntryDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_EntryDataString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntryDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_EntryDataString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EntryDataString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ExtraDataString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ExtraDataString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ExtraDataString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExtraDataString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_resourceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_resourceTypes;
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_resourceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_resourceTypes;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_resourceTypes(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_resourceTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIdPrefixes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalIdPrefixes;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIdPrefixes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalIdPrefixes;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InternalIdPrefixes(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalIdPrefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::setStaticF_kMagic(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kMagic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::getStaticF_kMagic()  {
return ::cordl_internals::getStaticField<int32_t, "kMagic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get>();
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_ProviderId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_InstanceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_InstanceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_SceneProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_SceneProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ResourceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "set_ResourceProviderData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor(::StringW  id)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(id));
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>());
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_ProviderIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "get_InternalIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(this, ___internal_method);
}
/// @param cacheSize: int32_t (default: static_cast<int32_t>(0x400))
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile(::StringW  path, int32_t  cacheSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "LoadFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, false>(nullptr, ___internal_method, path, cacheSize);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "SaveToFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CleanData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param overrideId: ::StringW (default: u"")
/// @param providerSuffix: ::StringW (default: nullptr)
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator(::StringW  overrideId, ::StringW  providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CreateCustomLocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, false>(this, ___internal_method, overrideId, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: nullptr)
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator(::StringW  providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "CreateLocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, false>(this, ___internal_method, providerSuffix);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "GetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId(::ArrayW<::StringW,::Array<::StringW>*>  internalIdPrefixes, ::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                        "ExpandInternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, internalIdPrefixes, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ContentCatalogData()   {
}
