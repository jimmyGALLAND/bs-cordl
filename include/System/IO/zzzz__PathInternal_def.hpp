#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathInternal)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class PathInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::PathInternal);
// Type: System.IO::PathInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3567))
// CS Name: ::System.IO::PathInternal*
class CORDL_TYPE PathInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_isCaseSensitive, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_isCaseSensitive, put = setStaticF_s_isCaseSensitive)) bool s_isCaseSensitive;

  static inline void setStaticF_s_isCaseSensitive(bool value);

  static inline bool getStaticF_s_isCaseSensitive();

  /// @brief Method GetRootLength addr 0x24ff870 size 0x7c virtual false final false
  static inline int32_t GetRootLength(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method IsDirectorySeparator addr 0x24ff8ec size 0x10 virtual false final false
  static inline bool IsDirectorySeparator(char16_t c);

  /// @brief Method EndsInDirectorySeparator addr 0x24ff8fc size 0x88 virtual false final false
  static inline bool EndsInDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method StartsWithDirectorySeparator addr 0x24ff984 size 0x7c virtual false final false
  static inline bool StartsWithDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method TrimEndingDirectorySeparator addr 0x24ffa00 size 0x140 virtual false final false
  static inline ::StringW TrimEndingDirectorySeparator(::StringW path);

  /// @brief Method TrimEndingDirectorySeparator addr 0x24ffbbc size 0xe0 virtual false final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method IsRoot addr 0x24ffb40 size 0x7c virtual false final false
  static inline bool IsRoot(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method get_IsCaseSensitive addr 0x24ffc9c size 0x58 virtual false final false
  static inline bool get_IsCaseSensitive();

  /// @brief Method GetIsCaseSensitive addr 0x24ffcf4 size 0x304 virtual false final false
  static inline bool GetIsCaseSensitive();

  /// @brief Method IsPartiallyQualified addr 0x25001b4 size 0x8 virtual false final false
  static inline bool IsPartiallyQualified(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathInternal(PathInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathInternal(PathInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathInternal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::PathInternal, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::PathInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathInternal*, "System.IO", "PathInternal");
