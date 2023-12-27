#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebRequestUtils)
namespace System {
class Uri;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace UnityEngineInternal {
class WebRequestUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::WebRequestUtils);
// Type: UnityEngineInternal::WebRequestUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15572))
// CS Name: ::UnityEngineInternal::WebRequestUtils*
class CORDL_TYPE WebRequestUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field domainRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_domainRegex, put = setStaticF_domainRegex))::System::Text::RegularExpressions::Regex* domainRegex;

  static inline void setStaticF_domainRegex(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_domainRegex();

  /// @brief Method RedirectTo addr 0x2eac294 size 0xf4 virtual false final false
  static inline ::StringW RedirectTo(::StringW baseUri, ::StringW redirectUri);

  /// @brief Method MakeInitialUrl addr 0x2eac388 size 0x398 virtual false final false
  static inline ::StringW MakeInitialUrl(::StringW targetUrl, ::StringW localUrl);

  /// @brief Method MakeUriString addr 0x2eac720 size 0x3f4 virtual false final false
  static inline ::StringW MakeUriString(::System::Uri* targetUri, ::StringW targetUrl, bool prependProtocol);

  /// @brief Method URLDecode addr 0x2eacb14 size 0xa4 virtual false final false
  static inline ::StringW URLDecode(::StringW encoded);

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestUtils(WebRequestUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestUtils(WebRequestUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::WebRequestUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::WebRequestUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::WebRequestUtils*, "UnityEngineInternal", "WebRequestUtils");
