#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteStateBuffer_3.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template<typename TStateTable,typename TType,typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*>& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStates;
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*> const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStates;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedStates(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*>& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltas;
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*> const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltas;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedDeltas(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedDeltas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStateIndex;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStateIndex;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedStateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedStateIndex = value;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStateCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStateCount;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedStateCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedStateCount;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedStateCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedStateCount = value;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltaIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltaIndex;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltaIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltaIndex;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedDeltaIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedDeltaIndex = value;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltaCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltaCount;
}
template<typename TStateTable,typename TType,typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_get__receivedDeltaCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedDeltaCount;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::__cordl_internal_set__receivedDeltaCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedDeltaCount = value;
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::Clear()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::PushState(::GlobalNamespace::SyncStateId  id, TStateTable  state, int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>::get(),
                        "PushState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStateTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, state, time);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::PushDelta(::GlobalNamespace::SyncStateId  baseId, TStateTable  delta, int64_t  timeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>::get(),
                        "PushDelta",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStateTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseId, delta, timeOffset);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::ProcessQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>::get(),
                        "ProcessQueue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template<typename TStateTable,typename TType,typename TState>
inline ::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>* GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, interpolator, smoother);
}
// Ctor Parameters []
template<typename TStateTable,typename TType,typename TState>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable,TType,TState>::RemoteStateBuffer_3()   {
}
