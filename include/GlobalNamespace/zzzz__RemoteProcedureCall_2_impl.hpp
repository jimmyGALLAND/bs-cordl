#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
template <typename T0, typename T1> constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__get__value0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> const& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__get__value0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__get__value1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> const& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__get__value1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> inline T0 GlobalNamespace::RemoteProcedureCall_2<T0, T1>::get_value0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(),
                                                                             "get_value0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T0, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline T1 GlobalNamespace::RemoteProcedureCall_2<T0, T1>::get_value1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(),
                                                                             "get_value1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), "SerializeData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, protocolVersion);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), "DeserializeData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, protocolVersion);
}
template <typename T0, typename T1> inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_2<T0, T1>::Init(int64_t syncTime, T0 value0, T1 value1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(this, ___internal_method, syncTime, value0, value1);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::GlobalNamespace::RemoteProcedureCall_2<T0, T1>* GlobalNamespace::RemoteProcedureCall_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>());
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_2<T0, T1>::RemoteProcedureCall_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
