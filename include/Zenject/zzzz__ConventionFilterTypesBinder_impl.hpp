#pragma once
// IWYU pragma private; include "Zenject/ConventionFilterTypesBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConventionAssemblySelectionBinder_impl.hpp"
#include "Zenject/zzzz__ConventionFilterTypesBinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "Zenject/zzzz__ConventionFilterTypesBinder_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6bc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0._InNamespaces_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::_InNamespaces_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a6c028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "<InNamespaces>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6c104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6c158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__cordl_internal_get_namespaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namespaces;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__cordl_internal_get_namespaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namespaces;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__cordl_internal_set_namespaces(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::_InNamespaces_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "<InNamespaces>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0::__ConventionFilterTypesBinder____c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6c0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1._InNamespaces_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::*)(::StringW)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::_InNamespaces_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6c310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "<InNamespaces>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6c318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6c36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__cordl_internal_get_t()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__cordl_internal_get_t() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__cordl_internal_set_t(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::_InNamespaces_b__1(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "<InNamespaces>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, n);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1::__ConventionFilterTypesBinder____c__DisplayClass13_1()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6bd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0._WithSuffix_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::_WithSuffix_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a6c524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "<WithSuffix>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6c55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6c5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__cordl_internal_get_suffix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suffix;
}
constexpr ::StringW const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__cordl_internal_get_suffix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suffix;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__cordl_internal_set_suffix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___suffix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::_WithSuffix_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "<WithSuffix>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0::__ConventionFilterTypesBinder____c__DisplayClass14_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6be04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0._WithPrefix_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::_WithPrefix_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a6c768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "<WithPrefix>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6c7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6c7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__cordl_internal_get_prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefix;
}
constexpr ::StringW const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__cordl_internal_get_prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefix;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__cordl_internal_set_prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::_WithPrefix_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "<WithPrefix>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0::__ConventionFilterTypesBinder____c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6bf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0._MatchingRegex_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::_MatchingRegex_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4a6c9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "<MatchingRegex>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6c9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6ca3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Regex*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__cordl_internal_get_regex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__cordl_internal_get_regex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regex;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__cordl_internal_set_regex(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___regex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::_MatchingRegex_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "<MatchingRegex>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0::__ConventionFilterTypesBinder____c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6b7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0._DerivingFromOrEqual_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::_DerivingFromOrEqual_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4a6cbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "<DerivingFromOrEqual>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6cc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6ccb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__cordl_internal_get_parentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__cordl_internal_get_parentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentType;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__cordl_internal_set_parentType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::_DerivingFromOrEqual_b__0(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "<DerivingFromOrEqual>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0::__ConventionFilterTypesBinder____c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6b8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0._DerivingFrom_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::_DerivingFrom_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4a6ce68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "<DerivingFrom>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6ced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__cordl_internal_get_parentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__cordl_internal_get_parentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentType;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__cordl_internal_set_parentType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::_DerivingFrom_b__0(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "<DerivingFrom>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0::__ConventionFilterTypesBinder____c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6b9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0._WithAttribute_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::_WithAttribute_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6d0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "<WithAttribute>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6d1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6d1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__cordl_internal_get_attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__cordl_internal_get_attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__cordl_internal_set_attribute(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::_WithAttribute_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "<WithAttribute>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0::__ConventionFilterTypesBinder____c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6baf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0._WithoutAttribute_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::*)(::System::Type*)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::_WithoutAttribute_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a6d3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "<WithoutAttribute>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a6d484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a6d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__cordl_internal_get_attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__cordl_internal_get_attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__cordl_internal_set_attribute(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0* Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>());
}
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::_WithoutAttribute_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "<WithoutAttribute>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0::__ConventionFilterTypesBinder____c__DisplayClass8_0()   {
}
template<typename T>
constexpr ::System::Func_2<T,bool>*& Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T,bool>*> const& Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename T>
constexpr void Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__cordl_internal_set_predicate(::System::Func_2<T,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>* Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>*>());
}
template<typename T>
inline void Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline bool Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::_WithAttributeWhere_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>*>::get(),
                        "<WithAttributeWhere>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
template<typename T>
inline ::System::Object* Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<typename T>
inline ::Zenject::InjectTypeInfo* Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>::__ConventionFilterTypesBinder____c__DisplayClass9_0_1()   {
}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionFilterTypesBinder::*)(::Zenject::ConventionBindInfo*)>(&::Zenject::ConventionFilterTypesBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a6b6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConventionBindInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.DerivingFromOrEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&::Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6b714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "DerivingFromOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.DerivingFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&::Zenject::ConventionFilterTypesBinder::DerivingFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6b7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "DerivingFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&::Zenject::ConventionFilterTypesBinder::WithAttribute)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4a6b8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithoutAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(&::Zenject::ConventionFilterTypesBinder::WithoutAttribute)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4a6b9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithoutAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.Where
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Func_2<::System::Type*,bool>*)>(&::Zenject::ConventionFilterTypesBinder::Where)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a6bafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "Where",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&::Zenject::ConventionFilterTypesBinder::InNamespace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4a6bb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespaces
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::ArrayW<::StringW,::Array<::StringW>*>)>(&::Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a6bb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespaces",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespaces
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6bb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespaces",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithSuffix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&::Zenject::ConventionFilterTypesBinder::WithSuffix)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6bc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithSuffix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithPrefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&::Zenject::ConventionFilterTypesBinder::WithPrefix)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6bd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(&::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a6be0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW, ::System::Text::RegularExpressions::RegexOptions)>(&::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4a6be14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Text::RegularExpressions::Regex*)>(&::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a6be88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.IsInNamespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::StringW)>(&::Zenject::ConventionFilterTypesBinder::IsInNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4a6bf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "IsInNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::New_ctor(::Zenject::ConventionBindInfo*  bindInfo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConventionFilterTypesBinder*>(bindInfo));
}
inline void Zenject::ConventionFilterTypesBinder::_ctor(::Zenject::ConventionBindInfo*  bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConventionBindInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
template<typename T>
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                    "DerivingFromOrEqual",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual(::System::Type*  parentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "DerivingFromOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, parentType);
}
template<typename T>
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFrom()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                    "DerivingFrom",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFrom(::System::Type*  parentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "DerivingFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, parentType);
}
template<typename T>
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttribute()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                    "WithAttribute",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttribute(::System::Type*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, attribute);
}
template<typename T>
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithoutAttribute()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                    "WithoutAttribute",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithoutAttribute(::System::Type*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithoutAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, attribute);
}
template<typename T>
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttributeWhere(::System::Func_2<T,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                    "WithAttributeWhere",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T,bool>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, predicate);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::Where(::System::Func_2<::System::Type*,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "Where",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, predicate);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespace(::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, ns);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespaces(::ArrayW<::StringW,::Array<::StringW>*>  namespaces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespaces",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, namespaces);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespaces(::System::Collections::Generic::IEnumerable_1<::StringW>*  namespaces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "InNamespaces",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, namespaces);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithSuffix(::StringW  suffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithSuffix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, suffix);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithPrefix(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "WithPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, prefix);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, pattern);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::StringW  pattern, ::System::Text::RegularExpressions::RegexOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, pattern, options);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::System::Text::RegularExpressions::Regex*  regex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "MatchingRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*, false>(this, ___internal_method, regex);
}
inline bool Zenject::ConventionFilterTypesBinder::IsInNamespace(::System::Type*  type, ::StringW  requiredNs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionFilterTypesBinder*>::get(),
                        "IsInNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, requiredNs);
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder::ConventionFilterTypesBinder()   {
}
