#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ParameterUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ParameterUtility)
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ParameterUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ParameterUtility);
// Type: HoudiniEngineUnity::HEU_ParameterUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_ParameterUtility*
class CORDL_TYPE HEU_ParameterUtility : public ::System::Object {
public:
// Declarations
/// @brief Method FindTextureParamByNameOrTag, addr 0x39cc3ec, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t FindTextureParamByNameOrTag(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>  parameters, ::StringW  parameterName, ::StringW  useTextureParmName) ;

/// @brief Method GetChoice, addr 0x39cbb70, size 0x168, virtual false, abstract: false, final false
static inline bool GetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<int32_t>  outValue) ;

/// @brief Method GetColor, addr 0x39cc02c, size 0x12c, virtual false, abstract: false, final false
static inline bool GetColor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<::UnityEngine::Color>  getValue) ;

/// @brief Method GetFloat, addr 0x39cb2ac, size 0x138, virtual false, abstract: false, final false
static inline bool GetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<float_t>  outValue) ;

/// @brief Method GetFloats, addr 0x39cb3e4, size 0x148, virtual false, abstract: false, final false
static inline bool GetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<::ArrayW<float_t,::Array<float_t>*>>  outValues) ;

/// @brief Method GetInputNode, addr 0x39cbe88, size 0x1a4, virtual false, abstract: false, final false
static inline bool GetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, int32_t  index, ByRef<::UnityEngine::GameObject*>  obj) ;

/// @brief Method GetInt, addr 0x39cb04c, size 0x134, virtual false, abstract: false, final false
static inline bool GetInt(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<int32_t>  outValue) ;

/// @brief Method GetParameterColor3Value, addr 0x39cc6b4, size 0x170, virtual false, abstract: false, final false
static inline bool GetParameterColor3Value(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>  parameters, ::StringW  parameterName, ::UnityEngine::Color  defaultValue, ByRef<::UnityEngine::Color>  outputColor) ;

/// @brief Method GetParameterFloatValue, addr 0x39cc5ac, size 0x108, virtual false, abstract: false, final false
static inline bool GetParameterFloatValue(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>  parameters, ::StringW  parameterName, float_t  defaultValue, ByRef<float_t>  returnValue) ;

/// @brief Method GetParameterIndexFromName, addr 0x39cc290, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetParameterIndexFromName(::HoudiniEngineUnity::HEU_SessionBase*  session, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>  parameters, ::StringW  parameterName) ;

/// @brief Method GetParameterIndexFromNameOrTag, addr 0x39cc380, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetParameterIndexFromNameOrTag(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>  parameters, ::StringW  parameterName) ;

/// @brief Method GetString, addr 0x39cb77c, size 0x13c, virtual false, abstract: false, final false
static inline bool GetString(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<::StringW>  outValue) ;

/// @brief Method GetToggle, addr 0x39cae00, size 0x128, virtual false, abstract: false, final false
static inline bool GetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ByRef<bool>  outValue) ;

/// @brief Method SetChoice, addr 0x39cb9ec, size 0x184, virtual false, abstract: false, final false
static inline bool SetChoice(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, int32_t  setValue) ;

/// @brief Method SetColor, addr 0x39cc158, size 0x138, virtual false, abstract: false, final false
static inline bool SetColor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ::UnityEngine::Color  setValue) ;

/// @brief Method SetFloat, addr 0x39cb52c, size 0x130, virtual false, abstract: false, final false
static inline bool SetFloat(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, float_t  setValue) ;

/// @brief Method SetFloats, addr 0x39cb65c, size 0x120, virtual false, abstract: false, final false
static inline bool SetFloats(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ::ArrayW<float_t,::Array<float_t>*>  setValues) ;

/// @brief Method SetInputNode, addr 0x39cbcd8, size 0x1b0, virtual false, abstract: false, final false
static inline bool SetInputNode(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ::UnityEngine::GameObject*  obj, int32_t  index) ;

/// @brief Method SetInt, addr 0x39cb180, size 0x12c, virtual false, abstract: false, final false
static inline bool SetInt(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, int32_t  setValue) ;

/// @brief Method SetString, addr 0x39cb8b8, size 0x134, virtual false, abstract: false, final false
static inline bool SetString(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, ::StringW  setValue) ;

/// @brief Method SetToggle, addr 0x39caf28, size 0x124, virtual false, abstract: false, final false
static inline bool SetToggle(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::StringW  paramName, bool  setValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HEU_ParameterUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ParameterUtility(HEU_ParameterUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ParameterUtility(HEU_ParameterUtility const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterUtility, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterUtility*, "HoudiniEngineUnity", "HEU_ParameterUtility");
