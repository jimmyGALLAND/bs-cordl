#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReaderInterpreter.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReaderInterpreter_def.hpp"
#include "System/Xml/Serialization/zzzz__ClassMap_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMembersMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReaderInterpreter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::*)(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, bool)>(&::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x42f0cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo.FixupMembers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::*)(::System::Object*)>(&::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::FixupMembers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x42f1df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*>::get(),
                        "FixupMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__sri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReaderInterpreter*> const& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__sri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sri;
}
constexpr void System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::ClassMap*& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::ClassMap*> const& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr void System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_set__map(::System::Xml::Serialization::ClassMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____map)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__isValueList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValueList;
}
constexpr bool const& System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_get__isValueList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValueList;
}
constexpr void System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__cordl_internal_set__isValueList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isValueList = value;
}
inline ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo* System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::ClassMap*  map, bool  isValueList)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*>(sri, map, isValueList));
}
inline void System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::ClassMap*  map, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sri, map, isValueList);
}
inline void System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::FixupMembers(::System::Object*  fixup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*>::get(),
                        "FixupMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo::__XmlSerializationReaderInterpreter__FixupCallbackInfo()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::*)(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x42ecad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo.ReadObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::*)()>(&::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::ReadObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x42f1e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*>::get(),
                        "ReadObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_get__sri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReaderInterpreter*> const& System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_get__sri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sri;
}
constexpr void System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapping*& System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_get__typeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapping*> const& System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_get__typeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeMap;
}
constexpr void System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo* System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::XmlTypeMapping*  typeMap)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*>(sri, typeMap));
}
inline void System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter*  sri, ::System::Xml::Serialization::XmlTypeMapping*  typeMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sri, typeMap);
}
inline ::System::Object* System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*>::get(),
                        "ReadObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo::__XmlSerializationReaderInterpreter__ReaderCallbackInfo()   {
}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x42ec6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x42ec6f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitIDs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x42ecafc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x42ecb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEncodedObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x42ecce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadEncodedObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMembersMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x42ecde4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x42ecc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x42ef944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x42f0094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstanceMembers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x42f037c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadAttributeMembers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x42ed390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadAttributeMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMembers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x219c;
  constexpr static std::size_t addrs = 0x42ed78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetListMembersDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x42f0a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetListMembersDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FixupMembers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x42f0ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "FixupMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x42f13f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x42f1424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.IsReadOnly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x42f0bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x42f055c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetMemberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValueFromAttr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x42ed2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetMemberValueFromAttr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetMemberValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x42f06e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetMemberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObjectElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x42f0d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadObjectElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x42f1458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadPrimitiveValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetValueFromXmlString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::StringW, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x42f0424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetValueFromXmlString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x42efa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadListElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x42f1570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadListString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.AddListValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*, ByRef<::System::Object*>, int32_t, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x42f07b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "AddListValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x42f0370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x42ed26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x42f0cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitializeList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x42f0c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "InitializeList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FillList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x42f18d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "FillList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CopyEnumerableList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x42f18e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CopyEnumerableList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNodeElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x42ef928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlNodeElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x42f0f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x42efdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadPrimitiveElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEnumElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x42efe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadEnumElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetEnumValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x42f17a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetEnumValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlSerializableElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x42eff00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlSerializableElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlMapping*& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__typeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlMapping*> const& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__typeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeMap;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::SerializationFormat& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::System::Xml::Serialization::SerializationFormat const& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::setStaticF_AnyType(::System::Xml::XmlQualifiedName*  value)  {
::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "AnyType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_AnyType()  {
return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "AnyType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>();
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::setStaticF_empty_array(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, "empty_array", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>(std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_empty_array()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, "empty_array", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>();
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter* System::Xml::Serialization::XmlSerializationReaderInterpreter::New_ctor(::System::Xml::Serialization::XmlMapping*  typeMap)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(typeMap));
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor(::System::Xml::Serialization::XmlMapping*  typeMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping*  typeMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadEncodedObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage(::System::Xml::Serialization::XmlMembersMapping*  typeMap)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot(::System::Xml::Serialization::XmlTypeMapping*  rootMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, rootMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, bool  checkType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, bool  checkType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::System::Object*  ob)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadAttributeMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList, bool  readBySoapOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList, readBySoapOrder);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  ob, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetListMembersDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers(::System::Xml::Serialization::ClassMap*  map, ::System::Object*  obfixup, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "FixupMembers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, obfixup, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute(::System::Object*  target)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement(::System::Object*  target)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline bool System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Xml::Serialization::TypeData*  memType, ::System::Object*  ob, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, member, memType, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, ::System::Object*  value, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetMemberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, ob, value, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, ::System::Object*  value, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "SetMemberValueFromAttr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, ob, value, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember*  member, ::System::Object*  ob, bool  isValueList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetMemberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, member, ob, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo*  elem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadObjectElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo*  elem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadPrimitiveValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString(::StringW  value, ::System::Xml::Serialization::TypeData*  typeData, ::System::Xml::Serialization::XmlTypeMapping*  typeMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetValueFromXmlString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, typeData, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable, ::System::Object*  list, bool  canCreateInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadListElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, list, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::StringW  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadListString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, values);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue(::System::Xml::Serialization::TypeData*  listType, ByRef<::System::Object*>  list, int32_t  index, ::System::Object*  value, bool  canCreateInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "AddListValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listType, list, index, value, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type*  type, bool  nonPublic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, nonPublic);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList(::System::Type*  listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CreateList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, listType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList(::System::Xml::Serialization::TypeData*  listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "InitializeList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, listType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList(::System::Object*  list, ::System::Object*  items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "FillList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, items);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList(::System::Object*  source, ::System::Object*  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "CopyEnumerableList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlNodeElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode(::System::Xml::Serialization::TypeData*  type, bool  wrapped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, wrapped);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadPrimitiveElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadEnumElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue(::System::Xml::Serialization::XmlTypeMapping*  typeMap, ::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "GetEnumValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, val);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping*  typeMap, bool  isNullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                        "ReadXmlSerializableElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter::XmlSerializationReaderInterpreter()   {
}
