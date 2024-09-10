#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalMultiplayerSyncState_3.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template<typename TStateTable,typename TType,typename TState>
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_set__player(::GlobalNamespace::IConnectedPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable,TType,TState>*& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_get__stateBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateBuffer;
}
template<typename TStateTable,typename TType,typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalStateBuffer_3<TStateTable,TType,TState>*> const& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_get__stateBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateBuffer;
}
template<typename TStateTable,typename TType,typename TState>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::__cordl_internal_set__stateBuffer(::GlobalNamespace::LocalStateBuffer_3<TStateTable,TType,TState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TStateTable,typename TType,typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable,TType,TState>* GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::get_stateBuffer()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable,TType,TState>*, false>(this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState>
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::get_player()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template<typename TStateTable,typename TType,typename TState>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>* GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::New_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*  smoother)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::_ctor(::GlobalNamespace::IConnectedPlayer*  player, int64_t  fullStateUpdateFrequency, int64_t  deltaUpdateFrequency, int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*  smoother)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable,TType,TState>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template<typename TStateTable,typename TType,typename TState>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::TryGetSerializedState(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                    "TryGetSerializedState",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pool, serializable);
}
template<typename TStateTable,typename TType,typename TState>
template<typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::TryGetSerializedStateDelta(::GlobalNamespace::IPacketPool_1<T>*  pool, ByRef<T>  serializable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                    "TryGetSerializedStateDelta",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPacketPool_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pool, serializable);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        "SetDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::SetCurrentTime(int64_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        "SetCurrentTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::SetState(TType  type, TState  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, state);
}
template<typename TStateTable,typename TType,typename TState>
inline TState GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        "GetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
template<typename TStateTable,typename TType,typename TState>
inline TState GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::get_Item(TType  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, t);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::set_Item(TType  t, TState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>*>::get(),
                        "set_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, value);
}
// Ctor Parameters []
template<typename TStateTable,typename TType,typename TState>
constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState>::LocalMultiplayerSyncState_3()   {
}
