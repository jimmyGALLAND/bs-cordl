#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRChaperone)
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperone;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRChaperone);
// Type: OVR.OpenVR::CVRChaperone
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8562))
// CS Name: ::OVR.OpenVR::CVRChaperone*
class CORDL_TYPE CVRChaperone : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x40
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRChaperone FnTable;

  constexpr ::OVR::OpenVR::IVRChaperone& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRChaperone const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRChaperone value);

  static inline ::OVR::OpenVR::CVRChaperone* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x27f2904 size 0x114 virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method GetCalibrationState addr 0x27f2a18 size 0x24 virtual false final false
  inline ::OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState();

  /// @brief Method GetPlayAreaSize addr 0x27f2a3c size 0x2c virtual false final false
  inline bool GetPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ);

  /// @brief Method GetPlayAreaRect addr 0x27f2a68 size 0x24 virtual false final false
  inline bool GetPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  /// @brief Method ReloadInfo addr 0x27f2a8c size 0x24 virtual false final false
  inline void ReloadInfo();

  /// @brief Method SetSceneColor addr 0x27f2ab0 size 0x24 virtual false final false
  inline void SetSceneColor(::OVR::OpenVR::HmdColor_t color);

  /// @brief Method GetBoundsColor addr 0x27f2ad4 size 0x24 virtual false final false
  inline void GetBoundsColor(ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance, ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor);

  /// @brief Method AreBoundsVisible addr 0x27f2af8 size 0x24 virtual false final false
  inline bool AreBoundsVisible();

  /// @brief Method ForceBoundsVisible addr 0x27f2b1c size 0x28 virtual false final false
  inline void ForceBoundsVisible(bool bForce);

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRChaperone(CVRChaperone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRChaperone(CVRChaperone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRChaperone();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x40, def value: None
  ::OVR::OpenVR::IVRChaperone ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRChaperone, 0x50>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRChaperone);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRChaperone*, "OVR.OpenVR", "CVRChaperone");
