#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TerrainLayer)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class TerrainLayer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainLayer);
// Type: UnityEngine::TerrainLayer
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TerrainLayer*
class CORDL_TYPE TerrainLayer : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(put = set_diffuseRemapMax))::UnityEngine::Vector4 diffuseRemapMax;

  __declspec(property(put = set_diffuseRemapMin))::UnityEngine::Vector4 diffuseRemapMin;

  __declspec(property(get = get_diffuseTexture, put = set_diffuseTexture))::UnityW<::UnityEngine::Texture2D> diffuseTexture;

  __declspec(property(put = set_maskMapRemapMax))::UnityEngine::Vector4 maskMapRemapMax;

  __declspec(property(put = set_maskMapRemapMin))::UnityEngine::Vector4 maskMapRemapMin;

  __declspec(property(get = get_maskMapTexture, put = set_maskMapTexture))::UnityW<::UnityEngine::Texture2D> maskMapTexture;

  __declspec(property(get = get_metallic, put = set_metallic)) float_t metallic;

  __declspec(property(get = get_normalMapTexture, put = set_normalMapTexture))::UnityW<::UnityEngine::Texture2D> normalMapTexture;

  __declspec(property(put = set_normalScale)) float_t normalScale;

  __declspec(property(get = get_smoothness, put = set_smoothness)) float_t smoothness;

  __declspec(property(get = get_specular, put = set_specular))::UnityEngine::Color specular;

  __declspec(property(get = get_tileOffset, put = set_tileOffset))::UnityEngine::Vector2 tileOffset;

  __declspec(property(get = get_tileSize, put = set_tileSize))::UnityEngine::Vector2 tileSize;

  /// @brief Method Internal_Create, addr 0x3269e78, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::TerrainLayer* layer);

  static inline ::UnityEngine::TerrainLayer* New_ctor();

  /// @brief Method .ctor, addr 0x3269df8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_diffuseTexture, addr 0x3269eb4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_diffuseTexture();

  /// @brief Method get_maskMapTexture, addr 0x3269fb4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_maskMapTexture();

  /// @brief Method get_metallic, addr 0x326a3a0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_metallic();

  /// @brief Method get_normalMapTexture, addr 0x3269f34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_normalMapTexture();

  /// @brief Method get_smoothness, addr 0x326a428, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_smoothness();

  /// @brief Method get_specular, addr 0x326a26c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_specular();

  /// @brief Method get_specular_Injected, addr 0x326a2c4, size 0x44, virtual false, abstract: false, final false
  inline void get_specular_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_tileOffset, addr 0x326a150, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tileOffset();

  /// @brief Method get_tileOffset_Injected, addr 0x326a19c, size 0x44, virtual false, abstract: false, final false
  inline void get_tileOffset_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_tileSize, addr 0x326a034, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tileSize();

  /// @brief Method get_tileSize_Injected, addr 0x326a080, size 0x44, virtual false, abstract: false, final false
  inline void get_tileSize_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_diffuseRemapMax, addr 0x326a594, size 0x54, virtual false, abstract: false, final false
  inline void set_diffuseRemapMax(::UnityEngine::Vector4 value);

  /// @brief Method set_diffuseRemapMax_Injected, addr 0x326a5e8, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_diffuseRemapMin, addr 0x326a4fc, size 0x54, virtual false, abstract: false, final false
  inline void set_diffuseRemapMin(::UnityEngine::Vector4 value);

  /// @brief Method set_diffuseRemapMin_Injected, addr 0x326a550, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_diffuseTexture, addr 0x3269ef0, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_maskMapRemapMax, addr 0x326a6c4, size 0x54, virtual false, abstract: false, final false
  inline void set_maskMapRemapMax(::UnityEngine::Vector4 value);

  /// @brief Method set_maskMapRemapMax_Injected, addr 0x326a718, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_maskMapRemapMin, addr 0x326a62c, size 0x54, virtual false, abstract: false, final false
  inline void set_maskMapRemapMin(::UnityEngine::Vector4 value);

  /// @brief Method set_maskMapRemapMin_Injected, addr 0x326a680, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_maskMapTexture, addr 0x3269ff0, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_metallic, addr 0x326a3dc, size 0x4c, virtual false, abstract: false, final false
  inline void set_metallic(float_t value);

  /// @brief Method set_normalMapTexture, addr 0x3269f70, size 0x44, virtual false, abstract: false, final false
  inline void set_normalMapTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_normalScale, addr 0x326a4b0, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalScale(float_t value);

  /// @brief Method set_smoothness, addr 0x326a464, size 0x4c, virtual false, abstract: false, final false
  inline void set_smoothness(float_t value);

  /// @brief Method set_specular, addr 0x326a308, size 0x54, virtual false, abstract: false, final false
  inline void set_specular(::UnityEngine::Color value);

  /// @brief Method set_specular_Injected, addr 0x326a35c, size 0x44, virtual false, abstract: false, final false
  inline void set_specular_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_tileOffset, addr 0x326a1e0, size 0x48, virtual false, abstract: false, final false
  inline void set_tileOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_tileOffset_Injected, addr 0x326a228, size 0x44, virtual false, abstract: false, final false
  inline void set_tileOffset_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_tileSize, addr 0x326a0c4, size 0x48, virtual false, abstract: false, final false
  inline void set_tileSize(::UnityEngine::Vector2 value);

  /// @brief Method set_tileSize_Injected, addr 0x326a10c, size 0x44, virtual false, abstract: false, final false
  inline void set_tileSize_Injected(ByRef<::UnityEngine::Vector2> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainLayer(TerrainLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainLayer(TerrainLayer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainLayer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainLayer*, "UnityEngine", "TerrainLayer");
