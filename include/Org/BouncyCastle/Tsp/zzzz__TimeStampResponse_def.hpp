#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampResponse)
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampResponse);
// Type: Org.BouncyCastle.Tsp::TimeStampResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1766))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampResponse*
class CORDL_TYPE TimeStampResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __get_resp, put = __set_resp))::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp;

  /// @brief Field timeStampToken, offset 0x18, size 0x8
  __declspec(property(get = __get_timeStampToken, put = __set_timeStampToken))::Org::BouncyCastle::Tsp::TimeStampToken* timeStampToken;

  __declspec(property(get = get_Status)) int32_t Status;

  __declspec(property(get = get_TimeStampToken))::Org::BouncyCastle::Tsp::TimeStampToken* TimeStampToken;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*& __get_resp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*> const& __get_resp() const;

  constexpr void __set_resp(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* value);

  constexpr ::Org::BouncyCastle::Tsp::TimeStampToken*& __get_timeStampToken();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Tsp::TimeStampToken*> const& __get_timeStampToken() const;

  constexpr void __set_timeStampToken(::Org::BouncyCastle::Tsp::TimeStampToken* value);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp);

  /// @brief Method .ctor addr 0x1150750 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  /// @brief Method .ctor addr 0x1150844 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0x11509dc size 0x7c virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method readTimeStampResp addr 0x11508c0 size 0x11c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* readTimeStampResp(::Org::BouncyCastle::Asn1::Asn1InputStream* input);

  /// @brief Method get_Status addr 0x1150ac8 size 0x30 virtual false final false
  inline int32_t get_Status();

  /// @brief Method GetStatusString addr 0x1150af8 size 0x100 virtual false final false
  inline ::StringW GetStatusString();

  /// @brief Method GetFailInfo addr 0x1150bf8 size 0x84 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* GetFailInfo();

  /// @brief Method get_TimeStampToken addr 0x1150c7c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Tsp::TimeStampToken* get_TimeStampToken();

  /// @brief Method Validate addr 0x1150c84 size 0x32c virtual false final false
  inline void Validate(::Org::BouncyCastle::Tsp::TimeStampRequest* request);

  /// @brief Method GetEncoded addr 0x1151098 size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResponse(TimeStampResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResponse(TimeStampResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResponse();

public:
  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* ___resp;

  /// @brief Field timeStampToken, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampToken* ___timeStampToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampResponse, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampResponse*, "Org.BouncyCastle.Tsp", "TimeStampResponse");
