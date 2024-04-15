#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeDisableUnsafePtrRestrictionAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeDisableUnsafePtrRestrictionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeDisableUnsafePtrRestrictionAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeDisableUnsafePtrRestrictionAttribute*
class CORDL_TYPE NativeDisableUnsafePtrRestrictionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x31cf2bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeDisableUnsafePtrRestrictionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeDisableUnsafePtrRestrictionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeDisableUnsafePtrRestrictionAttribute(NativeDisableUnsafePtrRestrictionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeDisableUnsafePtrRestrictionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeDisableUnsafePtrRestrictionAttribute(NativeDisableUnsafePtrRestrictionAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeDisableUnsafePtrRestrictionAttribute");
