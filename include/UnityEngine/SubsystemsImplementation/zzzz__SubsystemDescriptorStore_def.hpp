#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsystemDescriptorStore)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorWithProvider;
}
namespace UnityEngine {
class SubsystemDescriptor;
}
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorStore;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore);
// Type: UnityEngine.SubsystemsImplementation::SubsystemDescriptorStore
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15971))
// CS Name: ::UnityEngine.SubsystemsImplementation::SubsystemDescriptorStore*
class CORDL_TYPE SubsystemDescriptorStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_IntegratedDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_IntegratedDescriptors,
                             put = setStaticF_s_IntegratedDescriptors))::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* s_IntegratedDescriptors;

  /// @brief Field s_StandaloneDescriptors, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_StandaloneDescriptors,
               put = setStaticF_s_StandaloneDescriptors))::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>* s_StandaloneDescriptors;

  /// @brief Field s_DeprecatedDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DeprecatedDescriptors,
                             put = setStaticF_s_DeprecatedDescriptors))::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* s_DeprecatedDescriptors;

  static inline void setStaticF_s_IntegratedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* getStaticF_s_IntegratedDescriptors();

  static inline void setStaticF_s_StandaloneDescriptors(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>* getStaticF_s_StandaloneDescriptors();

  static inline void setStaticF_s_DeprecatedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* getStaticF_s_DeprecatedDescriptors();

  /// @brief Method RegisterDeprecatedDescriptor addr 0x2d1a244 size 0x78 virtual false final false
  static inline void RegisterDeprecatedDescriptor(::UnityEngine::SubsystemDescriptor* descriptor);

  /// @brief Method InitializeManagedDescriptor addr 0x2d1b078 size 0xdc virtual false final false
  static inline void InitializeManagedDescriptor(void* ptr, ::UnityEngine::IntegratedSubsystemDescriptor* desc);

  /// @brief Method ClearManagedDescriptors addr 0x2d1b154 size 0x1e4 virtual false final false
  static inline void ClearManagedDescriptors();

  /// @brief Method ReportSingleSubsystemAnalytics addr 0x2d1b338 size 0x3c virtual false final false
  static inline void ReportSingleSubsystemAnalytics(::StringW id);

  /// @brief Method GetSubsystemDescriptors addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors);

  /// @brief Method AddDescriptorSubset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TBaseTypeInList, typename TQueryType>
  static inline void AddDescriptorSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, ::System::Collections::Generic::List_1<TQueryType>* copyTo);

  /// @brief Method RegisterDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TDescriptor, typename TBaseTypeInList> static inline void RegisterDescriptor(TDescriptor descriptor, ::System::Collections::Generic::List_1<TBaseTypeInList>* storeInList);

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemDescriptorStore(SubsystemDescriptorStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemDescriptorStore(SubsystemDescriptorStore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemDescriptorStore();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorStore");
