#pragma once
// IWYU pragma private; include "System/ComponentModel/EventDescriptorCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)(::System::Array*, int32_t)>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x43c0fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43c1540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c1564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x43c1570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Array*& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____array;
}
constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____array;
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_set__array(::System::Array*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____total;
}
constexpr int32_t const& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____total;
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_set__total(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____total = value;
}
constexpr int32_t& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr int32_t const& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__cordl_internal_set__current(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
inline ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::New_ctor(::System::Array*  array, int32_t  count)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>(array, count));
}
inline void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::_ctor(::System::Array*  array, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, count);
}
inline bool System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__EventDescriptorCollection__ArraySubsetEnumerator()   {
}
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>)>(&::System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x43c04c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>, bool)>(&::System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43c0588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c05ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.set_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c05b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "set_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43c05bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(::StringW)>(&::System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43c06ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Add)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x43c0700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x43c08c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Contains
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x43c0914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Array*, int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x43c098c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.EnsureEventsOwned
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x43c0640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "EnsureEventsOwned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.EnsureSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::EnsureSize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x43c07c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "EnsureSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Find
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(::StringW, bool)>(&::System::ComponentModel::EventDescriptorCollection::Find)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43c0c30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.IndexOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::IndexOf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x43c092c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Insert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Insert)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x43c0d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Remove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Remove)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x43c0e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.RemoveAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::RemoveAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x43c0e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x43c0f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x43c09c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "InternalSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Collections::IComparer*)>(&::System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x43c1008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "InternalSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_IsSynchronized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_SyncRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c1090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43c1098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43c109c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x43c10ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.set_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43c1214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Contains
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x43c1298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43c1328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_IndexOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43c132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x43c13b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43c1444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43c14c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c14cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c14d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_IsFixedSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::ComponentModel::EventDescriptorCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::ComponentModel::EventDescriptorCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::ComponentModel::EventDescriptorCollection::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*> const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__events(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__namedSort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____namedSort;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__namedSort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____namedSort;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__namedSort(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namedSort)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IComparer*& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__comparer(::System::Collections::IComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__eventsOwned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventsOwned;
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__eventsOwned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventsOwned;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__eventsOwned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventsOwned = value;
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__needSort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needSort;
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__needSort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needSort;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__needSort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needSort = value;
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__readOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readOnly = value;
}
constexpr int32_t& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr int32_t const& System::ComponentModel::EventDescriptorCollection::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void System::ComponentModel::EventDescriptorCollection::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
inline void System::ComponentModel::EventDescriptorCollection::setStaticF_Empty(::System::ComponentModel::EventDescriptorCollection*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::EventDescriptorCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get>(std::forward<::System::ComponentModel::EventDescriptorCollection*>(value));
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::EventDescriptorCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get>();
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::EventDescriptorCollection*>(events));
}
inline void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, events);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::EventDescriptorCollection*>(events, readOnly));
}
inline void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, events, readOnly);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "set_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method, index);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::get_Item(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method, name);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::Add(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::ComponentModel::EventDescriptorCollection::Contains(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline void System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "EnsureEventsOwned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::EnsureSize(int32_t  sizeNeeded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "EnsureSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sizeNeeded);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::Find(::StringW  name, bool  ignoreCase)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method, name, ignoreCase);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::IndexOf(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Insert(int32_t  index, ::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Remove(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::EventDescriptorCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::InternalSort(::ArrayW<::StringW,::Array<::StringW>*>  names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "InternalSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, names);
}
inline void System::ComponentModel::EventDescriptorCollection::InternalSort(::System::Collections::IComparer*  sorter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "InternalSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sorter);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_IsSynchronized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_SyncRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.ICollection.get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.set_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                        "System.Collections.IList.get_IsFixedSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventDescriptorCollection::EventDescriptorCollection()   {
}
