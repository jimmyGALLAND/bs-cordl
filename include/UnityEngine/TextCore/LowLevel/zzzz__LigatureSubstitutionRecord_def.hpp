#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/LigatureSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LigatureSubstitutionRecord)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct LigatureSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord);
// Type: UnityEngine.TextCore.LowLevel::LigatureSubstitutionRecord
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::LigatureSubstitutionRecord
struct CORDL_TYPE LigatureSubstitutionRecord {
public:
// Declarations
 __declspec(property(get=get_componentGlyphIDs)) ::ArrayW<uint32_t,::Array<uint32_t>*>  componentGlyphIDs;

 __declspec(property(get=get_ligatureGlyphID)) uint32_t  ligatureGlyphID;

/// @brief Method get_componentGlyphIDs, addr 0x488d240, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t,::Array<uint32_t>*> get_componentGlyphIDs() ;

/// @brief Method get_ligatureGlyphID, addr 0x488d248, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_ligatureGlyphID() ;

// Ctor Parameters []
// @brief default ctor
constexpr LigatureSubstitutionRecord() ;

// Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LigatureSubstitutionRecord(::ArrayW<uint32_t,::Array<uint32_t>*>  m_ComponentGlyphIDs, uint32_t  m_LigatureGlyphID) noexcept;

/// @brief Field m_ComponentGlyphIDs, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  m_ComponentGlyphIDs;

/// @brief Field m_LigatureGlyphID, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_LigatureGlyphID;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, m_ComponentGlyphIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, m_LigatureGlyphID) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, "UnityEngine.TextCore.LowLevel", "LigatureSubstitutionRecord");
