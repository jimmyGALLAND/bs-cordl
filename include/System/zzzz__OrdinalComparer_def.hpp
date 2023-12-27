#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrdinalComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class OrdinalComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::OrdinalComparer);
// Type: System::OrdinalComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2476))
// CS Name: ::System::OrdinalComparer*
class CORDL_TYPE OrdinalComparer : public ::System::StringComparer {
public:
  // Declarations
  /// @brief Field _ignoreCase, offset 0x10, size 0x1
  __declspec(property(get = __get__ignoreCase, put = __set__ignoreCase)) bool _ignoreCase;

  constexpr bool& __get__ignoreCase();

  constexpr bool const& __get__ignoreCase() const;

  constexpr void __set__ignoreCase(bool value);

  static inline ::System::OrdinalComparer* New_ctor(bool ignoreCase);

  /// @brief Method .ctor addr 0x25c5960 size 0x6c virtual false final false
  inline void _ctor(bool ignoreCase);

  /// @brief Method Compare addr 0x25c59cc size 0x58 virtual true final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals addr 0x25c5a24 size 0x80 virtual true final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode addr 0x25c5aa4 size 0x88 virtual true final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method Equals addr 0x25c5b2c size 0x98 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x25c5bc4 size 0x64 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrdinalComparer(OrdinalComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrdinalComparer(OrdinalComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrdinalComparer();

public:
  /// @brief Field _ignoreCase, offset: 0x10, size: 0x1, def value: None
  bool ____ignoreCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OrdinalComparer, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OrdinalComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalComparer*, "System", "OrdinalComparer");
