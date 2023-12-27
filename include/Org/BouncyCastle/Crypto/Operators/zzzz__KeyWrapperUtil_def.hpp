#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyWrapperUtil)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class KeyWrapperUtil;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil);
// Type: Org.BouncyCastle.Crypto.Operators::KeyWrapperUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(985))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::KeyWrapperUtil*
class CORDL_TYPE KeyWrapperUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field providerMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_providerMap, put = setStaticF_providerMap))::System::Collections::IDictionary* providerMap;

  static inline void setStaticF_providerMap(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_providerMap();

  /// @brief Method WrapperForName addr 0xf28878 size 0x238 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IKeyWrapper* WrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method UnwrapperForName addr 0xf2909c size 0x238 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IKeyUnwrapper* UnwrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil* New_ctor();

  /// @brief Method .ctor addr 0xf292d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyWrapperUtil(KeyWrapperUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyWrapperUtil(KeyWrapperUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyWrapperUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*, "Org.BouncyCastle.Crypto.Operators", "KeyWrapperUtil");
