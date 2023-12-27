#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingProvider)
namespace System::Text {
class Encoding;
}
namespace System::Text {
class DecoderFallback;
}
namespace System {
class Object;
}
namespace System::Text {
class EncoderFallback;
}
// Forward declare root types
namespace System::Text {
class EncodingProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncodingProvider);
// Type: System.Text::EncodingProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2850))
// CS Name: ::System.Text::EncodingProvider*
class CORDL_TYPE EncodingProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  /// @brief Field s_providers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_providers, put = setStaticF_s_providers))::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> s_providers;

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline void setStaticF_s_providers(::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> value);

  static inline ::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> getStaticF_s_providers();

  /// @brief Method GetEncoding addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Text::Encoding* GetEncoding(::StringW name);

  /// @brief Method GetEncoding addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Text::Encoding* GetEncoding(int32_t codepage);

  /// @brief Method GetEncoding addr 0x243840c size 0xfc virtual true final false
  inline ::System::Text::Encoding* GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback);

  /// @brief Method GetEncodingFromProvider addr 0x2438508 size 0xdc virtual false final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage);

  /// @brief Method GetEncodingFromProvider addr 0x24385e4 size 0xdc virtual false final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(::StringW encodingName);

  /// @brief Method GetEncodingFromProvider addr 0x24386c0 size 0xf4 virtual false final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec);

  // Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingProvider(EncodingProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingProvider(EncodingProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingProvider, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncodingProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingProvider*, "System.Text", "EncodingProvider");
