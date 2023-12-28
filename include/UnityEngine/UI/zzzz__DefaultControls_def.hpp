#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultControls)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class __DefaultControls__IFactoryControls;
}
namespace UnityEngine::UI {
class __DefaultControls__DefaultRuntimeFactory;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
struct __DefaultControls__Resources;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
class DefaultControls;
}
namespace UnityEngine::UI {
class __DefaultControls__DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class __DefaultControls__IFactoryControls;
}
namespace UnityEngine::UI {
struct __DefaultControls__Resources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::DefaultControls);
MARK_REF_PTR_T(::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory);
MARK_REF_PTR_T(::UnityEngine::UI::__DefaultControls__IFactoryControls);
MARK_VAL_T(::UnityEngine::UI::__DefaultControls__Resources);
// Type: ::IFactoryControls
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13029))
// CS Name: ::DefaultControls::IFactoryControls*
class CORDL_TYPE __DefaultControls__IFactoryControls {
public:
  // Declarations
  /// @brief Method CreateGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::GameObject* CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultControls__IFactoryControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultControls__IFactoryControls(__DefaultControls__IFactoryControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultControls__IFactoryControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultControls__IFactoryControls(__DefaultControls__IFactoryControls const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
// Type: ::DefaultRuntimeFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13030))
// CS Name: ::DefaultControls::DefaultRuntimeFactory*
class CORDL_TYPE __DefaultControls__DefaultRuntimeFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::UnityEngine::UI::__DefaultControls__IFactoryControls* Default;

  /// @brief Convert operator to "::UnityEngine::UI::__DefaultControls__IFactoryControls"
  constexpr operator ::UnityEngine::UI::__DefaultControls__IFactoryControls*() noexcept;

  static inline void setStaticF_Default(::UnityEngine::UI::__DefaultControls__IFactoryControls* value);

  static inline ::UnityEngine::UI::__DefaultControls__IFactoryControls* getStaticF_Default();

  /// @brief Method CreateGameObject addr 0x2d58058 size 0x74 virtual true final true
  inline ::UnityEngine::GameObject* CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  static inline ::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory* New_ctor();

  /// @brief Method .ctor addr 0x2d580cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultControls__DefaultRuntimeFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultControls__DefaultRuntimeFactory(__DefaultControls__DefaultRuntimeFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultControls__DefaultRuntimeFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultControls__DefaultRuntimeFactory(__DefaultControls__DefaultRuntimeFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultControls__DefaultRuntimeFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Resources
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13031))
// CS Name: ::DefaultControls::Resources
struct CORDL_TYPE __DefaultControls__Resources {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "standard", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "background", ty: "::UnityEngine::Sprite*", modifiers: "",
  // def_value: None }, CppParam { name: "inputField", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "knob", ty: "::UnityEngine::Sprite*", modifiers: "", def_value:
  // None }, CppParam { name: "checkmark", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "dropdown", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None },
  // CppParam { name: "mask", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }]
  constexpr __DefaultControls__Resources(::UnityEngine::Sprite* standard, ::UnityEngine::Sprite* background, ::UnityEngine::Sprite* inputField, ::UnityEngine::Sprite* knob,
                                         ::UnityEngine::Sprite* checkmark, ::UnityEngine::Sprite* dropdown, ::UnityEngine::Sprite* mask) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultControls__Resources();

  /// @brief Field standard, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Sprite* standard;

  /// @brief Field background, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Sprite* background;

  /// @brief Field inputField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Sprite* inputField;

  /// @brief Field knob, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* knob;

  /// @brief Field checkmark, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* checkmark;

  /// @brief Field dropdown, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* dropdown;

  /// @brief Field mask, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__DefaultControls__Resources, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::DefaultControls
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13032))
// CS Name: ::UnityEngine.UI::DefaultControls*
class CORDL_TYPE DefaultControls : public ::System::Object {
public:
  // Declarations
  using Resources = ::UnityEngine::UI::__DefaultControls__Resources;

  using DefaultRuntimeFactory = ::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory;

  using IFactoryControls = ::UnityEngine::UI::__DefaultControls__IFactoryControls;

  /// @brief Field m_CurrentFactory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_CurrentFactory, put = setStaticF_m_CurrentFactory))::UnityEngine::UI::__DefaultControls__IFactoryControls* m_CurrentFactory;

  /// @brief Field s_ThickElementSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ThickElementSize, put = setStaticF_s_ThickElementSize))::UnityEngine::Vector2 s_ThickElementSize;

  /// @brief Field s_ThinElementSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ThinElementSize, put = setStaticF_s_ThinElementSize))::UnityEngine::Vector2 s_ThinElementSize;

