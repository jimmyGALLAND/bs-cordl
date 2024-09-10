#pragma once
// IWYU pragma private; include "System/Text/EncoderReplacementFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderReplacementFallbackBuffer)
namespace System::Text {
class EncoderReplacementFallback;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderReplacementFallbackBuffer);
// Type: System.Text::EncoderReplacementFallbackBuffer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::EncoderReplacementFallbackBuffer*
class CORDL_TYPE EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
// Declarations
 __declspec(property(get=get_Remaining)) int32_t  Remaining;

/// @brief Field _fallbackCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallbackCount, put=__cordl_internal_set__fallbackCount)) int32_t  _fallbackCount;

/// @brief Field _fallbackIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallbackIndex, put=__cordl_internal_set__fallbackIndex)) int32_t  _fallbackIndex;

/// @brief Field _strDefault, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__strDefault, put=__cordl_internal_set__strDefault)) ::StringW  _strDefault;

/// @brief Method Fallback, addr 0x3be9f68, size 0x140, virtual true, abstract: false, final false
inline bool Fallback(char16_t  charUnknown, int32_t  index) ;

/// @brief Method Fallback, addr 0x3bea0a8, size 0x210, virtual true, abstract: false, final false
inline bool Fallback(char16_t  charUnknownHigh, char16_t  charUnknownLow, int32_t  index) ;

/// @brief Method GetNextChar, addr 0x3bea2b8, size 0x50, virtual true, abstract: false, final false
inline char16_t GetNextChar() ;

/// @brief Method MovePrevious, addr 0x3bea308, size 0x30, virtual true, abstract: false, final false
inline bool MovePrevious() ;

static inline ::System::Text::EncoderReplacementFallbackBuffer* New_ctor(::System::Text::EncoderReplacementFallback*  fallback) ;

/// @brief Method Reset, addr 0x3bea344, size 0x14, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get__fallbackCount() const;

constexpr int32_t& __cordl_internal_get__fallbackCount() ;

constexpr int32_t const& __cordl_internal_get__fallbackIndex() const;

constexpr int32_t& __cordl_internal_get__fallbackIndex() ;

constexpr ::StringW const& __cordl_internal_get__strDefault() const;

constexpr ::StringW& __cordl_internal_get__strDefault() ;

constexpr void __cordl_internal_set__fallbackCount(int32_t  value) ;

constexpr void __cordl_internal_set__fallbackIndex(int32_t  value) ;

constexpr void __cordl_internal_set__strDefault(::StringW  value) ;

/// @brief Method .ctor, addr 0x3be9e64, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::System::Text::EncoderReplacementFallback*  fallback) ;

/// @brief Method get_Remaining, addr 0x3bea338, size 0xc, virtual true, abstract: false, final false
inline int32_t get_Remaining() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncoderReplacementFallbackBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer const& ) = delete;

/// @brief Field _strDefault, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____strDefault;

/// @brief Field _fallbackCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____fallbackCount;

/// @brief Field _fallbackIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____fallbackIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderReplacementFallbackBuffer, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____strDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackIndex) == 0x3c, "Offset mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::EncoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallbackBuffer*, "System.Text", "EncoderReplacementFallbackBuffer");
