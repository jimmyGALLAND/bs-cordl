#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CurvedCanvasSettings)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class CurvedCanvasSettings;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedCanvasSettings);
// Type: HMUI::CurvedCanvasSettings
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13525))
// CS Name: ::HMUI::CurvedCanvasSettings*
class CORDL_TYPE CurvedCanvasSettings : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  /// @brief Field _radius, offset 0x9c, size 0x4
  __declspec(property(get = __get__radius, put = __set__radius)) float_t _radius;

  /// @brief Field _useFlatInEditMode, offset 0xa0, size 0x1
  __declspec(property(get = __get__useFlatInEditMode, put = __set__useFlatInEditMode)) bool _useFlatInEditMode;

  __declspec(property(get = get_radius)) float_t radius;

  constexpr float_t& __get__radius();

  constexpr float_t const& __get__radius() const;

  constexpr void __set__radius(float_t value);

  constexpr bool& __get__useFlatInEditMode();

  constexpr bool const& __get__useFlatInEditMode() const;

  constexpr void __set__useFlatInEditMode(bool value);

  /// @brief Method get_radius addr 0x211b0d4 size 0x8 virtual false final false
  inline float_t get_radius();

  /// @brief Method SetRadius addr 0x211b0dc size 0x18 virtual false final false
  inline void SetRadius(float_t value);

  /// @brief Method Start addr 0x211b1e4 size 0xa4 virtual true final false
  inline void Start();

  /// @brief Method OnPopulateMesh addr 0x211b288 size 0x198 virtual true final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  /// @brief Method TransformPointFromCanvasTo3D addr 0x211b420 size 0x40 virtual false final false
  inline ::UnityEngine::Vector3 TransformPointFromCanvasTo3D(::UnityEngine::Vector2 point);

  /// @brief Method RebuildAndSetup addr 0x211b0f4 size 0xf0 virtual false final false
  static inline void RebuildAndSetup(::UnityEngine::Transform* t);

  static inline ::HMUI::CurvedCanvasSettings* New_ctor();

  /// @brief Method .ctor addr 0x211b460 size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurvedCanvasSettings(CurvedCanvasSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurvedCanvasSettings(CurvedCanvasSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedCanvasSettings();

public:
  /// @brief Field _radius, offset: 0x9c, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _useFlatInEditMode, offset: 0xa0, size: 0x1, def value: None
  bool ____useFlatInEditMode;

  /// @brief Field kMaxElementWidth offset 0xffffffff size 0x4
  static constexpr float_t kMaxElementWidth{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedCanvasSettings, 0xa8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedCanvasSettings);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedCanvasSettings*, "HMUI", "CurvedCanvasSettings");
