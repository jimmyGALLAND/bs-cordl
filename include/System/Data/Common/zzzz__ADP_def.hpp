#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ADP)
namespace System::Data {
struct AcceptRejectRule;
}
namespace System::Data {
struct MissingSchemaAction;
}
namespace System::Data {
struct Rule;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class NotSupportedException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class ADP;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::ADP);
// Type: System.Data.Common::ADP
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::ADP*
class CORDL_TYPE ADP : public ::System::Object {
public:
  // Declarations
  /// @brief Field AzureSqlServerEndpoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AzureSqlServerEndpoints, put = setStaticF_AzureSqlServerEndpoints))::ArrayW<::StringW, ::Array<::StringW>*> AzureSqlServerEndpoints;

  /// @brief Field PtrSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PtrSize, put = setStaticF_PtrSize)) int32_t PtrSize;

  /// @brief Field PtrZero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PtrZero, put = setStaticF_PtrZero)) void* PtrZero;

  /// @brief Field StrEmpty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StrEmpty, put = setStaticF_StrEmpty))::StringW StrEmpty;

  /// @brief Field s_accessViolationType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_accessViolationType, put = setStaticF_s_accessViolationType))::System::Type* s_accessViolationType;

  /// @brief Field s_nullReferenceType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_nullReferenceType, put = setStaticF_s_nullReferenceType))::System::Type* s_nullReferenceType;

  /// @brief Field s_outOfMemoryType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_outOfMemoryType, put = setStaticF_s_outOfMemoryType))::System::Type* s_outOfMemoryType;

  /// @brief Field s_securityType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_securityType, put = setStaticF_s_securityType))::System::Type* s_securityType;

  /// @brief Field s_stackOverflowType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_stackOverflowType, put = setStaticF_s_stackOverflowType))::System::Type* s_stackOverflowType;

  /// @brief Field s_threadAbortType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_threadAbortType, put = setStaticF_s_threadAbortType))::System::Type* s_threadAbortType;

  /// @brief Method Argument, addr 0x2c2dadc, size 0x90, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* Argument(::StringW error);

  /// @brief Method ArgumentOutOfRange, addr 0x2c2db6c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::StringW message, ::StringW parameterName);

  /// @brief Method ArgumentOutOfRange, addr 0x2c2b278, size 0x90, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::StringW parameterName);

  /// @brief Method InvalidAcceptRejectRule, addr 0x2c2e00c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* InvalidAcceptRejectRule(::System::Data::AcceptRejectRule value);

  /// @brief Method InvalidEnumerationValue, addr 0x2c2df00, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* InvalidEnumerationValue(::System::Type* type, int32_t value);

  /// @brief Method InvalidMissingSchemaAction, addr 0x2c2e0bc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* InvalidMissingSchemaAction(::System::Data::MissingSchemaAction value);

  /// @brief Method InvalidOperation, addr 0x2c2dc0c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* InvalidOperation(::StringW error);

  /// @brief Method InvalidRule, addr 0x2c2e16c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* InvalidRule(::System::Data::Rule value);

  /// @brief Method InvalidSeekOrigin, addr 0x2c2d1a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidSeekOrigin(::StringW parameterName);

  /// @brief Method IsCatchableExceptionType, addr 0x2c2c4f8, size 0x20c, virtual false, abstract: false, final false
  static inline bool IsCatchableExceptionType(::System::Exception* e);

  /// @brief Method IsCatchableOrSecurityExceptionType, addr 0x2c2dd2c, size 0x1d4, virtual false, abstract: false, final false
  static inline bool IsCatchableOrSecurityExceptionType(::System::Exception* e);

  /// @brief Method NotSupported, addr 0x2c2dc9c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::NotSupportedException* NotSupported(::StringW error);

  /// @brief Method TraceException, addr 0x2c2d96c, size 0x98, virtual false, abstract: false, final false
  static inline void TraceException(::StringW trace, ::System::Exception* e);

  /// @brief Method TraceExceptionAsReturnValue, addr 0x2c2da04, size 0x6c, virtual false, abstract: false, final false
  static inline void TraceExceptionAsReturnValue(::System::Exception* e);

  /// @brief Method TraceExceptionWithoutRethrow, addr 0x2c2da70, size 0x6c, virtual false, abstract: false, final false
  static inline void TraceExceptionWithoutRethrow(::System::Exception* e);

  /// @brief Method WrongType, addr 0x2c1b9a8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Exception* WrongType(::System::Type* got, ::System::Type* expected);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_AzureSqlServerEndpoints();

  static inline int32_t getStaticF_PtrSize();

  static inline void* getStaticF_PtrZero();

  static inline ::StringW getStaticF_StrEmpty();

  static inline ::System::Type* getStaticF_s_accessViolationType();

  static inline ::System::Type* getStaticF_s_nullReferenceType();

  static inline ::System::Type* getStaticF_s_outOfMemoryType();

  static inline ::System::Type* getStaticF_s_securityType();

  static inline ::System::Type* getStaticF_s_stackOverflowType();

  static inline ::System::Type* getStaticF_s_threadAbortType();

  static inline void setStaticF_AzureSqlServerEndpoints(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_PtrSize(int32_t value);

  static inline void setStaticF_PtrZero(void* value);

  static inline void setStaticF_StrEmpty(::StringW value);

  static inline void setStaticF_s_accessViolationType(::System::Type* value);

  static inline void setStaticF_s_nullReferenceType(::System::Type* value);

  static inline void setStaticF_s_outOfMemoryType(::System::Type* value);

  static inline void setStaticF_s_securityType(::System::Type* value);

  static inline void setStaticF_s_stackOverflowType(::System::Type* value);

  static inline void setStaticF_s_threadAbortType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ADP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ADP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ADP(ADP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ADP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ADP(ADP const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::ADP, 0x10>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::ADP);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::ADP*, "System.Data.Common", "ADP");
