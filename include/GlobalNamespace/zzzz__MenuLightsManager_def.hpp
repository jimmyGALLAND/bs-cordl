#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuLightsManager)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__4;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuLightsManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuLightsManager___Start_d__4);
// Type: ::<Start>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4867))
// CS Name: ::MenuLightsManager::<Start>d__4*
class CORDL_TYPE __MenuLightsManager___Start_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuLightsManager* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MenuLightsManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuLightsManager* value);

  static inline ::GlobalNamespace::__MenuLightsManager___Start_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x239a328 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x239a7ac size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x239a7b0 size 0xcc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x239a87c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x239a884 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x239a8c4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuLightsManager___Start_d__4(__MenuLightsManager___Start_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuLightsManager___Start_d__4(__MenuLightsManager___Start_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuLightsManager___Start_d__4();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuLightsManager___Start_d__4, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuLightsManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4868))
// CS Name: ::MenuLightsManager*
class CORDL_TYPE MenuLightsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__4 = ::GlobalNamespace::__MenuLightsManager___Start_d__4;

  /// @brief Field _defaultPreset, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultPreset, put = __set__defaultPreset))::GlobalNamespace::MenuLightsPresetSO* _defaultPreset;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __get__smooth, put = __set__smooth)) float_t _smooth;

  /// @brief Field _lightManager, offset 0x28, size 0x8
  __declspec(property(get = __get__lightManager, put = __set__lightManager))::GlobalNamespace::LightWithIdManager* _lightManager;

  /// @brief Field _preset, offset 0x30, size 0x8
  __declspec(property(get = __get__preset, put = __set__preset))::GlobalNamespace::MenuLightsPresetSO* _preset;

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__defaultPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__defaultPreset() const;

  constexpr void __set__defaultPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr float_t& __get__smooth();

  constexpr float_t const& __get__smooth() const;

  constexpr void __set__smooth(float_t value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightManager() const;

  constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__preset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__preset() const;

  constexpr void __set__preset(::GlobalNamespace::MenuLightsPresetSO* value);

  /// @brief Method Start addr 0x239a2c0 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method Update addr 0x239a350 size 0x40 virtual false final false
  inline void Update();

  /// @brief Method IsColorVeryCloseToColor addr 0x239a4f4 size 0x44 virtual false final false
  inline bool IsColorVeryCloseToColor(::UnityEngine::Color color0, ::UnityEngine::Color color1);

  /// @brief Method SetColor addr 0x239a538 size 0x1c virtual false final false
  inline void SetColor(int32_t lightId, ::UnityEngine::Color color);

  /// @brief Method CurrentColorForID addr 0x239a554 size 0x20 virtual false final false
  inline ::UnityEngine::Color CurrentColorForID(int32_t lightId);

  /// @brief Method SetColorsFromPreset addr 0x239a390 size 0x164 virtual false final false
  inline bool SetColorsFromPreset(::GlobalNamespace::MenuLightsPresetSO* preset, float_t interpolationFactor);

  /// @brief Method RefreshLightsDictForPreset addr 0x239a574 size 0xe0 virtual false final false
  inline void RefreshLightsDictForPreset(::GlobalNamespace::MenuLightsPresetSO* preset);

  /// @brief Method SetColorPreset addr 0x239a654 size 0xbc virtual false final false
  inline void SetColorPreset(::GlobalNamespace::MenuLightsPresetSO* preset, bool animated);

  /// @brief Method RefreshColors addr 0x239a710 size 0x8c virtual false final false
  inline void RefreshColors();

  static inline ::GlobalNamespace::MenuLightsManager* New_ctor();

  /// @brief Method .ctor addr 0x239a79c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuLightsManager(MenuLightsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuLightsManager(MenuLightsManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuLightsManager();

public:
  /// @brief Field _defaultPreset, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____defaultPreset;

  /// @brief Field _smooth, offset: 0x20, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _lightManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightManager;

  /// @brief Field _preset, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____preset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuLightsManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsManager*, "", "MenuLightsManager");
NEED_NO_BOX(::GlobalNamespace::__MenuLightsManager___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuLightsManager___Start_d__4*, "", "MenuLightsManager/<Start>d__4");
