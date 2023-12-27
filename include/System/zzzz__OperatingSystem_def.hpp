#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperatingSystem)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System {
class Version;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
namespace System {
struct PlatformID;
}
// Forward declare root types
namespace System {
class OperatingSystem;
}
// Write type traits
MARK_REF_PTR_T(::System::OperatingSystem);
// Type: System::OperatingSystem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2526))
// CS Name: ::System::OperatingSystem*
class CORDL_TYPE OperatingSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::System::Version* _version;

  /// @brief Field _platform, offset 0x18, size 0x4
  __declspec(property(get = __get__platform, put = __set__platform))::System::PlatformID _platform;

  /// @brief Field _servicePack, offset 0x20, size 0x8
  __declspec(property(get = __get__servicePack, put = __set__servicePack))::StringW _servicePack;

  /// @brief Field _versionString, offset 0x28, size 0x8
  __declspec(property(get = __get__versionString, put = __set__versionString))::StringW _versionString;

  __declspec(property(get = get_Platform))::System::PlatformID Platform;

  __declspec(property(get = get_VersionString))::StringW VersionString;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Version*& __get__version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get__version() const;

  constexpr void __set__version(::System::Version* value);

  constexpr ::System::PlatformID& __get__platform();

  constexpr ::System::PlatformID const& __get__platform() const;

  constexpr void __set__platform(::System::PlatformID value);

  constexpr ::StringW& __get__servicePack();

  constexpr ::StringW const& __get__servicePack() const;

  constexpr void __set__servicePack(::StringW value);

  constexpr ::StringW& __get__versionString();

  constexpr ::StringW const& __get__versionString() const;

  constexpr void __set__versionString(::StringW value);

  static inline ::System::OperatingSystem* New_ctor(::System::PlatformID platform, ::System::Version* version);

  /// @brief Method .ctor addr 0x25d1374 size 0x8 virtual false final false
  inline void _ctor(::System::PlatformID platform, ::System::Version* version);

  static inline ::System::OperatingSystem* New_ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack);

  /// @brief Method .ctor addr 0x25d137c size 0x140 virtual false final false
  inline void _ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack);

  /// @brief Method GetObjectData addr 0x25d14bc size 0x3c virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Platform addr 0x25d14f8 size 0x8 virtual false final false
  inline ::System::PlatformID get_Platform();

  /// @brief Method Clone addr 0x25d1500 size 0x7c virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method ToString addr 0x25d157c size 0x4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_VersionString addr 0x25d1580 size 0x1cc virtual false final false
  inline ::StringW get_VersionString();

  // Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperatingSystem(OperatingSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperatingSystem(OperatingSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperatingSystem();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::System::Version* ____version;

  /// @brief Field _platform, offset: 0x18, size: 0x4, def value: None
  ::System::PlatformID ____platform;

  /// @brief Field _servicePack, offset: 0x20, size: 0x8, def value: None
  ::StringW ____servicePack;

  /// @brief Field _versionString, offset: 0x28, size: 0x8, def value: None
  ::StringW ____versionString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OperatingSystem, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OperatingSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::OperatingSystem*, "System", "OperatingSystem");
