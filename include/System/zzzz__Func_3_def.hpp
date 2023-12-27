#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_3)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_3);
// Type: System::Func`3
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T1, typename T2, typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2333))
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Func_3<T1, T2, TResult>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TResult Invoke(T1 arg1, T2 arg2);

  // Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Func_3(Func_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Func_3(Func_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Func_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_3, "System", "Func`3");
