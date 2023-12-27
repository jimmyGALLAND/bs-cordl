#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializationSurrogate)
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializationSurrogate);
// Type: System.Runtime.Serialization::ISerializationSurrogate
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3203))
// CS Name: ::System.Runtime.Serialization::ISerializationSurrogate*
class CORDL_TYPE ISerializationSurrogate {
public:
  // Declarations
  /// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializationSurrogate(ISerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationSurrogate(ISerializationSurrogate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializationSurrogate*, "System.Runtime.Serialization", "ISerializationSurrogate");
