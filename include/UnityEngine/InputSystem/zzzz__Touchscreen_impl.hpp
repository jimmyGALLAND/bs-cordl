#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Touchscreen.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ICustomDeviceReset_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_primaryTouch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::get_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4536b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_primaryTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_primaryTouch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(&::UnityEngine::InputSystem::Touchscreen::set_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4536b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_primaryTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::get_touches)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4536b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_touches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>)>(&::UnityEngine::InputSystem::Touchscreen::set_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4536b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_touches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touchControlArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::get_touchControlArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4536b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_touchControlArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touchControlArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>)>(&::UnityEngine::InputSystem::Touchscreen::set_touchControlArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4536b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_touchControlArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Touchscreen* (*)()>(&::UnityEngine::InputSystem::Touchscreen::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4536bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::Touchscreen::set_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4536c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MakeCurrent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::MakeCurrent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4536c90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnRemoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnRemoved)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4536ce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.FinishSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::FinishSetup)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x4536d68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnNextUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnNextUpdate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x453712c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "OnNextUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnStateEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::OnStateEvent)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x4537448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "OnStateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4537b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4537b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ByRef<uint32_t>)>(&::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x4537b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x4537e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MergeForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::MergeForward)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x45381f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "MergeForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4538310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.TriggerTap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Controls::TouchControl*, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::TriggerTap)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4537aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "TriggerTap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x453831c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr  UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr  UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr ::UnityEngine::InputSystem::LowLevel::IEventMerger* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__IEventMerger() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
constexpr  UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
constexpr ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__ICustomDeviceReset() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__primaryTouch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouch_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::TouchControl*> const& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__primaryTouch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouch_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Touchscreen::__cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::TouchControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primaryTouch_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__touches_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touches_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> const& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__touches_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touches_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Touchscreen::__cordl_internal_set__touches_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touches_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Touchscreen*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<::UnityEngine::InputSystem::Touchscreen*>(value));
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::getStaticF__current_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_TapTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapTime()  {
return ::cordl_internals::getStaticField<float_t, "s_TapTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapDelayTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_TapDelayTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapDelayTime()  {
return ::cordl_internals::getStaticField<float_t, "s_TapDelayTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapRadiusSquared(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_TapRadiusSquared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapRadiusSquared()  {
return ::cordl_internals::getStaticField<float_t, "s_TapRadiusSquared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline ::UnityEngine::InputSystem::Controls::TouchControl* UnityEngine::InputSystem::Touchscreen::get_primaryTouch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_primaryTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_primaryTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> UnityEngine::InputSystem::Touchscreen::get_touches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_touches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_touches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> UnityEngine::InputSystem::Touchscreen::get_touchControlArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_touchControlArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_touchControlArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*,::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::get_current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "get_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_current(::UnityEngine::InputSystem::Touchscreen*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "set_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Touchscreen::MakeCurrent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnRemoved()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnNextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "OnNextUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "OnStateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ByRef<uint32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, control, eventPtr, offset);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Touchscreen::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr  currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  nextEventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "MergeForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentEventPtr, nextEventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr  currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  nextEventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl*  control, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>  state, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        "TriggerTap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, eventPtr);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Touchscreen*>());
}
inline void UnityEngine::InputSystem::Touchscreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Touchscreen::Touchscreen()   {
}
