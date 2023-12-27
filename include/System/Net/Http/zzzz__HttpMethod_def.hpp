#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpMethod)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpMethod);
// Type: System.Net.Http::HttpMethod
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14652))
// CS Name: ::System.Net.Http::HttpMethod*
class CORDL_TYPE HttpMethod : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::StringW method;

  /// @brief Field delete_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_delete_method, put = setStaticF_delete_method))::System::Net::Http::HttpMethod* delete_method;

  /// @brief Field get_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_get_method, put = setStaticF_get_method))::System::Net::Http::HttpMethod* get_method;

  /// @brief Field head_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_head_method, put = setStaticF_head_method))::System::Net::Http::HttpMethod* head_method;

  /// @brief Field options_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_options_method, put = setStaticF_options_method))::System::Net::Http::HttpMethod* options_method;

  /// @brief Field post_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_post_method, put = setStaticF_post_method))::System::Net::Http::HttpMethod* post_method;

  /// @brief Field put_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_put_method, put = setStaticF_put_method))::System::Net::Http::HttpMethod* put_method;

  /// @brief Field trace_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_trace_method, put = setStaticF_trace_method))::System::Net::Http::HttpMethod* trace_method;

  __declspec(property(get = get_Method))::StringW Method;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Net::Http::HttpMethod*>"
  constexpr operator ::System::IEquatable_1<::System::Net::Http::HttpMethod*>*() noexcept;

  constexpr ::StringW& __get_method();

  constexpr ::StringW const& __get_method() const;

  constexpr void __set_method(::StringW value);

  static inline void setStaticF_delete_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_delete_method();

  static inline void setStaticF_get_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_get_method();

  static inline void setStaticF_head_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_head_method();

  static inline void setStaticF_options_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_options_method();

  static inline void setStaticF_post_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_post_method();

  static inline void setStaticF_put_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_put_method();

  static inline void setStaticF_trace_method(::System::Net::Http::HttpMethod* value);

  static inline ::System::Net::Http::HttpMethod* getStaticF_trace_method();

  static inline ::System::Net::Http::HttpMethod* New_ctor(::StringW method);

  /// @brief Method .ctor addr 0x2833448 size 0x8c virtual false final false
  inline void _ctor(::StringW method);

  /// @brief Method get_Get addr 0x28335e0 size 0x58 virtual false final false
  static inline ::System::Net::Http::HttpMethod* get_Get();

  /// @brief Method get_Method addr 0x2833638 size 0x8 virtual false final false
  inline ::StringW get_Method();

  /// @brief Method get_Post addr 0x2833640 size 0x58 virtual false final false
  static inline ::System::Net::Http::HttpMethod* get_Post();

  /// @brief Method op_Equality addr 0x2833698 size 0x18 virtual false final false
  static inline bool op_Equality(::System::Net::Http::HttpMethod* left, ::System::Net::Http::HttpMethod* right);

  /// @brief Method Equals addr 0x28336b0 size 0x24 virtual true final true
  inline bool Equals(::System::Net::Http::HttpMethod* other);

  /// @brief Method Equals addr 0x28336d4 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2833760 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2833780 size 0x8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpMethod(HttpMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpMethod(HttpMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpMethod();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::StringW ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpMethod, 0x18>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMethod*, "System.Net.Http", "HttpMethod");
