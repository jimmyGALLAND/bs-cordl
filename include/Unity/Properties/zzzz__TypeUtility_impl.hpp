#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__ITypeConstructor.get_CanBeInstantiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::__TypeUtility__ITypeConstructor::*)()>(&::Unity::Properties::__TypeUtility__ITypeConstructor::get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__ITypeConstructor.Instantiate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::Properties::__TypeUtility__ITypeConstructor::*)()>(&::Unity::Properties::__TypeUtility__ITypeConstructor::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline bool Unity::Properties::__TypeUtility__ITypeConstructor::get_CanBeInstantiated()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::__TypeUtility__ITypeConstructor::Instantiate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
template<typename T>
constexpr  Unity::Properties::__TypeUtility__ITypeConstructor_1<T>::operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
template<typename T>
constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* Unity::Properties::__TypeUtility__ITypeConstructor_1<T>::i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
template<typename T>
inline T Unity::Properties::__TypeUtility__ITypeConstructor_1<T>::Instantiate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void Unity::Properties::__TypeUtility__ITypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>*  constructor)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
/// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>"
template<typename T>
constexpr  Unity::Properties::__TypeUtility__TypeConstructor_1<T>::operator ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>"
template<typename T>
constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* Unity::Properties::__TypeUtility__TypeConstructor_1<T>::i___Unity__Properties____TypeUtility__ITypeConstructor_1_T_() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
template<typename T>
constexpr  Unity::Properties::__TypeUtility__TypeConstructor_1<T>::operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
template<typename T>
constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* Unity::Properties::__TypeUtility__TypeConstructor_1<T>::i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
template<typename T>
constexpr ::System::Func_1<T>*& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_ExplicitConstructor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExplicitConstructor;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_ExplicitConstructor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExplicitConstructor;
}
template<typename T>
constexpr void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_set_m_ExplicitConstructor(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExplicitConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
constexpr ::System::Func_1<T>*& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_ImplicitConstructor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImplicitConstructor;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_ImplicitConstructor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImplicitConstructor;
}
template<typename T>
constexpr void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_set_m_ImplicitConstructor(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ImplicitConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
constexpr ::Unity::Properties::IConstructor_1<T>*& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_OverrideConstructor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideConstructor;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::Unity::Properties::IConstructor_1<T>*> const& Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_get_m_OverrideConstructor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideConstructor;
}
template<typename T>
constexpr void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__cordl_internal_set_m_OverrideConstructor(::Unity::Properties::IConstructor_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OverrideConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
inline bool Unity::Properties::__TypeUtility__TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Properties::__TypeUtility__TypeConstructor_1<T>* Unity::Properties::__TypeUtility__TypeConstructor_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>());
}
template<typename T>
inline void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::SetImplicitConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "SetImplicitConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline T Unity::Properties::__TypeUtility__TypeConstructor_1<T>::CreateValueTypeInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "CreateValueTypeInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<typename T>
inline T Unity::Properties::__TypeUtility__TypeConstructor_1<T>::CreateScriptableObjectInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "CreateScriptableObjectInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<typename T>
inline T Unity::Properties::__TypeUtility__TypeConstructor_1<T>::CreateClassInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "CreateClassInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<typename T>
inline void Unity::Properties::__TypeUtility__TypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>*  constructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "SetExplicitConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
template<typename T>
inline T Unity::Properties::__TypeUtility__TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_T__Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Unity::Properties::__TypeUtility__TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructor_1<T>*>::get(),
                        "Unity.Properties.TypeUtility.ITypeConstructor.Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Properties::__TypeUtility__TypeConstructor_1<T>::__TypeUtility__TypeConstructor_1()   {
}
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__NonConstructable.Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::__TypeUtility__NonConstructable::*)()>(&::Unity::Properties::__TypeUtility__NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487ed68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__NonConstructable.Instantiate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::Properties::__TypeUtility__NonConstructable::*)()>(&::Unity::Properties::__TypeUtility__NonConstructable::Instantiate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x487ed70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__NonConstructable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::__TypeUtility__NonConstructable::*)()>(&::Unity::Properties::__TypeUtility__NonConstructable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487e944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
constexpr  Unity::Properties::__TypeUtility__NonConstructable::operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* Unity::Properties::__TypeUtility__NonConstructable::i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept {
return static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor*>(static_cast<void*>(this));
}
inline bool Unity::Properties::__TypeUtility__NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::__TypeUtility__NonConstructable::Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Unity::Properties::__TypeUtility__NonConstructable* Unity::Properties::__TypeUtility__NonConstructable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::__TypeUtility__NonConstructable*>());
}
inline void Unity::Properties::__TypeUtility__NonConstructable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__NonConstructable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::__TypeUtility__NonConstructable::__TypeUtility__NonConstructable()   {
}
template<typename T>
inline void Unity::Properties::__TypeUtility__Cache_1<T>::setStaticF_TypeConstructor(::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*  value)  {
::cordl_internals::setStaticField<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*, "TypeConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__Cache_1<T>>::get>(std::forward<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>(value));
}
template<typename T>
inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* Unity::Properties::__TypeUtility__Cache_1<T>::getStaticF_TypeConstructor()  {
return ::cordl_internals::getStaticField<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*, "TypeConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__Cache_1<T>>::get>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Properties::__TypeUtility__Cache_1<T>::__TypeUtility__Cache_1()   {
}
//  Writing Method size for method: ::Unity::Properties::__TypeUtility__TypeConstructorVisitor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::__TypeUtility__TypeConstructorVisitor::*)()>(&::Unity::Properties::__TypeUtility__TypeConstructorVisitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487e93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructorVisitor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
constexpr  Unity::Properties::__TypeUtility__TypeConstructorVisitor::operator ::Unity::Properties::ITypeVisitor*() noexcept {
return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ITypeVisitor"
constexpr ::Unity::Properties::ITypeVisitor* Unity::Properties::__TypeUtility__TypeConstructorVisitor::i___Unity__Properties__ITypeVisitor() noexcept {
return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor*& Unity::Properties::__TypeUtility__TypeConstructorVisitor::__cordl_internal_get_TypeConstructor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeConstructor;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Properties::__TypeUtility__ITypeConstructor*> const& Unity::Properties::__TypeUtility__TypeConstructorVisitor::__cordl_internal_get_TypeConstructor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeConstructor;
}
constexpr void Unity::Properties::__TypeUtility__TypeConstructorVisitor::__cordl_internal_set_TypeConstructor(::Unity::Properties::__TypeUtility__ITypeConstructor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TContainer>
inline void Unity::Properties::__TypeUtility__TypeConstructorVisitor::Visit()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructorVisitor*>::get(),
                    "Visit",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::__TypeUtility__TypeConstructorVisitor* Unity::Properties::__TypeUtility__TypeConstructorVisitor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::__TypeUtility__TypeConstructorVisitor*>());
}
inline void Unity::Properties::__TypeUtility__TypeConstructorVisitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility__TypeConstructorVisitor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::__TypeUtility__TypeConstructorVisitor::__TypeUtility__TypeConstructorVisitor()   {
}
//  Writing Method size for method: ::Unity::Properties::__TypeUtility____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::__TypeUtility____c::*)()>(&::Unity::Properties::__TypeUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487ee18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility____c.__cctor_b__11_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::Unity::Properties::__TypeUtility____c::*)()>(&::Unity::Properties::__TypeUtility____c::__cctor_b__11_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x487ee20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility____c.__cctor_b__11_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::__TypeUtility____c::*)(::System::Text::StringBuilder*)>(&::Unity::Properties::__TypeUtility____c::__cctor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x487ee74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::__TypeUtility____c.__cctor_b__11_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Properties::__TypeUtility____c::*)()>(&::Unity::Properties::__TypeUtility____c::__cctor_b__11_2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x487ee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Properties::__TypeUtility____c::setStaticF___9(::Unity::Properties::__TypeUtility____c*  value)  {
::cordl_internals::setStaticField<::Unity::Properties::__TypeUtility____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get>(std::forward<::Unity::Properties::__TypeUtility____c*>(value));
}
inline ::Unity::Properties::__TypeUtility____c* Unity::Properties::__TypeUtility____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Properties::__TypeUtility____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get>();
}
inline ::Unity::Properties::__TypeUtility____c* Unity::Properties::__TypeUtility____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::__TypeUtility____c*>());
}
inline void Unity::Properties::__TypeUtility____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* Unity::Properties::__TypeUtility____c::__cctor_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method);
}
inline void Unity::Properties::__TypeUtility____c::__cctor_b__11_1(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline ::StringW Unity::Properties::__TypeUtility____c::__cctor_b__11_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__TypeUtility____c*>::get(),
                        "<.cctor>b__11_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::__TypeUtility____c::__TypeUtility____c()   {
}
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x487d850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*, ByRef<int32_t>)>(&::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x487d968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetRootType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetRootType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x487e30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetRootType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CreateTypeConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::CreateTypeConstructor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x487e440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CreateTypeConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::__TypeUtility__ITypeConstructor* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetTypeConstructor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x487e94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CanBeInstantiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::CanBeInstantiated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x487ea04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckIsAssignableFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::System::Type*)>(&::Unity::Properties::TypeUtility::CheckIsAssignableFrom)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x487ead0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CheckIsAssignableFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckCanBeInstantiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Properties::__TypeUtility__ITypeConstructor*, ::System::Type*)>(&::Unity::Properties::TypeUtility::CheckCanBeInstantiated)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x487ec38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CheckCanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeUtility::setStaticF_s_TypeConstructors(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::__TypeUtility__ITypeConstructor*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::__TypeUtility__ITypeConstructor*>*, "s_TypeConstructors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::__TypeUtility__ITypeConstructor*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::__TypeUtility__ITypeConstructor*>* Unity::Properties::TypeUtility::getStaticF_s_TypeConstructors()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::__TypeUtility__ITypeConstructor*>*, "s_TypeConstructors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CreateTypeConstructor(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Unity::Properties::TypeUtility::getStaticF_s_CreateTypeConstructor()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CachedResolvedName(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::StringW>*, "s_CachedResolvedName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::StringW>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::StringW>* Unity::Properties::TypeUtility::getStaticF_s_CachedResolvedName()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::StringW>*, "s_CachedResolvedName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_Builders(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* Unity::Properties::TypeUtility::getStaticF_s_Builders()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_syncedPoolObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "syncedPoolObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Properties::TypeUtility::getStaticF_syncedPoolObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "syncedPoolObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type*  type, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*  args, ByRef<int32_t>  argIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type, args, argIndex);
}
inline ::System::Type* Unity::Properties::TypeUtility::GetRootType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetRootType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::Unity::Properties::__TypeUtility__ITypeConstructor* Unity::Properties::TypeUtility::CreateTypeConstructor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CreateTypeConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::__TypeUtility__ITypeConstructor*, false>(nullptr, ___internal_method, type);
}
template<typename T>
inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* Unity::Properties::TypeUtility::CreateTypeConstructor()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "CreateTypeConstructor",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*, false>(nullptr, ___internal_method);
}
inline ::Unity::Properties::__TypeUtility__ITypeConstructor* Unity::Properties::TypeUtility::GetTypeConstructor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "GetTypeConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::__TypeUtility__ITypeConstructor*, false>(nullptr, ___internal_method, type);
}
template<typename T>
inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* Unity::Properties::TypeUtility::GetTypeConstructor()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "GetTypeConstructor",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*, false>(nullptr, ___internal_method);
}
inline bool Unity::Properties::TypeUtility::CanBeInstantiated(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
template<typename T>
inline bool Unity::Properties::TypeUtility::CanBeInstantiated()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "CanBeInstantiated",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template<typename T>
inline void Unity::Properties::TypeUtility::SetExplicitInstantiationMethod(::System::Func_1<T>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "SetExplicitInstantiationMethod",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor);
}
template<typename T>
inline T Unity::Properties::TypeUtility::Instantiate()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "Instantiate",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<typename T>
inline bool Unity::Properties::TypeUtility::TryInstantiate(ByRef<T>  instance)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "TryInstantiate",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance);
}
template<typename T>
inline T Unity::Properties::TypeUtility::Instantiate(::System::Type*  derivedType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "Instantiate",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, derivedType);
}
template<typename T>
inline bool Unity::Properties::TypeUtility::TryInstantiate(::System::Type*  derivedType, ByRef<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "TryInstantiate",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, derivedType, value);
}
/// @param count: int32_t (default: static_cast<int32_t>(0x0))
template<typename TArray>
inline TArray Unity::Properties::TypeUtility::InstantiateArray(int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "InstantiateArray",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TArray, false>(nullptr, ___internal_method, count);
}
template<typename TArray>
inline bool Unity::Properties::TypeUtility::TryInstantiateArray(int32_t  count, ByRef<TArray>  instance)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "TryInstantiateArray",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TArray>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, count, instance);
}
/// @param count: int32_t (default: static_cast<int32_t>(0x0))
template<typename TArray>
inline TArray Unity::Properties::TypeUtility::InstantiateArray(::System::Type*  derivedType, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "InstantiateArray",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TArray, false>(nullptr, ___internal_method, derivedType, count);
}
inline void Unity::Properties::TypeUtility::CheckIsAssignableFrom(::System::Type*  type, ::System::Type*  derivedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CheckIsAssignableFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, derivedType);
}
template<typename T>
inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                    "CheckCanBeInstantiated",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor);
}
inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::__TypeUtility__ITypeConstructor*  constructor, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(),
                        "CheckCanBeInstantiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::__TypeUtility__ITypeConstructor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility::TypeUtility()   {
}
