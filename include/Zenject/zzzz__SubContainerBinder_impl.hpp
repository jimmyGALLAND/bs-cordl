#pragma once
// IWYU pragma private; include "Zenject/SubContainerBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass10_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass10_0._ByInstaller_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass10_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass10_0::_ByInstaller_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4a7d9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "<ByInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass10_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass10_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7da2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass10_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass10_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7da80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_get_subContainerBindInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_get_subContainerBindInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerBindInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subContainerBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_get_installerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_get_installerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass10_0::__cordl_internal_set_installerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass10_0* Zenject::__SubContainerBinder____c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass10_0::_ByInstaller_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "<ByInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass10_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass10_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass10_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass10_0::__SubContainerBinder____c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass11_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7cb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass11_0._ByMethod_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass11_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass11_0::_ByMethod_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4a7dc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "<ByMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass11_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7dcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass11_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7dd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_get_subContainerBindInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_get_subContainerBindInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerBindInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subContainerBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_get_installerMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_get_installerMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass11_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass11_0* Zenject::__SubContainerBinder____c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass11_0::_ByMethod_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "<ByMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass11_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass11_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass11_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass11_0::__SubContainerBinder____c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass12_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7cc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass12_0._ByNewGameObjectMethod_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass12_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass12_0::_ByNewGameObjectMethod_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4a7deb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "<ByNewGameObjectMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass12_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass12_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass12_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7df80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_get_installerMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_get_installerMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass12_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass12_0* Zenject::__SubContainerBinder____c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass12_0::_ByNewGameObjectMethod_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "<ByNewGameObjectMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass12_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass12_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass12_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass12_0::__SubContainerBinder____c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass13_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7ce68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass13_0._ByNewPrefabMethod_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass13_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass13_0::_ByNewPrefabMethod_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a7e138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "<ByNewPrefabMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass13_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7e1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass13_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7e234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_installerMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_get_installerMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass13_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass13_0* Zenject::__SubContainerBinder____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass13_0::_ByNewPrefabMethod_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "<ByNewPrefabMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass13_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass13_0::__SubContainerBinder____c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass15_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass15_0._ByNewGameObjectInstaller_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass15_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4a7e3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "<ByNewGameObjectInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass15_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7e47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass15_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7e4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get_installerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get_installerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_set_installerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::SubContainerBinder*& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass15_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass15_0* Zenject::__SubContainerBinder____c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "<ByNewGameObjectInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass15_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass15_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass15_0::__SubContainerBinder____c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass17_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass17_0._ByNewPrefabInstaller_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass17_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass17_0::_ByNewPrefabInstaller_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a7e688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "<ByNewPrefabInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass17_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass17_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7e754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass17_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass17_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7e7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_installerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get_installerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_set_installerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::SubContainerBinder*& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass17_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass17_0* Zenject::__SubContainerBinder____c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass17_0::_ByNewPrefabInstaller_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "<ByNewPrefabInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass17_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass17_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass17_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass17_0::__SubContainerBinder____c__DisplayClass17_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass18_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass18_0._ByNewPrefabResourceMethod_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass18_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a7e960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "<ByNewPrefabResourceMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass18_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7ea08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass18_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7ea5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_resourcePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr ::StringW const& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_resourcePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_set_resourcePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_installerMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_get_installerMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerMethod;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass18_0::__cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass18_0* Zenject::__SubContainerBinder____c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "<ByNewPrefabResourceMethod>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass18_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass18_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass18_0::__SubContainerBinder____c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass20_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass20_0._ByNewPrefabResourceInstaller_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass20_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a7ec14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "<ByNewPrefabResourceInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass20_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass20_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7ece0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass20_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass20_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7ed34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_resourcePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr ::StringW const& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_resourcePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_set_resourcePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_installerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get_installerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installerType;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_set_installerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___installerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::SubContainerBinder*& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass20_0::__cordl_internal_set___4__this(::Zenject::SubContainerBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass20_0* Zenject::__SubContainerBinder____c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "<ByNewPrefabResourceInstaller>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass20_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass20_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass20_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass20_0::__SubContainerBinder____c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass22_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass22_0._ByNewContextPrefab_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass22_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass22_0::_ByNewContextPrefab_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4a7eeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "<ByNewContextPrefab>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass22_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass22_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7ef90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass22_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass22_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7efe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_set_prefab(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass22_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass22_0* Zenject::__SubContainerBinder____c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass22_0::_ByNewContextPrefab_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "<ByNewContextPrefab>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass22_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass22_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass22_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass22_0::__SubContainerBinder____c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass24_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7d9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass24_0._ByNewContextPrefabResource_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass24_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass24_0::_ByNewContextPrefabResource_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4a7f19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "<ByNewContextPrefabResource>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass24_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass24_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7f240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass24_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass24_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7f294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_get_resourcePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr ::StringW const& Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_get_resourcePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePath;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_set_resourcePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_get_gameObjectInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_get_gameObjectInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfo;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass24_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass24_0* Zenject::__SubContainerBinder____c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass24_0::_ByNewContextPrefabResource_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "<ByNewContextPrefabResource>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, container);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass24_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass24_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass24_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass24_0::__SubContainerBinder____c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass7_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass7_0._ByInstance_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass7_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass7_0::_ByInstance_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4a7f44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "<ByInstance>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass7_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7f4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass7_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7f500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::__SubContainerBinder____c__DisplayClass7_0::__cordl_internal_get_subContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainer;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__SubContainerBinder____c__DisplayClass7_0::__cordl_internal_get_subContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainer;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass7_0::__cordl_internal_set_subContainer(::Zenject::DiContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass7_0* Zenject::__SubContainerBinder____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass7_0::_ByInstance_b__0(::Zenject::DiContainer*  _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "<ByInstance>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, _);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass7_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass7_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass7_0::__SubContainerBinder____c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerBinder____c__DisplayClass8_0::*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass8_0._ByInstanceGetter_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (::Zenject::__SubContainerBinder____c__DisplayClass8_0::*)(::Zenject::DiContainer*)>(&::Zenject::__SubContainerBinder____c__DisplayClass8_0::_ByInstanceGetter_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4a7f6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "<ByInstanceGetter>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass8_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__SubContainerBinder____c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a7f718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerBinder____c__DisplayClass8_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SubContainerBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4a7f76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*& Zenject::__SubContainerBinder____c__DisplayClass8_0::__cordl_internal_get_subContainerGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerGetter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*> const& Zenject::__SubContainerBinder____c__DisplayClass8_0::__cordl_internal_get_subContainerGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subContainerGetter;
}
constexpr void Zenject::__SubContainerBinder____c__DisplayClass8_0::__cordl_internal_set_subContainerGetter(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subContainerGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerBinder____c__DisplayClass8_0* Zenject::__SubContainerBinder____c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>());
}
inline void Zenject::__SubContainerBinder____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::ISubContainerCreator* Zenject::__SubContainerBinder____c__DisplayClass8_0::_ByInstanceGetter_b__0(::Zenject::DiContainer*  _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "<ByInstanceGetter>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ISubContainerCreator*, false>(this, ___internal_method, _);
}
inline ::System::Object* Zenject::__SubContainerBinder____c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerBinder____c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerBinder____c__DisplayClass8_0::__SubContainerBinder____c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Zenject::SubContainerBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBinder::*)(::Zenject::BindInfo*, ::Zenject::BindStatement*, ::System::Object*, bool)>(&::Zenject::SubContainerBinder::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4a7c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.set_SubFinalizer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerBinder::*)(::Zenject::IBindingFinalizer*)>(&::Zenject::SubContainerBinder::set_SubFinalizer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a7c4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "set_SubFinalizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IBindingFinalizer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::Zenject::DiContainer*)>(&::Zenject::SubContainerBinder::ByInstance)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4a7c4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstanceGetter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByInstanceGetter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4a7c660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstanceGetter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByInstaller
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Type*)>(&::Zenject::SubContainerBinder::ByInstaller)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x4a7c7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByMethod)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4a7c998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewGameObjectMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewGameObjectMethod)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4a7cb14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewGameObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewPrefabMethod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x4a7ccdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewGameObjectInstaller
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::System::Type*)>(&::Zenject::SubContainerBinder::ByNewGameObjectInstaller)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x4a7cecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewGameObjectInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabInstaller
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*, ::System::Type*)>(&::Zenject::SubContainerBinder::ByNewPrefabInstaller)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x4a7d0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResourceMethod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerBinder::ByNewPrefabResourceMethod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x4a7d2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResourceMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResourceInstaller
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW, ::System::Type*)>(&::Zenject::SubContainerBinder::ByNewPrefabResourceInstaller)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x4a7d494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResourceInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*)>(&::Zenject::SubContainerBinder::ByNewPrefab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a7d698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewContextPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::UnityEngine::Object*)>(&::Zenject::SubContainerBinder::ByNewContextPrefab)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x4a7d69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewContextPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewPrefabResource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW)>(&::Zenject::SubContainerBinder::ByNewPrefabResource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a7d828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerBinder.ByNewContextPrefabResource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::SubContainerBinder::*)(::StringW)>(&::Zenject::SubContainerBinder::ByNewContextPrefabResource)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x4a7d82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewContextPrefabResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Zenject::BindInfo*& Zenject::SubContainerBinder::__cordl_internal_get__bindInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& Zenject::SubContainerBinder::__cordl_internal_get__bindInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindInfo;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__bindInfo(::Zenject::BindInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::BindStatement*& Zenject::SubContainerBinder::__cordl_internal_get__bindStatement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindStatement;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> const& Zenject::SubContainerBinder::__cordl_internal_get__bindStatement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindStatement;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__bindStatement(::Zenject::BindStatement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindStatement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Zenject::SubContainerBinder::__cordl_internal_get__subIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::SubContainerBinder::__cordl_internal_get__subIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subIdentifier;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__subIdentifier(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::SubContainerBinder::__cordl_internal_get__resolveAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerBinder::__cordl_internal_get__resolveAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolveAll;
}
constexpr void Zenject::SubContainerBinder::__cordl_internal_set__resolveAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolveAll = value;
}
inline ::Zenject::SubContainerBinder* Zenject::SubContainerBinder::New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement, ::System::Object*  subIdentifier, bool  resolveAll)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerBinder*>(bindInfo, bindStatement, subIdentifier, resolveAll));
}
inline void Zenject::SubContainerBinder::_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement, ::System::Object*  subIdentifier, bool  resolveAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, bindStatement, subIdentifier, resolveAll);
}
inline void Zenject::SubContainerBinder::set_SubFinalizer(::Zenject::IBindingFinalizer*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "set_SubFinalizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IBindingFinalizer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstance(::Zenject::DiContainer*  subContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, subContainer);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstanceGetter(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  subContainerGetter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstanceGetter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, subContainerGetter);
}
template<typename TInstaller>
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstaller()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                    "ByInstaller",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByInstaller(::System::Type*  installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerType);
}
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByMethod(::System::Action_1<::Zenject::DiContainer*>*  installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>*  installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewGameObjectMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerMethod);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabMethod(::UnityEngine::Object*  prefab, ::System::Action_1<::Zenject::DiContainer*>*  installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab, installerMethod);
}
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectInstaller()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                    "ByNewGameObjectInstaller",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewGameObjectInstaller(::System::Type*  installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewGameObjectInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, installerType);
}
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabInstaller(::UnityEngine::Object*  prefab)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                    "ByNewPrefabInstaller",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabInstaller(::UnityEngine::Object*  prefab, ::System::Type*  installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab, installerType);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceMethod(::StringW  resourcePath, ::System::Action_1<::Zenject::DiContainer*>*  installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResourceMethod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath, installerMethod);
}
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW  resourcePath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                    "ByNewPrefabResourceInstaller",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW  resourcePath, ::System::Type*  installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResourceInstaller",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath, installerType);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefab(::UnityEngine::Object*  prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewContextPrefab(::UnityEngine::Object*  prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewContextPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewPrefabResource(::StringW  resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewPrefabResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::SubContainerBinder::ByNewContextPrefabResource(::StringW  resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerBinder*>::get(),
                        "ByNewContextPrefabResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, resourcePath);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerBinder::SubContainerBinder()   {
}
