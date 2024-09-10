#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultDragAndDropClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultDragAndDropClient)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class DragAndDropData;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultDragAndDropClient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultDragAndDropClient);
// Type: UnityEngine.UIElements::DefaultDragAndDropClient
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DefaultDragAndDropClient*
class CORDL_TYPE DefaultDragAndDropClient : public ::UnityEngine::UIElements::DragAndDropData {
public:
// Declarations
 __declspec(property(get=get_data)) ::UnityEngine::UIElements::DragAndDropData*  data;

/// @brief Field m_DraggedInfoLabel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DraggedInfoLabel, put=__cordl_internal_set_m_DraggedInfoLabel)) ::UnityEngine::UIElements::Label*  m_DraggedInfoLabel;

/// @brief Field m_GenericData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GenericData, put=__cordl_internal_set_m_GenericData)) ::System::Collections::Hashtable*  m_GenericData;

/// @brief Field m_UnityObjectReferences, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnityObjectReferences, put=__cordl_internal_set_m_UnityObjectReferences)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*  m_UnityObjectReferences;

/// @brief Field m_VisualMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VisualMode, put=__cordl_internal_set_m_VisualMode)) ::UnityEngine::UIElements::DragVisualMode  m_VisualMode;

 __declspec(property(get=get_source)) ::System::Object*  source;

/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDrop"
constexpr operator  ::UnityEngine::UIElements::IDragAndDrop*() noexcept;

/// @brief Method AcceptDrag, addr 0x4982a4c, size 0x4, virtual true, abstract: false, final true
inline void AcceptDrag() ;

/// @brief Method DragCleanup, addr 0x4982a58, size 0x44, virtual true, abstract: false, final true
inline void DragCleanup() ;

/// @brief Method GetGenericData, addr 0x498219c, size 0x64, virtual true, abstract: false, final false
inline ::System::Object* GetGenericData(::StringW  key) ;

static inline ::UnityEngine::UIElements::DefaultDragAndDropClient* New_ctor() ;

/// @brief Method SetVisualMode, addr 0x4982a50, size 0x8, virtual true, abstract: false, final true
inline void SetVisualMode(::UnityEngine::UIElements::DragVisualMode  mode) ;

/// @brief Method StartDrag, addr 0x4982200, size 0x6b8, virtual true, abstract: false, final true
inline void StartDrag(::UnityEngine::UIElements::StartDragArgs  args, ::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method UpdateDrag, addr 0x49828b8, size 0x194, virtual true, abstract: false, final true
inline void UpdateDrag(::UnityEngine::Vector3  pointerPosition) ;

constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_DraggedInfoLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_DraggedInfoLabel() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_GenericData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_m_GenericData() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_UnityObjectReferences() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_UnityObjectReferences() const;

constexpr ::UnityEngine::UIElements::DragVisualMode const& __cordl_internal_get_m_VisualMode() const;

constexpr ::UnityEngine::UIElements::DragVisualMode& __cordl_internal_get_m_VisualMode() ;

constexpr void __cordl_internal_set_m_DraggedInfoLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr void __cordl_internal_set_m_GenericData(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_m_UnityObjectReferences(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_VisualMode(::UnityEngine::UIElements::DragVisualMode  value) ;

/// @brief Method .ctor, addr 0x49820ec, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_data, addr 0x4982a9c, size 0x4, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::DragAndDropData* get_data() ;

/// @brief Method get_source, addr 0x498214c, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* get_source() ;

/// @brief Convert to "::UnityEngine::UIElements::IDragAndDrop"
constexpr ::UnityEngine::UIElements::IDragAndDrop* i___UnityEngine__UIElements__IDragAndDrop() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultDragAndDropClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultDragAndDropClient(DefaultDragAndDropClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultDragAndDropClient(DefaultDragAndDropClient const& ) = delete;

/// @brief Field m_GenericData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___m_GenericData;

/// @brief Field m_DraggedInfoLabel, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::Label*  ___m_DraggedInfoLabel;

/// @brief Field m_VisualMode, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::UIElements::DragVisualMode  ___m_VisualMode;

/// @brief Field m_UnityObjectReferences, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*  ___m_UnityObjectReferences;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultDragAndDropClient, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultDragAndDropClient, ___m_GenericData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultDragAndDropClient, ___m_DraggedInfoLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultDragAndDropClient, ___m_VisualMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultDragAndDropClient, ___m_UnityObjectReferences) == 0x28, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DefaultDragAndDropClient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultDragAndDropClient*, "UnityEngine.UIElements", "DefaultDragAndDropClient");
