#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultReferenceResolver)
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultReferenceResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultReferenceResolver);
// Type: Newtonsoft.Json.Serialization::DefaultReferenceResolver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11917))
// CS Name: ::Newtonsoft.Json.Serialization::DefaultReferenceResolver*
class CORDL_TYPE DefaultReferenceResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Field _referenceCount, offset 0x10, size 0x4
  __declspec(property(get = __get__referenceCount, put = __set__referenceCount)) int32_t _referenceCount;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::IReferenceResolver"
  constexpr operator ::Newtonsoft::Json::Serialization::IReferenceResolver*() noexcept;

  constexpr int32_t& __get__referenceCount();

  constexpr int32_t const& __get__referenceCount() const;

  constexpr void __set__referenceCount(int32_t value);

  /// @brief Method GetMappings addr 0x266e7bc size 0x110 virtual false final false
  inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* GetMappings(::System::Object* context);

  /// @brief Method ResolveReference addr 0x266e9dc size 0x74 virtual true final true
  inline ::System::Object* ResolveReference(::System::Object* context, ::StringW reference);

  /// @brief Method GetReference addr 0x266ea50 size 0xf4 virtual true final true
  inline ::StringW GetReference(::System::Object* context, ::System::Object* value);

  /// @brief Method AddReference addr 0x266eb44 size 0x6c virtual true final true
  inline void AddReference(::System::Object* context, ::StringW reference, ::System::Object* value);

  /// @brief Method IsReferenced addr 0x266ebb0 size 0x74 virtual true final true
  inline bool IsReferenced(::System::Object* context, ::System::Object* value);

  static inline ::Newtonsoft::Json::Serialization::DefaultReferenceResolver* New_ctor();

  /// @brief Method .ctor addr 0x266ec24 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultReferenceResolver(DefaultReferenceResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultReferenceResolver(DefaultReferenceResolver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultReferenceResolver();

public:
  /// @brief Field _referenceCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____referenceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultReferenceResolver, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultReferenceResolver*, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
