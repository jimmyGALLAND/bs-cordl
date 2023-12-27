#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pid)
// Forward declare root types
namespace Oculus::Platform::Models {
class Pid;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Pid);
// Type: Oculus.Platform.Models::Pid
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13469))
// CS Name: ::Oculus.Platform.Models::Pid*
class CORDL_TYPE Pid : public ::System::Object {
public:
  // Declarations
  /// @brief Field Id, offset 0x10, size 0x8
  __declspec(property(get = __get_Id, put = __set_Id))::StringW Id;

  constexpr ::StringW& __get_Id();

  constexpr ::StringW const& __get_Id() const;

  constexpr void __set_Id(::StringW value);

  static inline ::Oculus::Platform::Models::Pid* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2708080 size 0x78 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pid(Pid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pid(Pid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pid();

public:
  /// @brief Field Id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Pid, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Pid);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Pid*, "Oculus.Platform.Models", "Pid");
