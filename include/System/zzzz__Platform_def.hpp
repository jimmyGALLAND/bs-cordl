#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
// Forward declare root types
namespace System {
class Platform;
}
// Write type traits
MARK_REF_PTR_T(::System::Platform);
// Type: System::Platform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8898))
// CS Name: ::System::Platform*
class CORDL_TYPE Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkedOS, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_checkedOS, put = setStaticF_checkedOS)) bool checkedOS;

  /// @brief Field isMacOS, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isMacOS, put = setStaticF_isMacOS)) bool isMacOS;

  /// @brief Field isAix, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isAix, put = setStaticF_isAix)) bool isAix;

  /// @brief Field isIBMi, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isIBMi, put = setStaticF_isIBMi)) bool isIBMi;

  /// @brief Field isFreeBSD, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isFreeBSD, put = setStaticF_isFreeBSD)) bool isFreeBSD;

  /// @brief Field isOpenBSD, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isOpenBSD, put = setStaticF_isOpenBSD)) bool isOpenBSD;

  static inline void setStaticF_checkedOS(bool value);

  static inline bool getStaticF_checkedOS();

  static inline void setStaticF_isMacOS(bool value);

  static inline bool getStaticF_isMacOS();

  static inline void setStaticF_isAix(bool value);

  static inline bool getStaticF_isAix();

  static inline void setStaticF_isIBMi(bool value);

  static inline bool getStaticF_isIBMi();

  static inline void setStaticF_isFreeBSD(bool value);

  static inline bool getStaticF_isFreeBSD();

  static inline void setStaticF_isOpenBSD(bool value);

  static inline bool getStaticF_isOpenBSD();

  /// @brief Method uname addr 0x294d900 size 0x7c virtual false final false
  static inline int32_t uname(void* buf);

  /// @brief Method CheckOS addr 0x294d97c size 0x20c virtual false final false
  static inline void CheckOS();

  /// @brief Method get_IsMacOS addr 0x294db88 size 0xe0 virtual false final false
  static inline bool get_IsMacOS();

  /// @brief Method get_IsFreeBSD addr 0x294dc68 size 0x5c virtual false final false
  static inline bool get_IsFreeBSD();

  /// @brief Method get_IsOpenBSD addr 0x294dcc4 size 0x5c virtual false final false
  static inline bool get_IsOpenBSD();

  /// @brief Method get_IsIBMi addr 0x294dd20 size 0x5c virtual false final false
  static inline bool get_IsIBMi();

  /// @brief Method get_IsAix addr 0x294dd7c size 0x5c virtual false final false
  static inline bool get_IsAix();

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Platform(Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Platform(Platform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Platform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Platform, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Platform);
DEFINE_IL2CPP_ARG_TYPE(::System::Platform*, "System", "Platform");
