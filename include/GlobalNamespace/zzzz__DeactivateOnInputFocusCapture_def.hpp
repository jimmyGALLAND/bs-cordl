#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateOnInputFocusCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeactivateOnInputFocusCapture)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateOnInputFocusCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateOnInputFocusCapture);
// Type: ::DeactivateOnInputFocusCapture
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DeactivateOnInputFocusCapture*
class CORDL_TYPE DeactivateOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _vrPlatformHelper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrPlatformHelper, put=__cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

 __declspec(property(get=get_loggerPrefix)) ::StringW  loggerPrefix;

/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr operator  ::GlobalNamespace::IVerboseLogger*() noexcept;

/// @brief Method ActivateGameObject, addr 0x393e31c, size 0x198, virtual false, abstract: false, final false
inline void ActivateGameObject() ;

/// @brief Method DeactivateGameObject, addr 0x393dd58, size 0x19c, virtual false, abstract: false, final false
inline void DeactivateGameObject() ;

/// @brief Method HandleInputFocusCaptured, addr 0x393e09c, size 0x140, virtual false, abstract: false, final false
inline void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased, addr 0x393e1dc, size 0x140, virtual false, abstract: false, final false
inline void HandleInputFocusReleased() ;

/// @brief Method Init, addr 0x393db3c, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::IVRPlatformHelper*  vrPlatformHelper) ;

static inline ::GlobalNamespace::DeactivateOnInputFocusCapture* New_ctor() ;

/// @brief Method OnDestroy, addr 0x393def4, size 0x1a8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x393dd54, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x393db44, size 0x210, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

/// @brief Method .ctor, addr 0x393e4b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_loggerPrefix, addr 0x393dafc, size 0x40, virtual true, abstract: false, final true
inline ::StringW get_loggerPrefix() ;

/// @brief Convert to "::GlobalNamespace::IVerboseLogger"
constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeactivateOnInputFocusCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture const& ) = delete;

/// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IVRPlatformHelper*  ____vrPlatformHelper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateOnInputFocusCapture, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateOnInputFocusCapture, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateOnInputFocusCapture*, "", "DeactivateOnInputFocusCapture");
