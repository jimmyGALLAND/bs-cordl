#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDeleteResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDeleteResult);
// Type: Oculus.Platform.Models::AssetFileDeleteResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13419))
// CS Name: ::Oculus.Platform.Models::AssetFileDeleteResult*
class CORDL_TYPE AssetFileDeleteResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetFileId, offset 0x10, size 0x8
  __declspec(property(get = __get_AssetFileId, put = __set_AssetFileId)) uint64_t AssetFileId;

  /// @brief Field AssetId, offset 0x18, size 0x8
  __declspec(property(get = __get_AssetId, put = __set_AssetId)) uint64_t AssetId;

  /// @brief Field Filepath, offset 0x20, size 0x8
  __declspec(property(get = __get_Filepath, put = __set_Filepath))::StringW Filepath;

  /// @brief Field Success, offset 0x28, size 0x1
  __declspec(property(get = __get_Success, put = __set_Success)) bool Success;

  constexpr uint64_t& __get_AssetFileId();

  constexpr uint64_t const& __get_AssetFileId() const;

  constexpr void __set_AssetFileId(uint64_t value);

  constexpr uint64_t& __get_AssetId();

  constexpr uint64_t const& __get_AssetId() const;

  constexpr void __set_AssetId(uint64_t value);

  constexpr ::StringW& __get_Filepath();

  constexpr ::StringW const& __get_Filepath() const;

  constexpr void __set_Filepath(::StringW value);

  constexpr bool& __get_Success();

  constexpr bool const& __get_Success() const;

  constexpr void __set_Success(bool value);

  static inline ::Oculus::Platform::Models::AssetFileDeleteResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x27049c4 size 0xac virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDeleteResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileDeleteResult(AssetFileDeleteResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDeleteResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileDeleteResult(AssetFileDeleteResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileDeleteResult();

public:
  /// @brief Field AssetFileId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetFileId;

  /// @brief Field AssetId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field Filepath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Filepath;

  /// @brief Field Success, offset: 0x28, size: 0x1, def value: None
  bool ___Success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDeleteResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDeleteResult*, "Oculus.Platform.Models", "AssetFileDeleteResult");
