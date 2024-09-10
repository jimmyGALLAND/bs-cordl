#pragma once
// IWYU pragma private; include "System/ArgumentOutOfRangeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArgumentOutOfRangeException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ArgumentOutOfRangeException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArgumentOutOfRangeException);
// Type: System::ArgumentOutOfRangeException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ArgumentOutOfRangeException*
class CORDL_TYPE ArgumentOutOfRangeException : public ::System::ArgumentException {
public:
// Declarations
 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Field _actualValue, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__actualValue, put=__cordl_internal_set__actualValue)) ::System::Object*  _actualValue;

/// @brief Method GetObjectData, addr 0x3cc5858, size 0xd8, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor() ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName, ::System::Object*  actualValue, ::StringW  message) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName, ::StringW  message) ;

constexpr ::System::Object*& __cordl_internal_get__actualValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__actualValue() const;

constexpr void __cordl_internal_set__actualValue(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x3cc56b8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3cc5780, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x3cc5714, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::StringW  paramName) ;

/// @brief Method .ctor, addr 0x3cc2328, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  paramName, ::System::Object*  actualValue, ::StringW  message) ;

/// @brief Method .ctor, addr 0x3cc102c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  paramName, ::StringW  message) ;

/// @brief Method get_Message, addr 0x3cc5930, size 0xac, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArgumentOutOfRangeException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArgumentOutOfRangeException(ArgumentOutOfRangeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArgumentOutOfRangeException(ArgumentOutOfRangeException const& ) = delete;

/// @brief Field _actualValue, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  ____actualValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgumentOutOfRangeException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::ArgumentOutOfRangeException, ____actualValue) == 0x98, "Offset mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ArgumentOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentOutOfRangeException*, "System", "ArgumentOutOfRangeException");
