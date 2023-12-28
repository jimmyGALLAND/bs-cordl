#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tuple)
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Tuple_4;
}
// Forward declare root types
namespace System {
class Tuple;
}
// Write type traits
MARK_REF_PTR_T(::System::Tuple);
// Type: System::Tuple
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2489))
// CS Name: ::System::Tuple*
class CORDL_TYPE Tuple : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T1, typename T2> static inline ::System::Tuple_2<T1, T2>* Create(T1 item1, T2 item2);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T1, typename T2, typename T3> static inline ::System::Tuple_3<T1, T2, T3>* Create(T1 item1, T2 item2, T3 item3);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T1, typename T2, typename T3, typename T4> static inline ::System::Tuple_4<T1, T2, T3, T4>* Create(T1 item1, T2 item2, T3 item3, T4 item4);

  /// @brief Method CombineHashCodes addr 0x25c738c size 0xc virtual false final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2);

  /// @brief Method CombineHashCodes addr 0x25c7398 size 0x14 virtual false final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3);

  /// @brief Method CombineHashCodes addr 0x25c73ac size 0x1c virtual false final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4);

  // Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tuple(Tuple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tuple(Tuple const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tuple();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Tuple, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Tuple);
DEFINE_IL2CPP_ARG_TYPE(::System::Tuple*, "System", "Tuple");
