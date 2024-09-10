#pragma once
// IWYU pragma private; include "Tayx/Graphy/Advanced/G_AdvancedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(G_AdvancedData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Advanced::G_AdvancedData);
// Type: Tayx.Graphy.Advanced::G_AdvancedData
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Advanced {
// Is value type: false
// CS Name: ::Tayx.Graphy.Advanced::G_AdvancedData*
class CORDL_TYPE G_AdvancedData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_backgroundImages, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_backgroundImages, put=__cordl_internal_set_m_backgroundImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  m_backgroundImages;

/// @brief Field m_currentModuleState, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_currentModuleState, put=__cordl_internal_set_m_currentModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState  m_currentModuleState;

/// @brief Field m_deltaTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_deltaTime, put=__cordl_internal_set_m_deltaTime)) float_t  m_deltaTime;

/// @brief Field m_gameWindowResolutionText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gameWindowResolutionText, put=__cordl_internal_set_m_gameWindowResolutionText)) ::UnityW<::UnityEngine::UI::Text>  m_gameWindowResolutionText;

/// @brief Field m_graphicsDeviceNameText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_graphicsDeviceNameText, put=__cordl_internal_set_m_graphicsDeviceNameText)) ::UnityW<::UnityEngine::UI::Text>  m_graphicsDeviceNameText;

/// @brief Field m_graphicsDeviceVersionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_graphicsDeviceVersionText, put=__cordl_internal_set_m_graphicsDeviceVersionText)) ::UnityW<::UnityEngine::UI::Text>  m_graphicsDeviceVersionText;

/// @brief Field m_graphicsMemorySizeText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_graphicsMemorySizeText, put=__cordl_internal_set_m_graphicsMemorySizeText)) ::UnityW<::UnityEngine::UI::Text>  m_graphicsMemorySizeText;

/// @brief Field m_graphyManager, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_graphyManager, put=__cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager>  m_graphyManager;

/// @brief Field m_operatingSystemText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_operatingSystemText, put=__cordl_internal_set_m_operatingSystemText)) ::UnityW<::UnityEngine::UI::Text>  m_operatingSystemText;

/// @brief Field m_previousModuleState, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_previousModuleState, put=__cordl_internal_set_m_previousModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState  m_previousModuleState;

/// @brief Field m_processorTypeText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_processorTypeText, put=__cordl_internal_set_m_processorTypeText)) ::UnityW<::UnityEngine::UI::Text>  m_processorTypeText;

/// @brief Field m_rectTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rectTransform, put=__cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  m_rectTransform;

/// @brief Field m_sb, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_sb, put=__cordl_internal_set_m_sb)) ::System::Text::StringBuilder*  m_sb;

/// @brief Field m_screenResolutionText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_screenResolutionText, put=__cordl_internal_set_m_screenResolutionText)) ::UnityW<::UnityEngine::UI::Text>  m_screenResolutionText;

/// @brief Field m_systemMemoryText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_systemMemoryText, put=__cordl_internal_set_m_systemMemoryText)) ::UnityW<::UnityEngine::UI::Text>  m_systemMemoryText;

/// @brief Field m_updateRate, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_updateRate, put=__cordl_internal_set_m_updateRate)) float_t  m_updateRate;

/// @brief Field m_windowStrings, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_windowStrings, put=__cordl_internal_set_m_windowStrings)) ::ArrayW<::StringW,::Array<::StringW>*>  m_windowStrings;

/// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
constexpr operator  ::Tayx::Graphy::UI::IModifiableState*() noexcept;

/// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
constexpr operator  ::Tayx::Graphy::UI::IMovable*() noexcept;

/// @brief Method Init, addr 0x443d988, size 0xcf0, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Tayx::Graphy::Advanced::G_AdvancedData* New_ctor() ;

/// @brief Method OnEnable, addr 0x4443868, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshParameters, addr 0x443f204, size 0x190, virtual false, abstract: false, final false
inline void RefreshParameters() ;

/// @brief Method RestorePreviousState, addr 0x443c92c, size 0xc, virtual false, abstract: false, final false
inline void RestorePreviousState() ;

/// @brief Method SetPosition, addr 0x443b2b0, size 0x7ac, virtual true, abstract: false, final true
inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition  newModulePosition) ;

/// @brief Method SetState, addr 0x443b210, size 0x78, virtual true, abstract: false, final true
inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState  state, bool  silentUpdate) ;

