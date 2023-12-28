#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Shelf_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Shelf._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Shelf::*)()>(&::HoudiniEngineUnity::HEU_Shelf::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21d06f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Shelf*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_Shelf::__get__shelfName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shelfName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Shelf::__get__shelfName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shelfName;
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__shelfName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shelfName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Shelf::__get__shelfPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shelfPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Shelf::__get__shelfPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shelfPath;
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__shelfPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shelfPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Shelf::__get__defaultShelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultShelf;
}
constexpr bool const& HoudiniEngineUnity::HEU_Shelf::__get__defaultShelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultShelf;
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__defaultShelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultShelf = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*& HoudiniEngineUnity::HEU_Shelf::__get__tools() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tools;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> const& HoudiniEngineUnity::HEU_Shelf::__get__tools() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tools;
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__tools(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tools)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_Shelf* HoudiniEngineUnity::HEU_Shelf::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Shelf*>());
}
inline void HoudiniEngineUnity::HEU_Shelf::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Shelf*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Shelf::HEU_Shelf() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
