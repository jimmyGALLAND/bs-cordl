#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEvent_4)
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0, typename T1, typename T2, typename T3> class UnityEvent_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityEvent_4);
// Type: UnityEngine.Events::UnityEvent`4
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// cpp template
template <typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10469))
// CS Name: ::UnityEngine.Events::UnityEvent`4<T0,T1,T2,T3>*
class CORDL_TYPE UnityEvent_4 : public ::UnityEngine::Events::UnityEventBase {
public:
  // Declarations
  /// @brief Field m_InvokeArray, offset 0x28, size 0x8
  __declspec(property(get = __get_m_InvokeArray, put = __set_m_InvokeArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_InvokeArray;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_m_InvokeArray();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

  constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline ::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEvent_4(UnityEvent_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEvent_4(UnityEvent_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEvent_4();

public:
  /// @brief Field m_InvokeArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_InvokeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityEvent_4, "UnityEngine.Events", "UnityEvent`4");
