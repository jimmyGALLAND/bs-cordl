#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SDKShaders)
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKShaders;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::SDKShaders);
// Type: LIV.SDK.Unity::SDKShaders
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15098))
// CS Name: ::LIV.SDK.Unity::SDKShaders*
class CORDL_TYPE SDKShaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field LIV_COLOR_MASK, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LIV_COLOR_MASK, put = setStaticF_LIV_COLOR_MASK)) int32_t LIV_COLOR_MASK;

  /// @brief Field LIV_TESSELLATION_PROPERTY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LIV_TESSELLATION_PROPERTY, put = setStaticF_LIV_TESSELLATION_PROPERTY)) int32_t LIV_TESSELLATION_PROPERTY;

  /// @brief Field LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY, put = setStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY)) int32_t LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY;

  static inline void setStaticF_LIV_COLOR_MASK(int32_t value);

  static inline int32_t getStaticF_LIV_COLOR_MASK();

  static inline void setStaticF_LIV_TESSELLATION_PROPERTY(int32_t value);

  static inline int32_t getStaticF_LIV_TESSELLATION_PROPERTY();

  static inline void setStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY(int32_t value);

  static inline int32_t getStaticF_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY();

  /// @brief Method StartRendering addr 0x2211d34 size 0x44 virtual false final false
  static inline void StartRendering();

  /// @brief Method StopRendering addr 0x2211f8c size 0x44 virtual false final false
  static inline void StopRendering();

  /// @brief Method StartForegroundRendering addr 0x22121a0 size 0x44 virtual false final false
  static inline void StartForegroundRendering();

  /// @brief Method StopForegroundRendering addr 0x2212254 size 0x44 virtual false final false
  static inline void StopForegroundRendering();

  /// @brief Method StartBackgroundRendering addr 0x2211d78 size 0x44 virtual false final false
  static inline void StartBackgroundRendering();

  /// @brief Method StopBackgroundRendering addr 0x2211f48 size 0x44 virtual false final false
  static inline void StopBackgroundRendering();

  // Ctor Parameters [CppParam { name: "", ty: "SDKShaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKShaders(SDKShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKShaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKShaders(SDKShaders const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKShaders();

public:
  /// @brief Field LIV_MR_FOREGROUND_KEYWORD offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_MR_FOREGROUND_KEYWORD{ u"LIV_MR_FOREGROUND" };

  /// @brief Field LIV_MR_BACKGROUND_KEYWORD offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_MR_BACKGROUND_KEYWORD{ u"LIV_MR_BACKGROUND" };

  /// @brief Field LIV_MR_KEYWORD offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_MR_KEYWORD{ u"LIV_MR" };

  /// @brief Field LIV_CLIP_PLANE_SIMPLE_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_CLIP_PLANE_SIMPLE_SHADER{ u"Hidden/LIV_ClipPlaneSimple" };

  /// @brief Field LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER{ u"Hidden/LIV_ClipPlaneSimpleDebug" };

  /// @brief Field LIV_CLIP_PLANE_COMPLEX_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_CLIP_PLANE_COMPLEX_SHADER{ u"Hidden/LIV_ClipPlaneComplex" };

  /// @brief Field LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER{ u"Hidden/LIV_ClipPlaneComplexDebug" };

  /// @brief Field LIV_WRITE_OPAQUE_TO_ALPHA_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_WRITE_OPAQUE_TO_ALPHA_SHADER{ u"Hidden/LIV_WriteOpaqueToAlpha" };

  /// @brief Field LIV_COMBINE_ALPHA_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_COMBINE_ALPHA_SHADER{ u"Hidden/LIV_CombineAlpha" };

  /// @brief Field LIV_WRITE_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_WRITE_SHADER{ u"Hidden/LIV_Write" };

  /// @brief Field LIV_FORCE_FORWARD_RENDERING_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString LIV_FORCE_FORWARD_RENDERING_SHADER{ u"Hidden/LIV_ForceForwardRendering" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKShaders, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKShaders);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKShaders*, "LIV.SDK.Unity", "SDKShaders");