/// @brief Method Update, addr 0x444386c, size 0x2b8, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateParameters, addr 0x443eb28, size 0x198, virtual false, abstract: false, final false
inline void UpdateParameters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_m_backgroundImages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get_m_backgroundImages() const;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_currentModuleState() const;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_currentModuleState() ;

constexpr float_t const& __cordl_internal_get_m_deltaTime() const;

constexpr float_t& __cordl_internal_get_m_deltaTime() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_gameWindowResolutionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_gameWindowResolutionText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_graphicsDeviceNameText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_graphicsDeviceNameText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_graphicsDeviceVersionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_graphicsDeviceVersionText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_graphicsMemorySizeText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_graphicsMemorySizeText() ;

constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_operatingSystemText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_operatingSystemText() ;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_previousModuleState() const;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_previousModuleState() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_processorTypeText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_processorTypeText() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform() ;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_sb() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_m_sb() const;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_screenResolutionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_screenResolutionText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_systemMemoryText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_systemMemoryText() ;

constexpr float_t const& __cordl_internal_get_m_updateRate() const;

constexpr float_t& __cordl_internal_get_m_updateRate() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_m_windowStrings() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_m_windowStrings() ;

constexpr void __cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value) ;

constexpr void __cordl_internal_set_m_currentModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value) ;

constexpr void __cordl_internal_set_m_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_m_gameWindowResolutionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_graphicsDeviceNameText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_graphicsDeviceVersionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_graphicsMemorySizeText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager>  value) ;

constexpr void __cordl_internal_set_m_operatingSystemText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_previousModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value) ;

constexpr void __cordl_internal_set_m_processorTypeText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_m_screenResolutionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_systemMemoryText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_m_updateRate(float_t  value) ;

constexpr void __cordl_internal_set_m_windowStrings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x4443b24, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
constexpr ::Tayx::Graphy::UI::IModifiableState* i___Tayx__Graphy__UI__IModifiableState() noexcept;

/// @brief Convert to "::Tayx::Graphy::UI::IMovable"
constexpr ::Tayx::Graphy::UI::IMovable* i___Tayx__Graphy__UI__IMovable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr G_AdvancedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_AdvancedData(G_AdvancedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_AdvancedData(G_AdvancedData const& ) = delete;

/// @brief Field m_backgroundImages, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  ___m_backgroundImages;

/// @brief Field m_graphicsDeviceVersionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_graphicsDeviceVersionText;

/// @brief Field m_processorTypeText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_processorTypeText;

/// @brief Field m_operatingSystemText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_operatingSystemText;

/// @brief Field m_systemMemoryText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_systemMemoryText;

/// @brief Field m_graphicsDeviceNameText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_graphicsDeviceNameText;

/// @brief Field m_graphicsMemorySizeText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_graphicsMemorySizeText;

/// @brief Field m_screenResolutionText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_screenResolutionText;

/// @brief Field m_gameWindowResolutionText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___m_gameWindowResolutionText;

/// @brief Field m_updateRate, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_updateRate;

/// @brief Field m_graphyManager, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Tayx::Graphy::GraphyManager>  ___m_graphyManager;

/// @brief Field m_rectTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_rectTransform;

/// @brief Field m_deltaTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_deltaTime;

/// @brief Field m_sb, offset: 0x88, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___m_sb;

/// @brief Field m_previousModuleState, offset: 0x90, size: 0x4, def value: None
 ::Tayx::Graphy::__GraphyManager__ModuleState  ___m_previousModuleState;

/// @brief Field m_currentModuleState, offset: 0x94, size: 0x4, def value: None
 ::Tayx::Graphy::__GraphyManager__ModuleState  ___m_currentModuleState;

/// @brief Field m_windowStrings, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___m_windowStrings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Advanced::G_AdvancedData, 0xa0>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_backgroundImages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_graphicsDeviceVersionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_processorTypeText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_operatingSystemText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_systemMemoryText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_graphicsDeviceNameText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_graphicsMemorySizeText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_screenResolutionText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_gameWindowResolutionText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_updateRate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_graphyManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_rectTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_deltaTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_sb) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_previousModuleState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_currentModuleState) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Advanced::G_AdvancedData, ___m_windowStrings) == 0x98, "Offset mismatch!");

} // namespace end def Tayx::Graphy::Advanced
NEED_NO_BOX(::Tayx::Graphy::Advanced::G_AdvancedData);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Advanced::G_AdvancedData*, "Tayx.Graphy.Advanced", "G_AdvancedData");
