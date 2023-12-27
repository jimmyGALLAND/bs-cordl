#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongPackMaskConverter::*)(::System::Type*)>(
    &::GlobalNamespace::SongPackMaskConverter::CanConvert)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x12a9f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::SongPackMaskConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::GlobalNamespace::SongPackMaskConverter::ReadJson)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x12a9fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMaskConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::GlobalNamespace::SongPackMaskConverter::WriteJson)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12aa058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMaskConverter::*)()>(&::GlobalNamespace::SongPackMaskConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12aa108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SongPackMaskConverter::CanConvert(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), "CanConvert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline ::System::Object* GlobalNamespace::SongPackMaskConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                          ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), "ReadJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void GlobalNamespace::SongPackMaskConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), "WriteJson", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline ::GlobalNamespace::SongPackMaskConverter* GlobalNamespace::SongPackMaskConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMaskConverter*>());
}
inline void GlobalNamespace::SongPackMaskConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMaskConverter::SongPackMaskConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
