#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ObjectPool_1)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace TMPro {
template <typename T> class TMP_ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::TMP_ObjectPool_1);
// Type: TMPro::TMP_ObjectPool`1
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12406))
// CS Name: ::TMPro::TMP_ObjectPool`1<T>*
class CORDL_TYPE TMP_ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Stack, put = __set_m_Stack))::System::Collections::Generic::Stack_1<T>* m_Stack;

  /// @brief Field m_ActionOnGet, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ActionOnGet, put = __set_m_ActionOnGet))::UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ActionOnRelease, put = __set_m_ActionOnRelease))::UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease;

  /// @brief Field <countAll>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__countAll_k__BackingField, put = __set__countAll_k__BackingField)) int32_t _countAll_k__BackingField;

  __declspec(property(get = get_countAll, put = set_countAll)) int32_t countAll;

  __declspec(property(get = get_countActive)) int32_t countActive;

  __declspec(property(get = get_countInactive)) int32_t countInactive;

  constexpr ::System::Collections::Generic::Stack_1<T>*& __get_m_Stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> const& __get_m_Stack() const;

  constexpr void __set_m_Stack(::System::Collections::Generic::Stack_1<T>* value);

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __get_m_ActionOnGet();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> const& __get_m_ActionOnGet() const;

  constexpr void __set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr ::UnityEngine::Events::UnityAction_1<T>*& __get_m_ActionOnRelease();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> const& __get_m_ActionOnRelease() const;

  constexpr void __set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>* value);

  constexpr int32_t& __get__countAll_k__BackingField();

  constexpr int32_t const& __get__countAll_k__BackingField() const;

  constexpr void __set__countAll_k__BackingField(int32_t value);

  /// @brief Method get_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_countAll();

  /// @brief Method set_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_countAll(int32_t value);

  /// @brief Method get_countActive addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_countActive();

  /// @brief Method get_countInactive addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_countInactive();

  static inline ::TMPro::TMP_ObjectPool_1<T>* New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease);

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Get();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Release(T element);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ObjectPool_1(TMP_ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ObjectPool_1(TMP_ObjectPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ObjectPool_1();

public:
  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<T>* ___m_Stack;

  /// @brief Field m_ActionOnGet, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnGet;

  /// @brief Field m_ActionOnRelease, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T>* ___m_ActionOnRelease;

  /// @brief Field <countAll>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____countAll_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ObjectPool_1, "TMPro", "TMP_ObjectPool`1");
