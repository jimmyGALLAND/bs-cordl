#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeObjectSecurity)
namespace System {
class Exception;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Security::AccessControl {
struct ResourceType;
}
namespace System {
class Object;
}
namespace System::Security::AccessControl {
class __NativeObjectSecurity__ExceptionFromErrorCode;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Forward declare root types
namespace System::Security::AccessControl {
class NativeObjectSecurity;
}
namespace System::Security::AccessControl {
class __NativeObjectSecurity__ExceptionFromErrorCode;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::NativeObjectSecurity);
MARK_REF_PTR_T(::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode);
// Type: ::ExceptionFromErrorCode
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3040))
// CS Name: ::NativeObjectSecurity::ExceptionFromErrorCode*
class CORDL_TYPE __NativeObjectSecurity__ExceptionFromErrorCode : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x24842ac size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x24843b0 size 0x14 virtual true final false
  inline ::System::Exception* Invoke(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NativeObjectSecurity__ExceptionFromErrorCode(__NativeObjectSecurity__ExceptionFromErrorCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NativeObjectSecurity__ExceptionFromErrorCode(__NativeObjectSecurity__ExceptionFromErrorCode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeObjectSecurity__ExceptionFromErrorCode();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode, 0x80>, "Size mismatch!");

} // namespace System::Security::AccessControl
// Type: System.Security.AccessControl::NativeObjectSecurity
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3026))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3041))
// CS Name: ::System.Security.AccessControl::NativeObjectSecurity*
class CORDL_TYPE NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity {
public:
  // Declarations
  using ExceptionFromErrorCode = ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode;

  /// @brief Field exception_from_error_code, offset 0x28, size 0x8
  __declspec(property(get = __get_exception_from_error_code,
                      put = __set_exception_from_error_code))::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exception_from_error_code;

  constexpr ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*& __get_exception_from_error_code();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*> const& __get_exception_from_error_code() const;

  constexpr void __set_exception_from_error_code(::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* value);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                                  ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                                  ::System::Object* exceptionContext);

  /// @brief Method .ctor addr 0x2483ef8 size 0x2c virtual false final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                    ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                                  ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method .ctor addr 0x24835bc size 0x10 virtual false final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                                  ::System::Security::AccessControl::AccessControlSections includeSections,
                                                                                  ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                                  ::System::Object* exceptionContext);

  /// @brief Method .ctor addr 0x2483f24 size 0x74 virtual false final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections,
                    ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext);

  /// @brief Method ClearAccessControlSectionsModified addr 0x248403c size 0xa4 virtual false final false
  inline void ClearAccessControlSectionsModified();

  /// @brief Method DefaultExceptionFromErrorCode addr 0x2484124 size 0x188 virtual false final false
  static inline ::System::Exception* DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  /// @brief Method RaiseExceptionOnFailure addr 0x2483f98 size 0xa4 virtual false final false
  inline void RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  /// @brief Method InternalGet addr 0x2484370 size 0x40 virtual true final false
  inline int32_t InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeObjectSecurity(NativeObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeObjectSecurity(NativeObjectSecurity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeObjectSecurity();

public:
  /// @brief Field exception_from_error_code, offset: 0x28, size: 0x8, def value: None
  ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* ___exception_from_error_code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::NativeObjectSecurity, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity*, "System.Security.AccessControl", "NativeObjectSecurity");
NEED_NO_BOX(::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*, "System.Security.AccessControl", "NativeObjectSecurity/ExceptionFromErrorCode");
