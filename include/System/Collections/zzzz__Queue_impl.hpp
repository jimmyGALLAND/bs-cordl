#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::System::Collections::__Queue__QueueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Queue__QueueEnumerator::*)(::System::Collections::Queue*)>(
    &::System::Collections::__Queue__QueueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x257f724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Queue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Queue__QueueEnumerator.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Queue__QueueEnumerator::*)()>(
    &::System::Collections::__Queue__QueueEnumerator::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257f914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), "Clone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Queue__QueueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__Queue__QueueEnumerator::*)()>(
    &::System::Collections::__Queue__QueueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x257f91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Queue__QueueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__Queue__QueueEnumerator::*)()>(
    &::System::Collections::__Queue__QueueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x257f9e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__Queue__QueueEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__Queue__QueueEnumerator::*)()>(
    &::System::Collections::__Queue__QueueEnumerator::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x257fa78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), 10));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::__Queue__QueueEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::__Queue__QueueEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Queue*& System::Collections::__Queue__QueueEnumerator::__get__q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____q;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& System::Collections::__Queue__QueueEnumerator::__get__q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____q;
}
constexpr void System::Collections::__Queue__QueueEnumerator::__set__q(::System::Collections::Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::__Queue__QueueEnumerator::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr int32_t const& System::Collections::__Queue__QueueEnumerator::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr void System::Collections::__Queue__QueueEnumerator::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____index = value;
}
constexpr int32_t& System::Collections::__Queue__QueueEnumerator::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::__Queue__QueueEnumerator::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr void System::Collections::__Queue__QueueEnumerator::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::__Queue__QueueEnumerator::__get__currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentElement;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__Queue__QueueEnumerator::__get__currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentElement;
}
constexpr void System::Collections::__Queue__QueueEnumerator::__set__currentElement(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::__Queue__QueueEnumerator* System::Collections::__Queue__QueueEnumerator::New_ctor(::System::Collections::Queue* q) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__Queue__QueueEnumerator*>(q));
}
inline void System::Collections::__Queue__QueueEnumerator::_ctor(::System::Collections::Queue* q) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Queue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, q);
}
inline ::System::Object* System::Collections::__Queue__QueueEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::__Queue__QueueEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__Queue__QueueEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::__Queue__QueueEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__Queue__QueueEnumerator*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__Queue__QueueEnumerator::__Queue__QueueEnumerator() {}
// Ctor Parameters []
constexpr ::System::Collections::__Queue__QueueDebugView::__Queue__QueueDebugView() {}
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)()>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x257ed38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ef04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(int32_t, float_t)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x257ed44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(::System::Collections::ICollection*)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x257ef0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257f178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Clone)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x257f180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257f264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_SyncRoot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x257f26c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(::System::Array*, int32_t)>(&::System::Collections::Queue::CopyTo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x257f2e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Enqueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(::System::Object*)>(&::System::Collections::Queue::Enqueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x257f4dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Queue::*)()>(
    &::System::Collections::Queue::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x257f6c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Dequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Dequeue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x257f774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Peek)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x257f840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.GetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::GetElement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x257f8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "GetElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::SetCapacity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x257f5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "SetCapacity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Queue::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Queue::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Queue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Collections::Queue::__get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____array;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Collections::Queue::__get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____array;
}
constexpr void System::Collections::Queue::__set__array(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::Queue::__get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____head;
}
constexpr int32_t const& System::Collections::Queue::__get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____head;
}
constexpr void System::Collections::Queue::__set__head(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____head = value;
}
constexpr int32_t& System::Collections::Queue::__get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tail;
}
constexpr int32_t const& System::Collections::Queue::__get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tail;
}
constexpr void System::Collections::Queue::__set__tail(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____tail = value;
}
constexpr int32_t& System::Collections::Queue::__get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____size;
}
constexpr int32_t const& System::Collections::Queue::__get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____size;
}
constexpr void System::Collections::Queue::__set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____size = value;
}
constexpr int32_t& System::Collections::Queue::__get__growFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____growFactor;
}
constexpr int32_t const& System::Collections::Queue::__get__growFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____growFactor;
}
constexpr void System::Collections::Queue::__set__growFactor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____growFactor = value;
}
constexpr int32_t& System::Collections::Queue::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Queue::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr void System::Collections::Queue::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::Queue::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Queue::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Queue::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Queue*>());
}
inline void System::Collections::Queue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Queue*>(capacity));
}
inline void System::Collections::Queue::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(int32_t capacity, float_t growFactor) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Queue*>(capacity, growFactor));
}
inline void System::Collections::Queue::_ctor(int32_t capacity, float_t growFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, growFactor);
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(::System::Collections::ICollection* col) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Queue*>(col));
}
inline void System::Collections::Queue::_ctor(::System::Collections::ICollection* col) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, col);
}
inline int32_t System::Collections::Queue::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::Queue::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "get_IsSynchronized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "get_SyncRoot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::Queue::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline void System::Collections::Queue::Enqueue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "Enqueue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::Collections::IEnumerator* System::Collections::Queue::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "Dequeue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "Peek",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::GetElement(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "GetElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, i);
}
inline void System::Collections::Queue::SetCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Queue*>::get(), "SetCapacity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
// Ctor Parameters []
constexpr ::System::Collections::Queue::Queue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
