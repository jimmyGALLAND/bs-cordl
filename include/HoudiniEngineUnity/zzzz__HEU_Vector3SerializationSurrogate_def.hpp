#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_Vector3SerializationSurrogate)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Vector3SerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate);
// Type: HoudiniEngineUnity::HEU_Vector3SerializationSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9615))
// CS Name: ::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate*
class CORDL_TYPE HEU_Vector3SerializationSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method System.Runtime.Serialization.ISerializationSurrogate.GetObjectData addr 0x21503c8 size 0xf4 virtual true final true
  inline void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                 ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializationSurrogate.SetObjectData addr 0x21504bc size 0x1fc virtual true final true
  inline ::System::Object* System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                              ::System::Runtime::Serialization::StreamingContext context,
                                                                                              ::System::Runtime::Serialization::ISurrogateSelector* selector);

  static inline ::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate* New_ctor();

  /// @brief Method .ctor addr 0x214f7c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Vector3SerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Vector3SerializationSurrogate(HEU_Vector3SerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Vector3SerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Vector3SerializationSurrogate(HEU_Vector3SerializationSurrogate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Vector3SerializationSurrogate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate*, "HoudiniEngineUnity", "HEU_Vector3SerializationSurrogate");
