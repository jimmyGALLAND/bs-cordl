#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerCategory)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerCategory;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerCategory);
// Type: Unity.Profiling::ProfilerCategory
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: Some(0) }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::Unity.Profiling::ProfilerCategory
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerCategory {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field m_CategoryId, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_CategoryId, put=__cordl_internal_set_m_CategoryId)) uint16_t  m_CategoryId;

/// @brief Method ToString, addr 0x47cd52c, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint16_t const& __cordl_internal_get_m_CategoryId() const;

constexpr uint16_t& __cordl_internal_get_m_CategoryId() ;

constexpr void __cordl_internal_set_m_CategoryId(uint16_t  value) ;

/// @brief Method .ctor, addr 0x47cd328, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint16_t  category) ;

/// @brief Method get_Name, addr 0x47cd330, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Scripts, addr 0x47cd530, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerCategory get_Scripts() ;

/// @brief Method op_Implicit, addr 0x47cd538, size 0x4, virtual false, abstract: false, final false
static inline uint16_t op_Implicit_uint16_t(::Unity::Profiling::ProfilerCategory  category) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerCategory() ;

// Ctor Parameters [CppParam { name: "m_CategoryId", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ProfilerCategory(uint16_t  m_CategoryId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_CategoryId_padding[0x0];
/// @brief Field m_CategoryId, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___m_CategoryId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_CategoryId_padding_forAlignment[0x0];
/// @brief Field m_CategoryId, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___m_CategoryId_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerCategory, 0x2>, "Size mismatch!");

} // namespace end def Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerCategory, "Unity.Profiling", "ProfilerCategory");
