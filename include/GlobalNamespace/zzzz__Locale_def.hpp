#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Locale)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class Locale;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Locale);
// Type: ::Locale
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13736))
// CS Name: ::Locale*
class CORDL_TYPE Locale : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetText addr 0x23ecb2c size 0x4 virtual false final false
  static inline ::StringW GetText(::StringW msg);

  /// @brief Method GetText addr 0x23ecb30 size 0x8 virtual false final false
  static inline ::StringW GetText(::StringW fmt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Locale(Locale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Locale(Locale const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Locale();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Locale, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Locale);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Locale*, "", "Locale");
