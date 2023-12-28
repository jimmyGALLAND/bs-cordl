#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InvokableCallList)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCallList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::InvokableCallList);
// Type: UnityEngine.Events::InvokableCallList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10460))
// CS Name: ::UnityEngine.Events::InvokableCallList*
class CORDL_TYPE InvokableCallList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_PersistentCalls, offset 0x10, size 0x8
  __declspec(property(get = __get_m_PersistentCalls, put = __set_m_PersistentCalls))::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;

  /// @brief Field m_RuntimeCalls, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RuntimeCalls, put = __set_m_RuntimeCalls))::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;

  /// @brief Field m_ExecutingCalls, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ExecutingCalls, put = __set_m_ExecutingCalls))::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;

  /// @brief Field m_NeedsUpdate, offset 0x28, size 0x1
  __declspec(property(get = __get_m_NeedsUpdate, put = __set_m_NeedsUpdate)) bool m_NeedsUpdate;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __get_m_PersistentCalls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*> const& __get_m_PersistentCalls() const;

  constexpr void __set_m_PersistentCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __get_m_RuntimeCalls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*> const& __get_m_RuntimeCalls() const;

  constexpr void __set_m_RuntimeCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __get_m_ExecutingCalls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*> const& __get_m_ExecutingCalls() const;

  constexpr void __set_m_ExecutingCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  constexpr bool& __get_m_NeedsUpdate();

  constexpr bool const& __get_m_NeedsUpdate() const;

  constexpr void __set_m_NeedsUpdate(bool value);

  /// @brief Method AddPersistentInvokableCall addr 0x2cf95b4 size 0xac virtual false final false
  inline void AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method AddListener addr 0x2cf9660 size 0xac virtual false final false
  inline void AddListener(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method RemoveListener addr 0x2cf970c size 0x274 virtual false final false
  inline void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method Clear addr 0x2cf9980 size 0xb8 virtual false final false
  inline void Clear();

  /// @brief Method ClearPersistent addr 0x2cf9a38 size 0xb8 virtual false final false
  inline void ClearPersistent();

  /// @brief Method PrepareInvoke addr 0x2cf9af0 size 0xb4 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();

  static inline ::UnityEngine::Events::InvokableCallList* New_ctor();

  /// @brief Method .ctor addr 0x2cf9ba4 size 0xc4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCallList(InvokableCallList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCallList(InvokableCallList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCallList();

public:
  /// @brief Field m_PersistentCalls, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_PersistentCalls;

  /// @brief Field m_RuntimeCalls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_RuntimeCalls;

  /// @brief Field m_ExecutingCalls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_ExecutingCalls;

  /// @brief Field m_NeedsUpdate, offset: 0x28, size: 0x1, def value: None
  bool ___m_NeedsUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::InvokableCallList, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::InvokableCallList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
