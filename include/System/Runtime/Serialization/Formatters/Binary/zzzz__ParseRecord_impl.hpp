#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectPositionE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalParseTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__PrimitiveArray_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ParseRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ParseRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ParseRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ParseRecord.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ParseRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24d4264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), "Init",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRparseTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRparseTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRparseTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRparseTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRparseTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRparseTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRobjectTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRarrayTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRmemberTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberValueEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberValueEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberValueEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberValueEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRmemberValueEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectPositionEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectPositionEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectPositionEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectPositionEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectPositionEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRobjectPositionEnum = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRname;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRname;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRname(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRname)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRvalue;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRvalue;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRvalue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRvalue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvarValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRvarValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvarValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRvarValue;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRvarValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRvarValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRkeyDt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRkeyDt;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRkeyDt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRkeyDt;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRkeyDt(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRkeyDt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRdtType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRdtType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRdtType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRdtType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtTypeCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRdtTypeCode;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtTypeCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRdtTypeCode;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRdtTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRdtTypeCode = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisEnum;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisEnum(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRisEnum = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRobjectId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRidRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRidRef;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRidRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRidRef;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRidRef(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRidRef = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementTypeString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementTypeString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementTypeString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRarrayElementTypeString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRarrayElementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisArrayVariant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisArrayVariant;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisArrayVariant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisArrayVariant;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisArrayVariant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRisArrayVariant = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementTypeCode;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRarrayElementTypeCode;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRarrayElementTypeCode = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRrank;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRrank;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRrank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRrank = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlengthA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlengthA;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlengthA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlengthA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlengthA(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRlengthA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRpositionA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRpositionA;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRpositionA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRpositionA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRpositionA(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRpositionA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlowerBoundA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlowerBoundA;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlowerBoundA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlowerBoundA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlowerBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRlowerBoundA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRupperBoundA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRupperBoundA;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRupperBoundA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRupperBoundA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRupperBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRupperBoundA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRindexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRindexMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRindexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRindexMap;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRindexMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRindexMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberIndex;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberIndex;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRmemberIndex = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlinearlength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlinearlength;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlinearlength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRlinearlength;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlinearlength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRlinearlength = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrectangularMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRrectangularMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrectangularMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRrectangularMap;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRrectangularMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRrectangularMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisLowerBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisLowerBound;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisLowerBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisLowerBound;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisLowerBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRisLowerBound = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRtopId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRtopId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRtopId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRtopId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRtopId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRtopId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRheaderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRheaderId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRheaderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRheaderId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRheaderId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRheaderId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const&
System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRobjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisValueTypeFixup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisValueTypeFixup;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisValueTypeFixup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisValueTypeFixup;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisValueTypeFixup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRisValueTypeFixup = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnewObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRnewObj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnewObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRnewObj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRnewObj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRnewObj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectA;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRobjectA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRobjectA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRprimitiveArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRprimitiveArray;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*> const&
System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRprimitiveArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRprimitiveArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRprimitiveArray(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRprimitiveArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisRegistered;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRisRegistered;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRisRegistered = value;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberData;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRmemberData;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRmemberData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRsi;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRsi;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRsi(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRsi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnullCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRnullCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnullCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PRnullCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRnullCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PRnullCount = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::setStaticF_parseRecordIdCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "parseRecordIdCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ParseRecord::getStaticF_parseRecordIdCount() {
  return ::cordl_internals::getStaticField<int32_t, "parseRecordIdCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::ParseRecord::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), "Init",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord::ParseRecord() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
