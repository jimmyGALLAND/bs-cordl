#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaseInsensitiveComparer)
namespace System::Globalization {
class CompareInfo;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Collections {
class CaseInsensitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CaseInsensitiveComparer);
// Type: System.Collections::CaseInsensitiveComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3771))
// CS Name: ::System.Collections::CaseInsensitiveComparer*
class CORDL_TYPE CaseInsensitiveComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__compareInfo, put = __set__compareInfo))::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  constexpr ::System::Globalization::CompareInfo*& __get__compareInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& __get__compareInfo() const;

  constexpr void __set__compareInfo(::System::Globalization::CompareInfo* value);

  static inline ::System::Collections::CaseInsensitiveComparer* New_ctor();

  /// @brief Method .ctor addr 0x257dd5c size 0x78 virtual false final false
  inline void _ctor();

  static inline ::System::Collections::CaseInsensitiveComparer* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor addr 0x257ddd4 size 0x88 virtual false final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method Compare addr 0x257de5c size 0xec virtual true final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseInsensitiveComparer(CaseInsensitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseInsensitiveComparer(CaseInsensitiveComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseInsensitiveComparer();

public:
  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::CaseInsensitiveComparer, 0x18>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::CaseInsensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
