#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampResponseGenerator)
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Tsp {
class __TimeStampResponseGenerator__FailInfo;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampResponseGenerator;
}
namespace Org::BouncyCastle::Tsp {
class __TimeStampResponseGenerator__FailInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo);
// Type: ::FailInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1767))
// CS Name: ::TimeStampResponseGenerator::FailInfo*
class CORDL_TYPE __TimeStampResponseGenerator__FailInfo : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo* New_ctor(int32_t failInfoValue);

  /// @brief Method .ctor addr 0x1151404 size 0x68 virtual false final false
  inline void _ctor(int32_t failInfoValue);

  // Ctor Parameters [CppParam { name: "", ty: "__TimeStampResponseGenerator__FailInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeStampResponseGenerator__FailInfo(__TimeStampResponseGenerator__FailInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeStampResponseGenerator__FailInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeStampResponseGenerator__FailInfo(__TimeStampResponseGenerator__FailInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeStampResponseGenerator__FailInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
// Type: Org.BouncyCastle.Tsp::TimeStampResponseGenerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(41)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1768))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampResponseGenerator*
class CORDL_TYPE TimeStampResponseGenerator : public ::System::Object {
public:
  // Declarations
  using FailInfo = ::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo;

  /// @brief Field status, offset 0x10, size 0x4
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::Cmp::PkiStatus status;

  /// @brief Field statusStrings, offset 0x18, size 0x8
  __declspec(property(get = __get_statusStrings, put = __set_statusStrings))::Org::BouncyCastle::Asn1::Asn1EncodableVector* statusStrings;

  /// @brief Field failInfo, offset 0x20, size 0x4
  __declspec(property(get = __get_failInfo, put = __set_failInfo)) int32_t failInfo;

  /// @brief Field tokenGenerator, offset 0x28, size 0x8
  __declspec(property(get = __get_tokenGenerator, put = __set_tokenGenerator))::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator;

  /// @brief Field acceptedAlgorithms, offset 0x30, size 0x8
  __declspec(property(get = __get_acceptedAlgorithms, put = __set_acceptedAlgorithms))::System::Collections::IList* acceptedAlgorithms;

  /// @brief Field acceptedPolicies, offset 0x38, size 0x8
  __declspec(property(get = __get_acceptedPolicies, put = __set_acceptedPolicies))::System::Collections::IList* acceptedPolicies;

  /// @brief Field acceptedExtensions, offset 0x40, size 0x8
  __declspec(property(get = __get_acceptedExtensions, put = __set_acceptedExtensions))::System::Collections::IList* acceptedExtensions;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus& __get_status();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatus value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_statusStrings();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_statusStrings() const;

  constexpr void __set_statusStrings(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr int32_t& __get_failInfo();

  constexpr int32_t const& __get_failInfo() const;

  constexpr void __set_failInfo(int32_t value);

  constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*& __get_tokenGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*> const& __get_tokenGenerator() const;

  constexpr void __set_tokenGenerator(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* value);

  constexpr ::System::Collections::IList*& __get_acceptedAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_acceptedAlgorithms() const;

  constexpr void __set_acceptedAlgorithms(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_acceptedPolicies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_acceptedPolicies() const;

  constexpr void __set_acceptedPolicies(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_acceptedExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_acceptedExtensions() const;

  constexpr void __set_acceptedExtensions(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms);

  /// @brief Method .ctor addr 0x11510b4 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                               ::System::Collections::IList* acceptedPolicy);

  /// @brief Method .ctor addr 0x1151154 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms, ::System::Collections::IList* acceptedPolicy);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                               ::System::Collections::IList* acceptedPolicies, ::System::Collections::IList* acceptedExtensions);

  /// @brief Method .ctor addr 0x11510c0 size 0x94 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms, ::System::Collections::IList* acceptedPolicies,
                    ::System::Collections::IList* acceptedExtensions);

  /// @brief Method AddStatusString addr 0x115115c size 0x80 virtual false final false
  inline void AddStatusString(::StringW statusString);

  /// @brief Method SetFailInfoField addr 0x11511dc size 0x10 virtual false final false
  inline void SetFailInfoField(int32_t field);

  /// @brief Method GetPkiStatusInfo addr 0x11511ec size 0x218 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetPkiStatusInfo();

  /// @brief Method Generate addr 0x115146c size 0x8c virtual false final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime);

  /// @brief Method Generate addr 0x1151520 size 0x430 virtual false final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber,
                                                               ::Org::BouncyCastle::Utilities::Date::DateTimeObject* genTime);

  /// @brief Method GenerateFailResponse addr 0x1151ff8 size 0x19c virtual false final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* GenerateFailResponse(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField, ::StringW statusString);

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResponseGenerator(TimeStampResponseGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResponseGenerator(TimeStampResponseGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResponseGenerator();

public:
  /// @brief Field status, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus ___status;

  /// @brief Field statusStrings, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___statusStrings;

  /// @brief Field failInfo, offset: 0x20, size: 0x4, def value: None
  int32_t ___failInfo;

  /// @brief Field tokenGenerator, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* ___tokenGenerator;

  /// @brief Field acceptedAlgorithms, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedAlgorithms;

  /// @brief Field acceptedPolicies, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedPolicies;

  /// @brief Field acceptedExtensions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::__TimeStampResponseGenerator__FailInfo*, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator/FailInfo");
