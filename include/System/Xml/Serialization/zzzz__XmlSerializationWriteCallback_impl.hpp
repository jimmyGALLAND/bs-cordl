#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriteCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriteCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriteCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Xml::Serialization::XmlSerializationWriteCallback::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x42f1e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriteCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriteCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriteCallback::*)(::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriteCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x42f1f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriteCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriteCallback*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlSerializationWriteCallback* System::Xml::Serialization::XmlSerializationWriteCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationWriteCallback*>(object, method));
}
inline void System::Xml::Serialization::XmlSerializationWriteCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriteCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::XmlSerializationWriteCallback::Invoke(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriteCallback*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback::XmlSerializationWriteCallback()   {
}
