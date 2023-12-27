#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::__AttributeCollection__AttributeEntry::__AttributeCollection__AttributeEntry(::System::Type* type, int32_t index) noexcept {
  this->type = type;
  this->index = index;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__AttributeCollection__AttributeEntry::__AttributeCollection__AttributeEntry() {}
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::AttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2905878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290599c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29059a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(
    &::System::ComponentModel::AttributeCollection::get_Item)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x29059c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::System::Attribute*)>(
    &::System::ComponentModel::AttributeCollection::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29063f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(
    &::System::ComponentModel::AttributeCollection::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2905ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "GetDefaultAttribute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2906450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2906474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290647c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2906484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(
    &::System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29064a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::System::Array*, int32_t)>(
    &::System::ComponentModel::AttributeCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29064ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::ComponentModel::AttributeCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::ComponentModel::AttributeCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& System::ComponentModel::AttributeCollection::__get__attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____attributes;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& System::ComponentModel::AttributeCollection::__get__attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____attributes;
}
constexpr void System::ComponentModel::AttributeCollection::__set__attributes(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>&
System::ComponentModel::AttributeCollection::__get__foundAttributeTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____foundAttributeTypes;
}
constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> const&
System::ComponentModel::AttributeCollection::__get__foundAttributeTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____foundAttributeTypes;
}
constexpr void System::ComponentModel::AttributeCollection::__set__foundAttributeTypes(
    ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____foundAttributeTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::ComponentModel::AttributeCollection::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr int32_t const& System::ComponentModel::AttributeCollection::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr void System::ComponentModel::AttributeCollection::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____index = value;
}
inline void System::ComponentModel::AttributeCollection::setStaticF_Empty(::System::ComponentModel::AttributeCollection* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::AttributeCollection*, "Empty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(
      std::forward<::System::ComponentModel::AttributeCollection*>(value));
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::AttributeCollection*, "Empty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_defaultAttributes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_defaultAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::AttributeCollection::getStaticF_s_defaultAttributes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_defaultAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_internalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::AttributeCollection::getStaticF_s_internalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::AttributeCollection*>(attributes));
}
inline void System::ComponentModel::AttributeCollection::_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> System::ComponentModel::AttributeCollection::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "get_Attributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::get_Item(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*, false>(this, ___internal_method, attributeType);
}
inline bool System::ComponentModel::AttributeCollection::Contains(::System::Attribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attribute);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::GetDefaultAttribute(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "GetDefaultAttribute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*, false>(this, ___internal_method, attributeType);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void System::ComponentModel::AttributeCollection::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AttributeCollection::AttributeCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
