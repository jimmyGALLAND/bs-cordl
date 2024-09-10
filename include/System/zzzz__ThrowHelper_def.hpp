#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentNullException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::ThrowHelper);
// Type: System::ThrowHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ThrowHelper*
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateArgumentException_DestinationTooShort, addr 0x3d7b490, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentException_DestinationTooShort() ;

/// @brief Method CreateArgumentNullException, addr 0x3d7b350, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x3d7b598, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException() ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x3d7b610, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArrayTypeMismatchException, addr 0x3d7b418, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArrayTypeMismatchException() ;

/// @brief Method CreateIndexOutOfRangeException, addr 0x3d7b520, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateIndexOutOfRangeException() ;

/// @brief Method CreateThrowNotSupportedException, addr 0x3d7b6d8, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateThrowNotSupportedException() ;

/// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0x3d7c1d8, size 0x90, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method GetArgumentException, addr 0x3d7c570, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method GetArgumentName, addr 0x3d7bc14, size 0x184, virtual false, abstract: false, final false
static inline ::StringW GetArgumentName(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentNullException, addr 0x3d7c44c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x3d7c0a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::StringW  resource) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x3d7c4b8, size 0xb8, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method GetArraySegmentCtorValidationFailedException, addr 0x3d7c41c, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method GetInvalidOperationException, addr 0x3d7c39c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW  str) ;

/// @brief Method GetKeyNotFoundException, addr 0x3d7c28c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object*  key) ;

/// @brief Method GetResourceName, addr 0x3d7b924, size 0x28c, virtual false, abstract: false, final false
static inline ::StringW GetResourceName(::System::ExceptionResource  resource) ;

/// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object*  value, ::System::ExceptionArgument  argName) ;

/// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0x3d7c268, size 0x24, virtual false, abstract: false, final false
static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method ThrowArgumentException, addr 0x3d7b8d4, size 0x50, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentException, addr 0x3d7bbb0, size 0x64, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource, ::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0x3d7c18c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowArgumentException_Argument_InvalidArrayType() ;

/// @brief Method ThrowArgumentException_DestinationTooShort, addr 0x3d7b46c, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentException_DestinationTooShort() ;

/// @brief Method ThrowArgumentNullException, addr 0x3d6c4f8, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x3d7b574, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x3d7b5ec, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x3d7bd98, size 0x9c, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0x3d7c11c, size 0x38, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRange_IndexException() ;

/// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0x3d7c3f8, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method ThrowArrayTypeMismatchException, addr 0x3d7b3f4, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArrayTypeMismatchException() ;

/// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0x3d7c640, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count() ;

/// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0x3d7c154, size 0x38, virtual false, abstract: false, final false
static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowIndexOutOfRangeException, addr 0x3d7b4fc, size 0x24, virtual false, abstract: false, final false
static inline void ThrowIndexOutOfRangeException() ;

/// @brief Method ThrowInvalidOperationException, addr 0x3d7be34, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0x3d7c36c, size 0x30, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0x3d7c008, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0x3d7bf24, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0x3d7bfbc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0x3d7bf70, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0x3d7c054, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_NoValue() ;

/// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0x3d7c30c, size 0x60, virtual false, abstract: false, final false
static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type*  targetType) ;

/// @brief Method ThrowKeyNotFoundException, addr 0x3d7c304, size 0x8, virtual false, abstract: false, final false
static inline void ThrowKeyNotFoundException(::System::Object*  key) ;

/// @brief Method ThrowNotSupportedException, addr 0x3d7b6b4, size 0x24, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException() ;

/// @brief Method ThrowNotSupportedException, addr 0x3d7bed4, size 0x50, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowSerializationException, addr 0x3d7be84, size 0x50, virtual false, abstract: false, final false
static inline void ThrowSerializationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0x3d7c614, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index() ;

/// @brief Method ThrowWrongKeyTypeArgumentException, addr 0x3d7b72c, size 0xd4, virtual false, abstract: false, final false
static inline void ThrowWrongKeyTypeArgumentException(::System::Object*  key, ::System::Type*  targetType) ;

/// @brief Method ThrowWrongValueTypeArgumentException, addr 0x3d7b800, size 0xd4, virtual false, abstract: false, final false
static inline void ThrowWrongValueTypeArgumentException(::System::Object*  value, ::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowHelper(ThrowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowHelper(ThrowHelper const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ThrowHelper, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::ThrowHelper*, "System", "ThrowHelper");
