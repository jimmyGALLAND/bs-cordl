#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidityPreCompInfo)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ValidityPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::ValidityPreCompInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1539))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::ValidityPreCompInfo*
class CORDL_TYPE ValidityPreCompInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field failed, offset 0x10, size 0x1
  __declspec(property(get = __get_failed, put = __set_failed)) bool failed;

  /// @brief Field curveEquationPassed, offset 0x11, size 0x1
  __declspec(property(get = __get_curveEquationPassed, put = __set_curveEquationPassed)) bool curveEquationPassed;

  /// @brief Field orderPassed, offset 0x12, size 0x1
  __declspec(property(get = __get_orderPassed, put = __set_orderPassed)) bool orderPassed;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME))::StringW PRECOMP_NAME;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  constexpr bool& __get_failed();

  constexpr bool const& __get_failed() const;

  constexpr void __set_failed(bool value);

  constexpr bool& __get_curveEquationPassed();

  constexpr bool const& __get_curveEquationPassed() const;

  constexpr void __set_curveEquationPassed(bool value);

  constexpr bool& __get_orderPassed();

  constexpr bool const& __get_orderPassed() const;

  constexpr void __set_orderPassed(bool value);

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

  static inline ::StringW getStaticF_PRECOMP_NAME();

  /// @brief Method HasFailed addr 0x1037688 size 0x8 virtual false final false
  inline bool HasFailed();

  /// @brief Method ReportFailed addr 0x1037690 size 0xc virtual false final false
  inline void ReportFailed();

  /// @brief Method HasCurveEquationPassed addr 0x103769c size 0x8 virtual false final false
  inline bool HasCurveEquationPassed();

  /// @brief Method ReportCurveEquationPassed addr 0x10376a4 size 0xc virtual false final false
  inline void ReportCurveEquationPassed();

  /// @brief Method HasOrderPassed addr 0x10376b0 size 0x8 virtual false final false
  inline bool HasOrderPassed();

  /// @brief Method ReportOrderPassed addr 0x10376b8 size 0xc virtual false final false
  inline void ReportOrderPassed();

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo* New_ctor();

  /// @brief Method .ctor addr 0x1037724 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidityPreCompInfo(ValidityPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidityPreCompInfo(ValidityPreCompInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidityPreCompInfo();

public:
  /// @brief Field failed, offset: 0x10, size: 0x1, def value: None
  bool ___failed;

  /// @brief Field curveEquationPassed, offset: 0x11, size: 0x1, def value: None
  bool ___curveEquationPassed;

  /// @brief Field orderPassed, offset: 0x12, size: 0x1, def value: None
  bool ___orderPassed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "ValidityPreCompInfo");
