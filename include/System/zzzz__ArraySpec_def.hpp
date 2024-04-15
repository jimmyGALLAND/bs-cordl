#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySpec)
namespace System::Text {
class StringBuilder;
}
namespace System {
class ModifierSpec;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ArraySpec;
}
// Write type traits
MARK_REF_PTR_T(::System::ArraySpec);
// Type: System::ArraySpec
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ArraySpec*
class CORDL_TYPE ArraySpec : public ::System::Object {
public:
  // Declarations
  /// @brief Field bound, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_bound, put = __cordl_internal_set_bound)) bool bound;

  /// @brief Field dimensions, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions)) int32_t dimensions;

  /// @brief Convert operator to "::System::ModifierSpec"
  constexpr operator ::System::ModifierSpec*() noexcept;

  /// @brief Method Append, addr 0x288cfb4, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);

  static inline ::System::ArraySpec* New_ctor(int32_t dimensions, bool bound);

  /// @brief Method Resolve, addr 0x288cf50, size 0x64, virtual true, abstract: false, final true
  inline ::System::Type* Resolve(::System::Type* type);

  /// @brief Method ToString, addr 0x288d054, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_bound() const;

  constexpr bool& __cordl_internal_get_bound();

  constexpr int32_t const& __cordl_internal_get_dimensions() const;

  constexpr int32_t& __cordl_internal_get_dimensions();

  constexpr void __cordl_internal_set_bound(bool value);

  constexpr void __cordl_internal_set_dimensions(int32_t value);

  /// @brief Method .ctor, addr 0x288cf40, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t dimensions, bool bound);

  /// @brief Convert to "::System::ModifierSpec"
  constexpr ::System::ModifierSpec* i___System__ModifierSpec() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArraySpec();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArraySpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySpec(ArraySpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySpec(ArraySpec const&) = delete;

  /// @brief Field dimensions, offset: 0x10, size: 0x4, def value: None
  int32_t ___dimensions;

  /// @brief Field bound, offset: 0x14, size: 0x1, def value: None
  bool ___bound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArraySpec, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ArraySpec, ___dimensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ArraySpec, ___bound) == 0x14, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArraySpec);
DEFINE_IL2CPP_ARG_TYPE(::System::ArraySpec*, "System", "ArraySpec");
