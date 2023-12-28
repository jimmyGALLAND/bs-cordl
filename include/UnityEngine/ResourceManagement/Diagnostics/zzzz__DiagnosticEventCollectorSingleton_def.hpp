#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticEventCollectorSingleton)
namespace UnityEngine::ResourceManagement::Diagnostics {
class __DiagnosticEventCollectorSingleton____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class __DiagnosticEventCollectorSingleton____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14025))
// CS Name: ::DiagnosticEventCollectorSingleton::<>c*
class CORDL_TYPE __DiagnosticEventCollectorSingleton____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* __9__8_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __9__11_0;

  static inline void setStaticF___9(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* value);

  static inline ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* getStaticF___9__8_0();

  static inline void setStaticF___9__11_0(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  static inline ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* getStaticF___9__11_0();

  static inline ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* New_ctor();

  /// @brief Method .ctor addr 0x2bdc540 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <RegisterEventHandler>b__8_0 addr 0x2bdc548 size 0x8 virtual false final false
  inline int32_t _RegisterEventHandler_b__8_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent evt);

  /// @brief Method <Awake>b__11_0 addr 0x2bdc550 size 0x5c virtual false final false
  inline void _Awake_b__11_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  // Ctor Parameters [CppParam { name: "", ty: "__DiagnosticEventCollectorSingleton____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiagnosticEventCollectorSingleton____c(__DiagnosticEventCollectorSingleton____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiagnosticEventCollectorSingleton____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiagnosticEventCollectorSingleton____c(__DiagnosticEventCollectorSingleton____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiagnosticEventCollectorSingleton____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollectorSingleton
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13966)), TypeDefinitionIndex(TypeDefinitionIndex(2406)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13966), inst:
// 1061 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14026)) CS Name: ::UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollectorSingleton*
class CORDL_TYPE DiagnosticEventCollectorSingleton
    : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*> {
public:
  // Declarations
  using __c = ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c;

  /// @brief Field m_CreatedEvents, offset 0x18, size 0x8
  __declspec(property(get = __get_m_CreatedEvents,
                      put = __set_m_CreatedEvents))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_CreatedEvents;

  /// @brief Field m_UnhandledEvents, offset 0x20, size 0x8
  __declspec(property(get = __get_m_UnhandledEvents,
                      put = __set_m_UnhandledEvents))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_UnhandledEvents;

  /// @brief Field s_EventHandlers, offset 0x28, size 0x8
  __declspec(property(get = __get_s_EventHandlers, put = __set_s_EventHandlers))::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* s_EventHandlers;

  /// @brief Field m_lastTickSent, offset 0x30, size 0x4
  __declspec(property(get = __get_m_lastTickSent, put = __set_m_lastTickSent)) float_t m_lastTickSent;

  /// @brief Field m_lastFrame, offset 0x34, size 0x4
  __declspec(property(get = __get_m_lastFrame, put = __set_m_lastFrame)) int32_t m_lastFrame;

  /// @brief Field fpsAvg, offset 0x38, size 0x4
  __declspec(property(get = __get_fpsAvg, put = __set_fpsAvg)) float_t fpsAvg;

  /// @brief Field s_editorConnectionGuid, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_editorConnectionGuid, put = setStaticF_s_editorConnectionGuid))::System::Guid s_editorConnectionGuid;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __get_m_CreatedEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> const&
  __get_m_CreatedEvents() const;

  constexpr void __set_m_CreatedEvents(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __get_m_UnhandledEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> const& __get_m_UnhandledEvents() const;

  constexpr void __set_m_UnhandledEvents(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __get_s_EventHandlers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> const& __get_s_EventHandlers() const;

  constexpr void __set_s_EventHandlers(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  constexpr float_t& __get_m_lastTickSent();

  constexpr float_t const& __get_m_lastTickSent() const;

  constexpr void __set_m_lastTickSent(float_t value);

  constexpr int32_t& __get_m_lastFrame();

  constexpr int32_t const& __get_m_lastFrame() const;

  constexpr void __set_m_lastFrame(int32_t value);

  constexpr float_t& __get_fpsAvg();

  constexpr float_t const& __get_fpsAvg() const;

  constexpr void __set_fpsAvg(float_t value);

  static inline void setStaticF_s_editorConnectionGuid(::System::Guid value);

  static inline ::System::Guid getStaticF_s_editorConnectionGuid();

  /// @brief Method get_PlayerConnectionGuid addr 0x2bdb77c size 0xfc virtual false final false
  static inline ::System::Guid get_PlayerConnectionGuid();

  /// @brief Method GetGameObjectName addr 0x2bdb878 size 0x40 virtual true final false
  inline ::StringW GetGameObjectName();

  /// @brief Method RegisterEventHandler addr 0x2bdb8b8 size 0xbc virtual false final false
  static inline bool RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _cordl_register, bool create);

  /// @brief Method RegisterEventHandler addr 0x2bdb974 size 0x4dc virtual false final false
  inline void RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method UnregisterEventHandler addr 0x2bdbe50 size 0xa8 virtual false final false
  inline void UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method PostEvent addr 0x2bdbef8 size 0x224 virtual false final false
  inline void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  /// @brief Method Awake addr 0x2bdc11c size 0xe4 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x2bdc200 size 0x1d8 virtual false final false
  inline void Update();

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton* New_ctor();

  /// @brief Method .ctor addr 0x2bdc3d8 size 0x104 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEventCollectorSingleton();

public:
  /// @brief Field m_CreatedEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___m_CreatedEvents;

  /// @brief Field m_UnhandledEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___m_UnhandledEvents;

  /// @brief Field s_EventHandlers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___s_EventHandlers;

  /// @brief Field m_lastTickSent, offset: 0x30, size: 0x4, def value: None
  float_t ___m_lastTickSent;

  /// @brief Field m_lastFrame, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_lastFrame;

  /// @brief Field fpsAvg, offset: 0x38, size: 0x4, def value: None
  float_t ___fpsAvg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c*, "UnityEngine.ResourceManagement.Diagnostics",
                       "DiagnosticEventCollectorSingleton/<>c");
