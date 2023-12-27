#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncVoipAttenuationValue)
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValue;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncVoipAttenuationValue);
// Type: Oculus.Platform.Models::NetSyncVoipAttenuationValue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13463))
// CS Name: ::Oculus.Platform.Models::NetSyncVoipAttenuationValue*
class CORDL_TYPE NetSyncVoipAttenuationValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field Decibels, offset 0x10, size 0x4
  __declspec(property(get = __get_Decibels, put = __set_Decibels)) float_t Decibels;

  /// @brief Field Distance, offset 0x14, size 0x4
  __declspec(property(get = __get_Distance, put = __set_Distance)) float_t Distance;

  constexpr float_t& __get_Decibels();

  constexpr float_t const& __get_Decibels() const;

  constexpr void __set_Decibels(float_t value);

  constexpr float_t& __get_Distance();

  constexpr float_t const& __get_Distance() const;

  constexpr void __set_Distance(float_t value);

  static inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValue* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2707a00 size 0x88 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncVoipAttenuationValue();

public:
  /// @brief Field Decibels, offset: 0x10, size: 0x4, def value: None
  float_t ___Decibels;

  /// @brief Field Distance, offset: 0x14, size: 0x4, def value: None
  float_t ___Distance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncVoipAttenuationValue, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncVoipAttenuationValue);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncVoipAttenuationValue*, "Oculus.Platform.Models", "NetSyncVoipAttenuationValue");