  /// @brief Field s_ImageElementSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ImageElementSize, put = setStaticF_s_ImageElementSize))::UnityEngine::Vector2 s_ImageElementSize;

  /// @brief Field s_DefaultSelectableColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_DefaultSelectableColor, put = setStaticF_s_DefaultSelectableColor))::UnityEngine::Color s_DefaultSelectableColor;

  /// @brief Field s_PanelColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_PanelColor, put = setStaticF_s_PanelColor))::UnityEngine::Color s_PanelColor;

  /// @brief Field s_TextColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_TextColor, put = setStaticF_s_TextColor))::UnityEngine::Color s_TextColor;

  static inline void setStaticF_m_CurrentFactory(::UnityEngine::UI::__DefaultControls__IFactoryControls* value);

  static inline ::UnityEngine::UI::__DefaultControls__IFactoryControls* getStaticF_m_CurrentFactory();

  static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize();

  static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize();

  static inline void setStaticF_s_ImageElementSize(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_s_ImageElementSize();

  static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor();

  static inline void setStaticF_s_PanelColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_s_PanelColor();

  static inline void setStaticF_s_TextColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_s_TextColor();

  /// @brief Method get_factory addr 0x2d53790 size 0x58 virtual false final false
  static inline ::UnityEngine::UI::__DefaultControls__IFactoryControls* get_factory();

  /// @brief Method CreateUIElementRoot addr 0x2d537e8 size 0x160 virtual false final false
  static inline ::UnityEngine::GameObject* CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method CreateUIObject addr 0x2d53948 size 0x128 virtual false final false
  static inline ::UnityEngine::GameObject* CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components);

  /// @brief Method SetDefaultTextValues addr 0x2d53b70 size 0xdc virtual false final false
  static inline void SetDefaultTextValues(::UnityEngine::UI::Text* lbl);

  /// @brief Method SetDefaultColorTransitionValues addr 0x2d53c4c size 0x10 virtual false final false
  static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider);

  /// @brief Method SetParentAndAlign addr 0x2d53a70 size 0x100 virtual false final false
  static inline void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent);

  /// @brief Method SetLayerRecursively addr 0x2d53c5c size 0xe4 virtual false final false
  static inline void SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer);

  /// @brief Method CreatePanel addr 0x2d53d40 size 0x2bc virtual false final false
  static inline ::UnityEngine::GameObject* CreatePanel(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateButton addr 0x2d54364 size 0x3ec virtual false final false
  static inline ::UnityEngine::GameObject* CreateButton(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateText addr 0x2d54750 size 0x1a0 virtual false final false
  static inline ::UnityEngine::GameObject* CreateText(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateImage addr 0x2d548f0 size 0x13c virtual false final false
  static inline ::UnityEngine::GameObject* CreateImage(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateRawImage addr 0x2d54a2c size 0x13c virtual false final false
  static inline ::UnityEngine::GameObject* CreateRawImage(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateSlider addr 0x2d54b68 size 0x6b4 virtual false final false
  static inline ::UnityEngine::GameObject* CreateSlider(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateScrollbar addr 0x2d5521c size 0x474 virtual false final false
  static inline ::UnityEngine::GameObject* CreateScrollbar(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateToggle addr 0x2d55690 size 0x578 virtual false final false
  static inline ::UnityEngine::GameObject* CreateToggle(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateInputField addr 0x2d55c08 size 0x620 virtual false final false
  static inline ::UnityEngine::GameObject* CreateInputField(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateDropdown addr 0x2d56228 size 0x1258 virtual false final false
  static inline ::UnityEngine::GameObject* CreateDropdown(::UnityEngine::UI::__DefaultControls__Resources resources);

  /// @brief Method CreateScrollView addr 0x2d57698 size 0x8e8 virtual false final false
  static inline ::UnityEngine::GameObject* CreateScrollView(::UnityEngine::UI::__DefaultControls__Resources resources);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultControls(DefaultControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultControls(DefaultControls const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultControls();

public:
  /// @brief Field kWidth offset 0xffffffff size 0x4
  static constexpr float_t kWidth{ 160.0 };

  /// @brief Field kThickHeight offset 0xffffffff size 0x4
  static constexpr float_t kThickHeight{ 30.0 };

  /// @brief Field kThinHeight offset 0xffffffff size 0x4
  static constexpr float_t kThinHeight{ 20.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::DefaultControls, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls*, "UnityEngine.UI", "DefaultControls");
NEED_NO_BOX(::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__DefaultControls__DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
NEED_NO_BOX(::UnityEngine::UI::__DefaultControls__IFactoryControls);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__DefaultControls__IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__DefaultControls__Resources, "UnityEngine.UI", "DefaultControls/Resources");
