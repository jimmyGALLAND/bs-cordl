#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2Constants)
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class BZip2Constants;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::BZip2Constants);
// Type: Org.BouncyCastle.Apache.Bzip2::BZip2Constants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1876))
// CS Name: ::Org.BouncyCastle.Apache.Bzip2::BZip2Constants*
class CORDL_TYPE BZip2Constants : public ::System::Object {
public:
  // Declarations
  /// @brief Field rNums, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rNums, put = setStaticF_rNums))::ArrayW<int32_t, ::Array<int32_t>*> rNums;

  static inline void setStaticF_rNums(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_rNums();

  static inline ::Org::BouncyCastle::Apache::Bzip2::BZip2Constants* New_ctor();

  /// @brief Method .ctor addr 0x11876a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BZip2Constants(BZip2Constants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BZip2Constants(BZip2Constants const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BZip2Constants();

public:
  /// @brief Field baseBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t baseBlockSize{ static_cast<int32_t>(0x186a0) };

  /// @brief Field MAX_ALPHA_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t MAX_ALPHA_SIZE{ static_cast<int32_t>(0x102) };

  /// @brief Field MAX_CODE_LEN offset 0xffffffff size 0x4
  static constexpr int32_t MAX_CODE_LEN{ static_cast<int32_t>(0x17) };

  /// @brief Field RUNA offset 0xffffffff size 0x4
  static constexpr int32_t RUNA{ static_cast<int32_t>(0x0) };

  /// @brief Field RUNB offset 0xffffffff size 0x4
  static constexpr int32_t RUNB{ static_cast<int32_t>(0x1) };

  /// @brief Field N_GROUPS offset 0xffffffff size 0x4
  static constexpr int32_t N_GROUPS{ static_cast<int32_t>(0x6) };

  /// @brief Field G_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t G_SIZE{ static_cast<int32_t>(0x32) };

  /// @brief Field N_ITERS offset 0xffffffff size 0x4
  static constexpr int32_t N_ITERS{ static_cast<int32_t>(0x4) };

  /// @brief Field MAX_SELECTORS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_SELECTORS{ static_cast<int32_t>(0x4652) };

  /// @brief Field NUM_OVERSHOOT_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t NUM_OVERSHOOT_BYTES{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::BZip2Constants, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::BZip2Constants);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::BZip2Constants*, "Org.BouncyCastle.Apache.Bzip2", "BZip2Constants");
