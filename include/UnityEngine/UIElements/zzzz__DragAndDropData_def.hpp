#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DragAndDropData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DragAndDropData);
// Type: UnityEngine.UIElements::DragAndDropData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DragAndDropData*
class CORDL_TYPE DragAndDropData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_source)) ::System::Object*  source;

/// @brief Method GetGenericData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetGenericData(::StringW  key) ;

static inline ::UnityEngine::UIElements::DragAndDropData* New_ctor() ;

/// @brief Method .ctor, addr 0x4982aa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_source, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_source() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DragAndDropData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DragAndDropData(DragAndDropData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DragAndDropData(DragAndDropData const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropData, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropData*, "UnityEngine.UIElements", "DragAndDropData");
