#pragma once
// IWYU pragma private; include "System/Drawing/KnownColorTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KnownColorTable)
namespace System::Drawing {
struct KnownColor;
}
// Forward declare root types
namespace System::Drawing {
class KnownColorTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Drawing::KnownColorTable);
// Type: System.Drawing::KnownColorTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Drawing {
// Is value type: false
// CS Name: ::System.Drawing::KnownColorTable*
class CORDL_TYPE KnownColorTable : public ::System::Object {
public:
// Declarations
/// @brief Field s_colorNameTable, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_colorNameTable, put=setStaticF_s_colorNameTable)) ::ArrayW<::StringW,::Array<::StringW>*>  s_colorNameTable;

/// @brief Field s_colorTable, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_colorTable, put=setStaticF_s_colorTable)) ::ArrayW<int32_t,::Array<int32_t>*>  s_colorTable;

/// @brief Method EnsureColorNameTable, addr 0x417de04, size 0x58, virtual false, abstract: false, final false
static inline void EnsureColorNameTable() ;

/// @brief Method EnsureColorTable, addr 0x417d1c8, size 0x58, virtual false, abstract: false, final false
static inline void EnsureColorTable() ;

/// @brief Method InitColorNameTable, addr 0x417de5c, size 0x13d8, virtual false, abstract: false, final false
static inline void InitColorNameTable() ;

/// @brief Method InitColorTable, addr 0x417d220, size 0xab0, virtual false, abstract: false, final false
static inline void InitColorTable() ;

/// @brief Method KnownColorToArgb, addr 0x417f234, size 0x70, virtual false, abstract: false, final false
static inline int32_t KnownColorToArgb(::System::Drawing::KnownColor  color) ;

/// @brief Method KnownColorToName, addr 0x417f2a4, size 0x70, virtual false, abstract: false, final false
static inline ::StringW KnownColorToName(::System::Drawing::KnownColor  color) ;

/// @brief Method UpdateSystemColors, addr 0x417dcd0, size 0x134, virtual false, abstract: false, final false
static inline void UpdateSystemColors(::ArrayW<int32_t,::Array<int32_t>*>  colorTable) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_colorNameTable() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_colorTable() ;

static inline void setStaticF_s_colorNameTable(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF_s_colorTable(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KnownColorTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KnownColorTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KnownColorTable(KnownColorTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnownColorTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnownColorTable(KnownColorTable const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Drawing::KnownColorTable, 0x10>, "Size mismatch!");

} // namespace end def System::Drawing
NEED_NO_BOX(::System::Drawing::KnownColorTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::KnownColorTable*, "System.Drawing", "KnownColorTable");
