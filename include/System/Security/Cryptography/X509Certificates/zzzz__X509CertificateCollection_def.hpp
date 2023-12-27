#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateCollection)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class __X509CertificateCollection__X509CertificateEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class __X509CertificateCollection__X509CertificateEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509CertificateCollection);
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator);
// Type: ::X509CertificateEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8999))
// CS Name: ::X509CertificateCollection::X509CertificateEnumerator*
class CORDL_TYPE __X509CertificateCollection__X509CertificateEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __get_enumerator, put = __set_enumerator))::System::Collections::IEnumerator* enumerator;

  __declspec(property(get = get_Current))::System::Security::Cryptography::X509Certificates::X509Certificate* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::IEnumerator*& __get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_enumerator() const;

  constexpr void __set_enumerator(::System::Collections::IEnumerator* value);

  static inline ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator*
  New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings);

  /// @brief Method .ctor addr 0x297eea8 size 0xb4 virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings);

  /// @brief Method get_Current addr 0x297ef7c size 0xf0 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x297f06c size 0xa4 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.MoveNext addr 0x297f110 size 0xa0 virtual true final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x297f1b0 size 0xa4 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method MoveNext addr 0x297f254 size 0xa0 virtual false final false
  inline bool MoveNext();

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateCollection__X509CertificateEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateCollection__X509CertificateEnumerator(__X509CertificateCollection__X509CertificateEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateCollection__X509CertificateEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateCollection__X509CertificateEnumerator(__X509CertificateCollection__X509CertificateEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X509CertificateCollection__X509CertificateEnumerator();

public:
  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
// Type: System.Security.Cryptography.X509Certificates::X509CertificateCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9000))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509CertificateCollection*
class CORDL_TYPE X509CertificateCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  using X509CertificateEnumerator = ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator;

  __declspec(property(get = get_Item))::System::Security::Cryptography::X509Certificates::X509Certificate* Item[];

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* New_ctor();

  /// @brief Method .ctor addr 0x297b518 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method .ctor addr 0x297ecb0 size 0x2c virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method get_Item addr 0x297edb0 size 0x98 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(int32_t index);

  /// @brief Method AddRange addr 0x297ecdc size 0xd4 virtual false final false
  inline void AddRange(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method GetEnumerator addr 0x297ee48 size 0x60 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator* GetEnumerator();

  /// @brief Method GetHashCode addr 0x297ef5c size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateCollection(X509CertificateCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateCollection(X509CertificateCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection");
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator*, "System.Security.Cryptography.X509Certificates",
                       "X509CertificateCollection/X509CertificateEnumerator");
