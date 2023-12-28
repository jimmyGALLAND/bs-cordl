#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterCount_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterCount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterCount::*)()>(&::System::Threading::ReaderWriterCount::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2813f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterCount*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int64_t& System::Threading::ReaderWriterCount::__get_lockID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr int64_t const& System::Threading::ReaderWriterCount::__get_lockID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr void System::Threading::ReaderWriterCount::__set_lockID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockID = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_readercount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readercount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_readercount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readercount;
}
constexpr void System::Threading::ReaderWriterCount::__set_readercount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readercount = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_writercount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writercount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_writercount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writercount;
}
constexpr void System::Threading::ReaderWriterCount::__set_writercount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writercount = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_upgradecount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradecount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_upgradecount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradecount;
}
constexpr void System::Threading::ReaderWriterCount::__set_upgradecount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upgradecount = value;
}
constexpr ::System::Threading::ReaderWriterCount*& System::Threading::ReaderWriterCount::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterCount*> const& System::Threading::ReaderWriterCount::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Threading::ReaderWriterCount::__set_next(::System::Threading::ReaderWriterCount* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterCount::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ReaderWriterCount*>());
}
inline void System::Threading::ReaderWriterCount::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterCount*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterCount::ReaderWriterCount() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
