#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HoudiniVersion)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniVersion;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniVersion);
// Type: HoudiniEngineUnity::HEU_HoudiniVersion
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9759))
// CS Name: ::HoudiniEngineUnity::HEU_HoudiniVersion*
class CORDL_TYPE HEU_HoudiniVersion : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_HoudiniVersion* New_ctor();

  /// @brief Method .ctor addr 0x2192074 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniVersion(HEU_HoudiniVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniVersion(HEU_HoudiniVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniVersion();

public:
  /// @brief Field HOUDINI_MAJOR offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_MAJOR{ static_cast<int32_t>(0x12) };

  /// @brief Field HOUDINI_MINOR offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_MINOR{ static_cast<int32_t>(0x5) };

  /// @brief Field HOUDINI_BUILD offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_BUILD{ static_cast<int32_t>(0x279) };

  /// @brief Field HOUDINI_PATCH offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_PATCH{ static_cast<int32_t>(0x0) };

  /// @brief Field HOUDINI_VERSION_STRING offset 0xffffffff size 0x8
  static constexpr ::ConstString HOUDINI_VERSION_STRING{ u"18.5.633" };

  /// @brief Field HOUDINI_ENGINE_MAJOR offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_ENGINE_MAJOR{ static_cast<int32_t>(0x3) };

  /// @brief Field HOUDINI_ENGINE_MINOR offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_ENGINE_MINOR{ static_cast<int32_t>(0x6) };

  /// @brief Field HOUDINI_ENGINE_API offset 0xffffffff size 0x4
  static constexpr int32_t HOUDINI_ENGINE_API{ static_cast<int32_t>(0x3) };

  /// @brief Field UNITY_PLUGIN_VERSION offset 0xffffffff size 0x4
  static constexpr int32_t UNITY_PLUGIN_VERSION{ static_cast<int32_t>(0x2) };

  /// @brief Field HOUDINI_INSTALL_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HOUDINI_INSTALL_PATH{ u"/opt/hfs18.5.633" };

  /// @brief Field HAPI_BIN_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_BIN_PATH{ u"/bin" };

  /// @brief Field HAPI_LIBRARY_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_LIBRARY_PATH{ u"/dsolib" };

  /// @brief Field HAPI_SERVER offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_SERVER{ u"/opt/hfs18.5.633/bin/HARS" };

  /// @brief Field HAPI_LIBRARY offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_LIBRARY{ u"/opt/hfs18.5.633/dsolib/libHAPIL.so" };

  /// @brief Field HARC_LIBRARY offset 0xffffffff size 0x8
  static constexpr ::ConstString HARC_LIBRARY{ u"/opt/hfs18.5.633/dsolib/libHARC.so" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniVersion, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniVersion);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniVersion*, "HoudiniEngineUnity", "HEU_HoudiniVersion");
