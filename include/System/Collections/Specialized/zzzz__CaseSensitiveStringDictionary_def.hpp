#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CaseSensitiveStringDictionary)
// Forward declare root types
namespace System::Collections::Specialized {
class CaseSensitiveStringDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::CaseSensitiveStringDictionary);
// Type: System.Collections.Specialized::CaseSensitiveStringDictionary
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9519))
// CS Name: ::System.Collections.Specialized::CaseSensitiveStringDictionary*
class CORDL_TYPE CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary {
public:
  // Declarations
  static inline ::System::Collections::Specialized::CaseSensitiveStringDictionary* New_ctor();

  /// @brief Method .ctor addr 0x293fd60 size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x293fd64 size 0x74 virtual true final false
  inline void Add(::StringW key, ::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseSensitiveStringDictionary(CaseSensitiveStringDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseSensitiveStringDictionary(CaseSensitiveStringDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseSensitiveStringDictionary();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::CaseSensitiveStringDictionary, 0x18>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::CaseSensitiveStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CaseSensitiveStringDictionary*, "System.Collections.Specialized", "CaseSensitiveStringDictionary");
