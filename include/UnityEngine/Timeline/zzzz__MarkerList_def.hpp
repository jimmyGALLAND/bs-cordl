#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MarkerList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkerList)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct MarkerList;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::MarkerList);
// Type: UnityEngine.Timeline::MarkerList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 34, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::UnityEngine.Timeline::MarkerList
struct CORDL_TYPE MarkerList {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Timeline::IMarker*  Item[];

 __declspec(property(get=get_markers)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markers;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method Add, addr 0x47891c8, size 0xe8, virtual false, abstract: false, final false
inline void Add(::UnityEngine::ScriptableObject*  item) ;

/// @brief Method BuildCache, addr 0x4793a8c, size 0x2d0, virtual false, abstract: false, final false
inline void BuildCache() ;

/// @brief Method Clear, addr 0x4789150, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x4793d5c, size 0x58, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::ScriptableObject*  item) ;

/// @brief Method CreateMarker, addr 0x4787f90, size 0x2f8, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type*  type, double_t  time, ::UnityEngine::Timeline::TrackAsset*  owner) ;

/// @brief Method GetMarkers, addr 0x4788470, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers() ;

/// @brief Method GetRawMarkerList, addr 0x4793db4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* GetRawMarkerList() ;

/// @brief Method HasNotifications, addr 0x478c558, size 0x18, virtual false, abstract: false, final false
inline bool HasNotifications() ;

/// @brief Method Remove, addr 0x47892e4, size 0xbc, virtual false, abstract: false, final false
inline bool Remove(::UnityEngine::ScriptableObject*  item, ::UnityEngine::Timeline::TimelineAsset*  timelineAsset, ::UnityEngine::Playables::PlayableAsset*  thingToDirty) ;

/// @brief Method Remove, addr 0x4788290, size 0x1e0, virtual false, abstract: false, final false
inline bool Remove(::UnityEngine::Timeline::IMarker*  item) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x4793dc0, size 0xc, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x4793dbc, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0x478c570, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0x4788488, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x47884e0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::IMarker* get_Item(int32_t  idx) ;

/// @brief Method get_markers, addr 0x4793a74, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* get_markers() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

// Ctor Parameters []
// @brief default ctor
constexpr MarkerList() ;

// Ctor Parameters [CppParam { name: "m_Objects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*", modifiers: "", def_value: None }, CppParam { name: "m_Cache", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: None }, CppParam { name: "m_CacheDirty", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_HasNotifications", ty: "bool", modifiers: "", def_value: None }]
constexpr MarkerList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  m_Objects, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  m_Cache, bool  m_CacheDirty, bool  m_HasNotifications) noexcept;

/// @brief Field m_Objects, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*  m_Objects;

/// @brief Field m_Cache, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  m_Cache;

/// @brief Field m_CacheDirty, offset: 0x10, size: 0x1, def value: None
 bool  m_CacheDirty;

/// @brief Field m_HasNotifications, offset: 0x11, size: 0x1, def value: None
 bool  m_HasNotifications;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MarkerList, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::MarkerList, m_Objects) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::MarkerList, m_Cache) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::MarkerList, m_CacheDirty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::MarkerList, m_HasNotifications) == 0x11, "Offset mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MarkerList, "UnityEngine.Timeline", "MarkerList");
