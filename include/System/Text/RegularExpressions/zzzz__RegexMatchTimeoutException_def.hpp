#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeoutException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegexMatchTimeoutException)
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexMatchTimeoutException;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexMatchTimeoutException);
// Type: System.Text.RegularExpressions::RegexMatchTimeoutException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2487)), TypeDefinitionIndex(TypeDefinitionIndex(2484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8923))
// CS Name: ::System.Text.RegularExpressions::RegexMatchTimeoutException*
class CORDL_TYPE RegexMatchTimeoutException : public ::System::TimeoutException {
public:
  // Declarations
  /// @brief Field <Input>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__Input_k__BackingField, put = __set__Input_k__BackingField))::StringW _Input_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__Pattern_k__BackingField, put = __set__Pattern_k__BackingField))::StringW _Pattern_k__BackingField;

  /// @brief Field <MatchTimeout>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__MatchTimeout_k__BackingField, put = __set__MatchTimeout_k__BackingField))::System::TimeSpan _MatchTimeout_k__BackingField;

  __declspec(property(get = get_Input))::StringW Input;

  __declspec(property(get = get_Pattern))::StringW Pattern;

  __declspec(property(get = get_MatchTimeout))::System::TimeSpan MatchTimeout;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::StringW& __get__Input_k__BackingField();

  constexpr ::StringW const& __get__Input_k__BackingField() const;

  constexpr void __set__Input_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Pattern_k__BackingField();

  constexpr ::StringW const& __get__Pattern_k__BackingField() const;

  constexpr void __set__Pattern_k__BackingField(::StringW value);

  constexpr ::System::TimeSpan& __get__MatchTimeout_k__BackingField();

  constexpr ::System::TimeSpan const& __get__MatchTimeout_k__BackingField() const;

  constexpr void __set__MatchTimeout_k__BackingField(::System::TimeSpan value);

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor(::StringW regexInput, ::StringW regexPattern, ::System::TimeSpan matchTimeout);

  /// @brief Method .ctor addr 0x2962550 size 0xcc virtual false final false
  inline void _ctor(::StringW regexInput, ::StringW regexPattern, ::System::TimeSpan matchTimeout);

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor();

  /// @brief Method .ctor addr 0x296261c size 0x94 virtual false final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x29626b0 size 0x138 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29627e8 size 0xd4 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Input addr 0x29628bc size 0x8 virtual false final false
  inline ::StringW get_Input();

  /// @brief Method get_Pattern addr 0x29628c4 size 0x8 virtual false final false
  inline ::StringW get_Pattern();

  /// @brief Method get_MatchTimeout addr 0x29628cc size 0x8 virtual false final false
  inline ::System::TimeSpan get_MatchTimeout();

  // Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexMatchTimeoutException(RegexMatchTimeoutException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexMatchTimeoutException(RegexMatchTimeoutException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexMatchTimeoutException();

public:
  /// @brief Field <Input>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____Input_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____Pattern_k__BackingField;

  /// @brief Field <MatchTimeout>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::TimeSpan ____MatchTimeout_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexMatchTimeoutException, 0xa8>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexMatchTimeoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexMatchTimeoutException*, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
