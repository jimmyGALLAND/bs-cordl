#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SubContainerBindingFinalizer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__SubContainerBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee6c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ee6c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), "<FinalizeBindingConcrete>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee6d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee6dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerBindingFinalizer*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__set___4__this(::Zenject::SubContainerBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>());
}
inline void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), "<FinalizeBindingConcrete>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0::__SubContainerBindingFinalizer____c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee6c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ee6f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), "<FinalizeBindingConcrete>b__1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee7008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee7064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___containerCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*> const&
Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>());
}
inline void Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), "<FinalizeBindingConcrete>b__1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1::__SubContainerBindingFinalizer____c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee6c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ee7224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), "<FinalizeBindingSelf>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee72dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee7338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerBindingFinalizer*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__set___4__this(::Zenject::SubContainerBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>());
}
inline void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), "<FinalizeBindingSelf>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0::__SubContainerBindingFinalizer____c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee6c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1._FinalizeBindingSelf_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ee74f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), "<FinalizeBindingSelf>b__1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee7594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee75f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___containerCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*& Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*> const&
Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>());
}
inline void Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), "<FinalizeBindingSelf>b__1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1::__SubContainerBindingFinalizer____c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::SubContainerBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBindingFinalizer::*)(
    ::Zenject::BindInfo*, ::System::Object*, bool, ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*)>(&::Zenject::SubContainerBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2edb498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ee683c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBindingFinalizer::*)(
    ::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2ee6a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), "FinalizeBindingConcrete", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ee68c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), "FinalizeBindingSelf", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::SubContainerBindingFinalizer::__get__subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::SubContainerBindingFinalizer::__get__subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr void Zenject::SubContainerBindingFinalizer::__set__subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::SubContainerBindingFinalizer::__get__resolveAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerBindingFinalizer::__get__resolveAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr void Zenject::SubContainerBindingFinalizer::__set__resolveAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolveAll = value;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& Zenject::SubContainerBindingFinalizer::__get__creatorFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creatorFactory;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*> const&
Zenject::SubContainerBindingFinalizer::__get__creatorFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creatorFactory;
}
constexpr void Zenject::SubContainerBindingFinalizer::__set__creatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____creatorFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerBindingFinalizer* Zenject::SubContainerBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                                                                ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerBindingFinalizer*>(bindInfo, subIdentifier, resolveAll, creatorFactory));
}
inline void Zenject::SubContainerBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                         ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, subIdentifier, resolveAll, creatorFactory);
}
inline void Zenject::SubContainerBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), "OnFinalizeBinding", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), "FinalizeBindingConcrete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBindingFinalizer*>::get(), "FinalizeBindingSelf", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBindingFinalizer::SubContainerBindingFinalizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
