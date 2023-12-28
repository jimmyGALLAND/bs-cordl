#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CrlStoreSelector)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector);
// Type: Org.BouncyCastle.X509.Store::X509CrlStoreSelector
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1850))
// CS Name: ::Org.BouncyCastle.X509.Store::X509CrlStoreSelector*
class CORDL_TYPE X509CrlStoreSelector : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificateChecking, offset 0x10, size 0x8
  __declspec(property(get = __get_certificateChecking, put = __set_certificateChecking))::Org::BouncyCastle::X509::X509Certificate* certificateChecking;

  /// @brief Field dateAndTime, offset 0x18, size 0x8
  __declspec(property(get = __get_dateAndTime, put = __set_dateAndTime))::Org::BouncyCastle::Utilities::Date::DateTimeObject* dateAndTime;

  /// @brief Field issuers, offset 0x20, size 0x8
  __declspec(property(get = __get_issuers, put = __set_issuers))::System::Collections::ICollection* issuers;

  /// @brief Field maxCrlNumber, offset 0x28, size 0x8
  __declspec(property(get = __get_maxCrlNumber, put = __set_maxCrlNumber))::Org::BouncyCastle::Math::BigInteger* maxCrlNumber;

  /// @brief Field minCrlNumber, offset 0x30, size 0x8
  __declspec(property(get = __get_minCrlNumber, put = __set_minCrlNumber))::Org::BouncyCastle::Math::BigInteger* minCrlNumber;

  /// @brief Field attrCertChecking, offset 0x38, size 0x8
  __declspec(property(get = __get_attrCertChecking, put = __set_attrCertChecking))::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCertChecking;

  /// @brief Field completeCrlEnabled, offset 0x40, size 0x1
  __declspec(property(get = __get_completeCrlEnabled, put = __set_completeCrlEnabled)) bool completeCrlEnabled;

  /// @brief Field deltaCrlIndicatorEnabled, offset 0x41, size 0x1
  __declspec(property(get = __get_deltaCrlIndicatorEnabled, put = __set_deltaCrlIndicatorEnabled)) bool deltaCrlIndicatorEnabled;

  /// @brief Field issuingDistributionPoint, offset 0x48, size 0x8
  __declspec(property(get = __get_issuingDistributionPoint, put = __set_issuingDistributionPoint))::ArrayW<uint8_t, ::Array<uint8_t>*> issuingDistributionPoint;

  /// @brief Field issuingDistributionPointEnabled, offset 0x50, size 0x1
  __declspec(property(get = __get_issuingDistributionPointEnabled, put = __set_issuingDistributionPointEnabled)) bool issuingDistributionPointEnabled;

  /// @brief Field maxBaseCrlNumber, offset 0x58, size 0x8
  __declspec(property(get = __get_maxBaseCrlNumber, put = __set_maxBaseCrlNumber))::Org::BouncyCastle::Math::BigInteger* maxBaseCrlNumber;

  __declspec(property(get = get_CertificateChecking, put = set_CertificateChecking))::Org::BouncyCastle::X509::X509Certificate* CertificateChecking;

  __declspec(property(get = get_DateAndTime, put = set_DateAndTime))::Org::BouncyCastle::Utilities::Date::DateTimeObject* DateAndTime;

  __declspec(property(get = get_Issuers, put = set_Issuers))::System::Collections::ICollection* Issuers;

  __declspec(property(get = get_MaxCrlNumber, put = set_MaxCrlNumber))::Org::BouncyCastle::Math::BigInteger* MaxCrlNumber;

  __declspec(property(get = get_MinCrlNumber, put = set_MinCrlNumber))::Org::BouncyCastle::Math::BigInteger* MinCrlNumber;

  __declspec(property(get = get_AttrCertChecking, put = set_AttrCertChecking))::Org::BouncyCastle::X509::IX509AttributeCertificate* AttrCertChecking;

  __declspec(property(get = get_CompleteCrlEnabled, put = set_CompleteCrlEnabled)) bool CompleteCrlEnabled;

  __declspec(property(get = get_DeltaCrlIndicatorEnabled, put = set_DeltaCrlIndicatorEnabled)) bool DeltaCrlIndicatorEnabled;

  __declspec(property(get = get_IssuingDistributionPoint, put = set_IssuingDistributionPoint))::ArrayW<uint8_t, ::Array<uint8_t>*> IssuingDistributionPoint;

  __declspec(property(get = get_IssuingDistributionPointEnabled, put = set_IssuingDistributionPointEnabled)) bool IssuingDistributionPointEnabled;

  __declspec(property(get = get_MaxBaseCrlNumber, put = set_MaxBaseCrlNumber))::Org::BouncyCastle::Math::BigInteger* MaxBaseCrlNumber;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_certificateChecking();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_certificateChecking() const;

  constexpr void __set_certificateChecking(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __get_dateAndTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __get_dateAndTime() const;

  constexpr void __set_dateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr ::System::Collections::ICollection*& __get_issuers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __get_issuers() const;

  constexpr void __set_issuers(::System::Collections::ICollection* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_maxCrlNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_maxCrlNumber() const;

  constexpr void __set_maxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_minCrlNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_minCrlNumber() const;

  constexpr void __set_minCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& __get_attrCertChecking();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::IX509AttributeCertificate*> const& __get_attrCertChecking() const;

  constexpr void __set_attrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  constexpr bool& __get_completeCrlEnabled();

  constexpr bool const& __get_completeCrlEnabled() const;

  constexpr void __set_completeCrlEnabled(bool value);

  constexpr bool& __get_deltaCrlIndicatorEnabled();

  constexpr bool const& __get_deltaCrlIndicatorEnabled() const;

  constexpr void __set_deltaCrlIndicatorEnabled(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_issuingDistributionPoint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_issuingDistributionPoint() const;

  constexpr void __set_issuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_issuingDistributionPointEnabled();

  constexpr bool const& __get_issuingDistributionPointEnabled() const;

  constexpr void __set_issuingDistributionPointEnabled(bool value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_maxBaseCrlNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_maxBaseCrlNumber() const;

  constexpr void __set_maxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* New_ctor();

  /// @brief Method .ctor addr 0x1171d28 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o);

  /// @brief Method .ctor addr 0x1171d30 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o);

  /// @brief Method Clone addr 0x1171e5c size 0x60 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method get_CertificateChecking addr 0x1171ebc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_CertificateChecking();

  /// @brief Method set_CertificateChecking addr 0x1171ec4 size 0x8 virtual false final false
  inline void set_CertificateChecking(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method get_DateAndTime addr 0x1171ecc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_DateAndTime();

  /// @brief Method set_DateAndTime addr 0x1171ed4 size 0x8 virtual false final false
  inline void set_DateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method get_Issuers addr 0x1171dac size 0x58 virtual false final false
  inline ::System::Collections::ICollection* get_Issuers();

  /// @brief Method set_Issuers addr 0x1171edc size 0x68 virtual false final false
  inline void set_Issuers(::System::Collections::ICollection* value);

  /// @brief Method get_MaxCrlNumber addr 0x1171f44 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MaxCrlNumber();

  /// @brief Method set_MaxCrlNumber addr 0x1171f4c size 0x8 virtual false final false
  inline void set_MaxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method get_MinCrlNumber addr 0x1171f54 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MinCrlNumber();

  /// @brief Method set_MinCrlNumber addr 0x1171f5c size 0x8 virtual false final false
  inline void set_MinCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method get_AttrCertChecking addr 0x1171f64 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttrCertChecking();

  /// @brief Method set_AttrCertChecking addr 0x1171f6c size 0x8 virtual false final false
  inline void set_AttrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  /// @brief Method get_CompleteCrlEnabled addr 0x1171f74 size 0x8 virtual false final false
  inline bool get_CompleteCrlEnabled();

  /// @brief Method set_CompleteCrlEnabled addr 0x1171f7c size 0xc virtual false final false
  inline void set_CompleteCrlEnabled(bool value);

  /// @brief Method get_DeltaCrlIndicatorEnabled addr 0x1171f88 size 0x8 virtual false final false
  inline bool get_DeltaCrlIndicatorEnabled();

  /// @brief Method set_DeltaCrlIndicatorEnabled addr 0x1171f90 size 0xc virtual false final false
  inline void set_DeltaCrlIndicatorEnabled(bool value);

  /// @brief Method get_IssuingDistributionPoint addr 0x1171e04 size 0x58 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IssuingDistributionPoint();

  /// @brief Method set_IssuingDistributionPoint addr 0x1171f9c size 0x68 virtual false final false
  inline void set_IssuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_IssuingDistributionPointEnabled addr 0x1172004 size 0x8 virtual false final false
  inline bool get_IssuingDistributionPointEnabled();

  /// @brief Method set_IssuingDistributionPointEnabled addr 0x117200c size 0xc virtual false final false
  inline void set_IssuingDistributionPointEnabled(bool value);

  /// @brief Method get_MaxBaseCrlNumber addr 0x1172018 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MaxBaseCrlNumber();

  /// @brief Method set_MaxBaseCrlNumber addr 0x1172020 size 0x8 virtual false final false
  inline void set_MaxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Match addr 0x1172028 size 0x6d0 virtual true final false
  inline bool Match(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CrlStoreSelector(X509CrlStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CrlStoreSelector(X509CrlStoreSelector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CrlStoreSelector();

public:
  /// @brief Field certificateChecking, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___certificateChecking;

  /// @brief Field dateAndTime, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___dateAndTime;

  /// @brief Field issuers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ICollection* ___issuers;

  /// @brief Field maxCrlNumber, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___maxCrlNumber;

  /// @brief Field minCrlNumber, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___minCrlNumber;

  /// @brief Field attrCertChecking, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::IX509AttributeCertificate* ___attrCertChecking;

  /// @brief Field completeCrlEnabled, offset: 0x40, size: 0x1, def value: None
  bool ___completeCrlEnabled;

  /// @brief Field deltaCrlIndicatorEnabled, offset: 0x41, size: 0x1, def value: None
  bool ___deltaCrlIndicatorEnabled;

  /// @brief Field issuingDistributionPoint, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___issuingDistributionPoint;

  /// @brief Field issuingDistributionPointEnabled, offset: 0x50, size: 0x1, def value: None
  bool ___issuingDistributionPointEnabled;

  /// @brief Field maxBaseCrlNumber, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___maxBaseCrlNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, "Org.BouncyCastle.X509.Store", "X509CrlStoreSelector");
