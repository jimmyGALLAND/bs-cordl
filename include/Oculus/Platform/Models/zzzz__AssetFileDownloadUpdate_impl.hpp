#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDownloadUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AssetFileDownloadUpdate::*)(void*)>(
    &::Oculus::Platform::Models::AssetFileDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2704ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadUpdate*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_AssetFileId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AssetFileId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_AssetFileId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AssetFileId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__set_AssetFileId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___AssetFileId = value;
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___AssetId = value;
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_BytesTotal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___BytesTotal;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_BytesTotal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___BytesTotal;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__set_BytesTotal(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___BytesTotal = value;
}
constexpr int64_t& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_BytesTransferred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___BytesTransferred;
}
constexpr int64_t const& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_BytesTransferred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___BytesTransferred;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__set_BytesTransferred(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___BytesTransferred = value;
}
constexpr bool& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Completed;
}
constexpr bool const& Oculus::Platform::Models::AssetFileDownloadUpdate::__get_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Completed;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadUpdate::__set_Completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Completed = value;
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::Models::AssetFileDownloadUpdate::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(o));
}
inline void Oculus::Platform::Models::AssetFileDownloadUpdate::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadUpdate*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetFileDownloadUpdate::AssetFileDownloadUpdate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
