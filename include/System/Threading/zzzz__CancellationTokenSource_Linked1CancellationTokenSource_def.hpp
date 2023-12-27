#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_Linked1CancellationTokenSource)
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Threading {
class __CancellationTokenSource__Linked1CancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource);
// Type: ::Linked1CancellationTokenSource
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2683)), TypeDefinitionIndex(TypeDefinitionIndex(2688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2684))
// CS Name: ::CancellationTokenSource::Linked1CancellationTokenSource*
class CORDL_TYPE __CancellationTokenSource__Linked1CancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
  // Declarations
  /// @brief Field _reg1, offset 0x40, size 0x18
  __declspec(property(get = __get__reg1, put = __set__reg1))::System::Threading::CancellationTokenRegistration _reg1;

  constexpr ::System::Threading::CancellationTokenRegistration& __get__reg1();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get__reg1() const;

  constexpr void __set__reg1(::System::Threading::CancellationTokenRegistration value);

  static inline ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource* New_ctor(::System::Threading::CancellationToken token1);

  /// @brief Method .ctor addr 0x2613880 size 0xd8 virtual false final false
  inline void _ctor(::System::Threading::CancellationToken token1);

  /// @brief Method Dispose addr 0x2613c94 size 0x34 virtual true final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__Linked1CancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CancellationTokenSource__Linked1CancellationTokenSource(__CancellationTokenSource__Linked1CancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__Linked1CancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CancellationTokenSource__Linked1CancellationTokenSource(__CancellationTokenSource__Linked1CancellationTokenSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CancellationTokenSource__Linked1CancellationTokenSource();

public:
  /// @brief Field _reg1, offset: 0x40, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____reg1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource, 0x58>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*, "System.Threading", "CancellationTokenSource/Linked1CancellationTokenSource");
