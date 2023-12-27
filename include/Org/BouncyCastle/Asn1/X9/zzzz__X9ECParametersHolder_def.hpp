#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X9ECParametersHolder)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder);
// Type: Org.BouncyCastle.Asn1.X9::X9ECParametersHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9ECParametersHolder*
class CORDL_TYPE X9ECParametersHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Asn1::X9::X9ECParameters* Parameters;

  constexpr ::Org::BouncyCastle::Asn1::X9::X9ECParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9ECParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Asn1::X9::X9ECParameters* value);

  /// @brief Method get_Parameters addr 0xe62558 size 0xb8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* get_Parameters();

  /// @brief Method CreateParameters addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* New_ctor();

  /// @brief Method .ctor addr 0xe6282c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9ECParametersHolder(X9ECParametersHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9ECParametersHolder(X9ECParametersHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9ECParametersHolder();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::X9ECParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder");
