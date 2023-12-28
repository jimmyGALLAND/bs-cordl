#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ExtensionEnumerator)
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator);
// Type: System.Security.Cryptography.X509Certificates::X509ExtensionEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9013))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ExtensionEnumerator*
class CORDL_TYPE X509ExtensionEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __get_enumerator, put = __set_enumerator))::System::Collections::IEnumerator* enumerator;

  __declspec(property(get = get_Current))::System::Security::Cryptography::X509Certificates::X509Extension* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::IEnumerator*& __get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_enumerator() const;

  constexpr void __set_enumerator(::System::Collections::IEnumerator* value);

  static inline ::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* New_ctor(::System::Collections::ArrayList* list);

  /// @brief Method .ctor addr 0x2984e78 size 0x44 virtual false final false
  inline void _ctor(::System::Collections::ArrayList* list);

  /// @brief Method get_Current addr 0x2984f88 size 0xf0 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Extension* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2985078 size 0xa4 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method MoveNext addr 0x298511c size 0xa0 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x29851bc size 0xa4 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionEnumerator(X509ExtensionEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionEnumerator(X509ExtensionEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionEnumerator();

public:
  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
