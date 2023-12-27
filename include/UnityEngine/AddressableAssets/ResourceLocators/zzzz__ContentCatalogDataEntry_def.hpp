#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContentCatalogDataEntry)
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogDataEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry);
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogDataEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14108))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogDataEntry*
class CORDL_TYPE ContentCatalogDataEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field <InternalId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__InternalId_k__BackingField, put = __set__InternalId_k__BackingField))::StringW _InternalId_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Provider_k__BackingField, put = __set__Provider_k__BackingField))::StringW _Provider_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Keys_k__BackingField, put = __set__Keys_k__BackingField))::System::Collections::Generic::List_1<::System::Object*>* _Keys_k__BackingField;

  /// @brief Field <Dependencies>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Dependencies_k__BackingField, put = __set__Dependencies_k__BackingField))::System::Collections::Generic::List_1<::System::Object*>* _Dependencies_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__Data_k__BackingField, put = __set__Data_k__BackingField))::System::Object* _Data_k__BackingField;

  /// @brief Field <ResourceType>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__ResourceType_k__BackingField, put = __set__ResourceType_k__BackingField))::System::Type* _ResourceType_k__BackingField;

  __declspec(property(get = get_InternalId, put = set_InternalId))::StringW InternalId;

  __declspec(property(get = get_Provider, put = set_Provider))::StringW Provider;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::List_1<::System::Object*>* Keys;

  __declspec(property(get = get_Dependencies, put = set_Dependencies))::System::Collections::Generic::List_1<::System::Object*>* Dependencies;

  __declspec(property(get = get_Data, put = set_Data))::System::Object* Data;

  __declspec(property(get = get_ResourceType, put = set_ResourceType))::System::Type* ResourceType;

  constexpr ::StringW& __get__InternalId_k__BackingField();

  constexpr ::StringW const& __get__InternalId_k__BackingField() const;

  constexpr void __set__InternalId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Provider_k__BackingField();

  constexpr ::StringW const& __get__Provider_k__BackingField() const;

  constexpr void __set__Provider_k__BackingField(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get__Keys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get__Keys_k__BackingField() const;

  constexpr void __set__Keys_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get__Dependencies_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get__Dependencies_k__BackingField() const;

  constexpr void __set__Dependencies_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr ::System::Object*& __get__Data_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Data_k__BackingField() const;

  constexpr void __set__Data_k__BackingField(::System::Object* value);

  constexpr ::System::Type*& __get__ResourceType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ResourceType_k__BackingField() const;

  constexpr void __set__ResourceType_k__BackingField(::System::Type* value);

  /// @brief Method get_InternalId addr 0x2a2cfe0 size 0x8 virtual false final false
  inline ::StringW get_InternalId();

  /// @brief Method set_InternalId addr 0x2a2cfe8 size 0x8 virtual false final false
  inline void set_InternalId(::StringW value);

  /// @brief Method get_Provider addr 0x2a2cff0 size 0x8 virtual false final false
  inline ::StringW get_Provider();

  /// @brief Method set_Provider addr 0x2a2cff8 size 0x8 virtual false final false
  inline void set_Provider(::StringW value);

  /// @brief Method get_Keys addr 0x2a2d000 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Keys();

  /// @brief Method set_Keys addr 0x2a2d008 size 0x8 virtual false final false
  inline void set_Keys(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method get_Dependencies addr 0x2a2d010 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Dependencies();

  /// @brief Method set_Dependencies addr 0x2a2d018 size 0x8 virtual false final false
  inline void set_Dependencies(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method get_Data addr 0x2a2d020 size 0x8 virtual false final false
  inline ::System::Object* get_Data();

  /// @brief Method set_Data addr 0x2a2d028 size 0x8 virtual false final false
  inline void set_Data(::System::Object* value);

  /// @brief Method get_ResourceType addr 0x2a2d030 size 0x8 virtual false final false
  inline ::System::Type* get_ResourceType();

  /// @brief Method set_ResourceType addr 0x2a2d038 size 0x8 virtual false final false
  inline void set_ResourceType(::System::Type* value);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry* New_ctor(::System::Type* type, ::StringW internalId, ::StringW provider,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* keys,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* dependencies,
                                                                                                      ::System::Object* extraData);

  /// @brief Method .ctor addr 0x2a2d040 size 0x108 virtual false final false
  inline void _ctor(::System::Type* type, ::StringW internalId, ::StringW provider, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* keys,
                    ::System::Collections::Generic::IEnumerable_1<::System::Object*>* dependencies, ::System::Object* extraData);

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogDataEntry(ContentCatalogDataEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogDataEntry(ContentCatalogDataEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogDataEntry();

public:
  /// @brief Field <InternalId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____InternalId_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Provider_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____Keys_k__BackingField;

  /// @brief Field <Dependencies>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____Dependencies_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____Data_k__BackingField;

  /// @brief Field <ResourceType>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____ResourceType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, 0x40>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogDataEntry");
