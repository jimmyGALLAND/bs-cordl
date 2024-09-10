#pragma once
// IWYU pragma private; include "Zenject/PrefabBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PrefabBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PrefabBindingFinalizer_def.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a83604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a8401c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "<FinalizeBindingConcrete>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a8412c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a84180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabBindingFinalizer*& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabBindingFinalizer*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_set_container(::Zenject::DiContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_concreteTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concreteTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_concreteTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concreteTypes;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___concreteTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>());
}
inline void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer*  _, ::System::Type*  concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "<FinalizeBindingConcrete>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0::__PrefabBindingFinalizer____c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a83df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4a84338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "<FinalizeBindingConcrete>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a8437c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a843d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_prefabCreator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_prefabCreator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabCreator;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefabCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>());
}
inline void Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer*  _, ::System::Type*  concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "<FinalizeBindingConcrete>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass5_1::__PrefabBindingFinalizer____c__DisplayClass5_1()   {
}
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a83df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0._FinalizeBindingSelf_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4a84588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "<FinalizeBindingSelf>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a8469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a846f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabBindingFinalizer*& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabBindingFinalizer*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_set_container(::Zenject::DiContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>());
}
inline void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer*  _, ::System::Type*  contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "<FinalizeBindingSelf>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0::__PrefabBindingFinalizer____c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a84014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1._FinalizeBindingSelf_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4a848a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "<FinalizeBindingSelf>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a848ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a84940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_prefabCreator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_prefabCreator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabCreator;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefabCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*> const& Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>());
}
inline void Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer*  _, ::System::Type*  contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "<FinalizeBindingSelf>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__PrefabBindingFinalizer____c__DisplayClass6_1::__PrefabBindingFinalizer____c__DisplayClass6_1()   {
}
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::BindInfo*, ::Zenject::GameObjectCreationParameters*, ::UnityEngine::Object*, ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*)>(&::Zenject::PrefabBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4a82edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.OnFinalizeBinding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4a82f44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.FinalizeBindingConcrete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x4a832e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        "FinalizeBindingConcrete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.FinalizeBindingSelf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x4a82fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        "FinalizeBindingSelf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::PrefabBindingFinalizer::__cordl_internal_get__gameObjectBindInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__gameObjectBindInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectBindInfo;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Object>& Zenject::PrefabBindingFinalizer::__cordl_internal_get__prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__prefab(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*& Zenject::PrefabBindingFinalizer::__cordl_internal_get__providerFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____providerFactory;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*> const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__providerFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____providerFactory;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__providerFactory(::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providerFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::PrefabBindingFinalizer* Zenject::PrefabBindingFinalizer::New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::UnityEngine::Object*  prefab, ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  providerFactory)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabBindingFinalizer*>(bindInfo, gameObjectBindInfo, prefab, providerFactory));
}
inline void Zenject::PrefabBindingFinalizer::_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::UnityEngine::Object*  prefab, ::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*  providerFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::System::Type*,::Zenject::IPrefabInstantiator*,::Zenject::IProvider*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, gameObjectBindInfo, prefab, providerFactory);
}
inline void Zenject::PrefabBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer*  container)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer*  container, ::System::Collections::Generic::List_1<::System::Type*>*  concreteTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        "FinalizeBindingConcrete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::PrefabBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabBindingFinalizer*>::get(),
                        "FinalizeBindingSelf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer::PrefabBindingFinalizer()   {
}
