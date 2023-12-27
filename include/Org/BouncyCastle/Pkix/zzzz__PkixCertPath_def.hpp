#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixCertPath)
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPath);
// Type: Org.BouncyCastle.Pkix::PkixCertPath
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1715))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPath*
class CORDL_TYPE PkixCertPath : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificates, offset 0x10, size 0x8
  __declspec(property(get = __get_certificates, put = __set_certificates))::System::Collections::IList* certificates;

  /// @brief Field certPathEncodings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_certPathEncodings, put = setStaticF_certPathEncodings))::System::Collections::IList* certPathEncodings;

  __declspec(property(get = get_Encodings))::System::Collections::IEnumerable* Encodings;

  __declspec(property(get = get_Certificates))::System::Collections::IList* Certificates;

  constexpr ::System::Collections::IList*& __get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_certificates() const;

  constexpr void __set_certificates(::System::Collections::IList* value);

  static inline void setStaticF_certPathEncodings(::System::Collections::IList* value);

  static inline ::System::Collections::IList* getStaticF_certPathEncodings();

  /// @brief Method SortCerts addr 0x10f00b0 size 0xd94 virtual false final false
  static inline ::System::Collections::IList* SortCerts(::System::Collections::IList* certs);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::Collections::ICollection* certificates);

  /// @brief Method .ctor addr 0x10eb394 size 0xac virtual false final false
  inline void _ctor(::System::Collections::ICollection* certificates);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor addr 0x10f0e44 size 0x58 virtual false final false
  inline void _ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream* inStream, ::StringW encoding);

  /// @brief Method .ctor addr 0x10f0e9c size 0x86c virtual false final false
  inline void _ctor(::System::IO::Stream* inStream, ::StringW encoding);

  /// @brief Method get_Encodings addr 0x10f1708 size 0x90 virtual true final false
  inline ::System::Collections::IEnumerable* get_Encodings();

  /// @brief Method Equals addr 0x10f1798 size 0x41c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x10f1bb4 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetEncoded addr 0x10f1bdc size 0x344 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded addr 0x10f1f20 size 0x88c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  /// @brief Method get_Certificates addr 0x10f29c8 size 0xc virtual true final false
  inline ::System::Collections::IList* get_Certificates();

  /// @brief Method ToAsn1Object addr 0x10f27ac size 0x100 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method ToDerEncoded addr 0x10f28ac size 0x11c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToDerEncoded(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPath(PkixCertPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPath(PkixCertPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPath();

public:
  /// @brief Field certificates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___certificates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPath, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPath);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPath*, "Org.BouncyCastle.Pkix", "PkixCertPath");
