#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlock)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MaterialPropertyBlock);
// Type: UnityEngine::MaterialPropertyBlock
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::MaterialPropertyBlock*
class CORDL_TYPE MaterialPropertyBlock : public ::System::Object {
public:
// Declarations
/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Method Clear, addr 0x47e6834, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0x47e67f0, size 0x44, virtual false, abstract: false, final false
inline void Clear(bool  keepMemory) ;

/// @brief Method CreateImpl, addr 0x47e678c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateImpl() ;

/// @brief Method DestroyImpl, addr 0x47e67b4, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyImpl(::System::IntPtr  mpb) ;

/// @brief Method Dispose, addr 0x47e6c74, size 0xa4, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x47e6be0, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetColor, addr 0x47e6fe4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(int32_t  nameID) ;

/// @brief Method GetColorImpl, addr 0x47e62ec, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorImpl(int32_t  name) ;

/// @brief Method GetColorImpl_Injected, addr 0x47e634c, size 0x54, virtual false, abstract: false, final false
inline void GetColorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetFloat, addr 0x47e6f9c, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  nameID) ;

/// @brief Method GetFloatImpl, addr 0x47e61f4, size 0x44, virtual false, abstract: false, final false
inline float_t GetFloatImpl(int32_t  name) ;

/// @brief Method GetMatrix, addr 0x47e6fe8, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t  nameID) ;

/// @brief Method GetMatrixImpl, addr 0x47e63a0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t  name) ;

/// @brief Method GetMatrixImpl_Injected, addr 0x47e641c, size 0x54, virtual false, abstract: false, final false
inline void GetMatrixImpl_Injected(int32_t  name, ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetVector, addr 0x47e6fe0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVector(int32_t  nameID) ;

/// @brief Method GetVectorImpl, addr 0x47e6238, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetVectorImpl(int32_t  name) ;

/// @brief Method GetVectorImpl_Injected, addr 0x47e6298, size 0x54, virtual false, abstract: false, final false
inline void GetVectorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Vector4>  ret) ;

static inline ::UnityEngine::MaterialPropertyBlock* New_ctor() ;

/// @brief Method SetColor, addr 0x47e6dc4, size 0x7c, virtual false, abstract: false, final false
inline void SetColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColor, addr 0x47e6e7c, size 0x4, virtual false, abstract: false, final false
inline void SetColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl, addr 0x47e6574, size 0x5c, virtual false, abstract: false, final false
inline void SetColorImpl(int32_t  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl_Injected, addr 0x47e65d0, size 0x54, virtual false, abstract: false, final false
inline void SetColorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Color>  value) ;

/// @brief Method SetFloat, addr 0x47e6d6c, size 0x54, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x47e6874, size 0x10c, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetFloatArray, addr 0x47e6f54, size 0x18, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method SetFloatArray, addr 0x47e6ed4, size 0x80, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetFloatArrayImpl, addr 0x47e6678, size 0x5c, virtual false, abstract: false, final false
inline void SetFloatArrayImpl(int32_t  name, ::ArrayW<float_t,::Array<float_t>*>  values, int32_t  count) ;

/// @brief Method SetFloatImpl, addr 0x47e6470, size 0x54, virtual false, abstract: false, final false
inline void SetFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetInt, addr 0x47e6d18, size 0x54, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetMatrixArray, addr 0x47e6a8c, size 0x10c, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetMatrixArray, addr 0x47e6f84, size 0x18, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values) ;

/// @brief Method SetMatrixArrayImpl, addr 0x47e6730, size 0x5c, virtual false, abstract: false, final false
inline void SetMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  values, int32_t  count) ;

/// @brief Method SetTexture, addr 0x47e6e80, size 0x54, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl, addr 0x47e6624, size 0x54, virtual false, abstract: false, final false
inline void SetTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x47e6dc0, size 0x4, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x47e6980, size 0x10c, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0x47e6f6c, size 0x18, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values) ;

/// @brief Method SetVectorArrayImpl, addr 0x47e66d4, size 0x5c, virtual false, abstract: false, final false
inline void SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  values, int32_t  count) ;

/// @brief Method SetVectorImpl, addr 0x47e64c4, size 0x5c, virtual false, abstract: false, final false
inline void SetVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorImpl_Injected, addr 0x47e6520, size 0x54, virtual false, abstract: false, final false
inline void SetVectorImpl_Injected(int32_t  name, ByRef<::UnityEngine::Vector4>  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x47e6b98, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlock(MaterialPropertyBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlock(MaterialPropertyBlock const& ) = delete;

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyBlock, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MaterialPropertyBlock, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
