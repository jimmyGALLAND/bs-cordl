#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceProvider)
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class ResourceProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ResourceProvider);
// Type: Zenject::ResourceProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11236))
// CS Name: ::Zenject::ResourceProvider*
class CORDL_TYPE ResourceProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _resourceType, offset 0x10, size 0x8
  __declspec(property(get = __get__resourceType, put = __set__resourceType))::System::Type* _resourceType;

  /// @brief Field _resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __get__resourcePath, put = __set__resourcePath))::StringW _resourcePath;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __get__matchSingle, put = __set__matchSingle)) bool _matchSingle;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::System::Type*& __get__resourceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__resourceType() const;

  constexpr void __set__resourceType(::System::Type* value);

  constexpr ::StringW& __get__resourcePath();

  constexpr ::StringW const& __get__resourcePath() const;

  constexpr void __set__resourcePath(::StringW value);

  constexpr bool& __get__matchSingle();

  constexpr bool const& __get__matchSingle() const;

  constexpr void __set__matchSingle(bool value);

  static inline ::Zenject::ResourceProvider* New_ctor(::StringW resourcePath, ::System::Type* resourceType, bool matchSingle);

  /// @brief Method .ctor addr 0x2f0a04c size 0x3c virtual false final false
  inline void _ctor(::StringW resourcePath, ::System::Type* resourceType, bool matchSingle);

  /// @brief Method get_IsCached addr 0x2f0a088 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f0a090 size 0x8 virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x2f0a098 size 0x8 virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f0a0a0 size 0x1d8 virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceProvider(ResourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceProvider(ResourceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceProvider();

public:
  /// @brief Field _resourceType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____resourceType;

  /// @brief Field _resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____resourcePath;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ResourceProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ResourceProvider*, "Zenject", "ResourceProvider");
