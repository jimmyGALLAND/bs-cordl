#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReader.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationCollectionFixupCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationFixupCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReadCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42e86c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_set_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_TypeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeName;
}
constexpr ::StringW const& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_TypeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeName;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_set_TypeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_TypeNs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeNs;
}
constexpr ::StringW const& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_TypeNs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeNs;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_set_TypeNs(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlSerializationReadCallback*& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReadCallback*> const& System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_get_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationReadCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo* System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo*>());
}
inline void System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo::__XmlSerializationReader__WriteCallbackInfo()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)(::System::Object*, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, ::StringW)>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x42ec5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup.get_Callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup.get_Collection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Collection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup.get_CollectionItems
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_CollectionItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_CollectionItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup.set_CollectionItems
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::*)(::System::Object*)>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::set_CollectionItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "set_CollectionItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*> const& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_collection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_collection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_set_collection(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_collectionItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_collectionItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionItems;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_set_collectionItems(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collectionItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup* System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::New_ctor(::System::Object*  collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*  callback, ::StringW  id)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>(collection, callback, id));
}
inline void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::_ctor(::System::Object*  collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*  callback, ::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, callback, id);
}
inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Callback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Collection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::get_CollectionItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "get_CollectionItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::set_CollectionItems(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get(),
                        "set_CollectionItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup::__XmlSerializationReader__CollectionFixup()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__Fixup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReader__Fixup::*)(::System::Object*, ::System::Xml::Serialization::XmlSerializationFixupCallback*, int32_t)>(&::System::Xml::Serialization::__XmlSerializationReader__Fixup::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x42ec610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationFixupCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__Fixup.get_Callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationFixupCallback* (::System::Xml::Serialization::__XmlSerializationReader__Fixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__Fixup.get_Ids
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::System::Xml::Serialization::__XmlSerializationReader__Fixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Ids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Ids",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__Fixup.get_Source
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::__XmlSerializationReader__Fixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Source",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_set_source(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_ids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ids;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_ids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ids;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_set_ids(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback*& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationFixupCallback*> const& System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__Fixup::__cordl_internal_set_callback(::System::Xml::Serialization::XmlSerializationFixupCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::__XmlSerializationReader__Fixup* System::Xml::Serialization::__XmlSerializationReader__Fixup::New_ctor(::System::Object*  o, ::System::Xml::Serialization::XmlSerializationFixupCallback*  callback, int32_t  count)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>(o, callback, count));
}
inline void System::Xml::Serialization::__XmlSerializationReader__Fixup::_ctor(::System::Object*  o, ::System::Xml::Serialization::XmlSerializationFixupCallback*  callback, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationFixupCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, callback, count);
}
inline ::System::Xml::Serialization::XmlSerializationFixupCallback* System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Callback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationFixupCallback*, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Ids()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Ids",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::__XmlSerializationReader__Fixup::get_Source()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get(),
                        "get_Source",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReader__Fixup::__XmlSerializationReader__Fixup()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::*)(::System::Array*, int32_t, ::StringW)>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x42ea9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup.get_Collection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Collection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup.get_Index
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Index",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::*)()>(&::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ec6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Array*& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_set_list(::System::Array*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::StringW& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup* System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::New_ctor(::System::Array*  list, int32_t  index, ::StringW  id)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>(list, index, id));
}
inline void System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::_ctor(::System::Array*  list, int32_t  index, ::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, index, id);
}
inline ::System::Array* System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Collection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Index",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup::__XmlSerializationReader__CollectionItemFixup()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlSerializer*)>(&::System::Xml::Serialization::XmlSerializationReader::Initialize)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x42e8034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureArrayList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Collections::ArrayList*)>(&::System::Xml::Serialization::XmlSerializationReader::EnsureArrayList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42e8358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureArrayList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureHashtable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Collections::Hashtable*)>(&::System::Xml::Serialization::XmlSerializationReader::EnsureHashtable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42e83b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureHashtable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42e8410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.get_Document
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::get_Document)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x42e8418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "get_Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.get_Reader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42e84a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "get_Reader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*)>(&::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x42e84ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::__XmlSerializationReader__Fixup*)>(&::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x42e8560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddFixup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*)>(&::System::Xml::Serialization::XmlSerializationReader::AddFixup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x42e85a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddReadCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW, ::System::Type*, ::System::Xml::Serialization::XmlSerializationReadCallback*)>(&::System::Xml::Serialization::XmlSerializationReader::AddReadCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x42e85e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddReadCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReadCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.AddTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReader::AddTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x42e86d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CurrentTag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::CurrentTag)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x42e8778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CurrentTag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateReadOnlyCollectionException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::CreateReadOnlyCollectionException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x42e88d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateReadOnlyCollectionException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownConstantException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Type*)>(&::System::Xml::Serialization::XmlSerializationReader::CreateUnknownConstantException)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x42e8968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownConstantException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownNodeException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::CreateUnknownNodeException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42e8a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownNodeException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.CreateUnknownTypeException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationReader::CreateUnknownTypeException)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x42e8a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownTypeException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.EnsureArrayIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Array*, int32_t, ::System::Type*)>(&::System::Xml::Serialization::XmlSerializationReader::EnsureArrayIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x42e8be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureArrayIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetNullAttr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::GetNullAttr)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x42e8c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetNullAttr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::GetTarget)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x42e8d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.TargetReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::TargetReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x42e8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "TargetReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetXsiType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::GetXsiType)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x42e8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetXsiType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.InitCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::InitCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.InitIDs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::InitIDs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.IsXmlnsAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::IsXmlnsAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x42e9004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "IsXmlnsAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ParseWsdlArrayType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlAttribute*)>(&::System::Xml::Serialization::XmlSerializationReader::ParseWsdlArrayType)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x42e90a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ParseWsdlArrayType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadElementQualifiedName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadElementQualifiedName)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x42e9228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadElementQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadEndElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x42e9550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadEndElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadNull)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x42e95e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNullableQualifiedName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadNullableQualifiedName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x42e96e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNullableQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadNullableString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadNullableString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x42e970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNullableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42e9754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.GetCallbackInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationReader::GetCallbackInfo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x42e9a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetCallbackInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x42e97ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReader::*)(ByRef<::System::Object*>)>(&::System::Xml::Serialization::XmlSerializationReader::ReadList)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x42e9b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencedElements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)()>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencedElements)> {
  constexpr static std::size_t size = 0xea8;
  constexpr static std::size_t addrs = 0x42ea9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(ByRef<::StringW>)>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x42eb928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW, ByRef<::StringW>)>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x42ea9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadReferencingElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::StringW, bool, ByRef<::StringW>)>(&::System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x42eb98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadSerializable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::Serialization::IXmlSerializable*)>(&::System::Xml::Serialization::XmlSerializationReader::ReadSerializable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x42ebc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadSerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::IXmlSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadTypedPrimitive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42ebe28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadTypedPrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadTypedPrimitive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlQualifiedName*, bool)>(&::System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x42ea020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadTypedPrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadXmlNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::Serialization::XmlSerializationReader::*)(bool)>(&::System::Xml::Serialization::XmlSerializationReader::ReadXmlNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x42ec0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadXmlNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ReadXmlDocument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::Serialization::XmlSerializationReader::*)(bool)>(&::System::Xml::Serialization::XmlSerializationReader::ReadXmlDocument)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x42ec110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadXmlDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ShrinkArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Array*, int32_t, ::System::Type*, bool)>(&::System::Xml::Serialization::XmlSerializationReader::ShrinkArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x42ec22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ShrinkArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.ToXmlQualifiedName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::ToXmlQualifiedName)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x42e9324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ToXmlQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::System::Xml::XmlAttribute*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::UnknownAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x42ec2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::System::Xml::XmlElement*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::UnknownElement)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x42ec418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReader::UnknownNode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x42e96b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnknownNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Object*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::UnknownNode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x42ec574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.OnUnknownNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::System::Xml::XmlNode*, ::System::Object*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReader::OnUnknownNode)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x42ebe30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "OnUnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReader.UnreferencedObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReader::*)(::StringW, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReader::UnreferencedObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42eb894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnreferencedObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocument*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_document()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___document;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_document() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___document;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_document(::System::Xml::XmlDocument*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___document)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReader*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_reader(::System::Xml::XmlReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_fixups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_fixups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_fixups(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fixups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collFixups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collFixups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collFixups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_collFixups(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collFixups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collItemFixups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collItemFixups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_collItemFixups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collItemFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_collItemFixups(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collItemFixups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typesCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typesCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typesCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typesCallbacks;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_typesCallbacks(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typesCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_noIDTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noIDTargets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_noIDTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noIDTargets;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_noIDTargets(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noIDTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_targets(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedListFixups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedListFixups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedListFixups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedListFixups;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_delayedListFixups(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delayedListFixups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlSerializer*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_eventSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializer*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_eventSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSource;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_eventSource(::System::Xml::Serialization::XmlSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedFixupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedFixupId;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_delayedFixupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedFixupId;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_delayedFixupId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedFixupId = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_referencedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referencedObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_referencedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referencedObjects;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_referencedObjects(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referencedObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_readCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_readCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readCount;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_readCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readCount = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_whileIterationCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileIterationCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_whileIterationCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileIterationCount;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_whileIterationCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileIterationCount = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3SchemaNS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3SchemaNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3SchemaNS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3SchemaNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3SchemaNS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___w3SchemaNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___w3InstanceNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS2000()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS2000;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS2000() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS2000;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS2000(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___w3InstanceNS2000)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS1999()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS1999;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_w3InstanceNS1999() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w3InstanceNS1999;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_w3InstanceNS1999(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___w3InstanceNS1999)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_soapNS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soapNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_soapNS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soapNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_soapNS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soapNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_wsdlNS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wsdlNS;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_wsdlNS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wsdlNS;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_wsdlNS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wsdlNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nullX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullX;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nullX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullX;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_nullX(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nullX)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nil;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_nil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nil;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_nil(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nil)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeX;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_typeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeX;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_typeX(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeX)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayType;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayType;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_arrayType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arrayType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayQName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayQName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Serialization::XmlSerializationReader::__cordl_internal_get_arrayQName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayQName;
}
constexpr void System::Xml::Serialization::XmlSerializationReader::__cordl_internal_set_arrayQName(::System::Xml::XmlQualifiedName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arrayQName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlSerializationReader::Initialize(::System::Xml::XmlReader*  reader, ::System::Xml::Serialization::XmlSerializer*  eventSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, eventSource);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::XmlSerializationReader::EnsureArrayList(::System::Collections::ArrayList*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureArrayList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, list);
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializationReader::EnsureHashtable(::System::Collections::Hashtable*  hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureHashtable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(this, ___internal_method, hash);
}
inline ::System::Xml::Serialization::XmlSerializationReader* System::Xml::Serialization::XmlSerializationReader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationReader*>());
}
inline void System::Xml::Serialization::XmlSerializationReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::Serialization::XmlSerializationReader::get_Document()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "get_Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::Serialization::XmlSerializationReader::get_Reader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "get_Reader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*  fixup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__CollectionFixup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::__XmlSerializationReader__Fixup*  fixup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__Fixup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddFixup(::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*  fixup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddFixup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::__XmlSerializationReader__CollectionItemFixup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddReadCallback(::StringW  name, ::StringW  ns, ::System::Type*  type, ::System::Xml::Serialization::XmlSerializationReadCallback*  read)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddReadCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReadCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, ns, type, read);
}
inline void System::Xml::Serialization::XmlSerializationReader::AddTarget(::StringW  id, ::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "AddTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, o);
}
inline ::StringW System::Xml::Serialization::XmlSerializationReader::CurrentTag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CurrentTag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateReadOnlyCollectionException(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateReadOnlyCollectionException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, name);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownConstantException(::StringW  value, ::System::Type*  enumType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownConstantException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, enumType);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownNodeException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownNodeException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationReader::CreateUnknownTypeException(::System::Xml::XmlQualifiedName*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "CreateUnknownTypeException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, type);
}
inline ::System::Array* System::Xml::Serialization::XmlSerializationReader::EnsureArrayIndex(::System::Array*  a, int32_t  index, ::System::Type*  elementType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "EnsureArrayIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, a, index, elementType);
}
inline bool System::Xml::Serialization::XmlSerializationReader::GetNullAttr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetNullAttr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::GetTarget(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id);
}
inline bool System::Xml::Serialization::XmlSerializationReader::TargetReady(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "TargetReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::GetXsiType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetXsiType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::InitCallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::InitIDs()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSerializationReader::IsXmlnsAttribute(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "IsXmlnsAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Xml::Serialization::XmlSerializationReader::ParseWsdlArrayType(::System::Xml::XmlAttribute*  attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ParseWsdlArrayType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attr);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ReadElementQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadElementQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReader::ReadEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadEndElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSerializationReader::ReadNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ReadNullableQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNullableQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlSerializationReader::ReadNullableString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadNullableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo* System::Xml::Serialization::XmlSerializationReader::GetCallbackInfo(::System::Xml::XmlQualifiedName*  qname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "GetCallbackInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::__XmlSerializationReader__WriteCallbackInfo*, false>(this, ___internal_method, qname);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencedElement(::StringW  name, ::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, ns);
}
inline bool System::Xml::Serialization::XmlSerializationReader::ReadList(ByRef<::System::Object*>  resultList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, resultList);
}
inline void System::Xml::Serialization::XmlSerializationReader::ReadReferencedElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencedElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(ByRef<::StringW>  fixupReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, fixupReference);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(::StringW  name, ::StringW  ns, ByRef<::StringW>  fixupReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, ns, fixupReference);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadReferencingElement(::StringW  name, ::StringW  ns, bool  elementCanBeType, ByRef<::StringW>  fixupReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadReferencingElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, ns, elementCanBeType, fixupReference);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Xml::Serialization::XmlSerializationReader::ReadSerializable(::System::Xml::Serialization::IXmlSerializable*  serializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadSerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::IXmlSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*, false>(this, ___internal_method, serializable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive(::System::Xml::XmlQualifiedName*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadTypedPrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReader::ReadTypedPrimitive(::System::Xml::XmlQualifiedName*  qname, bool  reportUnknown)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadTypedPrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, qname, reportUnknown);
}
inline ::System::Xml::XmlNode* System::Xml::Serialization::XmlSerializationReader::ReadXmlNode(bool  wrapped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadXmlNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, wrapped);
}
inline ::System::Xml::XmlDocument* System::Xml::Serialization::XmlSerializationReader::ReadXmlDocument(bool  wrapped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ReadXmlDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(this, ___internal_method, wrapped);
}
inline ::System::Array* System::Xml::Serialization::XmlSerializationReader::ShrinkArray(::System::Array*  a, int32_t  length, ::System::Type*  elementType, bool  isNullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ShrinkArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, a, length, elementType, isNullable);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReader::ToXmlQualifiedName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "ToXmlQualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownAttribute(::System::Object*  o, ::System::Xml::XmlAttribute*  attr, ::StringW  qnames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, attr, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownElement(::System::Object*  o, ::System::Xml::XmlElement*  elem, ::StringW  qnames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, elem, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownNode(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnknownNode(::System::Object*  o, ::StringW  qnames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::OnUnknownNode(::System::Xml::XmlNode*  node, ::System::Object*  o, ::StringW  qnames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "OnUnknownNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, o, qnames);
}
inline void System::Xml::Serialization::XmlSerializationReader::UnreferencedObject(::StringW  id, ::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReader*>::get(),
                        "UnreferencedObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, o);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReader::XmlSerializationReader()   {
}
