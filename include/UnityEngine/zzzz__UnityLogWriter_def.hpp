#pragma once
// IWYU pragma private; include "UnityEngine/UnityLogWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLogWriter)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class UnityLogWriter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityLogWriter);
// Type: UnityEngine::UnityLogWriter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::UnityLogWriter*
class CORDL_TYPE UnityLogWriter : public ::System::IO::TextWriter {
public:
// Declarations
 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

/// @brief Method Init, addr 0x4809798, size 0x78, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::UnityEngine::UnityLogWriter* New_ctor() ;

/// @brief Method Write, addr 0x4809940, size 0x48, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0x48098fc, size 0x44, virtual true, abstract: false, final false
inline void Write(::StringW  s) ;

/// @brief Method Write, addr 0x4809870, size 0x8c, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteStringToUnityLog, addr 0x4809718, size 0x44, virtual false, abstract: false, final false
static inline void WriteStringToUnityLog(::StringW  s) ;

/// @brief Method WriteStringToUnityLogImpl, addr 0x480975c, size 0x3c, virtual false, abstract: false, final false
static inline void WriteStringToUnityLogImpl(::StringW  s) ;

/// @brief Method .ctor, addr 0x4809810, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Encoding, addr 0x4809868, size 0x8, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogWriter(UnityLogWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogWriter(UnityLogWriter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityLogWriter, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UnityLogWriter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityLogWriter*, "UnityEngine", "UnityLogWriter");
