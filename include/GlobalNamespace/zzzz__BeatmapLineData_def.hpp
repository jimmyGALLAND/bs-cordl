#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLineData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLineData)
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapLineData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLineData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLineData);
// Type: ::BeatmapLineData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLineData*
class CORDL_TYPE BeatmapLineData : public ::System::Object {
public:
// Declarations
/// @brief Field _beatmapObjectsData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapObjectsData, put=__cordl_internal_set__beatmapObjectsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  _beatmapObjectsData;

 __declspec(property(get=get_beatmapObjectsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>*  beatmapObjectsData;

/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapLineData"
constexpr operator  ::GlobalNamespace::IReadonlyBeatmapLineData*() noexcept;

/// @brief Method AddBeatmapObjectData, addr 0x22036f0, size 0xa4, virtual false, abstract: false, final false
inline void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData*  beatmapObjectData) ;

static inline ::GlobalNamespace::BeatmapLineData* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  beatmapObjectData) ;

static inline ::GlobalNamespace::BeatmapLineData* New_ctor(int32_t  initialCapacity) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*& __cordl_internal_get__beatmapObjectsData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*> const& __cordl_internal_get__beatmapObjectsData() const;

constexpr void __cordl_internal_set__beatmapObjectsData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  value) ;

/// @brief Method .ctor, addr 0x22036c8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  beatmapObjectData) ;

/// @brief Method .ctor, addr 0x2203640, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

/// @brief Method get_beatmapObjectsData, addr 0x2203638, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData() ;

/// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapLineData"
constexpr ::GlobalNamespace::IReadonlyBeatmapLineData* i___GlobalNamespace__IReadonlyBeatmapLineData() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapLineData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLineData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLineData(BeatmapLineData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLineData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLineData(BeatmapLineData const& ) = delete;

/// @brief Field _beatmapObjectsData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  ____beatmapObjectsData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLineData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLineData, ____beatmapObjectsData) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLineData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLineData*, "", "BeatmapLineData");
