#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsProcessableInputStream)
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessableInputStream);
// Type: Org.BouncyCastle.Cms::CmsProcessableInputStream
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(647))
// CS Name: ::Org.BouncyCastle.Cms::CmsProcessableInputStream*
class CORDL_TYPE CmsProcessableInputStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __get_input, put = __set_input))::System::IO::Stream* input;

  /// @brief Field used, offset 0x18, size 0x1
  __declspec(property(get = __get_used, put = __set_used)) bool used;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

  constexpr ::System::IO::Stream*& __get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_input() const;

  constexpr void __set_input(::System::IO::Stream* value);

  constexpr bool& __get_used();

  constexpr bool const& __get_used() const;

  constexpr void __set_used(bool value);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableInputStream* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0x11e444c size 0x2c virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method GetInputStream addr 0x11e5310 size 0x20 virtual true final false
  inline ::System::IO::Stream* GetInputStream();

  /// @brief Method Write addr 0x11e5330 size 0x88 virtual true final false
  inline void Write(::System::IO::Stream* output);

  /// @brief Method GetContent addr 0x11e53b8 size 0xc virtual true final false
  inline ::System::Object* GetContent();

  /// @brief Method CheckSingleUsage addr 0x11e53c4 size 0xf8 virtual true final false
  inline void CheckSingleUsage();

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessableInputStream(CmsProcessableInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessableInputStream(CmsProcessableInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsProcessableInputStream();

public:
  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field used, offset: 0x18, size: 0x1, def value: None
  bool ___used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableInputStream, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableInputStream*, "Org.BouncyCastle.Cms", "CmsProcessableInputStream");
