#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_SphereInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SphereInfo);
// Type: HoudiniEngineUnity::HAPI_SphereInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9751))
// CS Name: ::HoudiniEngineUnity::HAPI_SphereInfo
struct CORDL_TYPE HAPI_SphereInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2191f20 size 0x54 virtual false final false
  inline void _ctor(bool initialize_fields);

  // Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None
  // }]
  constexpr HAPI_SphereInfo(::ArrayW<float_t, ::Array<float_t>*> center, float_t radius) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_SphereInfo();

  /// @brief Field center, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> center;

  /// @brief Field radius, offset: 0x8, size: 0x4, def value: None
  float_t radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SphereInfo, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SphereInfo, "HoudiniEngineUnity", "HAPI_SphereInfo");
