#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
struct __Image__OriginVertical;
}
namespace UnityEngine::UI {
struct __Image__FillMethod;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
struct __Image__Origin360;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UI {
struct __Image__Type;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine::UI {
struct __Image__OriginHorizontal;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UI {
struct __Image__Origin90;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
struct __Image__Origin180;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Image__FillMethod;
}
namespace UnityEngine::UI {
struct __Image__Origin180;
}
namespace UnityEngine::UI {
struct __Image__Origin360;
}
namespace UnityEngine::UI {
struct __Image__Origin90;
}
namespace UnityEngine::UI {
struct __Image__OriginHorizontal;
}
namespace UnityEngine::UI {
struct __Image__OriginVertical;
}
namespace UnityEngine::UI {
struct __Image__Type;
}
namespace UnityEngine::UI {
class Image;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Image__FillMethod);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin180);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin360);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin90);
MARK_VAL_T(::UnityEngine::UI::__Image__OriginHorizontal);
MARK_VAL_T(::UnityEngine::UI::__Image__OriginVertical);
MARK_VAL_T(::UnityEngine::UI::__Image__Type);
MARK_REF_PTR_T(::UnityEngine::UI::Image);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13048))
// CS Name: ::Image::Type
struct CORDL_TYPE __Image__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Type_Unwrapped
  enum struct ____Image__Type_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Sliced = static_cast<int32_t>(0x1),
    __E_Tiled = static_cast<int32_t>(0x2),
    __E_Filled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Type_Unwrapped() const noexcept {
    return static_cast<____Image__Type_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Simple value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Type const Simple;

  /// @brief Field Sliced value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Type const Sliced;

  /// @brief Field Tiled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Type const Tiled;

  /// @brief Field Filled value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Type const Filled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::FillMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13049))
// CS Name: ::Image::FillMethod
struct CORDL_TYPE __Image__FillMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__FillMethod_Unwrapped
  enum struct ____Image__FillMethod_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
    __E_Radial90 = static_cast<int32_t>(0x2),
    __E_Radial180 = static_cast<int32_t>(0x3),
    __E_Radial360 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__FillMethod_Unwrapped() const noexcept {
    return static_cast<____Image__FillMethod_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__FillMethod(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__FillMethod();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__FillMethod const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__FillMethod const Vertical;

  /// @brief Field Radial90 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__FillMethod const Radial90;

  /// @brief Field Radial180 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__FillMethod const Radial180;

  /// @brief Field Radial360 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__Image__FillMethod const Radial360;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__FillMethod, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::OriginHorizontal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13050))
// CS Name: ::Image::OriginHorizontal
struct CORDL_TYPE __Image__OriginHorizontal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__OriginHorizontal_Unwrapped
  enum struct ____Image__OriginHorizontal_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__OriginHorizontal_Unwrapped() const noexcept {
    return static_cast<____Image__OriginHorizontal_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__OriginHorizontal(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__OriginHorizontal();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__OriginHorizontal const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__OriginHorizontal const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__OriginHorizontal, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::OriginVertical
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13051))
// CS Name: ::Image::OriginVertical
struct CORDL_TYPE __Image__OriginVertical {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__OriginVertical_Unwrapped
  enum struct ____Image__OriginVertical_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__OriginVertical_Unwrapped() const noexcept {
    return static_cast<____Image__OriginVertical_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__OriginVertical(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__OriginVertical();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__OriginVertical const Bottom;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__OriginVertical const Top;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__OriginVertical, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin90
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13052))
// CS Name: ::Image::Origin90
struct CORDL_TYPE __Image__Origin90 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin90_Unwrapped
  enum struct ____Image__Origin90_Unwrapped : int32_t {
    __E_BottomLeft = static_cast<int32_t>(0x0),
    __E_TopLeft = static_cast<int32_t>(0x1),
    __E_TopRight = static_cast<int32_t>(0x2),
    __E_BottomRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin90_Unwrapped() const noexcept {
    return static_cast<____Image__Origin90_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin90(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin90();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BottomLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin90 const BottomLeft;

  /// @brief Field TopLeft value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin90 const TopLeft;

  /// @brief Field TopRight value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin90 const TopRight;

  /// @brief Field BottomRight value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin90 const BottomRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin90, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin180
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13053))
// CS Name: ::Image::Origin180
struct CORDL_TYPE __Image__Origin180 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin180_Unwrapped
  enum struct ____Image__Origin180_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin180_Unwrapped() const noexcept {
    return static_cast<____Image__Origin180_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin180(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin180();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin180 const Bottom;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin180 const Left;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin180 const Top;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin180 const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin180, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin360
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13054))
// CS Name: ::Image::Origin360
struct CORDL_TYPE __Image__Origin360 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin360_Unwrapped
  enum struct ____Image__Origin360_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin360_Unwrapped() const noexcept {
    return static_cast<____Image__Origin360_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin360(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin360();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin360 const Bottom;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin360 const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin360 const Top;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin360 const Left;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin360, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Image
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13099)), TypeDefinitionIndex(TypeDefinitionIndex(13048)), TypeDefinitionIndex(TypeDefinitionIndex(13049))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13055))
// CS Name: ::UnityEngine.UI::Image*
class CORDL_TYPE Image : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  using Origin360 = ::UnityEngine::UI::__Image__Origin360;

  using Origin180 = ::UnityEngine::UI::__Image__Origin180;

  using Origin90 = ::UnityEngine::UI::__Image__Origin90;

  using OriginVertical = ::UnityEngine::UI::__Image__OriginVertical;

  using OriginHorizontal = ::UnityEngine::UI::__Image__OriginHorizontal;

  using FillMethod = ::UnityEngine::UI::__Image__FillMethod;

  using Type = ::UnityEngine::UI::__Image__Type;

  /// @brief Field m_Sprite, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_Sprite, put = __set_m_Sprite))::UnityEngine::Sprite* m_Sprite;

  /// @brief Field m_OverrideSprite, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_OverrideSprite, put = __set_m_OverrideSprite))::UnityEngine::Sprite* m_OverrideSprite;

  /// @brief Field m_Type, offset 0xe0, size 0x4
  __declspec(property(get = __get_m_Type, put = __set_m_Type))::UnityEngine::UI::__Image__Type m_Type;

  /// @brief Field m_PreserveAspect, offset 0xe4, size 0x1
  __declspec(property(get = __get_m_PreserveAspect, put = __set_m_PreserveAspect)) bool m_PreserveAspect;

  /// @brief Field m_FillCenter, offset 0xe5, size 0x1
  __declspec(property(get = __get_m_FillCenter, put = __set_m_FillCenter)) bool m_FillCenter;

  /// @brief Field m_FillMethod, offset 0xe8, size 0x4
  __declspec(property(get = __get_m_FillMethod, put = __set_m_FillMethod))::UnityEngine::UI::__Image__FillMethod m_FillMethod;

  /// @brief Field m_FillAmount, offset 0xec, size 0x4
  __declspec(property(get = __get_m_FillAmount, put = __set_m_FillAmount)) float_t m_FillAmount;

  /// @brief Field m_FillClockwise, offset 0xf0, size 0x1
  __declspec(property(get = __get_m_FillClockwise, put = __set_m_FillClockwise)) bool m_FillClockwise;

  /// @brief Field m_FillOrigin, offset 0xf4, size 0x4
  __declspec(property(get = __get_m_FillOrigin, put = __set_m_FillOrigin)) int32_t m_FillOrigin;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset 0xf8, size 0x4
  __declspec(property(get = __get_m_AlphaHitTestMinimumThreshold, put = __set_m_AlphaHitTestMinimumThreshold)) float_t m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_Tracked, offset 0xfc, size 0x1
  __declspec(property(get = __get_m_Tracked, put = __set_m_Tracked)) bool m_Tracked;

  /// @brief Field m_UseSpriteMesh, offset 0xfd, size 0x1
  __declspec(property(get = __get_m_UseSpriteMesh, put = __set_m_UseSpriteMesh)) bool m_UseSpriteMesh;

  /// @brief Field m_PixelsPerUnitMultiplier, offset 0x100, size 0x4
  __declspec(property(get = __get_m_PixelsPerUnitMultiplier, put = __set_m_PixelsPerUnitMultiplier)) float_t m_PixelsPerUnitMultiplier;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset 0x104, size 0x4
  __declspec(property(get = __get_m_CachedReferencePixelsPerUnit, put = __set_m_CachedReferencePixelsPerUnit)) float_t m_CachedReferencePixelsPerUnit;

  /// @brief Field s_ETC1DefaultUI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ETC1DefaultUI, put = setStaticF_s_ETC1DefaultUI))::UnityEngine::Material* s_ETC1DefaultUI;

  /// @brief Field s_VertScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertScratch, put = setStaticF_s_VertScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_VertScratch;

  /// @brief Field s_UVScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UVScratch, put = setStaticF_s_UVScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UVScratch;

  /// @brief Field s_Xy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Xy, put = setStaticF_s_Xy))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Xy;

  /// @brief Field s_Uv, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Uv, put = setStaticF_s_Uv))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Uv;

  /// @brief Field m_TrackedTexturelessImages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_TrackedTexturelessImages,
                             put = setStaticF_m_TrackedTexturelessImages))::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_TrackedTexturelessImages;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(get = get_overrideSprite, put = set_overrideSprite))::UnityEngine::Sprite* overrideSprite;

  __declspec(property(get = get_activeSprite))::UnityEngine::Sprite* activeSprite;

  __declspec(property(get = get_type, put = set_type))::UnityEngine::UI::__Image__Type type;

  __declspec(property(get = get_preserveAspect, put = set_preserveAspect)) bool preserveAspect;

  __declspec(property(get = get_fillCenter, put = set_fillCenter)) bool fillCenter;

  __declspec(property(get = get_fillMethod, put = set_fillMethod))::UnityEngine::UI::__Image__FillMethod fillMethod;

  __declspec(property(get = get_fillAmount, put = set_fillAmount)) float_t fillAmount;

  __declspec(property(get = get_fillClockwise, put = set_fillClockwise)) bool fillClockwise;

  __declspec(property(get = get_fillOrigin, put = set_fillOrigin)) int32_t fillOrigin;

  __declspec(property(get = get_eventAlphaThreshold, put = set_eventAlphaThreshold)) float_t eventAlphaThreshold;

  __declspec(property(get = get_alphaHitTestMinimumThreshold, put = set_alphaHitTestMinimumThreshold)) float_t alphaHitTestMinimumThreshold;

  __declspec(property(get = get_useSpriteMesh, put = set_useSpriteMesh)) bool useSpriteMesh;

  __declspec(property(get = get_mainTexture))::UnityEngine::Texture* mainTexture;

  __declspec(property(get = get_hasBorder)) bool hasBorder;

  __declspec(property(get = get_pixelsPerUnitMultiplier, put = set_pixelsPerUnitMultiplier)) float_t pixelsPerUnitMultiplier;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_multipliedPixelsPerUnit)) float_t multipliedPixelsPerUnit;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  constexpr ::UnityEngine::Sprite*& __get_m_Sprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_m_Sprite() const;

  constexpr void __set_m_Sprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get_m_OverrideSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_m_OverrideSprite() const;

  constexpr void __set_m_OverrideSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::UI::__Image__Type& __get_m_Type();

  constexpr ::UnityEngine::UI::__Image__Type const& __get_m_Type() const;

  constexpr void __set_m_Type(::UnityEngine::UI::__Image__Type value);

  constexpr bool& __get_m_PreserveAspect();

  constexpr bool const& __get_m_PreserveAspect() const;

  constexpr void __set_m_PreserveAspect(bool value);

  constexpr bool& __get_m_FillCenter();

  constexpr bool const& __get_m_FillCenter() const;

  constexpr void __set_m_FillCenter(bool value);

  constexpr ::UnityEngine::UI::__Image__FillMethod& __get_m_FillMethod();

  constexpr ::UnityEngine::UI::__Image__FillMethod const& __get_m_FillMethod() const;

  constexpr void __set_m_FillMethod(::UnityEngine::UI::__Image__FillMethod value);

  constexpr float_t& __get_m_FillAmount();

  constexpr float_t const& __get_m_FillAmount() const;

  constexpr void __set_m_FillAmount(float_t value);

  constexpr bool& __get_m_FillClockwise();

  constexpr bool const& __get_m_FillClockwise() const;

  constexpr void __set_m_FillClockwise(bool value);

  constexpr int32_t& __get_m_FillOrigin();

  constexpr int32_t const& __get_m_FillOrigin() const;

  constexpr void __set_m_FillOrigin(int32_t value);

  constexpr float_t& __get_m_AlphaHitTestMinimumThreshold();

  constexpr float_t const& __get_m_AlphaHitTestMinimumThreshold() const;

  constexpr void __set_m_AlphaHitTestMinimumThreshold(float_t value);

  constexpr bool& __get_m_Tracked();

  constexpr bool const& __get_m_Tracked() const;

  constexpr void __set_m_Tracked(bool value);

  constexpr bool& __get_m_UseSpriteMesh();

  constexpr bool const& __get_m_UseSpriteMesh() const;

  constexpr void __set_m_UseSpriteMesh(bool value);

  constexpr float_t& __get_m_PixelsPerUnitMultiplier();

  constexpr float_t const& __get_m_PixelsPerUnitMultiplier() const;

  constexpr void __set_m_PixelsPerUnitMultiplier(float_t value);

  constexpr float_t& __get_m_CachedReferencePixelsPerUnit();

  constexpr float_t const& __get_m_CachedReferencePixelsPerUnit() const;

  constexpr void __set_m_CachedReferencePixelsPerUnit(float_t value);

  static inline void setStaticF_s_ETC1DefaultUI(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_ETC1DefaultUI();

  static inline void setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_VertScratch();

  static inline void setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UVScratch();

  static inline void setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Xy();

  static inline void setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Uv();

  static inline void setStaticF_m_TrackedTexturelessImages(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* getStaticF_m_TrackedTexturelessImages();

  static inline void setStaticF_s_Initialized(bool value);

  static inline bool getStaticF_s_Initialized();

  /// @brief Method get_sprite addr 0x2d60ea4 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  /// @brief Method set_sprite addr 0x2d53ffc size 0x2e8 virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method DisableSpriteOptimizations addr 0x2d60f98 size 0x8 virtual false final false
  inline void DisableSpriteOptimizations();

  /// @brief Method get_overrideSprite addr 0x2d60fa0 size 0x4 virtual false final false
  inline ::UnityEngine::Sprite* get_overrideSprite();

  /// @brief Method set_overrideSprite addr 0x2d6101c size 0x88 virtual false final false
  inline void set_overrideSprite(::UnityEngine::Sprite* value);

  /// @brief Method get_activeSprite addr 0x2d60fa4 size 0x78 virtual false final false
  inline ::UnityEngine::Sprite* get_activeSprite();

  /// @brief Method get_type addr 0x2d610a4 size 0x8 virtual false final false
  inline ::UnityEngine::UI::__Image__Type get_type();

  /// @brief Method set_type addr 0x2d542e4 size 0x80 virtual false final false
  inline void set_type(::UnityEngine::UI::__Image__Type value);

  /// @brief Method get_preserveAspect addr 0x2d610ac size 0x8 virtual false final false
  inline bool get_preserveAspect();

  /// @brief Method set_preserveAspect addr 0x2d610b4 size 0x80 virtual false final false
  inline void set_preserveAspect(bool value);

  /// @brief Method get_fillCenter addr 0x2d61134 size 0x8 virtual false final false
  inline bool get_fillCenter();

  /// @brief Method set_fillCenter addr 0x2d6113c size 0x80 virtual false final false
  inline void set_fillCenter(bool value);

  /// @brief Method get_fillMethod addr 0x2d611bc size 0x8 virtual false final false
  inline ::UnityEngine::UI::__Image__FillMethod get_fillMethod();

  /// @brief Method set_fillMethod addr 0x2d611c4 size 0x78 virtual false final false
  inline void set_fillMethod(::UnityEngine::UI::__Image__FillMethod value);

  /// @brief Method get_fillAmount addr 0x2d6123c size 0x8 virtual false final false
  inline float_t get_fillAmount();

  /// @brief Method set_fillAmount addr 0x2d61244 size 0x90 virtual false final false
  inline void set_fillAmount(float_t value);

  /// @brief Method get_fillClockwise addr 0x2d612d4 size 0x8 virtual false final false
  inline bool get_fillClockwise();

  /// @brief Method set_fillClockwise addr 0x2d612dc size 0x80 virtual false final false
  inline void set_fillClockwise(bool value);

  /// @brief Method get_fillOrigin addr 0x2d6135c size 0x8 virtual false final false
  inline int32_t get_fillOrigin();

  /// @brief Method set_fillOrigin addr 0x2d61364 size 0x80 virtual false final false
  inline void set_fillOrigin(int32_t value);

  /// @brief Method get_eventAlphaThreshold addr 0x2d613e4 size 0x10 virtual false final false
  inline float_t get_eventAlphaThreshold();

  /// @brief Method set_eventAlphaThreshold addr 0x2d613f4 size 0x10 virtual false final false
  inline void set_eventAlphaThreshold(float_t value);

  /// @brief Method get_alphaHitTestMinimumThreshold addr 0x2d61404 size 0x8 virtual false final false
  inline float_t get_alphaHitTestMinimumThreshold();

  /// @brief Method set_alphaHitTestMinimumThreshold addr 0x2d6140c size 0x8 virtual false final false
  inline void set_alphaHitTestMinimumThreshold(float_t value);

  /// @brief Method get_useSpriteMesh addr 0x2d61414 size 0x8 virtual false final false
  inline bool get_useSpriteMesh();

  /// @brief Method set_useSpriteMesh addr 0x2d6141c size 0x80 virtual false final false
  inline void set_useSpriteMesh(bool value);

  static inline ::UnityEngine::UI::Image* New_ctor();

  /// @brief Method .ctor addr 0x2d6149c size 0x40 virtual false final false
  inline void _ctor();

  /// @brief Method get_defaultETC1GraphicMaterial addr 0x2d614dc size 0xdc virtual false final false
  static inline ::UnityEngine::Material* get_defaultETC1GraphicMaterial();

  /// @brief Method get_mainTexture addr 0x2d615b8 size 0x178 virtual true final false
  inline ::UnityEngine::Texture* get_mainTexture();

  /// @brief Method get_hasBorder addr 0x2d61730 size 0xb8 virtual false final false
  inline bool get_hasBorder();

  /// @brief Method get_pixelsPerUnitMultiplier addr 0x2d617e8 size 0x8 virtual false final false
  inline float_t get_pixelsPerUnitMultiplier();

  /// @brief Method set_pixelsPerUnitMultiplier addr 0x2d617f0 size 0x20 virtual false final false
  inline void set_pixelsPerUnitMultiplier(float_t value);

  /// @brief Method get_pixelsPerUnit addr 0x2d61810 size 0xf4 virtual false final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_multipliedPixelsPerUnit addr 0x2d61904 size 0x1c virtual false final false
  inline float_t get_multipliedPixelsPerUnit();

  /// @brief Method get_material addr 0x2d61920 size 0x12c virtual true final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2d61a4c size 0x4 virtual true final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method OnBeforeSerialize addr 0x2d61a50 size 0x4 virtual true final false
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize addr 0x2d61a54 size 0x50 virtual true final false
  inline void OnAfterDeserialize();

  /// @brief Method PreserveSpriteAspectRatio addr 0x2d61aa4 size 0x158 virtual false final false
  inline void PreserveSpriteAspectRatio(ByRef<::UnityEngine::Rect> rect, ::UnityEngine::Vector2 spriteSize);

  /// @brief Method GetDrawingDimensions addr 0x2d61bfc size 0x484 virtual false final false
  inline ::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);

  /// @brief Method SetNativeSize addr 0x2d62080 size 0x164 virtual true final false
  inline void SetNativeSize();

  /// @brief Method OnPopulateMesh addr 0x2d621e4 size 0x144 virtual true final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method TrackSprite addr 0x2d60eac size 0xec virtual false final false
  inline void TrackSprite();

  /// @brief Method OnEnable addr 0x2d67bec size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2d67c08 size 0x74 virtual true final false
  inline void OnDisable();

  /// @brief Method UpdateMaterial addr 0x2d67cfc size 0xf4 virtual true final false
  inline void UpdateMaterial();

  /// @brief Method OnCanvasHierarchyChanged addr 0x2d67df0 size 0x108 virtual true final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method GenerateSimpleSprite addr 0x2d62328 size 0xb24 virtual false final false
  inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateSprite addr 0x2d62e4c size 0x5f0 virtual false final false
  inline void GenerateSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateSlicedSprite addr 0x2d6343c size 0x850 virtual false final false
  inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GenerateTiledSprite addr 0x2d63c8c size 0x29d8 virtual false final false
  inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method AddQuad addr 0x2d681ac size 0xe4 virtual false final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions, ::UnityEngine::Color32 color,
                             ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs);

  /// @brief Method AddQuad addr 0x2d68058 size 0x154 virtual false final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin,
                             ::UnityEngine::Vector2 uvMax);

  /// @brief Method GetAdjustedBorders addr 0x2d67ef8 size 0x160 virtual false final false
  inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect);

  /// @brief Method GenerateFilledSprite addr 0x2d66664 size 0x1428 virtual false final false
  inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);

  /// @brief Method RadialCut addr 0x2d68290 size 0x120 virtual false final false
  static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv, float_t fill, bool invert,
                               int32_t corner);

  /// @brief Method RadialCut addr 0x2d683b0 size 0x3ec virtual false final false
  static inline void RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner);

  /// @brief Method CalculateLayoutInputHorizontal addr 0x2d6879c size 0x4 virtual true final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical addr 0x2d687a0 size 0x4 virtual true final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method get_minWidth addr 0x2d687a4 size 0x8 virtual true final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredWidth addr 0x2d687ac size 0xe4 virtual true final false
  inline float_t get_preferredWidth();

  /// @brief Method get_flexibleWidth addr 0x2d68890 size 0x8 virtual true final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_minHeight addr 0x2d68898 size 0x8 virtual true final false
  inline float_t get_minHeight();

  /// @brief Method get_preferredHeight addr 0x2d688a0 size 0xe4 virtual true final false
  inline float_t get_preferredHeight();

  /// @brief Method get_flexibleHeight addr 0x2d68984 size 0x8 virtual true final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_layoutPriority addr 0x2d6898c size 0x8 virtual true final false
  inline int32_t get_layoutPriority();

  /// @brief Method IsRaycastLocationValid addr 0x2d68994 size 0x38c virtual true final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera);

  /// @brief Method MapCoordinate addr 0x2d68d20 size 0x340 virtual false final false
  inline ::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2 local, ::UnityEngine::Rect rect);

  /// @brief Method RebuildImage addr 0x2d69060 size 0x1a8 virtual false final false
  static inline void RebuildImage(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method TrackImage addr 0x2d67a8c size 0x160 virtual false final false
  static inline void TrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method UnTrackImage addr 0x2d67c7c size 0x80 virtual false final false
  static inline void UnTrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method OnDidApplyAnimationProperties addr 0x2d69208 size 0x38 virtual true final false
  inline void OnDidApplyAnimationProperties();

  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image(Image&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image(Image const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image();

public:
  /// @brief Field m_Sprite, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___m_Sprite;

  /// @brief Field m_OverrideSprite, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___m_OverrideSprite;

  /// @brief Field m_Type, offset: 0xe0, size: 0x4, def value: None
  ::UnityEngine::UI::__Image__Type ___m_Type;

  /// @brief Field m_PreserveAspect, offset: 0xe4, size: 0x1, def value: None
  bool ___m_PreserveAspect;

  /// @brief Field m_FillCenter, offset: 0xe5, size: 0x1, def value: None
  bool ___m_FillCenter;

  /// @brief Field m_FillMethod, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::UI::__Image__FillMethod ___m_FillMethod;

  /// @brief Field m_FillAmount, offset: 0xec, size: 0x4, def value: None
  float_t ___m_FillAmount;

  /// @brief Field m_FillClockwise, offset: 0xf0, size: 0x1, def value: None
  bool ___m_FillClockwise;

  /// @brief Field m_FillOrigin, offset: 0xf4, size: 0x4, def value: None
  int32_t ___m_FillOrigin;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset: 0xf8, size: 0x4, def value: None
  float_t ___m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_Tracked, offset: 0xfc, size: 0x1, def value: None
  bool ___m_Tracked;

  /// @brief Field m_UseSpriteMesh, offset: 0xfd, size: 0x1, def value: None
  bool ___m_UseSpriteMesh;

  /// @brief Field m_PixelsPerUnitMultiplier, offset: 0x100, size: 0x4, def value: None
  float_t ___m_PixelsPerUnitMultiplier;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset: 0x104, size: 0x4, def value: None
  float_t ___m_CachedReferencePixelsPerUnit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__FillMethod, "UnityEngine.UI", "Image/FillMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin180, "UnityEngine.UI", "Image/Origin180");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin360, "UnityEngine.UI", "Image/Origin360");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin90, "UnityEngine.UI", "Image/Origin90");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__OriginHorizontal, "UnityEngine.UI", "Image/OriginHorizontal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Type, "UnityEngine.UI", "Image/Type");
NEED_NO_BOX(::UnityEngine::UI::Image);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image*, "UnityEngine.UI", "Image");
