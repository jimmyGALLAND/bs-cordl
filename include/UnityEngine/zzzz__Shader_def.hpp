#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Shader);
// Type: UnityEngine::Shader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Shader*
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_disableBatching)) ::UnityEngine::DisableBatchingType  disableBatching;

 __declspec(property(get=get_isSupported)) bool  isSupported;

 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(get=get_maximumLOD, put=set_maximumLOD)) int32_t  maximumLOD;

 __declspec(property(get=get_passCount)) int32_t  passCount;

 __declspec(property(get=get_renderQueue)) int32_t  renderQueue;

 __declspec(property(get=get_subshaderCount)) int32_t  subshaderCount;

/// @brief Method CheckPropertyIndex, addr 0x47ec3dc, size 0xa0, virtual false, abstract: false, final false
static inline void CheckPropertyIndex(::UnityEngine::Shader*  s, int32_t  propertyIndex) ;

/// @brief Method DisableKeyword, addr 0x47e9194, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword, addr 0x47e9424, size 0xc, virtual false, abstract: false, final false
static inline void DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeywordFast, addr 0x47e9288, size 0x40, virtual false, abstract: false, final false
static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method DisableKeywordFast_Injected, addr 0x47e92c8, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x47e9158, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0x47e9418, size 0xc, virtual false, abstract: false, final false
static inline void EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeywordFast, addr 0x47e920c, size 0x40, virtual false, abstract: false, final false
static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method EnableKeywordFast_Injected, addr 0x47e924c, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method ExtractGlobalFloatArray, addr 0x47ea6f8, size 0x174, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArray(int32_t  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method ExtractGlobalFloatArrayImpl, addr 0x47ea320, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArrayImpl(int32_t  name, ByRef<::ArrayW<float_t,::Array<float_t>*>>  val) ;

/// @brief Method ExtractGlobalMatrixArray, addr 0x47ea9e0, size 0x174, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method ExtractGlobalMatrixArrayImpl, addr 0x47ea3a8, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArrayImpl(int32_t  name, ByRef<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>  val) ;

/// @brief Method ExtractGlobalVectorArray, addr 0x47ea86c, size 0x174, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method ExtractGlobalVectorArrayImpl, addr 0x47ea364, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArrayImpl(int32_t  name, ByRef<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>  val) ;

/// @brief Method Find, addr 0x47e8d98, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> Find(::StringW  name) ;

/// @brief Method FindBuiltin, addr 0x47e8e04, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW  name) ;

/// @brief Method FindPassTagValue, addr 0x47e9668, size 0x108, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPassTagValue, addr 0x47e97c4, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  subshaderIndex, int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPropertyIndex, addr 0x47ec4b8, size 0x44, virtual false, abstract: false, final false
inline int32_t FindPropertyIndex(::StringW  propertyName) ;

/// @brief Method FindSubshaderTagValue, addr 0x47e9988, size 0x158, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t  subshaderIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindTextureStack, addr 0x47eca34, size 0xbc, virtual false, abstract: false, final false
inline bool FindTextureStack(int32_t  propertyIndex, ByRef<::StringW>  stackName, ByRef<int32_t>  layerIndex) ;

/// @brief Method FindTextureStackImpl, addr 0x47ec380, size 0x5c, virtual false, abstract: false, final false
static inline bool FindTextureStackImpl(::UnityEngine::Shader*  s, int32_t  propertyIdx, ByRef<::StringW>  stackName, ByRef<int32_t>  layerIndex) ;

/// @brief Method GetAllGlobalKeywords, addr 0x47e90a0, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetAllGlobalKeywords() ;

/// @brief Method GetDependency, addr 0x47e9568, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW  name) ;

/// @brief Method GetEnabledGlobalKeywords, addr 0x47e9050, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> GetEnabledGlobalKeywords() ;

/// @brief Method GetGlobalColor, addr 0x47ebb08, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(::StringW  name) ;

/// @brief Method GetGlobalColor, addr 0x47ebb48, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(int32_t  nameID) ;

/// @brief Method GetGlobalFloat, addr 0x47eb97c, size 0x68, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(::StringW  name) ;

/// @brief Method GetGlobalFloat, addr 0x47eb9e4, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0x47ebd04, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArray(::StringW  name) ;

/// @brief Method GetGlobalFloatArray, addr 0x47ebd44, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArray(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0x47ebf2c, size 0x48, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method GetGlobalFloatArray, addr 0x47ebf74, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method GetGlobalFloatArrayCountImpl, addr 0x47ea26c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalFloatArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalFloatArrayImpl, addr 0x47ea1b8, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetGlobalFloatArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalFloatImpl, addr 0x47e9ef8, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloatImpl(int32_t  name) ;

/// @brief Method GetGlobalInt, addr 0x47eb8a0, size 0x84, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(::StringW  name) ;

/// @brief Method GetGlobalInt, addr 0x47eb924, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(int32_t  nameID) ;

/// @brief Method GetGlobalIntImpl, addr 0x47e9ebc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalIntImpl(int32_t  name) ;

/// @brief Method GetGlobalInteger, addr 0x47eba20, size 0x68, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(::StringW  name) ;

/// @brief Method GetGlobalInteger, addr 0x47eba88, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(int32_t  nameID) ;

/// @brief Method GetGlobalMatrix, addr 0x47ebb4c, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW  name) ;

/// @brief Method GetGlobalMatrix, addr 0x47ebbec, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0x47ebe74, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(::StringW  name) ;

/// @brief Method GetGlobalMatrixArray, addr 0x47ebeb4, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArray(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0x47ebfc4, size 0x48, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method GetGlobalMatrixArray, addr 0x47ec00c, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method GetGlobalMatrixArrayCountImpl, addr 0x47ea2e4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixArrayImpl, addr 0x47ea230, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GetGlobalMatrixArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixImpl, addr 0x47e9fd0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixImpl_Injected, addr 0x47ea03c, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalMatrixImpl_Injected(int32_t  name, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetGlobalTexture, addr 0x47ebc60, size 0x68, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW  name) ;

/// @brief Method GetGlobalTexture, addr 0x47ebcc8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t  nameID) ;

/// @brief Method GetGlobalTextureImpl, addr 0x47ea080, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t  name) ;

/// @brief Method GetGlobalVector, addr 0x47ebac4, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW  name) ;

/// @brief Method GetGlobalVector, addr 0x47ebb04, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0x47ebdbc, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(::StringW  name) ;

/// @brief Method GetGlobalVectorArray, addr 0x47ebdfc, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArray(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0x47ebf78, size 0x48, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method GetGlobalVectorArray, addr 0x47ebfc0, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method GetGlobalVectorArrayCountImpl, addr 0x47ea2a8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalVectorArrayCountImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorArrayImpl, addr 0x47ea1f4, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GetGlobalVectorArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorImpl, addr 0x47e9f34, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorImpl_Injected, addr 0x47e9f8c, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalVectorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPassCountInSubshader, addr 0x47e9624, size 0x44, virtual false, abstract: false, final false
inline int32_t GetPassCountInSubshader(int32_t  subshaderIndex) ;

/// @brief Method GetPropertyAttributes, addr 0x47ec664, size 0x48, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetPropertyAttributes(int32_t  propertyIndex) ;

/// @brief Method GetPropertyAttributes, addr 0x47ec1bc, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetPropertyAttributes(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyCount, addr 0x47ec47c, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetPropertyCount() ;

/// @brief Method GetPropertyDefaultFloatValue, addr 0x47ec6ac, size 0x88, virtual false, abstract: false, final false
inline float_t GetPropertyDefaultFloatValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue, addr 0x47ec848, size 0xa4, virtual false, abstract: false, final false
inline int32_t GetPropertyDefaultIntValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue, addr 0x47ec200, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyDefaultIntValue(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultValue, addr 0x47ec244, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultValue_Injected, addr 0x47ec2a4, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyDefaultValue_Injected(::UnityEngine::Shader*  shader, int32_t  propertyIndex, ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPropertyDefaultVectorValue, addr 0x47ec734, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription, addr 0x47ec5d4, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetPropertyDescription(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription, addr 0x47ec134, size 0x44, virtual false, abstract: false, final false
static inline ::StringW GetPropertyDescription(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyFlags, addr 0x47ec61c, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t  propertyIndex) ;

/// @brief Method GetPropertyFlags, addr 0x47ec178, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyName, addr 0x47ec4fc, size 0x48, virtual false, abstract: false, final false
inline ::StringW GetPropertyName(int32_t  propertyIndex) ;

/// @brief Method GetPropertyName, addr 0x47ec068, size 0x44, virtual false, abstract: false, final false
static inline ::StringW GetPropertyName(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId, addr 0x47ec544, size 0x48, virtual false, abstract: false, final false
inline int32_t GetPropertyNameId(int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId, addr 0x47ec0ac, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyNameId(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyRangeLimits, addr 0x47ec7b8, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName, addr 0x47ec990, size 0xa4, virtual false, abstract: false, final false
inline ::StringW GetPropertyTextureDefaultName(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName, addr 0x47ec33c, size 0x44, virtual false, abstract: false, final false
static inline ::StringW GetPropertyTextureDefaultName(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDimension, addr 0x47ec8ec, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDimension, addr 0x47ec2f8, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyType, addr 0x47ec58c, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t  propertyIndex) ;

/// @brief Method GetPropertyType, addr 0x47ec0f0, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method IDToTag, addr 0x47e952c, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW IDToTag(int32_t  name) ;

/// @brief Method Internal_FindPassTagValue, addr 0x47e9770, size 0x54, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValue(int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValueInSubShader, addr 0x47e992c, size 0x5c, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValueInSubShader(int32_t  subShaderIndex, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindSubshaderTagValue, addr 0x47e9ae0, size 0x54, virtual false, abstract: false, final false
inline int32_t Internal_FindSubshaderTagValue(int32_t  subShaderIndex, int32_t  tagName) ;

/// @brief Method IsKeywordEnabled, addr 0x47e91d0, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method IsKeywordEnabled, addr 0x47e9444, size 0xc, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method IsKeywordEnabledFast, addr 0x47e9398, size 0x44, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method IsKeywordEnabledFast_Injected, addr 0x47e93dc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

static inline ::UnityEngine::Shader* New_ctor() ;

/// @brief Method PropertyToID, addr 0x47e6e40, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PropertyToID(::StringW  name) ;

/// @brief Method SetGlobalBuffer, addr 0x47eb0d8, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x47eb18c, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x47eb148, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x47eb1fc, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl, addr 0x47e9d7c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalColor, addr 0x47eadf4, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0x47eae64, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x47eb240, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x47eb324, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x47eb2c8, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x47eb3ac, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl, addr 0x47e9e04, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0x47e9e60, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalFloat, addr 0x47eac08, size 0x78, virtual false, abstract: false, final false
static inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0x47eac80, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x47eb524, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x47eb408, size 0xa4, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x47ea3ec, size 0x104, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArray, addr 0x47eb578, size 0x18, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x47eb4ac, size 0x78, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArrayImpl, addr 0x47ea0bc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatImpl, addr 0x47e9b78, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetGlobalGraphicsBufferImpl, addr 0x47e9dc0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalInt, addr 0x47eab54, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0x47eabc4, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalIntImpl, addr 0x47e9b34, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x47eaccc, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x47ead3c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0x47eae68, size 0x8c, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0x47eaef4, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0x47eb834, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x47eb718, size 0xa4, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x47ea5f4, size 0x104, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArray, addr 0x47eb888, size 0x18, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x47eb7bc, size 0x78, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArrayImpl, addr 0x47ea164, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixImpl, addr 0x47e9c5c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixImpl_Injected, addr 0x47e9ca0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl_Injected(int32_t  name, ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalRenderTextureImpl, addr 0x47e9d28, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalRenderTextureImpl(int32_t  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x47eb004, size 0x80, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x47eaf50, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTexture, addr 0x47eb084, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x47eafc0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl, addr 0x47e9ce4, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalVector, addr 0x47ead80, size 0x70, virtual false, abstract: false, final false
static inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0x47eadf0, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x47eb6ac, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x47eb590, size 0xa4, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x47ea4f0, size 0x104, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArray, addr 0x47eb700, size 0x18, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x47eb634, size 0x78, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArrayImpl, addr 0x47ea110, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorImpl, addr 0x47e9bc4, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorImpl_Injected, addr 0x47e9c18, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Vector4>  value) ;

/// @brief Method SetKeyword, addr 0x47e9430, size 0x14, virtual false, abstract: false, final false
static inline void SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeywordFast, addr 0x47e9304, size 0x50, virtual false, abstract: false, final false
static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword, bool  value) ;

/// @brief Method SetKeywordFast_Injected, addr 0x47e9354, size 0x44, virtual false, abstract: false, final false
static inline void SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method TagToID, addr 0x47e94f0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t TagToID(::StringW  name) ;

/// @brief Method WarmupAllShaders, addr 0x47e94c8, size 0x28, virtual false, abstract: false, final false
static inline void WarmupAllShaders() ;

/// @brief Method .ctor, addr 0x47ec010, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_disableBatching, addr 0x47e948c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::DisableBatchingType get_disableBatching() ;

/// @brief Method get_enabledGlobalKeywords, addr 0x47e9028, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_enabledGlobalKeywords() ;

/// @brief Method get_globalKeywords, addr 0x47e9078, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword,::Array<::UnityEngine::Rendering::GlobalKeyword>*> get_globalKeywords() ;

/// @brief Method get_globalMaximumLOD, addr 0x47e8f24, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_globalMaximumLOD() ;

/// @brief Method get_globalRenderPipeline, addr 0x47e8fc4, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_globalRenderPipeline() ;

/// @brief Method get_globalShaderHardwareTier, addr 0x47e8cbc, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier() ;

/// @brief Method get_isSupported, addr 0x47e8f88, size 0x3c, virtual false, abstract: false, final false
inline bool get_isSupported() ;

/// @brief Method get_keywordSpace, addr 0x47e90c8, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0x47e9114, size 0x44, virtual false, abstract: false, final false
inline void get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method get_maximumChunksOverride, addr 0x47e8e40, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maximumChunksOverride() ;

/// @brief Method get_maximumLOD, addr 0x47e8ea4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_maximumLOD() ;

/// @brief Method get_passCount, addr 0x47e95ac, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_renderQueue, addr 0x47e9450, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_renderQueue() ;

/// @brief Method get_subshaderCount, addr 0x47e95e8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_subshaderCount() ;

/// @brief Method set_globalMaximumLOD, addr 0x47e8f4c, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalMaximumLOD(int32_t  value) ;

/// @brief Method set_globalRenderPipeline, addr 0x47e8fec, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline(::StringW  value) ;

/// @brief Method set_globalShaderHardwareTier, addr 0x47e8d24, size 0x74, virtual false, abstract: false, final false
static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier  value) ;

/// @brief Method set_maximumChunksOverride, addr 0x47e8e68, size 0x3c, virtual false, abstract: false, final false
static inline void set_maximumChunksOverride(int32_t  value) ;

/// @brief Method set_maximumLOD, addr 0x47e8ee0, size 0x44, virtual false, abstract: false, final false
inline void set_maximumLOD(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shader(Shader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shader(Shader const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Shader, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
