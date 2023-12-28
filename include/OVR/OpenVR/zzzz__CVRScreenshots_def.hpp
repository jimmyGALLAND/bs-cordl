#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRScreenshots)
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRScreenshots;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRScreenshots);
// Type: OVR.OpenVR::CVRScreenshots
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8514)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8573))
// CS Name: ::OVR.OpenVR::CVRScreenshots*
class CORDL_TYPE CVRScreenshots : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x38
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRScreenshots FnTable;

  constexpr ::OVR::OpenVR::IVRScreenshots& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRScreenshots const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRScreenshots value);

  static inline ::OVR::OpenVR::CVRScreenshots* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x27f5574 size 0x11c virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method RequestScreenshot addr 0x27f5690 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotError RequestScreenshot(ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  /// @brief Method HookScreenshot addr 0x27f56b8 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotError HookScreenshot(::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*> pSupportedTypes);

  /// @brief Method GetScreenshotPropertyType addr 0x27f56e4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotType GetScreenshotPropertyType(uint32_t screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  /// @brief Method GetScreenshotPropertyFilename addr 0x27f5708 size 0x24 virtual false final false
  inline uint32_t GetScreenshotPropertyFilename(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  /// @brief Method UpdateScreenshotProgress addr 0x27f572c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotError UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress);

  /// @brief Method TakeStereoScreenshot addr 0x27f5750 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotError TakeStereoScreenshot(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  /// @brief Method SubmitScreenshot addr 0x27f5778 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRScreenshotError SubmitScreenshot(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename);

  // Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRScreenshots(CVRScreenshots&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRScreenshots(CVRScreenshots const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRScreenshots();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x38, def value: None
  ::OVR::OpenVR::IVRScreenshots ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRScreenshots, 0x48>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRScreenshots);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRScreenshots*, "OVR.OpenVR", "CVRScreenshots");
