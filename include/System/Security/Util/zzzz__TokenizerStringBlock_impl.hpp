#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerStringBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerStringBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::TokenizerStringBlock::*)()>(&::System::Security::Util::TokenizerStringBlock::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2456554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerStringBlock*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Security::Util::TokenizerStringBlock::__get_m_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_block;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Security::Util::TokenizerStringBlock::__get_m_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_block;
}
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_block(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_block)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Util::TokenizerStringBlock*& System::Security::Util::TokenizerStringBlock::__get_m_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerStringBlock*> const& System::Security::Util::TokenizerStringBlock::__get_m_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_next;
}
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_next(::System::Security::Util::TokenizerStringBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Util::TokenizerStringBlock* System::Security::Util::TokenizerStringBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::TokenizerStringBlock*>());
}
inline void System::Security::Util::TokenizerStringBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerStringBlock*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Util::TokenizerStringBlock::TokenizerStringBlock() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
